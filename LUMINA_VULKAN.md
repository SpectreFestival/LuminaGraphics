# Lumina Vulkan — generated Vulkan API

A self-contained, header-only C++20 Vulkan binding. It is generated from `vk.xml` upstream and shipped as plain headers: no generator, no build step, no Vulkan SDK, and no Vulkan header anywhere.

Namespace: **`vulkan`**

---

## What you get

Eight headers. Drop them into your include tree and include `Interface.hpp`.

| File              | ~Lines | What it holds                                                               |
|-------------------|--------|-----------------------------------------------------------------------------|
| `Enumeration.hpp` | 5 100  | `Result`, `StructureType`, `Function`, `Object`, and every `*FlagBits` enum |
| `Reference.hpp`   | 80     | 63 handle aliases                                                           |
| `Structure.hpp`   | 88 000 | 1 275 structure classes, 15 union classes                                   |
| `Functional.hpp`  | 7 500  | `FunctionTraits` for 690 commands, the `Functional<>` template, 690 aliases |
| `Names.hpp`       | 490    | instance extensions, device extensions, layer names                         |
| `Runtime.hpp`     | 200    | dynamic library loading                                                     |
| `Utils.hpp`       | 60     | `EncodeVersion` / `DecodeVersion` / `StringVersion`                         |
| `Interface.hpp`   | 650    | umbrella header plus the function table an instance owns                    |

Internal include order:

```text
Enumeration.hpp  →  Reference.hpp  →  Structure.hpp  →  Runtime.hpp  →  Functional.hpp
```

`Interface.hpp` pulls in everything; in application code include only `Interface.hpp` (and `Names.hpp` when you need extension strings).

### Requirements

| Requirement       | Value                                                                                          |
|-------------------|------------------------------------------------------------------------------------------------|
| Language          | C++20 (`std::span`, `std::string_view`, `std::wstring_view`, designated initialisers not used) |
| Platform macro    | `LUMINA_MACRO_PLATFORM_USE_WIN64` / `_USE_LINUX` / `_USE_MACOS`                                |
| Link libraries    | none                                                                                           |
| Loaded at runtime | `vulkan-1.dll` (Win32), `libvulkan.so.1` (Linux), `libvulkan.dylib` (Apple)                    |

---

## Quick start

```cpp
#include <vulkan/Interface.hpp>
#include <vulkan/Names.hpp>

using namespace vulkan;

Runtime runtime{};
if ( not runtime.Load( "vulkan-1.dll" ) )
{
    return 1;
}

GetInstanceProcAddr vkGetInstanceProcAddr{};
vkGetInstanceProcAddr.Load( runtime.GetProcAddress( "vkGetInstanceProcAddr" ) );

CreateInstance vkCreateInstance{};
vkCreateInstance.Load( vkGetInstanceProcAddr.Call( nullptr, "vkCreateInstance" ) );

ApplicationInfo application{};
application.SetApplicationName( "MyApp" )
           .SetEngineName( "MyEngine" )
           .SetApiVersion( EncodeVersion( 1u, 3u, 0u ) );

InstanceCreateInfo createInfo{};
createInfo.SetApplicationInfo( application );

Instance instance{};
if ( vkCreateInstance( &createInfo, nullptr, &instance ) != Result::Success )
{
    return 1;
}
```

---

## Naming

Only the `Vk` / `vk` prefix is removed. Everything else — `FlagBits`, `Flags`, `KHR`, `EXT`, vendor suffixes, and the trailing `2` — is preserved exactly.

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

Two things are never renamed, because a lookup depends on the exact bytes:

- `FunctionTraits<...>::Name` — always `"vkCreateInstance"`, `"vkCreateDevice"`, …
- the string constants — `VK_LAYER_KHRONOS_validation`, `VK_KHR_swapchain`, …

### Enum members

The enum's own prefix is stripped and the remainder is converted to PascalCase:

```cpp
enum class Result : std::int32_t
{
    Success      = 0,
    NotReady     = 1,
    Timeout      = 2,
};

enum class StructureType : std::int32_t
{
    ApplicationInfo        = 0,
    ImageCreateInfo        = 14,
    ...
};

enum class AccelerationStructureSerializedBlockTypeKHR : std::uint32_t
{
    OpacityMicromapKHR = 0,
};
```

Underlying types:

| Value range                          | Underlying type |
|--------------------------------------|-----------------|
| any negative value (e.g. `VkResult`) | `std::int32_t`  |
| ordinary enums and 32-bit flags      | `std::uint32_t` |
| 64-bit flags (`*FlagBits2`)          | `std::uint64_t` |

