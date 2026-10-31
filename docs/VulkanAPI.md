# The generated Vulkan API

This document describes the `lumina::runtime::vulkan::native` layer — the hand-generated replacement for `vulkan/vulkan_core.h`.

Everything here is produced from `vk.xml` by the tools in `tools/vkgen/`. No Vulkan header is ever included and no Vulkan SDK is required to build.

---

## Why it exists

| Reason                | Detail                                                                                                                                                |
|-----------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------|
| Build without the SDK | No headers, no `vulkan-1.lib`. `LoadLibraryA("vulkan-1.dll")` plus `vkGetInstanceProcAddr` resolve everything at runtime                              |
| Driver independence   | Swapping drivers or loader versions never touches the build; a new extension is just another string to look up                                        |
| Control over the ABI  | Every structure layout is written out explicitly and pinned with `static_assert`, so an offset mistake is a compile error instead of a corrupted heap |

The cost is that `reinterpret_cast` types are unchecked: a wrong field order or a swapped argument compiles cleanly. The whole design below exists to make that as hard as possible.

---

## Files

All of them live in `include/Lumina/Runtime/Vulkan/Native/`.

| File              | ~Lines | Contents                                                                        |
|-------------------|--------|---------------------------------------------------------------------------------|
| `Enumeration.hpp` | 5 100  | `Result`, `StructureType`, `Function`, `Object`, and every `*FlagBits` enum     |
| `Structure.hpp`   | 88 000 | 1 275 structure classes, 15 union classes                                       |
| `Reference.hpp`   | 80     | 63 handle aliases                                                               |
| `Functional.hpp`  | 7 500  | `FunctionTraits` for 690 commands, the `Functional<>` template, and 690 aliases |
| `Names.hpp`       | 490    | instance extensions, device extensions, layer names                             |
| `Runtime.hpp`     | 200    | `LoadLibrary` / `GetProcAddress` wrapper                                        |
| `Utils.hpp`       | 60     | `EncodeVersion` / `DecodeVersion` / `StringVersion`                             |
| `Interface.hpp`   | 650    | the function table an `Instance` owns                                           |

Namespace: `lumina::runtime::vulkan::native`, usually aliased as `vkapi`.

---

## Naming

Only the `Vk` prefix is dropped. Everything else — including `FlagBits`, `Flags`, `KHR`, `EXT`, vendor suffixes and the trailing `2` — is preserved verbatim.

| Vulkan                                   | Here                                   |
|------------------------------------------|----------------------------------------|
| `VkResult`                               | `Result`                               |
| `VkStructureType`                        | `StructureType`                        |
| `VkObjectType`                           | `Object`                               |
| `VkImageUsageFlags`                      | `ImageUsageFlags`                      |
| `VkQueueFlagBits`                        | `QueueFlagBits`                        |
| `VkAccessFlagBits2`                      | `AccessFlagBits2`                      |
| `VkDebugUtilsMessageSeverityFlagBitsEXT` | `DebugUtilsMessageSeverityFlagBitsEXT` |
| `VkInstance`                             | `Instance`                             |
| `vkCreateInstance`                       | `Function::CreateInstance`             |

### Enum members

Members are named by stripping the enum's own prefix and converting what is left:

```cpp
enum class Result : std::int32_t
{
    Success      = 0,
    NotReady     = 1,
    Timeout      = 2,
};

enum class AccelerationStructureSerializedBlockTypeKHR : std::uint32_t
{
    OpacityMicromapKHR = 0,
};
```

The prefix is derived in three steps, taking the longest candidate that every enumerate actually starts with:

1. the common prefix of the enumerate names (when there is more than one),
2. `VK_` + the enum type name in screaming snake case,
3. the same with `FlagBits` / `Bits` removed.

Step 3 is what turns `VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR` into `DeviceAddressCaptureReplayKHR`.

### File-wide alignment

Two columns are aligned **across the whole file**, not per block:

- every enum member's `=` sits in the same column,
- every `FunctionTraits` parameter name sits in the same column.

`tools/vkgen/align_columns.py` is the post-processing step that enforces this.

---

## Structures

Every Vulkan structure becomes a class with private members and typed accessors. The layout is never abstracted — the class *is* the Vulkan struct.

