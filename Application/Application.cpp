#include "Application.hpp"

#include <Lumina/Runtime.hpp>
#include <Lumina/Messenger.hpp>

#include <vector>
#include <algorithm>
#include <span>
#include <Lumina/Messenger/Console.hpp>

namespace app
{
    namespace
    {
        void LuminaDebugUtilsCallback( vkapi::DebugUtilsMessageSeverityFlagBitsEXT, vkapi::DebugUtilsMessageTypeFlagBitsEXT, const vkapi::DebugUtilsMessengerCallbackDataEXT* message, void* )
        {
            lumina::messenger::PrintLine( lumina::messenger::Level::Debug, "Vulkan", "{}", message->GetMessage( ) );
        }
    }

    void Application::CreateInstance( ) noexcept
    {
        try
        {
            if( not CoreRuntime.Load( "vulkan-1.dll" ) ) [[unlikely]]
            {
                throw std::runtime_error{ "Fail to load vulkan-1.dll" };
            }

            vk::native::LoadFunction( CoreRuntime, CoreGetInstanceProcAddr );
            vk::native::LoadFunction( CoreGetInstanceProcAddr, CoreEnumerateInstanceVersion, false );
            vk::native::LoadFunction( CoreGetInstanceProcAddr, CoreEnumerateInstanceExtensionProperties, true );
            vk::native::LoadFunction( CoreGetInstanceProcAddr, CoreEnumerateInstanceLayerProperties, true );

            std::uint32_t apiVersion{ };
            if( CoreEnumerateInstanceVersion( &apiVersion ) != vkapi::Result::Success )
            {
                apiVersion = vkapi::EncodeVersion( 1, 0, 0 );
            }

            vkapi::ApplicationInfo applicationInfo{ };
            applicationInfo.SetApplicationName( "LearnVulkan" ).SetApplicationVersion( lumina::runtime::vulkan::native::EncodeVersion( 0u, 1u, 0u ) ).SetEngineName( "MyGraphics" ).SetEngineVersion( lumina::runtime::vulkan::native::EncodeVersion( 0u, 1u, 0u ) ).SetApiVersion( apiVersion );

            std::uint32_t layerCount{ };
            CoreEnumerateInstanceLayerProperties( &layerCount, nullptr );

            std::vector<vkapi::LayerProperties> layerPropertieses( layerCount );
            CoreEnumerateInstanceLayerProperties( &layerCount, layerPropertieses.data( ) );

            std::vector<const char*> layerNames{ };
            for( const auto& layerProperties : layerPropertieses )
            {
                if( layerProperties.GetLayerName( ).find( vkapi::VK_LAYER_KHRONOS_validation ) != std::string_view::npos )
                {
                    layerNames.emplace_back( vkapi::VK_LAYER_KHRONOS_validation );
                    break;
                }
            }

            std::uint32_t extensionCount{ };
            CoreEnumerateInstanceExtensionProperties( nullptr, &extensionCount, nullptr );

            std::vector<vkapi::ExtensionProperties> extensionPropertieses( extensionCount );
            CoreEnumerateInstanceExtensionProperties( nullptr, &extensionCount, extensionPropertieses.data( ) );

            std::vector<const char*> extensionNames;
            bool isSurfaceAvailable{ false };
            bool isWin32SurfaceAvailable{ false };
            bool isDeviceSurfaceCapabilities2Available{ false };
            bool isDebugUtilsAvailable{ false };
            bool isRayTracingAvailable{ false };
            for( const auto& extensionProperties : extensionPropertieses )
            {
                if( not isSurfaceAvailable and extensionProperties.GetExtensionName( ).find( vkapi::VK_KHR_surface ) != std::string_view::npos )
                {
                    isSurfaceAvailable = true;
                    extensionNames.emplace_back( vkapi::VK_KHR_surface );
                }

                if( not isWin32SurfaceAvailable and extensionProperties.GetExtensionName( ).find( vkapi::VK_KHR_win32_surface ) != std::string_view::npos )
                {
                    isWin32SurfaceAvailable = true;
                    extensionNames.emplace_back( vkapi::VK_KHR_win32_surface );
                }

                if( not isDeviceSurfaceCapabilities2Available and extensionProperties.GetExtensionName( ).find( vkapi::VK_KHR_get_surface_capabilities2 ) != std::string_view::npos )
                {
                    isDeviceSurfaceCapabilities2Available = true;
                    extensionNames.emplace_back( vkapi::VK_KHR_get_surface_capabilities2 );
                }

                if( not isDebugUtilsAvailable and extensionProperties.GetExtensionName( ).find( vkapi::VK_EXT_debug_utils ) != std::string_view::npos )
                {
                    isDebugUtilsAvailable = true;
                    extensionNames.emplace_back( vkapi::VK_EXT_debug_utils );
                }

                if( not isRayTracingAvailable and extensionProperties.GetExtensionName( ).find( vkapi::VK_KHR_acceleration_structure ) != std::string_view::npos )
                {
                    isRayTracingAvailable = true;
                    extensionNames.emplace_back( vkapi::VK_KHR_acceleration_structure );
                    extensionNames.emplace_back( vkapi::VK_KHR_ray_tracing_pipeline );
                    extensionNames.emplace_back( vkapi::VK_KHR_buffer_device_address );
                    extensionNames.emplace_back( vkapi::VK_KHR_spirv_1_4 );
                }
            }

            vkapi::DebugUtilsMessengerCreateInfoEXT debugUtilsMessengerCreateInfo{ };
            debugUtilsMessengerCreateInfo.SetMessageSeverity( { vkapi::DebugUtilsMessageSeverityFlagBitsEXT::ErrorBitEXT, vkapi::DebugUtilsMessageSeverityFlagBitsEXT::InfoBitEXT } ).SetMessageType( { vkapi::DebugUtilsMessageTypeFlagBitsEXT::GeneralBitEXT } ).SetUserCallback( reinterpret_cast<void*>( LuminaDebugUtilsCallback ) );

            vkapi::InstanceCreateInfo instanceCreateInfo{ };
            instanceCreateInfo.SetNext( &debugUtilsMessengerCreateInfo ).SetApplicationInfo( applicationInfo ).SetLayerNames( layerNames ).SetExtensionNames( extensionNames );

            if( CoreInstance.Create( CoreRuntime, instanceCreateInfo ) ) [[likely]]
            {
                lumina::messenger::Trace( "App", "Create 'Instance'" );
            }
            else
            {
                lumina::messenger::Error( "App", "Fail to create 'Instance'" );
            }
        }
        catch( const std::runtime_error& runtimeError )
        {
            lumina::messenger::Error( "App", "{}", runtimeError.what( ) );
            std::exit( EXIT_FAILURE );
        }
    }
}