Two columns are aligned **across the whole file**: every enum member's `=`, and every `FunctionTraits` parameter name.

---

## Structures

Every Vulkan structure is a class with private members and typed accessors. The class *is* the Vulkan structure — nothing is abstracted away, nothing is hidden behind `void*`.

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
    { /* same, over a span */ }

    [[nodiscard]] std::uint32_t GetFlag( ) const noexcept
    {
        return CoreFlag;
    }

    ImageCreateInfo& SetImageType( const ImageType value ) noexcept;
    [[nodiscard]] ImageType GetImageType( ) const noexcept;

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
        static_assert( offsetof( ImageCreateInfo, CoreType )      == 0x0000 );
        static_assert( offsetof( ImageCreateInfo, CoreNext )      == 0x0008 );
        static_assert( offsetof( ImageCreateInfo, CoreFlag )      == 0x0010 );
        static_assert( offsetof( ImageCreateInfo, CoreExtent )    == 0x0024 );
    }

    StructureType     CoreType      { StructureType::ImageCreateInfo };
    const void*       CoreNext      { nullptr };
    std::uint32_t     CoreFlag      { };
    ImageType         CoreImageType { };
    Extent3D          CoreExtent    { };
};
```

### Accessor shapes

| Member in Vulkan                       | Shape here                                                                           |
|----------------------------------------|--------------------------------------------------------------------------------------|
| `sType`                                | `StructureType CoreType{ StructureType::<Class> };` — initialised inside the class   |
| `pNext`                                | `SetNext( const void* )`                                                             |
| `VkFlags` / `Vk*Flags`                 | `std::uint32_t` storage; `SetX( initializer_list )`, `SetX( span )`, integer getter  |
| `Vk*Flags2` (64-bit)                   | `std::uint64_t` storage, same overloads                                              |
| `const T*` where `T` is a structure    | `SetX( const T& )`, stored with `std::addressof`                                     |
| `T*` where `T` is a structure (output) | `SetX( T& )`                                                                         |
| `const char*`                          | `SetX( std::string_view )`; getter returns a null-safe `std::string_view`            |
| `const wchar_t*`                       | `SetX( std::wstring_view )`; getter returns `std::wstring_view`                      |
| `char[N]`                              | `std::string_view` in and out                                                        |
| `wchar_t[N]`                           | `std::wstring_view` in and out                                                       |
| `T*` plus a count member               | one `SetX( std::span<...> )` that writes both; the count is never exposed separately |
| `T[N]`                                 | `std::array<T, N>`; setter takes a `span`, getter returns the array                  |
| `T[3][4]`                              | nested `std::array`                                                                  |
| bitfields (`:24`, `:8`)                | packed into `std::uint32_t CoreBits<N>` words with mask/shift accessors              |

Pointer-to-structure members always take a reference; the address is taken internally:

```cpp
ApplicationInfo application{};
createInfo.SetApplicationInfo( application );        // stores std::addressof( application )
```

The referenced object must outlive the call that consumes the structure — the same rule Vulkan itself has.

### Unions

A union becomes a class with private byte storage and typed accessors, so no uninitialised member is ever visible:

```cpp
class ClearValue
{
public:
    ClearValue& SetColor( const ClearColorValue& value ) noexcept;
    [[nodiscard]] ClearColorValue GetColor( ) const noexcept;

    ClearValue& SetDepthStencil( const ClearDepthStencilValue& value ) noexcept;
    [[nodiscard]] ClearDepthStencilValue GetDepthStencil( ) const noexcept;

private:
    alignas( 0x0004 ) std::array<std::byte, 0x0010> CoreStorage{ };
};
```

### Bitfields

A run of consecutive bitfields becomes packed words with explicit masks:

```cpp
AccelerationStructureInstanceKHR& SetInstanceCustomIndex( const std::uint32_t value ) noexcept
{
    CoreBits0 = ( CoreBits0 & ~0x00FFFFFFu ) | ( ( value << 0 ) & 0x00FFFFFFu );
    return *this;
}

[[nodiscard]] std::uint32_t GetInstanceCustomIndex( ) const noexcept
{
    return static_cast< std::uint32_t >( ( CoreBits0 & 0x00FFFFFFu ) >> 0 );
}
```

The run is split by *storage width*, not by declared type, so a `uint32_t` bitfield next to a `VkGeometryInstanceFlagsKHR` bitfield still packs into the same word — matching the C ABI.

---

## Handles

Handles are opaque pointers tagged by an `Object` enumerator:

```cpp
template <Object>
struct Reference
{
    void* Placeholder{ nullptr };
};

