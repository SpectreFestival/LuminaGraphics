#pragma once

#include <Lumina/Runtime.hpp>

struct GLFWwindow;

namespace app
{
    namespace vkapi = lumina::runtime::vulkan::native;

    // Creates its own instance/device/swapchain and renders one triangle until the window closes.
    [[nodiscard]] bool RunTriangle( GLFWwindow* window ) noexcept;
}