```cpp
class ImageCreateInfo
{
public:
    ImageCreateInfo& SetNext( const void* next ) noexcept
    {
        CoreNext = next;
        return *this;
    }

    ImageCreateInfo& SetFlag( const std::initializer_list<ImageCreateFlagBits> values ) noexcept
    {
        CoreFlag = 0;
        for ( const auto value : values )
        {
            CoreFlag |= static_cast< std::uint32_t >( value );
        }
        return *this;
    }

    ImageCreateInfo& SetFlag( const std::span<const ImageCreateFlagBits> values ) noexcept
    { ... }

    [[nodiscard]] std::uint32_t GetFlag( ) const noexcept
    {
        return CoreFlag;
    }

    ImageCreateInfo& SetImageType( const ImageType value ) noexcept { ... }
    [[nodiscard]] ImageType GetImageType( ) const noexcept { ... }

    ImageCreateInfo& SetExtent( const Extent3D& value ) noexcept
    {
        CoreExtent = value;
        return *this;
    }

    [[nodiscard]] Extent3D GetExtent( ) const noexcept
    {
        return CoreExtent;
    }

private:
    static void VerifyLayout( ) noexcept
    {
        static_assert( std::is_standard_layout_v< ImageCreateInfo > );
        static_assert( sizeof  ( ImageCreateInfo )  == 0x0070 );
        static_assert( alignof ( ImageCreateInfo )  == 0x0008 );
        static_assert( offsetof( ImageCreateInfo, CoreType )   == 0x0000 );
        static_assert( offsetof( ImageCreateInfo, CoreNext )   == 0x0008 );
        ...
    }

    StructureType     CoreType   { StructureType::ImageCreateInfo };
    const void*       CoreNext   { nullptr };
    std::uint32_t     CoreFlag   { };
    ImageType         CoreImageType { };
    Extent3D          CoreExtent { };
};
```

### Rules the generator follows

| Input in `vk.xml`                   | Generated shape                                                                            |
|-------------------------------------|--------------------------------------------------------------------------------------------|
| `sType`                             | `StructureType CoreType{ StructureType::<Class> };` — initialised in the class             |
| `pNext`                             | `SetNext( const void* )`                                                                   |
| `VkFlags` / `Vk*Flags`              | `std::uint32_t` storage, two `SetX` overloads (`initializer_list`, `span`), integer getter |
| `Vk*Flags2` (64-bit)                | `std::uint64_t` storage, same overloads                                                    |
| `const T*` where `T` is a structure | `SetX( const T& )`, stored with `std::addressof`                                           |
| `T*` where `T` is a structure       | `SetX( T& )` (non-const, because it is an output)                                          |
| `const char*`                       | `SetX( std::string_view )`, getter returns a null-safe `std::string_view`                  |
| `const wchar_t*`                    | `SetX( std::wstring_view )`, getter returns `std::wstring_view`                            |
| `char[N]`                           | `std::string_view` in and out                                                              |
| `wchar_t[N]`                        | `std::wstring_view` in and out                                                             |
| `T*` plus a count member            | one `SetX( std::span<...> )` that writes both; the count is never exposed separately       |
| `T[N]`                              | `std::array<T, N>`, setter takes a `span`, getter returns the array                        |
| `T[3][4]`                           | nested `std::array`, setter takes the whole array                                          |
| bitfields (`:24`, `:8`)             | packed into `std::uint32_t CoreBits<N>` words with mask/shift accessors                    |

### Unions

A Vulkan union becomes a class with private byte storage and typed accessors, so no uninitialised member is ever visible:

```cpp
class ClearValue
{
public:
    ClearValue& SetColor( const ClearColorValue& value ) noexcept;
    [[nodiscard]] ClearColorValue GetColor( ) const noexcept;
    ClearValue& SetDepthStencil( const ClearDepthStencilValue& value ) noexcept;
    [[nodiscard]] ClearDepthStencilValue GetDepthStencil( ) const noexcept;
private:
    static void VerifyLayout( ) noexcept
    {
        static_assert( sizeof( ClearValue ) == 0x0010 );
        static_assert( alignof( ClearValue ) == 0x0004 );
    }
    alignas( 0x0004 ) std::array<std::byte, 0x0010> CoreStorage{ };
};
```

