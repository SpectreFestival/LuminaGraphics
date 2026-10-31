#ifndef INCLUDED_LUMINA_RUNTIME_VULKAN_INSTANCE_HPP
#define INCLUDED_LUMINA_RUNTIME_VULKAN_INSTANCE_HPP
#pragma once

#include "Vulkan.hpp"
#include <vector>

namespace lumina::runtime::vulkan
{
    class Instance
    {
    public:
        bool CreateInstance( const native::Runtime& runtime, const native::InstanceCreateInfo& instanceCreateInfo ) noexcept;
        bool DestroyInstance( ) noexcept;
        bool IsAvailable( ) const noexcept;

    private:
        native::Instance                                                                CoreInstance{ nullptr };
        native::AcquireDrmDisplayEXT                                                    CoreAcquireDrmDisplayEXT{ };
        native::CreateDebugReportCallbackEXT                                            CoreCreateDebugReportCallbackEXT{ };
        native::CreateDebugUtilsMessengerEXT                                            CoreCreateDebugUtilsMessengerEXT{ };
        native::CreateDisplayModeKHR                                                    CoreCreateDisplayModeKHR{ };
        native::CreateDisplayPlaneSurfaceKHR                                            CoreCreateDisplayPlaneSurfaceKHR{ };
        native::CreateHeadlessSurfaceEXT                                                CoreCreateHeadlessSurfaceEXT{ };
        native::CreateInstance                                                          CoreCreateInstance{ };
        native::CreateWin32SurfaceKHR                                                   CoreCreateSurfaceKHR{ };
        native::DebugReportMessageEXT                                                   CoreDebugReportMessageEXT{ };
        native::DestroyDebugReportCallbackEXT                                           CoreDestroyDebugReportCallbackEXT{ };
        native::DestroyDebugUtilsMessengerEXT                                           CoreDestroyDebugUtilsMessengerEXT{ };
        native::DestroyInstance                                                         CoreDestroyInstance{ };
        native::DestroySurfaceKHR                                                       CoreDestroySurfaceKHR{ };
        native::EnumerateDeviceExtensionProperties                                      CoreEnumerateDeviceExtensionProperties{ };
        native::EnumerateDeviceLayerProperties                                          CoreEnumerateDeviceLayerProperties{ };
        native::EnumeratePhysicalDeviceGroups                                           CoreEnumeratePhysicalDeviceGroups{ };
        native::EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM        CoreEnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM{ };
        native::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR           CoreEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR{ };
        native::EnumeratePhysicalDeviceShaderInstrumentationMetricsARM                  CoreEnumeratePhysicalDeviceShaderInstrumentationMetricsARM{ };
        native::EnumeratePhysicalDevices                                                CoreEnumeratePhysicalDevices{ };
        native::GetDisplayModeProperties2KHR                                            CoreGetDisplayModeProperties2KHR{ };
        native::GetDisplayModePropertiesKHR                                             CoreGetDisplayModePropertiesKHR{ };
        native::GetDisplayPlaneCapabilities2KHR                                         CoreGetDisplayPlaneCapabilities2KHR{ };
        native::GetDisplayPlaneCapabilitiesKHR                                          CoreGetDisplayPlaneCapabilitiesKHR{ };
        native::GetDisplayPlaneSupportedDisplaysKHR                                     CoreGetDisplayPlaneSupportedDisplaysKHR{ };
        native::GetDrmDisplayEXT                                                        CoreGetDrmDisplayEXT{ };
        native::GetInstanceProcAddr                                                     CoreGetInstanceProcAddr{ };
        native::GetPhysicalDeviceCalibrateableTimeDomainsKHR                            CoreGetPhysicalDeviceCalibrateableTimeDomainsKHR{ };
        native::GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV        CoreGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV{ };
        native::GetPhysicalDeviceCooperativeMatrixPropertiesKHR                         CoreGetPhysicalDeviceCooperativeMatrixPropertiesKHR{ };
        native::GetPhysicalDeviceCooperativeMatrixPropertiesNV                          CoreGetPhysicalDeviceCooperativeMatrixPropertiesNV{ };
        native::GetPhysicalDeviceCooperativeVectorPropertiesNV                          CoreGetPhysicalDeviceCooperativeVectorPropertiesNV{ };
        native::GetPhysicalDeviceDescriptorSizeEXT                                      CoreGetPhysicalDeviceDescriptorSizeEXT{ };
        native::GetPhysicalDeviceDisplayPlaneProperties2KHR                             CoreGetPhysicalDeviceDisplayPlaneProperties2KHR{ };
        native::GetPhysicalDeviceDisplayPlanePropertiesKHR                              CoreGetPhysicalDeviceDisplayPlanePropertiesKHR{ };
        native::GetPhysicalDeviceDisplayProperties2KHR                                  CoreGetPhysicalDeviceDisplayProperties2KHR{ };
        native::GetPhysicalDeviceDisplayPropertiesKHR                                   CoreGetPhysicalDeviceDisplayPropertiesKHR{ };
        native::GetPhysicalDeviceExternalBufferProperties                               CoreGetPhysicalDeviceExternalBufferProperties{ };
        native::GetPhysicalDeviceExternalFenceProperties                                CoreGetPhysicalDeviceExternalFenceProperties{ };
        native::GetPhysicalDeviceExternalImageFormatPropertiesNV                        CoreGetPhysicalDeviceExternalImageFormatPropertiesNV{ };
        native::GetPhysicalDeviceExternalSemaphoreProperties                            CoreGetPhysicalDeviceExternalSemaphoreProperties{ };
        native::GetPhysicalDeviceExternalTensorPropertiesARM                            CoreGetPhysicalDeviceExternalTensorPropertiesARM{ };
        native::GetPhysicalDeviceFeatures                                               CoreGetPhysicalDeviceFeatures{ };
        native::GetPhysicalDeviceFeatures2                                              CoreGetPhysicalDeviceFeatures2{ };
        native::GetPhysicalDeviceFormatProperties                                       CoreGetPhysicalDeviceFormatProperties{ };
        native::GetPhysicalDeviceFormatProperties2                                      CoreGetPhysicalDeviceFormatProperties2{ };
        native::GetPhysicalDeviceFragmentShadingRatesKHR                                CoreGetPhysicalDeviceFragmentShadingRatesKHR{ };
        native::GetPhysicalDeviceImageFormatProperties                                  CoreGetPhysicalDeviceImageFormatProperties{ };
        native::GetPhysicalDeviceImageFormatProperties2                                 CoreGetPhysicalDeviceImageFormatProperties2{ };
        native::GetPhysicalDeviceMemoryProperties                                       CoreGetPhysicalDeviceMemoryProperties{ };
        native::GetPhysicalDeviceMemoryProperties2                                      CoreGetPhysicalDeviceMemoryProperties2{ };
        native::GetPhysicalDeviceMultisamplePropertiesEXT                               CoreGetPhysicalDeviceMultisamplePropertiesEXT{ };
        native::GetPhysicalDeviceOpticalFlowImageFormatsNV                              CoreGetPhysicalDeviceOpticalFlowImageFormatsNV{ };
        native::GetPhysicalDevicePresentRectanglesKHR                                   CoreGetPhysicalDevicePresentRectanglesKHR{ };
        native::GetPhysicalDeviceProperties                                             CoreGetPhysicalDeviceProperties{ };
        native::GetPhysicalDeviceProperties2                                            CoreGetPhysicalDeviceProperties2{ };
        native::GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM       CoreGetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM{ };
        native::GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM         CoreGetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM{ };
        native::GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM      CoreGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM{ };
        native::GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM                      CoreGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM{ };
        native::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR                   CoreGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR{ };
        native::GetPhysicalDeviceQueueFamilyProperties                                  CoreGetPhysicalDeviceQueueFamilyProperties{ };
        native::GetPhysicalDeviceQueueFamilyProperties2                                 CoreGetPhysicalDeviceQueueFamilyProperties2{ };
        native::GetPhysicalDeviceSparseImageFormatProperties                            CoreGetPhysicalDeviceSparseImageFormatProperties{ };
        native::GetPhysicalDeviceSparseImageFormatProperties2                           CoreGetPhysicalDeviceSparseImageFormatProperties2{ };
        native::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV         CoreGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV{ };
        native::GetPhysicalDeviceSurfaceCapabilities2EXT                                CoreGetPhysicalDeviceSurfaceCapabilities2EXT{ };
        native::GetPhysicalDeviceSurfaceCapabilities2KHR                                CoreGetPhysicalDeviceSurfaceCapabilities2KHR{ };
        native::GetPhysicalDeviceSurfaceCapabilitiesKHR                                 CoreGetPhysicalDeviceSurfaceCapabilitiesKHR{ };
        native::GetPhysicalDeviceSurfaceFormats2KHR                                     CoreGetPhysicalDeviceSurfaceFormats2KHR{ };
        native::GetPhysicalDeviceSurfaceFormatsKHR                                      CoreGetPhysicalDeviceSurfaceFormatsKHR{ };
        native::GetPhysicalDeviceSurfacePresentModesKHR                                 CoreGetPhysicalDeviceSurfacePresentModesKHR{ };
        native::GetPhysicalDeviceSurfaceSupportKHR                                      CoreGetPhysicalDeviceSurfaceSupportKHR{ };
        native::GetPhysicalDeviceToolProperties                                         CoreGetPhysicalDeviceToolProperties{ };
        native::ReleaseDisplayEXT                                                       CoreReleaseDisplayEXT{ };
        native::SubmitDebugUtilsMessageEXT                                              CoreSubmitDebugUtilsMessageEXT{ };
    };
}

#endif