using Instance       = Reference<Object::Instance>*;
using PhysicalDevice = Reference<Object::PhysicalDevice>*;
using Device         = Reference<Object::Device>*;
using Queue          = Reference<Object::Queue>*;
using SwapchainKHR   = Reference<Object::SwapchainKHR>*;
using Buffer         = Reference<Object::Buffer>*;
using Image          = Reference<Object::Image>*;
```

The tag only makes the types distinct to the compiler; the ABI is a plain pointer, exactly like `VkInstance`.

---

## Functions

### `Function` — the command tag

```cpp
enum class Function : std::uint32_t
{
    AcquireNextImageKHR = 0,
    CreateInstance      = 1,
    CmdDraw             = 2,
    ...
};
```

### `FunctionTraits` — name plus signature

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
    void Clear( ) noexcept;
    [[nodiscard]] bool IsAvailable( ) const noexcept;

    template <typename... Args>
    [[nodiscard]] decltype(auto) Call( Args&&... args ) const;      // availability-checked

    template <typename... Args>
    [[nodiscard]] decltype(auto) UnSafeCall( Args&&... args );      // unchecked

    template <typename... Args>
    [[nodiscard]] decltype(auto) operator()( Args&&... args ) const;
};
```

`Call` invokes `std::terminate()` when the pointer is null, so a forgotten `Load` fails loudly instead of jumping to address zero.

### Aliases

One alias per command:

```cpp
using CreateInstance     = Functional<Function::CreateInstance>;
using CreateDevice       = Functional<Function::CreateDevice>;
using CreateSwapchainKHR = Functional<Function::CreateSwapchainKHR>;
using CmdDraw            = Functional<Function::CmdDraw>;
using QueueSubmit        = Functional<Function::QueueSubmit>;
```

### Loading pattern

```cpp
// global command: instance is nullptr
createInstance.Load( vkGetInstanceProcAddr.Call( nullptr, "vkCreateInstance" ) );

// instance command
destroyInstance.Load( vkGetInstanceProcAddr.Call( instance, "vkDestroyInstance" ) );

// device command
createBuffer.Load( vkGetDeviceProcAddr.Call( device, "vkCreateBuffer" ) );
```

Optional commands are simply checked afterward:

```cpp
if ( messenger.CreateDebugUtilsMessengerEXT.IsAvailable( ) )
{
    // extension present
}
```

---

## Extensions and layers

```cpp
// ---- instance extensions ----
inline constexpr auto VK_KHR_surface                  = "VK_KHR_surface";
inline constexpr auto VK_KHR_win32_surface            = "VK_KHR_win32_surface";
inline constexpr auto VK_KHR_get_surface_capabilities2 = "VK_KHR_get_surface_capabilities2";
inline constexpr auto VK_EXT_debug_utils              = "VK_EXT_debug_utils";

// ---- device extensions ----
inline constexpr auto VK_KHR_swapchain                = "VK_KHR_swapchain";

// ---- layers ----
inline constexpr auto VK_LAYER_KHRONOS_validation      = "VK_LAYER_KHRONOS_validation";
```

These strings are byte-identical to Vulkan's; they are what the loader compares against.

A typical support check:

```cpp
[[nodiscard]] bool IsExtensionSupported( std::string_view name,
                                         std::span<const ExtensionProperties> available ) noexcept
{
    return std::ranges::any_of( available, [ name ]( const auto& properties )
    {
        return properties.GetExtensionName( ) == name;
    } );
}
```

> Compare with `==`, not `find() == 0`. `find` returns `npos` when the name is absent, and `npos` converts to `true`, so a `find`-based predicate reports every extension as present.

---

## Runtime loader

```cpp
class Runtime
{
public:
    bool Load( std::string_view path ) noexcept;      // "vulkan-1.dll", "libvulkan.so.1"
    void* GetProcAddress( std::string_view name ) const noexcept;
    void Free( ) noexcept;
    [[nodiscard]] bool IsAvailable( ) const noexcept;
};
```

`Runtime.hpp` includes `<windows.h>` on Win32 and immediately undoes four macros that would otherwise rewrite generated identifiers:

```cpp
#undef MemoryBarrier      // winnt.h: expands to _mm_mfence()
#undef CreateEvent        // winbase.h: expands to CreateEventA/W
#undef CreateSemaphore    // winbase.h: expands to CreateSemaphoreA/W
#undef GetMessage         // winuser.h: expands to GetMessageA/W
```