### Handles

Every handle is an opaque pointer to a tagged `Reference<>`:

```cpp
template <Object>
struct Reference
{
    void* Placeholder{ nullptr };
};

using Instance      = Reference<Object::Instance>*;
using Device        = Reference<Object::Device>*;
using SwapchainKHR  = Reference<Object::SwapchainKHR>*;
```

The tag exists only to make the types distinct at compile time; the ABI is a plain pointer, exactly like `VkInstance`.

---

## Functions

### `Function` — the command tag

```cpp
enum class Function : std::uint32_t
{
    AcquireNextImageKHR = ...,
    CreateInstance      = ...,
    CmdDraw             = ...,
    ...
};
```

### `FunctionTraits` — name + signature

```cpp
template <>
struct FunctionTraits <Function::CreateDevice>
{
    constexpr static auto Name = "vkCreateDevice";
    using Type = Result (*) (
        Reference<Object::PhysicalDevice>*  physicalDevice,
        const DeviceCreateInfo*             pCreateInfo,
        const void*                         pAllocator,
        Reference<Object::Device>**         pDevice );
};
```

`Name` keeps the `vk` prefix verbatim — it is the string passed to `vkGetInstanceProcAddr`, so it must never be renamed.

### `Functional` — the callable wrapper

```cpp
template <Function Fu>
class Functional
{
public:
    using Traits = FunctionTraits<Fu>;
    using Type   = typename Traits::Type;

    bool Load( Type function ) noexcept;
    bool Free( ) noexcept;
    [[nodiscard]] bool IsAvailable( ) const noexcept;
    void Clear( ) noexcept;

    template <typename... Args>
    [[nodiscard]] decltype(auto) Call( Args&&... args ) const;      // checks availability

    template <typename... Args>
    [[nodiscard]] decltype(auto) UnSafeCall( Args&&... args );      // skips the check

    template <typename... Args>
    [[nodiscard]] decltype(auto) operator()( Args&&... args ) const;
};
```

`Call` invokes `std::terminate()` when the pointer is null, so a missing `Load` fails loudly instead of jumping into address zero.

### Aliases

One alias per command keeps call sites short:

```cpp
using CreateInstance  = Functional<Function::CreateInstance>;
using CreateDevice    = Functional<Function::CreateDevice>;
using CmdDraw         = Functional<Function::CmdDraw>;
```

Usage:

```cpp
namespace vkapi = lumina::runtime::vulkan::native;

vkapi::CreateInstance vkCreateInstance{};
vkCreateInstance.Load( getInstanceProcAddr( nullptr, "vkCreateInstance" ) );

vkapi::InstanceCreateInfo info{};
info.SetApplicationInfo( app )
    .SetLayerNames( layers )
    .SetExtensionNames( extensions );

vkapi::Instance instance{};
const vkapi::Result result = vkCreateInstance( &info, nullptr, &instance );
```

---

## Extension and layer names

`Names.hpp` holds 485 string constants, grouped:

```cpp
// ---- instance extensions (35) ----
inline constexpr auto VK_KHR_surface      = "VK_KHR_surface";
inline constexpr auto VK_KHR_win32_surface = "VK_KHR_win32_surface";

// ---- device extensions (429) ----
inline constexpr auto VK_KHR_swapchain    = "VK_KHR_swapchain";

// ---- layers (21) ----
inline constexpr auto VK_LAYER_KHRONOS_validation = "VK_LAYER_KHRONOS_validation";
```

Extensions come from `vk.xml`, filtered to Win32 / Wayland / Apple. Layers are hand-maintained in `rules.json` (`layers`), because `vk.xml` contains no layer list.

These strings are also kept verbatim — renaming them would break the loader lookup.

---

## ABI verification

Two mechanisms, one generated and one external:

### `VerifyLayout()`

Every structure pins its own layout at compile time:

```cpp
static_assert( sizeof  ( SwapchainCreateInfoKHR )  == 0x00A8 );
static_assert( alignof ( SwapchainCreateInfoKHR )  == 0x0008 );
static_assert( offsetof( SwapchainCreateInfoKHR, CoreImageExtent ) == 0x0050 );
```

