#pragma once
#include <Lumina/Runtime.hpp>

namespace app {
    namespace vk = lumina::runtime::vulkan;
    namespace vkapi = lumina::runtime::vulkan::native;

    class Application {
    public:
        void CreateInstance( ) noexcept;
    private:
        vk::native::Runtime                                 CoreRuntime{};
        vk::native::GetInstanceProcAddr                     CoreGetInstanceProcAddr{};
        vk::native::EnumerateInstanceVersion                CoreEnumerateInstanceVersion{};
        vk::native::EnumerateInstanceLayerProperties        CoreEnumerateInstanceLayerProperties{};
        vk::native::EnumerateInstanceExtensionProperties    CoreEnumerateInstanceExtensionProperties{};
        vk::Instance                                        CoreInstance {};
    };
}