`interface` is also a Windows macro (`#define interface struct`), which is why the namespace is `vulkan` rather than `vulkan::interface`. Keep these `#undef`s if you ever replace `Runtime.hpp`.

---

## Version helpers

```cpp
[[nodiscard]] constexpr std::uint32_t EncodeVersion( std::uint32_t major,
                                                    std::uint32_t minor,
                                                    std::uint32_t patch ) noexcept;

[[nodiscard]] constexpr std::tuple<std::uint32_t, std::uint32_t, std::uint32_t>
DecodeVersion( std::uint32_t version ) noexcept;

[[nodiscard]] std::string StringVersion( std::uint32_t version );
```

```cpp
application.SetApiVersion( EncodeVersion( 1u, 3u, 0u ) );   // 1.3.0
```

---

## ABI verification

Every structure pins its own layout at compile time, so a wrong offset is a compile error rather than a corrupted heap:

```cpp
static_assert( sizeof  ( SwapchainCreateInfoKHR )  == 0x00A8 );
static_assert( alignof ( SwapchainCreateInfoKHR )  == 0x0008 );
static_assert( offsetof( SwapchainCreateInfoKHR, CoreImageExtent ) == 0x0050 );
```

The numbers are the real Vulkan values for the Win64 / LP64 model (pointer 8, enum 4, `VkDeviceSize` 8), not `sizeof(mine) == sizeof(mine)` tautologies.

What this cannot catch is a wrong *generation*: if a field were skipped, the class and the expected offsets would be wrong in the same way and the assertion would still pass. That class of error is caught upstream, before the headers ship, by compiling a probe that prints the compiler's real `sizeof` / `alignof` / `offsetof` and diffing it against the generator's model field by field.

---

## Coverage

| Category   | Included | Target | Coverage   |
|------------|----------|--------|------------|
| Handles    | 63       | 63     | **100 %**  |
| Unions     | 15       | 15     | **100 %**  |
| Structures | 1 275    | 1 282  | **99.5 %** |
| Commands   | 690      | 744    | **92.7 %** |
| Enums      | 286      | 321    | **89.1 %** |

Included: core 1.0–1.4, the whole rasterization path, descriptor heaps, mesh shaders, ray tracing (acceleration structures, SBT, trace rays), Data Graph.

Excluded on purpose:

| Excluded                                                                | Count                       | Why                                        |
|-------------------------------------------------------------------------|-----------------------------|--------------------------------------------|
| `VkVideo*`                                                              | 110 structures, 16 commands | video codecs are out of scope              |
| Non-target platforms (Xlib, Xcb, Fuchsia, Sci, Android, Screen, GGP, …) | 92 structures               | only Win32 / Wayland / Apple are supported |
| Metal-only structures                                                   | 8                           | need Objective-C `id<MTLDevice>`           |
| Type aliases                                                            | 270                         | the canonical name is generated once       |
| Empty `*FlagBits` tables                                                | 35                          | `vk.xml` defines them without any values   |

Fields typed with one of those 35 empty enums fall back to `std::uint32_t`, which matches the ABI exactly (the C type is `VkFlags`).

---

## Updating the headers

The headers are produced upstream from `vk.xml` and replaced wholesale. To move to a newer Vulkan version, replace all eight files at once — they are generated together and their `Function`, `Object` and `StructureType` enumerators are cross-referenced.

Never hand-edit them: a local change survives until the next replacement and then silently disappears. If you need a different name or a different shape, change the generator's rules upstream and regenerate.

---

## Known limitations

1. **One platform per type.** `SurfaceCreateInfo` keeps a single platform variant at a time (Win32 by default). Supporting several platforms simultaneously needs `#ifdef` variants in the header.
2. **Function pointers are `void*`.** `PFN_*` parameters and members map to `void*` (ABI-identical, 8 bytes), so callback signatures are not checked by the compiler. Cast explicitly at the call site:

   ```cpp
   createInfo.SetUserCallback( reinterpret_cast< void* >( MyCallback ) );
   ```

3. **`VkBaseInStructure` / `VkBaseOutStructure` have no structure type.** Vulkan defines no constants for them, so their `sType` stays zero — correct behavior, not a gap.
4. **Empty flag enums are numeric.** 35 `*FlagBits` tables have no members; the fields that use them are plain integers.
5. **`std::terminate` on a missing function.** `Functional::Call` aborts rather than reporting an error; guard with `IsAvailable()` when a command is optional.