A wrong model is caught immediately. What it cannot catch is a wrong *registry*: if the generator skipped a field, both the class and the expected offsets are wrong in the same way and the assertion still passes.

### `diag_layout.py`

The second mechanism closes that gap. It

1. strips every `static_assert` from `Structure.hpp`,
2. compiles a probe that prints the compiler's real `sizeof` / `alignof` / `offsetof`,
3. compares the two tables field by field.

This is what found the 64-bit flag-width bug: 47 offsets disagreed, all of them fields typed with a `*Flags2` enum that had been declared 32-bit.

---

## Coverage

| Category   | Generated | Target | Coverage   |
|------------|-----------|--------|------------|
| Handles    | 63        | 63     | **100 %**  |
| Unions     | 15        | 15     | **100 %**  |
| Structures | 1 275     | 1 282  | **99.5 %** |
| Commands   | 690       | 744    | **92.7 %** |
| Enums      | 286       | 321    | **89.1 %** |

What is deliberately excluded:

| Excluded                 | Count                       | Why                                        |
|--------------------------|-----------------------------|--------------------------------------------|
| `VkVideo*`               | 110 structures, 16 commands | video codecs are out of scope              |
| Non-target platforms     | 92 structures               | only Win32 / Wayland / Apple are supported |
| Metal-only structures    | 8                           | need Objective-C `id<MTLDevice>`           |
| Type aliases             | 270                         | the canonical name is generated once       |
| Empty `*FlagBits` tables | 35                          | `vk.xml` defines them without any values   |

Fields typed with one of those 35 empty enums fall back to `std::uint32_t`, which matches the Vulkan ABI exactly (the C type is `VkFlags`, a 32-bit unsigned integer).

---

## Regenerating

```powershell
python tools/vkgen/build_enumeration.py --write   # 1. enums, Function, Object
python tools/vkgen/build_reference.py   --write   # 2. handles
python tools/vkgen/build_structure.py   --write   # 3. structures (needs 1)
python tools/vkgen/build_traits.py      --write   # 4. traits, merged into Functional.hpp
python tools/vkgen/build_names.py       --write   # 5. extensions and layers
python tools/vkgen/align_columns.py     --write   # 6. global alignment (must be last)
```

The order is not optional:

- `Structure.hpp` fills `sType` from the **actual** `StructureType` member names, so enums must be generated first.
- `build_traits.py` writes a temporary `FunctionalTraits.hpp` and merges it into `Functional.hpp`, so only one file survives.
- `align_columns.py` needs the final text to compute the global column widths.

### Configuration

`tools/vkgen/rules.json`:

| Key               | Meaning                                                                   |
|-------------------|---------------------------------------------------------------------------|
| `platforms`       | platform tag → macro name                                                 |
| `keepPlatforms`   | which platforms to generate (`win32`, `wayland`, `macos`, `metal`, `ios`) |
| `typeOverrides`   | rename a generated class                                                  |
| `memberOverrides` | rename a generated member (used for `SurfaceCreateInfo::SetDisplay`)      |
| `nameRules`       | scoped regex renames (`scope: member / type / enum`)                      |
| `skip`            | types never to generate                                                   |
| `layers`          | the layer name list                                                       |

---

## Known limitations

1. **One platform per type.** `SurfaceCreateInfo` currently keeps only the Win32 variant, because the file is generated for one target at a time. Emitting all three would need `#ifdef` sections.
2. **Function pointers are `void*`.** `PFN_*` parameters and members are mapped to `void*` (ABI-identical, 8 bytes) rather than a typed function pointer, so callback signatures are not checked by the compiler.
3. **No `VkBaseInStructure` / `VkBaseOutStructure` structure type.** Vulkan does not define constants for them, so their `sType` stays zero — that is correct behavior, not a gap.
4. **Empty flag enums are numeric.** 35 `*FlagBits` tables have no members in `vk.xml`; the fields that use them are plain integers.
5. **`std::terminate` on a missing function.** `Functional::Call` aborts rather than returning an error; use `IsAvailable()` first when a command is optional.
