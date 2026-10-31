# LuminaGraphics

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

A 3D graphics library in the making — a rendering runtime meant to fit a wide range of scenarios, with swappable graphics-API backends (Vulkan first, OpenGL and DirectX later at the same level).

**Zero Vulkan headers.** Every Vulkan type, structure layout and function signature in this repository is generated from `vk.xml` — the build never sees a Vulkan SDK.

📖 Deep dive into the generated layer: [docs/VulkanAPI.md](docs/VulkanAPI.md)

---

## What this is

LuminaGraphics is a personal C++ learning project. The point is not to get a triangle on screen as fast as possible — it is to stand up the skeleton of an engine first.

- The library is `LuminaGraphics`; its namespace is `lumina`.
- Inside `lumina` there are **two engines** — one multi-instance, one singleton — built on a shared `Core`.
- `Core` abstracts the `Runtime` backends behind one interface. Vulkan is the first backend, not the only one.
- The host (the sample `Application`) talks to the engines, never to `vulkan-1.dll` directly.

---

## Architecture

```text
main.cpp / host sample
        │
   ┌────┴─────┐
Lumina       Clover          engines: multi-instance / singleton
   └────┬─────┘
      Core                   engine core: one interface over every backend
        │
     Runtime                 graphics-API backends, peers of each other
   ┌────┼───────┐
Vulkan  OpenGL  DirectX      (only Vulkan exists today)
   │
 Native                      generated Vulkan ABI layer, no Vulkan headers
   │
vulkan-1.dll
```

| Layer                      | Contents                                                                                                             |
|----------------------------|----------------------------------------------------------------------------------------------------------------------|
| `main.cpp` / `Application` | Host and sample: window, main loop, wiring the calls together                                                        |
| `Lumina` / `Clover`        | The two engines, both built on `Core`                                                                                |
| `Core`                     | Engine core: turns the `Runtime` backends into a single interface                                                    |
| `Runtime`                  | One subdirectory per graphics API, all at the same level                                                             |
| `Native`                   | Generated Vulkan ABI layer: `Enumeration` / `Structure` / `Reference` / `Functional` / `Runtime` / `Names` / `Utils` |

The key property: **above the `Native` layer there is not a single `VkXxx` type in the code.**

One name is easy to trip over. `lumina` is the library root namespace, while the *class* `native::Runtime` is nothing but a dynamic-library loader (`LoadLibrary` / `GetProcAddress` / `FreeLibrary`). It is not the `Runtime` layer.

---

## The generated layer

`vk.xml` (the Vulkan registry, ~3.3 MB) is the single source of truth. Six headers are produced from it:

| File              | Lines   | Contents                                                                    |
|-------------------|---------|-----------------------------------------------------------------------------|
| `Enumeration.hpp` | ~5 100  | `Result`, `StructureType`, `Function`, `Object`, all `*FlagBits` enums      |
| `Structure.hpp`   | ~88 000 | 1 275 structure classes + 15 unions, each with `VerifyLayout()`             |
| `Reference.hpp`   | ~80     | 63 handles as `Reference<Object::X>*`                                       |
| `Functional.hpp`  | ~7 500  | `FunctionTraits<Function::X>` for 690 commands + `Functional<Fu>` + aliases |
| `Names.hpp`       | ~490    | instance/device extension names + 21 layer names                            |
| `Runtime.hpp`     | ~200    | `LoadLibrary` / `GetProcAddress` wrapper                                    |

### Coverage against `vk.xml`

| Category   | Generated | Target | Coverage   |
|------------|-----------|--------|------------|
| Handles    | 63        | 63     | **100 %**  |
| Unions     | 15        | 15     | **100 %**  |
| Structures | 1 275     | 1 282  | **99.5 %** |
| Commands   | 690       | 744    | **92.7 %** |
| Enums      | 286       | 321    | **89.1 %** |

"Target" already excludes what this project deliberately drops:

| Excluded                                                                | Count | Why                                        |
|-------------------------------------------------------------------------|-------|--------------------------------------------|
| `VkVideo*` structures                                                   | 110   | video codecs are out of scope              |
| Non-target platforms (Xlib, Xcb, Fuchsia, Sci, Android, Screen, GGP, …) | 92    | only Win32 / Wayland / Apple are supported |
| Metal-only structures                                                   | 8     | need Objective-C `id<MTLDevice>`           |
| Type aliases                                                            | 270   | the canonical name is generated once       |

The 35 missing enums are not failures — `vk.xml` defines those `*FlagBits` tables without any values (no bits exist yet), so the referring fields fall back to `std::uint32_t`, which is ABI-identical.

### Regenerating

Generation happens in a fixed order, because `Structure.hpp` reads the real `StructureType` member names out of `Enumeration.hpp`:

```powershell
python tools/vkgen/build_enumeration.py --write   # 1. enums
python tools/vkgen/build_reference.py   --write   # 2. handles
python tools/vkgen/build_structure.py   --write   # 3. structures (needs 1)
python tools/vkgen/build_traits.py      --write   # 4. traits, merged into Functional.hpp
python tools/vkgen/build_names.py       --write   # 5. extensions and layers
python tools/vkgen/align_columns.py     --write   # 6. global column alignment (last)
```

`tools/vkgen/rules.json` is the configuration: platforms to keep, per-member renames, naming rules, skip list, layer list. See [`tools/vkgen/README.md`](tools/vkgen/README.md).

> **Warning:** the generated headers are replaced wholesale. Hand edits inside them are lost on the next run. Put adjustments into `rules.json` instead — see [Naming rules](#naming-rules).

---

## Naming rules

The whole layer is lifted out of the `Vk` namespace, so call sites read like ordinary C++:

| Vulkan              | Here                                                                |
|---------------------|---------------------------------------------------------------------|
| `VkResult`          | `Result`                                                            |
| `VkStructureType`   | `StructureType`                                                     |
| `VkObjectType`      | `Object`                                                            |
| `VkImageUsageFlags` | `ImageUsageFlags` (kept as written, only `Vk` is dropped)           |
| `VkQueueFlagBits`   | `QueueFlagBits`                                                     |
| `VkAccessFlagBits2` | `AccessFlagBits2`                                                   |
| `VkInstance`        | `using Instance = Reference<Object::Instance>*`                     |
| `VkCreateInstance`  | `Functional<Function::CreateInstance>` / `CreateInstance`           |
| `pApplicationInfo`  | `CoreApplicationInfo` / `SetApplicationInfo` / `GetApplicationInfo` |
| `pfnUserCallback`   | `CoreUserCallback` (the `p`, `pp` and `pfn` prefixes are stripped)  |

Rules that are fixed deliberately:

| Rule                 | Detail                                                                                                  |
|----------------------|---------------------------------------------------------------------------------------------------------|
| Flags are integers   | every `Vk*Flags` field is `std::uint32_t` (`std::uint64_t` for the 64-bit variants)                     |
| Flag setters         | `SetX( std::initializer_list<XxxFlagBits> )` and `SetX( std::span<const XxxFlagBits> )`, OR-ed together |
| Flag getters         | return the integer                                                                                      |
| Structs by reference | `SetApplicationInfo( const ApplicationInfo& )`, stored via `std::addressof`                             |
| Arrays by span       | `SetLayerNames( std::span<const char* const> )`, getter returns the same span                           |
| Narrow strings       | `std::string_view` in and out                                                                           |
| Wide strings         | `std::wstring_view` in and out                                                                          |
| `{` on its own line  | classes and every member function (Allman)                                                              |
| Global alignment     | all enum `=` in one column, all trait parameters in one column                                          |
| Scoped renames       | `rules.json` → `nameRules` with `scope: member / type / enum`                                           |

---

## Design decision: ABI only, no Vulkan headers

### Why

| Reason               | Detail                                                                                                                                                             |
|----------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Simple builds        | The project compiles without the Vulkan SDK: no headers, no `vulkan-1.lib`. `LoadLibraryA("vulkan-1.dll")` + `vkGetInstanceProcAddr` resolve everything at runtime |
| Version independence | Swapping drivers or loader versions never touches the build; a new extension is just another name to look up                                                       |
| It is the challenge  | `VkStructureType` values, field order and alignment of every structure, and the exact signature of every `PFN_vkXxx` — generated on purpose                        |

### The cost

`reinterpret_cast` performs no type checking whatsoever. A misspelled function name, a swapped argument pair, or a structure missing one field will **compile cleanly** and only surface later as a validation error or an access violation.

### How the project copes

1. **Every structure has a private `VerifyLayout()`** pinning `sizeof`, `alignof` and every field offset with `static_assert`:

   ```cpp
   static_assert( sizeof  ( PhysicalDeviceLimits )  == 0x01F8 );
   static_assert( offsetof( PhysicalDeviceLimits, CoreNonCoherentAtomSize ) == 0x01F0 );
   ```

2. **`FunctionTraits<Function::X>`** keeps the loader name and the function-pointer type in one place:

   ```cpp
   template <>
   struct FunctionTraits <Function::CreateDevice> {
       constexpr static auto Name = "vkCreateDevice";
       using Type = Result (*) ( Reference<Object::PhysicalDevice>*, const DeviceCreateInfo*, const void*, Reference<Object::Device>** );
   };
   ```

3. **`Functional<Fu>`** wraps `Load` / `Free` / `IsAvailable` / `Call`; `Call` invokes `std::terminate()` on a null pointer instead of jumping into nowhere.

4. **`tools/vkgen/diag_layout.py`** compiles a probe against the generated headers and compares the compiler's `offsetof` values with the generator's model — thousands of fields cross-checked in one run.

> Caveat: `static_assert` proves that a structure agrees with *the offset table the generator produced*, not that it agrees with *Vulkan*. The probe above catches a wrong model; it cannot catch a wrong registry.

---

## Status

The data layer (structures, unions, enums, handles) is essentially complete; the command layer covers the whole rasterization path.

| Capability                                                   | State                |
|--------------------------------------------------------------|----------------------|
| Load `vulkan-1.dll`, resolve `vkGetInstanceProcAddr`         | ✅                   |
| Instance / layer / extension enumeration                     | ✅                   |
| `vkCreateInstance` / `vkCreateDevice`                        | ✅                   |
| Win32 surface creation                                       | ✅                   |
| Physical device properties, features, queue families, memory | ✅                   |
| Swapchain creation / image acquisition / present             | ✅ signatures        |
| Buffers, images, samplers, memory binding                    | ✅ signatures        |
| Command pools, command buffers, render pass, draw            | ✅ signatures        |
| Shader modules, pipeline layout, graphics pipelines          | ✅ signatures        |
| Descriptors: layouts, pools, sets, updates                   | ✅ signatures        |
| Ray tracing (acceleration structures, SBT, trace rays)       | ✅ data + signatures |
| Windowing                                                    | ⚠️ GLFW, temporary   |
| Video codecs                                                 | ❌ out of scope      |

---

## Project layout

```text
LuminaGraphics/
├── CMakeLists.txt          build script (C++20, single executable target)
├── vk.xml                  Vulkan registry — input for the generator
├── main.cpp                entry point: GLFW window, main loop, teardown
│
├── Application/            host sample: drives the calls in order
├── include/Lumina/
│   ├── Platform/           platform / compiler / macros
│   ├── Messenger.hpp       Messenger/*  logging, table formatting, console, threads, timing
│   └── Runtime/Vulkan/
│       ├── Vulkan.hpp      umbrella header
│       ├── Declaration.hpp
│       ├── Instance.hpp
│       └── Native/         generated Vulkan ABI layer (no Vulkan headers)
│           ├── Enumeration.hpp   enums, Function, Object
│           ├── Structure.hpp     1 275 structures + 15 unions
│           ├── Reference.hpp     handles as Reference<Object::X>*
│           ├── Functional.hpp    FunctionTraits + Functional<> + aliases
│           ├── Names.hpp         extension and layer names
│           ├── Runtime.hpp       dynamic library loading
│           ├── Utils.hpp         version encode/decode
│           └── Interface.hpp     the function table the instance owns
│
├── tools/vkgen/            the generator
│   ├── vkgen.py            registry parser, layout engine, emitters
│   ├── build_enumeration.py
│   ├── build_structure.py
│   ├── build_reference.py
│   ├── build_traits.py
│   ├── build_names.py
│   ├── align_columns.py    global column alignment
│   ├── merge_units.py      directory → single header
│   ├── diag_layout.py      offset cross-check against the compiler
│   ├── rules.json          platforms, renames, skip lists, naming rules, layers
│   └── README.md           generator documentation
│
├── sources/Lumina/         implementations for the hand-written headers
├── Test/                   self-tests (Messenger subsystems)
│
├── Todo/                   one empty directory per planned module
│   ├── Algorithm/  Camera/  Clover/  Core/  Lumina/  Math/
│   └── Mesh/  Model/  Neural/  Optimizer/  Parallel/  RenderGraph/
│
├── GLFW/                   GLFW headers (local copy, gitignored)
├── lib/                    glfw3.lib  (local copy, gitignored)
└── vulkan/                 Vulkan reference headers (compare only, gitignored)
```

---

## Planned modules

`Todo/` holds one empty directory per module that will be developed later. Each of
them will become a peer of `Runtime` inside the library.

| Module        | Purpose                                                                                           |
|---------------|---------------------------------------------------------------------------------------------------|
| `Algorithm`   | Large-scale algorithms — Gaussian splatting is the one I want to get to                           |
| `Camera`      | Graphics-API-agnostic camera: common camera algorithms and behaviour                              |
| `Clover`      | The singleton engine, built on `Core`                                                             |
| `Core`        | Engine core: abstracts the `Runtime` backends behind a single interface                           |
| `Lumina`      | The multi-instance engine, built on `Core`                                                        |
| `Math`        | Basic linear algebra                                                                              |
| `Mesh`        | Mesh storage                                                                                      |
| `Model`       | One model data structure shared by many file formats, for reading, creating, modifying and saving |
| `Neural`      | Interfaces to third-party neural network models                                                   |
| `Optimizer`   | Optimization algorithms                                                                           |
| `Parallel`    | A parallel-execution interface built on the graphics API                                          |
| `RenderGraph` | Render graph design                                                                               |

> Git does not track empty directories, so each placeholder carries a `.gitkeep`.
> Delete the file when the module gets real content.

---

## Building

Requirements:

- CMake ≥ 4.3
- C++20 (`set(CMAKE_CXX_STANDARD 20)`)
- MinGW-w64 GCC 15.2 (the toolchain bundled with CLion) + Ninja
- Windows x64 — only the Win32 backend exists so far, selected by `LUMINA_MACRO_PLATFORM_USE_WIN64`

```powershell
cmake -S . -B cmake-build-debug -G Ninja
cmake --build cmake-build-debug
```

Regenerating the native layer needs Python 3.8+ (standard library only, no third-party packages).

No network access and no Vulkan SDK required. Dependencies are local copies:

| Dependency     | Location         | Role                                           |
|----------------|------------------|------------------------------------------------|
| `glfw3.lib`    | `lib/`           | static library, linked in                      |
| GLFW headers   | `GLFW/`          | `GLFW/glfw3.h`, `GLFW/glfw3native.h`           |
| `vulkan-1.dll` | system directory | installed by the GPU driver, loaded at runtime |

> All three directories are listed in `.gitignore`, so a fresh clone needs GLFW and `glfw3.lib` supplied manually. `vulkan-1.dll` comes with the driver and normally needs no attention.

---

## About GLFW

GLFW is used for the window today purely to **see something early**: it hands over an `HWND` in one line, which makes the call to `vkCreateWin32SurfaceKHR` one line too.

This is a **temporary dependency**, not part of the long-term design. Windowing is meant to become its own module, with the same responsibilities:

- platform window creation and the message loop
- input events
- native handle export (`HWND` / `HINSTANCE`) for `VK_KHR_win32_surface`

Until then GLFW appears only in `main.cpp` and never leaks into the `Native` layer.

---

## Pitfalls

Recorded here because all of them are the "the compiler said nothing" kind:

1. **`{ }` is not a valid `std::format` placeholder.** Writing `"Device Name : { }"` makes `std::format_string` fail during `consteval`, and GCC reports *"call to consteval function ... is not a constant expression"* — which reads like a constexpr bug. The correct form is `{}`.
2. **`vkDestroySurfaceKHR(instance, surface, allocator)` is easy to get wrong on arguments 2 and 3.** A swapped pair compiles fine and only dies inside the driver, showing up as `0xC0000005` at shutdown.
3. **`VkPhysicalDeviceProperties` was missing both `deviceID` and `sparseProperties`.** The `static_assert` pinned a `sizeof` that was itself miscalculated, so it passed; `vkGetPhysicalDeviceProperties2` then wrote the real size, overflowing by 32 bytes.
4. **`interface` is a Windows macro.** `<combaseapi.h>` defines `#define interface struct`, so `namespace lumina::runtime::vulkan::interface` became `namespace ...::struct`. The layer now lives in `native`.
5. **`<windows.h>` macros silently rewrite generated names.** `MemoryBarrier` → `_mm_mfence()`, `CreateEvent` → `CreateEventA`, `CreateSemaphore` → `CreateSemaphoreA`, `GetMessage` → `GetMessageA`. All four are `#undef`-ed in `Runtime.hpp`; a full `g++ -dM` cross-check against the generated names found exactly these.
6. **64-bit flag enums must stay `std::uint64_t`.** `VkAccessFlagBits2` and `VkAccessFlagBits` are different widths; treating both as 32-bit made 47 structure offsets disagree with the compiler.
7. **A structure that embeds a union or a bitfield cannot be emitted before that member type exists.** Generation walks a dependency closure and rejects only what really cannot be built.
8. **Single-member enums broke the prefix heuristic.** With one member the "common prefix" is the whole name, leaving only the vendor suffix; the member name is now derived from the enum type name instead.
9. **Generated files are replaced wholesale.** Hand edits inside `Enumeration.hpp` / `Structure.hpp` / `Functional.hpp` vanish on the next run — put the change into `rules.json` instead.

---

## License

Released under the [MIT License](LICENSE).

Third-party content keeps its own license and is not covered by the MIT license above:

| Component                 | License                     | Location / purpose                                            |
|---------------------------|-----------------------------|---------------------------------------------------------------|
| GLFW                      | zlib/libpng                 | `GLFW/`, `lib/glfw3.lib` — used by the sample `main.cpp` only |
| Vulkan-Headers (`vk.xml`) | Apache-2.0                  | repository root — generator input, never compiled             |
| Vulkan-Headers            | Apache-2.0                  | `vulkan/` — reference only, never compiled                    |
| `vulkan-1.dll`            | shipped with the GPU driver | loaded at runtime, not distributed here                       |

---

## Note

This is a learning project. The interfaces change whenever they need to; no compatibility guarantees.
