#ifndef INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_FUNCTIONAL_HPP
#define INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_FUNCTIONAL_HPP
#pragma once

#include "Runtime.hpp"
#include "Enumeration.hpp"
#include "Reference.hpp"
#include "Structure.hpp"
#include <exception>
#include <format>
#include <stdexcept>

namespace lumina::runtime::vulkan::native
{
    template <Function>
    struct FunctionTraits;

    template <>
    struct FunctionTraits <Function::CreateWin32SurfaceKHR>
    {
        constexpr static auto Name = "vkCreateWin32SurfaceKHR";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const SurfaceCreateInfo*                                          pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SurfaceKHR>**                               pSurface );
    };

    template <>
    struct FunctionTraits <Function::GetFenceWin32HandleKHR>
    {
        constexpr static auto Name = "vkGetFenceWin32HandleKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const FenceGetWin32HandleInfoKHR*                                 pGetWin32HandleInfo,
            void**                                                            pHandle );
    };

    template <>
    struct FunctionTraits <Function::GetMemoryWin32HandleKHR>
    {
        constexpr static auto Name = "vkGetMemoryWin32HandleKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const MemoryGetWin32HandleInfoKHR*                                pGetWin32HandleInfo,
            void**                                                            pHandle );
    };

    template <>
    struct FunctionTraits <Function::GetMemoryWin32HandleNV>
    {
        constexpr static auto Name = "vkGetMemoryWin32HandleNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeviceMemory>*                              memory,
            std::uint32_t                                                     handleType,
            void**                                                            pHandle );
    };

    template <>
    struct FunctionTraits <Function::GetMemoryWin32HandlePropertiesKHR>
    {
        constexpr static auto Name = "vkGetMemoryWin32HandlePropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            ExternalMemoryHandleTypeFlagBits                                  handleType,
            void*                                                             handle,
            MemoryWin32HandlePropertiesKHR*                                   pMemoryWin32HandleProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceWin32PresentationSupportKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceWin32PresentationSupportKHR";
        using Type = std::uint32_t (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex );
    };

    template <>
    struct FunctionTraits <Function::GetSemaphoreWin32HandleKHR>
    {
        constexpr static auto Name = "vkGetSemaphoreWin32HandleKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SemaphoreGetWin32HandleInfoKHR*                             pGetWin32HandleInfo,
            void**                                                            pHandle );
    };

    template <>
    struct FunctionTraits <Function::ImportFenceWin32HandleKHR>
    {
        constexpr static auto Name = "vkImportFenceWin32HandleKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImportFenceWin32HandleInfoKHR*                              pImportFenceWin32HandleInfo );
    };

    template <>
    struct FunctionTraits <Function::ImportSemaphoreWin32HandleKHR>
    {
        constexpr static auto Name = "vkImportSemaphoreWin32HandleKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImportSemaphoreWin32HandleInfoKHR*                          pImportSemaphoreWin32HandleInfo );
    };

    template <>
    struct FunctionTraits <Function::CreateWaylandSurfaceKHR>
    {
        constexpr static auto Name = "vkCreateWaylandSurfaceKHR";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const SurfaceCreateInfo*                                          pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SurfaceKHR>**                               pSurface );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceWaylandPresentationSupportKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceWaylandPresentationSupportKHR";
        using Type = std::uint32_t (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            void**                                                            display );
    };

    template <>
    struct FunctionTraits <Function::CreateMacOSSurfaceMVK>
    {
        constexpr static auto Name = "vkCreateMacOSSurfaceMVK";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const MacOSSurfaceCreateInfoMVK*                                  pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SurfaceKHR>**                               pSurface );
    };

    template <>
    struct FunctionTraits <Function::CreateIOSSurfaceMVK>
    {
        constexpr static auto Name = "vkCreateIOSSurfaceMVK";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const IOSSurfaceCreateInfoMVK*                                    pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SurfaceKHR>**                               pSurface );
    };

    template <>
    struct FunctionTraits <Function::AcquireDrmDisplayEXT>
    {
        constexpr static auto Name = "vkAcquireDrmDisplayEXT";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::int32_t                                                      drmFd,
            Reference<ObjectType::DisplayKHR>*                                display );
    };

    template <>
    struct FunctionTraits <Function::AcquireFullScreenExclusiveModeEXT>
    {
        constexpr static auto Name = "vkAcquireFullScreenExclusiveModeEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain );
    };

    template <>
    struct FunctionTraits <Function::AcquireImageANDROID>
    {
        constexpr static auto Name = "vkAcquireImageANDROID";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            std::int32_t                                                      nativeFenceFd,
            Reference<ObjectType::Semaphore>*                                 semaphore,
            Reference<ObjectType::Fence>*                                     fence );
    };

    template <>
    struct FunctionTraits <Function::AcquireNextImage2KHR>
    {
        constexpr static auto Name = "vkAcquireNextImage2KHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const AcquireNextImageInfoKHR*                                    pAcquireInfo,
            std::uint32_t*                                                    pImageIndex );
    };

    template <>
    struct FunctionTraits <Function::AcquireNextImageKHR>
    {
        constexpr static auto Name = "vkAcquireNextImageKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            std::uint64_t                                                     timeout,
            Reference<ObjectType::Semaphore>*                                 semaphore,
            Reference<ObjectType::Fence>*                                     fence,
            std::uint32_t*                                                    pImageIndex );
    };

    template <>
    struct FunctionTraits <Function::AcquirePerformanceConfigurationINTEL>
    {
        constexpr static auto Name = "vkAcquirePerformanceConfigurationINTEL";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PerformanceConfigurationAcquireInfoINTEL*                   pAcquireInfo,
            Reference<ObjectType::PerformanceConfigurationINTEL>**            pConfiguration );
    };

    template <>
    struct FunctionTraits <Function::AcquireProfilingLockKHR>
    {
        constexpr static auto Name = "vkAcquireProfilingLockKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const AcquireProfilingLockInfoKHR*                                pInfo );
    };

    template <>
    struct FunctionTraits <Function::AllocateCommandBuffers>
    {
        constexpr static auto Name = "vkAllocateCommandBuffers";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const CommandBufferAllocateInfo*                                  pAllocateInfo,
            Reference<ObjectType::CommandBuffer>**                            pCommandBuffers );
    };

    template <>
    struct FunctionTraits <Function::AllocateDescriptorSets>
    {
        constexpr static auto Name = "vkAllocateDescriptorSets";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DescriptorSetAllocateInfo*                                  pAllocateInfo,
            Reference<ObjectType::DescriptorSet>**                            pDescriptorSets );
    };

    template <>
    struct FunctionTraits <Function::AllocateMemory>
    {
        constexpr static auto Name = "vkAllocateMemory";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const MemoryAllocateInfo*                                         pAllocateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DeviceMemory>**                             pMemory );
    };

    template <>
    struct FunctionTraits <Function::AntiLagUpdateAMD>
    {
        constexpr static auto Name = "vkAntiLagUpdateAMD";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const AntiLagDataAMD*                                             pData );
    };

    template <>
    struct FunctionTraits <Function::BeginCommandBuffer>
    {
        constexpr static auto Name = "vkBeginCommandBuffer";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CommandBufferBeginInfo*                                     pBeginInfo );
    };

    template <>
    struct FunctionTraits <Function::BindAccelerationStructureMemoryNV>
    {
        constexpr static auto Name = "vkBindAccelerationStructureMemoryNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     bindInfoCount,
            const BindAccelerationStructureMemoryInfoNV*                      pBindInfos );
    };

    template <>
    struct FunctionTraits <Function::BindBufferMemory>
    {
        constexpr static auto Name = "vkBindBufferMemory";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Buffer>*                                    buffer,
            Reference<ObjectType::DeviceMemory>*                              memory,
            std::uint64_t                                                     memoryOffset );
    };

    template <>
    struct FunctionTraits <Function::BindBufferMemory2>
    {
        constexpr static auto Name = "vkBindBufferMemory2";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     bindInfoCount,
            const BindBufferMemoryInfo*                                       pBindInfos );
    };

    template <>
    struct FunctionTraits <Function::BindDataGraphPipelineSessionMemoryARM>
    {
        constexpr static auto Name = "vkBindDataGraphPipelineSessionMemoryARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     bindInfoCount,
            const BindDataGraphPipelineSessionMemoryInfoARM*                  pBindInfos );
    };

    template <>
    struct FunctionTraits <Function::BindImageMemory>
    {
        constexpr static auto Name = "vkBindImageMemory";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            Reference<ObjectType::DeviceMemory>*                              memory,
            std::uint64_t                                                     memoryOffset );
    };

    template <>
    struct FunctionTraits <Function::BindImageMemory2>
    {
        constexpr static auto Name = "vkBindImageMemory2";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     bindInfoCount,
            const BindImageMemoryInfo*                                        pBindInfos );
    };

    template <>
    struct FunctionTraits <Function::BindOpticalFlowSessionImageNV>
    {
        constexpr static auto Name = "vkBindOpticalFlowSessionImageNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::OpticalFlowSessionNV>*                      session,
            OpticalFlowSessionBindingPointNV                                  bindingPoint,
            Reference<ObjectType::ImageView>*                                 view,
            ImageLayout                                                       layout );
    };

    template <>
    struct FunctionTraits <Function::BindTensorMemoryARM>
    {
        constexpr static auto Name = "vkBindTensorMemoryARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     bindInfoCount,
            const BindTensorMemoryInfoARM*                                    pBindInfos );
    };

    template <>
    struct FunctionTraits <Function::BuildAccelerationStructuresKHR>
    {
        constexpr static auto Name = "vkBuildAccelerationStructuresKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            std::uint32_t                                                     infoCount,
            const AccelerationStructureBuildGeometryInfoKHR*                  pInfos,
            const AccelerationStructureBuildRangeInfoKHR* const*              ppBuildRangeInfos );
    };

    template <>
    struct FunctionTraits <Function::BuildMicromapsEXT>
    {
        constexpr static auto Name = "vkBuildMicromapsEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            std::uint32_t                                                     infoCount,
            const MicromapBuildInfoEXT*                                       pInfos );
    };

    template <>
    struct FunctionTraits <Function::ClearShaderInstrumentationMetricsARM>
    {
        constexpr static auto Name = "vkClearShaderInstrumentationMetricsARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ShaderInstrumentationARM>*                  instrumentation );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginConditionalRendering2EXT>
    {
        constexpr static auto Name = "vkCmdBeginConditionalRendering2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const ConditionalRenderingBeginInfo2EXT*                          pConditionalRenderingBegin );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginConditionalRenderingEXT>
    {
        constexpr static auto Name = "vkCmdBeginConditionalRenderingEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const ConditionalRenderingBeginInfoEXT*                           pConditionalRenderingBegin );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginCustomResolveEXT>
    {
        constexpr static auto Name = "vkCmdBeginCustomResolveEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BeginCustomResolveInfoEXT*                                  pBeginCustomResolveInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginDebugUtilsLabelEXT>
    {
        constexpr static auto Name = "vkCmdBeginDebugUtilsLabelEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DebugUtilsLabelEXT*                                         pLabelInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginGpaSampleAMD>
    {
        constexpr static auto Name = "vkCmdBeginGpaSampleAMD";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession,
            const GpaSampleBeginInfoAMD*                                      pGpaSampleBeginInfo,
            std::uint32_t*                                                    pSampleID );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginGpaSessionAMD>
    {
        constexpr static auto Name = "vkCmdBeginGpaSessionAMD";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginPerTileExecutionQCOM>
    {
        constexpr static auto Name = "vkCmdBeginPerTileExecutionQCOM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PerTileBeginInfoQCOM*                                       pPerTileBeginInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginQuery>
    {
        constexpr static auto Name = "vkCmdBeginQuery";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     query,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginQueryIndexedEXT>
    {
        constexpr static auto Name = "vkCmdBeginQueryIndexedEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     query,
            std::uint32_t                                                     flags,
            std::uint32_t                                                     index );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginRenderPass>
    {
        constexpr static auto Name = "vkCmdBeginRenderPass";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const RenderPassBeginInfo*                                        pRenderPassBegin,
            SubpassContents                                                   contents );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginRenderPass2>
    {
        constexpr static auto Name = "vkCmdBeginRenderPass2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const RenderPassBeginInfo*                                        pRenderPassBegin,
            const SubpassBeginInfo*                                           pSubpassBeginInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginRendering>
    {
        constexpr static auto Name = "vkCmdBeginRendering";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const RenderingInfo*                                              pRenderingInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginShaderInstrumentationARM>
    {
        constexpr static auto Name = "vkCmdBeginShaderInstrumentationARM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::ShaderInstrumentationARM>*                  instrumentation );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginTransformFeedback2EXT>
    {
        constexpr static auto Name = "vkCmdBeginTransformFeedback2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstCounterRange,
            std::uint32_t                                                     counterRangeCount,
            const BindTransformFeedbackBuffer2InfoEXT*                        pCounterInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdBeginTransformFeedbackEXT>
    {
        constexpr static auto Name = "vkCmdBeginTransformFeedbackEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstCounterBuffer,
            std::uint32_t                                                     counterBufferCount,
            Reference<ObjectType::Buffer>**                                   pCounterBuffers,
            const std::uint64_t*                                              pCounterBufferOffsets );
    };

    template <>
    struct FunctionTraits <Function::CmdBindDescriptorBufferEmbeddedSamplers2EXT>
    {
        constexpr static auto Name = "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BindDescriptorBufferEmbeddedSamplersInfoEXT*                pBindDescriptorBufferEmbeddedSamplersInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBindDescriptorBufferEmbeddedSamplersEXT>
    {
        constexpr static auto Name = "vkCmdBindDescriptorBufferEmbeddedSamplersEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineBindPoint                                                 pipelineBindPoint,
            Reference<ObjectType::PipelineLayout>*                            layout,
            std::uint32_t                                                     set );
    };

    template <>
    struct FunctionTraits <Function::CmdBindDescriptorBuffersEXT>
    {
        constexpr static auto Name = "vkCmdBindDescriptorBuffersEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     bufferCount,
            const DescriptorBufferBindingInfoEXT*                             pBindingInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdBindDescriptorSets>
    {
        constexpr static auto Name = "vkCmdBindDescriptorSets";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineBindPoint                                                 pipelineBindPoint,
            Reference<ObjectType::PipelineLayout>*                            layout,
            std::uint32_t                                                     firstSet,
            std::uint32_t                                                     descriptorSetCount,
            Reference<ObjectType::DescriptorSet>**                            pDescriptorSets,
            std::uint32_t                                                     dynamicOffsetCount,
            const std::uint32_t*                                              pDynamicOffsets );
    };

    template <>
    struct FunctionTraits <Function::CmdBindDescriptorSets2>
    {
        constexpr static auto Name = "vkCmdBindDescriptorSets2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BindDescriptorSetsInfo*                                     pBindDescriptorSetsInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBindIndexBuffer>
    {
        constexpr static auto Name = "vkCmdBindIndexBuffer";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            IndexType                                                         indexType );
    };

    template <>
    struct FunctionTraits <Function::CmdBindIndexBuffer2>
    {
        constexpr static auto Name = "vkCmdBindIndexBuffer2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            std::uint64_t                                                     size,
            IndexType                                                         indexType );
    };

    template <>
    struct FunctionTraits <Function::CmdBindIndexBuffer3KHR>
    {
        constexpr static auto Name = "vkCmdBindIndexBuffer3KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BindIndexBuffer3InfoKHR*                                    pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBindInvocationMaskHUAWEI>
    {
        constexpr static auto Name = "vkCmdBindInvocationMaskHUAWEI";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::ImageView>*                                 imageView,
            ImageLayout                                                       imageLayout );
    };

    template <>
    struct FunctionTraits <Function::CmdBindPipeline>
    {
        constexpr static auto Name = "vkCmdBindPipeline";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineBindPoint                                                 pipelineBindPoint,
            Reference<ObjectType::Pipeline>*                                  pipeline );
    };

    template <>
    struct FunctionTraits <Function::CmdBindPipelineShaderGroupNV>
    {
        constexpr static auto Name = "vkCmdBindPipelineShaderGroupNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineBindPoint                                                 pipelineBindPoint,
            Reference<ObjectType::Pipeline>*                                  pipeline,
            std::uint32_t                                                     groupIndex );
    };

    template <>
    struct FunctionTraits <Function::CmdBindResourceHeapEXT>
    {
        constexpr static auto Name = "vkCmdBindResourceHeapEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BindHeapInfoEXT*                                            pBindInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBindSamplerHeapEXT>
    {
        constexpr static auto Name = "vkCmdBindSamplerHeapEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BindHeapInfoEXT*                                            pBindInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBindShadersEXT>
    {
        constexpr static auto Name = "vkCmdBindShadersEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     stageCount,
            const ShaderStageFlagBits*                                        pStages,
            Reference<ObjectType::ShaderEXT>**                                pShaders );
    };

    template <>
    struct FunctionTraits <Function::CmdBindShadingRateImageNV>
    {
        constexpr static auto Name = "vkCmdBindShadingRateImageNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::ImageView>*                                 imageView,
            ImageLayout                                                       imageLayout );
    };

    template <>
    struct FunctionTraits <Function::CmdBindTileMemoryQCOM>
    {
        constexpr static auto Name = "vkCmdBindTileMemoryQCOM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const TileMemoryBindInfoQCOM*                                     pTileMemoryBindInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBindTransformFeedbackBuffers2EXT>
    {
        constexpr static auto Name = "vkCmdBindTransformFeedbackBuffers2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstBinding,
            std::uint32_t                                                     bindingCount,
            const BindTransformFeedbackBuffer2InfoEXT*                        pBindingInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdBindTransformFeedbackBuffersEXT>
    {
        constexpr static auto Name = "vkCmdBindTransformFeedbackBuffersEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstBinding,
            std::uint32_t                                                     bindingCount,
            Reference<ObjectType::Buffer>**                                   pBuffers,
            const std::uint64_t*                                              pOffsets,
            const std::uint64_t*                                              pSizes );
    };

    template <>
    struct FunctionTraits <Function::CmdBindVertexBuffers>
    {
        constexpr static auto Name = "vkCmdBindVertexBuffers";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstBinding,
            std::uint32_t                                                     bindingCount,
            Reference<ObjectType::Buffer>**                                   pBuffers,
            const std::uint64_t*                                              pOffsets );
    };

    template <>
    struct FunctionTraits <Function::CmdBindVertexBuffers2>
    {
        constexpr static auto Name = "vkCmdBindVertexBuffers2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstBinding,
            std::uint32_t                                                     bindingCount,
            Reference<ObjectType::Buffer>**                                   pBuffers,
            const std::uint64_t*                                              pOffsets,
            const std::uint64_t*                                              pSizes,
            const std::uint64_t*                                              pStrides );
    };

    template <>
    struct FunctionTraits <Function::CmdBindVertexBuffers3KHR>
    {
        constexpr static auto Name = "vkCmdBindVertexBuffers3KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstBinding,
            std::uint32_t                                                     bindingCount,
            const BindVertexBuffer3InfoKHR*                                   pBindingInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdBlitImage>
    {
        constexpr static auto Name = "vkCmdBlitImage";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Image>*                                     srcImage,
            ImageLayout                                                       srcImageLayout,
            Reference<ObjectType::Image>*                                     dstImage,
            ImageLayout                                                       dstImageLayout,
            std::uint32_t                                                     regionCount,
            const ImageBlit*                                                  pRegions,
            Filter                                                            filter );
    };

    template <>
    struct FunctionTraits <Function::CmdBlitImage2>
    {
        constexpr static auto Name = "vkCmdBlitImage2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BlitImageInfo2*                                             pBlitImageInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdBuildAccelerationStructureNV>
    {
        constexpr static auto Name = "vkCmdBuildAccelerationStructureNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const AccelerationStructureInfoNV*                                pInfo,
            Reference<ObjectType::Buffer>*                                    instanceData,
            std::uint64_t                                                     instanceOffset,
            std::uint32_t                                                     update,
            Reference<ObjectType::AccelerationStructureNV>*                   dst,
            Reference<ObjectType::AccelerationStructureNV>*                   src,
            Reference<ObjectType::Buffer>*                                    scratch,
            std::uint64_t                                                     scratchOffset );
    };

    template <>
    struct FunctionTraits <Function::CmdBuildAccelerationStructuresIndirectKHR>
    {
        constexpr static auto Name = "vkCmdBuildAccelerationStructuresIndirectKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     infoCount,
            const AccelerationStructureBuildGeometryInfoKHR*                  pInfos,
            const std::uint64_t*                                              pIndirectDeviceAddresses,
            const std::uint32_t*                                              pIndirectStrides,
            const std::uint32_t* const*                                       ppMaxPrimitiveCounts );
    };

    template <>
    struct FunctionTraits <Function::CmdBuildAccelerationStructuresKHR>
    {
        constexpr static auto Name = "vkCmdBuildAccelerationStructuresKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     infoCount,
            const AccelerationStructureBuildGeometryInfoKHR*                  pInfos,
            const AccelerationStructureBuildRangeInfoKHR* const*              ppBuildRangeInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdBuildClusterAccelerationStructureIndirectNV>
    {
        constexpr static auto Name = "vkCmdBuildClusterAccelerationStructureIndirectNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const ClusterAccelerationStructureCommandsInfoNV*                 pCommandInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdBuildMicromapsEXT>
    {
        constexpr static auto Name = "vkCmdBuildMicromapsEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     infoCount,
            const MicromapBuildInfoEXT*                                       pInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdBuildPartitionedAccelerationStructuresNV>
    {
        constexpr static auto Name = "vkCmdBuildPartitionedAccelerationStructuresNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const BuildPartitionedAccelerationStructureInfoNV*                pBuildInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdClearAttachments>
    {
        constexpr static auto Name = "vkCmdClearAttachments";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     attachmentCount,
            const ClearAttachment*                                            pAttachments,
            std::uint32_t                                                     rectCount,
            const ClearRect*                                                  pRects );
    };

    template <>
    struct FunctionTraits <Function::CmdClearColorImage>
    {
        constexpr static auto Name = "vkCmdClearColorImage";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Image>*                                     image,
            ImageLayout                                                       imageLayout,
            const ClearColorValue*                                            pColor,
            std::uint32_t                                                     rangeCount,
            const ImageSubresourceRange*                                      pRanges );
    };

    template <>
    struct FunctionTraits <Function::CmdClearDepthStencilImage>
    {
        constexpr static auto Name = "vkCmdClearDepthStencilImage";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Image>*                                     image,
            ImageLayout                                                       imageLayout,
            const ClearDepthStencilValue*                                     pDepthStencil,
            std::uint32_t                                                     rangeCount,
            const ImageSubresourceRange*                                      pRanges );
    };

    template <>
    struct FunctionTraits <Function::CmdConvertCooperativeVectorMatrixNV>
    {
        constexpr static auto Name = "vkCmdConvertCooperativeVectorMatrixNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     infoCount,
            const ConvertCooperativeVectorMatrixInfoNV*                       pInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyAccelerationStructureKHR>
    {
        constexpr static auto Name = "vkCmdCopyAccelerationStructureKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyAccelerationStructureInfoKHR*                           pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyAccelerationStructureNV>
    {
        constexpr static auto Name = "vkCmdCopyAccelerationStructureNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::AccelerationStructureNV>*                   dst,
            Reference<ObjectType::AccelerationStructureNV>*                   src,
            CopyAccelerationStructureModeKHR                                  mode );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyAccelerationStructureToMemoryKHR>
    {
        constexpr static auto Name = "vkCmdCopyAccelerationStructureToMemoryKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyAccelerationStructureToMemoryInfoKHR*                   pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyBuffer>
    {
        constexpr static auto Name = "vkCmdCopyBuffer";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    srcBuffer,
            Reference<ObjectType::Buffer>*                                    dstBuffer,
            std::uint32_t                                                     regionCount,
            const BufferCopy*                                                 pRegions );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyBuffer2>
    {
        constexpr static auto Name = "vkCmdCopyBuffer2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyBufferInfo2*                                            pCopyBufferInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyBufferToImage>
    {
        constexpr static auto Name = "vkCmdCopyBufferToImage";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    srcBuffer,
            Reference<ObjectType::Image>*                                     dstImage,
            ImageLayout                                                       dstImageLayout,
            std::uint32_t                                                     regionCount,
            const BufferImageCopy*                                            pRegions );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyBufferToImage2>
    {
        constexpr static auto Name = "vkCmdCopyBufferToImage2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyBufferToImageInfo2*                                     pCopyBufferToImageInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyGpaSessionResultsAMD>
    {
        constexpr static auto Name = "vkCmdCopyGpaSessionResultsAMD";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyImage>
    {
        constexpr static auto Name = "vkCmdCopyImage";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Image>*                                     srcImage,
            ImageLayout                                                       srcImageLayout,
            Reference<ObjectType::Image>*                                     dstImage,
            ImageLayout                                                       dstImageLayout,
            std::uint32_t                                                     regionCount,
            const ImageCopy*                                                  pRegions );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyImage2>
    {
        constexpr static auto Name = "vkCmdCopyImage2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyImageInfo2*                                             pCopyImageInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyImageToBuffer>
    {
        constexpr static auto Name = "vkCmdCopyImageToBuffer";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Image>*                                     srcImage,
            ImageLayout                                                       srcImageLayout,
            Reference<ObjectType::Buffer>*                                    dstBuffer,
            std::uint32_t                                                     regionCount,
            const BufferImageCopy*                                            pRegions );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyImageToBuffer2>
    {
        constexpr static auto Name = "vkCmdCopyImageToBuffer2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyImageToBufferInfo2*                                     pCopyImageToBufferInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyImageToMemoryKHR>
    {
        constexpr static auto Name = "vkCmdCopyImageToMemoryKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyDeviceMemoryImageInfoKHR*                               pCopyMemoryInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryIndirectKHR>
    {
        constexpr static auto Name = "vkCmdCopyMemoryIndirectKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyMemoryIndirectInfoKHR*                                  pCopyMemoryIndirectInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryIndirectNV>
    {
        constexpr static auto Name = "vkCmdCopyMemoryIndirectNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     copyBufferAddress,
            std::uint32_t                                                     copyCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryKHR>
    {
        constexpr static auto Name = "vkCmdCopyMemoryKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyDeviceMemoryInfoKHR*                                    pCopyMemoryInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryToAccelerationStructureKHR>
    {
        constexpr static auto Name = "vkCmdCopyMemoryToAccelerationStructureKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyMemoryToAccelerationStructureInfoKHR*                   pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryToImageIndirectKHR>
    {
        constexpr static auto Name = "vkCmdCopyMemoryToImageIndirectKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyMemoryToImageIndirectInfoKHR*                           pCopyMemoryToImageIndirectInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryToImageIndirectNV>
    {
        constexpr static auto Name = "vkCmdCopyMemoryToImageIndirectNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     copyBufferAddress,
            std::uint32_t                                                     copyCount,
            std::uint32_t                                                     stride,
            Reference<ObjectType::Image>*                                     dstImage,
            ImageLayout                                                       dstImageLayout,
            const ImageSubresourceLayers*                                     pImageSubresources );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryToImageKHR>
    {
        constexpr static auto Name = "vkCmdCopyMemoryToImageKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyDeviceMemoryImageInfoKHR*                               pCopyMemoryInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMemoryToMicromapEXT>
    {
        constexpr static auto Name = "vkCmdCopyMemoryToMicromapEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyMemoryToMicromapInfoEXT*                                pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMicromapEXT>
    {
        constexpr static auto Name = "vkCmdCopyMicromapEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyMicromapInfoEXT*                                        pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyMicromapToMemoryEXT>
    {
        constexpr static auto Name = "vkCmdCopyMicromapToMemoryEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyMicromapToMemoryInfoEXT*                                pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyQueryPoolResults>
    {
        constexpr static auto Name = "vkCmdCopyQueryPoolResults";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery,
            std::uint32_t                                                     queryCount,
            Reference<ObjectType::Buffer>*                                    dstBuffer,
            std::uint64_t                                                     dstOffset,
            std::uint64_t                                                     stride,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyQueryPoolResultsToMemoryKHR>
    {
        constexpr static auto Name = "vkCmdCopyQueryPoolResultsToMemoryKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery,
            std::uint32_t                                                     queryCount,
            const StridedDeviceAddressRangeKHR*                               pDstRange,
            std::uint32_t                                                     dstFlags,
            std::uint32_t                                                     queryResultFlags );
    };

    template <>
    struct FunctionTraits <Function::CmdCopyTensorARM>
    {
        constexpr static auto Name = "vkCmdCopyTensorARM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CopyTensorInfoARM*                                          pCopyTensorInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdCuLaunchKernelNVX>
    {
        constexpr static auto Name = "vkCmdCuLaunchKernelNVX";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const CuLaunchInfoNVX*                                            pLaunchInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDebugMarkerBeginEXT>
    {
        constexpr static auto Name = "vkCmdDebugMarkerBeginEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DebugMarkerMarkerInfoEXT*                                   pMarkerInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDebugMarkerEndEXT>
    {
        constexpr static auto Name = "vkCmdDebugMarkerEndEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdDebugMarkerInsertEXT>
    {
        constexpr static auto Name = "vkCmdDebugMarkerInsertEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DebugMarkerMarkerInfoEXT*                                   pMarkerInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDecompressMemoryEXT>
    {
        constexpr static auto Name = "vkCmdDecompressMemoryEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DecompressMemoryInfoEXT*                                    pDecompressMemoryInfoEXT );
    };

    template <>
    struct FunctionTraits <Function::CmdDecompressMemoryIndirectCountEXT>
    {
        constexpr static auto Name = "vkCmdDecompressMemoryIndirectCountEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     decompressionMethod,
            std::uint64_t                                                     indirectCommandsAddress,
            std::uint64_t                                                     indirectCommandsCountAddress,
            std::uint32_t                                                     maxDecompressionCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDecompressMemoryIndirectCountNV>
    {
        constexpr static auto Name = "vkCmdDecompressMemoryIndirectCountNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     indirectCommandsAddress,
            std::uint64_t                                                     indirectCommandsCountAddress,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDecompressMemoryNV>
    {
        constexpr static auto Name = "vkCmdDecompressMemoryNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     decompressRegionCount,
            const DecompressMemoryRegionNV*                                   pDecompressMemoryRegions );
    };

    template <>
    struct FunctionTraits <Function::CmdDispatch>
    {
        constexpr static auto Name = "vkCmdDispatch";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     groupCountX,
            std::uint32_t                                                     groupCountY,
            std::uint32_t                                                     groupCountZ );
    };

    template <>
    struct FunctionTraits <Function::CmdDispatchBase>
    {
        constexpr static auto Name = "vkCmdDispatchBase";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     baseGroupX,
            std::uint32_t                                                     baseGroupY,
            std::uint32_t                                                     baseGroupZ,
            std::uint32_t                                                     groupCountX,
            std::uint32_t                                                     groupCountY,
            std::uint32_t                                                     groupCountZ );
    };

    template <>
    struct FunctionTraits <Function::CmdDispatchDataGraphARM>
    {
        constexpr static auto Name = "vkCmdDispatchDataGraphARM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::DataGraphPipelineSessionARM>*               session,
            const DataGraphPipelineDispatchInfoARM*                           pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDispatchGraphIndirectCountAMDX>
    {
        constexpr static auto Name = "vkCmdDispatchGraphIndirectCountAMDX";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     scratch,
            std::uint64_t                                                     scratchSize,
            std::uint64_t                                                     countInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDispatchIndirect>
    {
        constexpr static auto Name = "vkCmdDispatchIndirect";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset );
    };

    template <>
    struct FunctionTraits <Function::CmdDispatchIndirect2KHR>
    {
        constexpr static auto Name = "vkCmdDispatchIndirect2KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DispatchIndirect2InfoKHR*                                   pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDispatchTileQCOM>
    {
        constexpr static auto Name = "vkCmdDispatchTileQCOM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DispatchTileInfoQCOM*                                       pDispatchTileInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDraw>
    {
        constexpr static auto Name = "vkCmdDraw";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     vertexCount,
            std::uint32_t                                                     instanceCount,
            std::uint32_t                                                     firstVertex,
            std::uint32_t                                                     firstInstance );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawClusterHUAWEI>
    {
        constexpr static auto Name = "vkCmdDrawClusterHUAWEI";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     groupCountX,
            std::uint32_t                                                     groupCountY,
            std::uint32_t                                                     groupCountZ );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawClusterIndirectHUAWEI>
    {
        constexpr static auto Name = "vkCmdDrawClusterIndirectHUAWEI";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndexed>
    {
        constexpr static auto Name = "vkCmdDrawIndexed";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     indexCount,
            std::uint32_t                                                     instanceCount,
            std::uint32_t                                                     firstIndex,
            std::int32_t                                                      vertexOffset,
            std::uint32_t                                                     firstInstance );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndexedIndirect>
    {
        constexpr static auto Name = "vkCmdDrawIndexedIndirect";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            std::uint32_t                                                     drawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndexedIndirect2KHR>
    {
        constexpr static auto Name = "vkCmdDrawIndexedIndirect2KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DrawIndirect2InfoKHR*                                       pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndexedIndirectCount>
    {
        constexpr static auto Name = "vkCmdDrawIndexedIndirectCount";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            Reference<ObjectType::Buffer>*                                    countBuffer,
            std::uint64_t                                                     countBufferOffset,
            std::uint32_t                                                     maxDrawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndexedIndirectCount2KHR>
    {
        constexpr static auto Name = "vkCmdDrawIndexedIndirectCount2KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DrawIndirectCount2InfoKHR*                                  pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndirect>
    {
        constexpr static auto Name = "vkCmdDrawIndirect";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            std::uint32_t                                                     drawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndirect2KHR>
    {
        constexpr static auto Name = "vkCmdDrawIndirect2KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DrawIndirect2InfoKHR*                                       pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndirectByteCount2EXT>
    {
        constexpr static auto Name = "vkCmdDrawIndirectByteCount2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     instanceCount,
            std::uint32_t                                                     firstInstance,
            const BindTransformFeedbackBuffer2InfoEXT*                        pCounterInfo,
            std::uint32_t                                                     counterOffset,
            std::uint32_t                                                     vertexStride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndirectByteCountEXT>
    {
        constexpr static auto Name = "vkCmdDrawIndirectByteCountEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     instanceCount,
            std::uint32_t                                                     firstInstance,
            Reference<ObjectType::Buffer>*                                    counterBuffer,
            std::uint64_t                                                     counterBufferOffset,
            std::uint32_t                                                     counterOffset,
            std::uint32_t                                                     vertexStride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndirectCount>
    {
        constexpr static auto Name = "vkCmdDrawIndirectCount";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            Reference<ObjectType::Buffer>*                                    countBuffer,
            std::uint64_t                                                     countBufferOffset,
            std::uint32_t                                                     maxDrawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawIndirectCount2KHR>
    {
        constexpr static auto Name = "vkCmdDrawIndirectCount2KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DrawIndirectCount2InfoKHR*                                  pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksEXT>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     groupCountX,
            std::uint32_t                                                     groupCountY,
            std::uint32_t                                                     groupCountZ );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksIndirect2EXT>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksIndirect2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DrawIndirect2InfoKHR*                                       pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksIndirectCount2EXT>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksIndirectCount2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DrawIndirectCount2InfoKHR*                                  pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksIndirectCountEXT>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksIndirectCountEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            Reference<ObjectType::Buffer>*                                    countBuffer,
            std::uint64_t                                                     countBufferOffset,
            std::uint32_t                                                     maxDrawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksIndirectCountNV>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksIndirectCountNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            Reference<ObjectType::Buffer>*                                    countBuffer,
            std::uint64_t                                                     countBufferOffset,
            std::uint32_t                                                     maxDrawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksIndirectEXT>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksIndirectEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            std::uint32_t                                                     drawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksIndirectNV>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksIndirectNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    buffer,
            std::uint64_t                                                     offset,
            std::uint32_t                                                     drawCount,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMeshTasksNV>
    {
        constexpr static auto Name = "vkCmdDrawMeshTasksNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     taskCount,
            std::uint32_t                                                     firstTask );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMultiEXT>
    {
        constexpr static auto Name = "vkCmdDrawMultiEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     drawCount,
            const MultiDrawInfoEXT*                                           pVertexInfo,
            std::uint32_t                                                     instanceCount,
            std::uint32_t                                                     firstInstance,
            std::uint32_t                                                     stride );
    };

    template <>
    struct FunctionTraits <Function::CmdDrawMultiIndexedEXT>
    {
        constexpr static auto Name = "vkCmdDrawMultiIndexedEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     drawCount,
            const MultiDrawIndexedInfoEXT*                                    pIndexInfo,
            std::uint32_t                                                     instanceCount,
            std::uint32_t                                                     firstInstance,
            std::uint32_t                                                     stride,
            const std::int32_t*                                               pVertexOffset );
    };

    template <>
    struct FunctionTraits <Function::CmdEndConditionalRenderingEXT>
    {
        constexpr static auto Name = "vkCmdEndConditionalRenderingEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdEndDebugUtilsLabelEXT>
    {
        constexpr static auto Name = "vkCmdEndDebugUtilsLabelEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdEndGpaSampleAMD>
    {
        constexpr static auto Name = "vkCmdEndGpaSampleAMD";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession,
            std::uint32_t                                                     sampleID );
    };

    template <>
    struct FunctionTraits <Function::CmdEndGpaSessionAMD>
    {
        constexpr static auto Name = "vkCmdEndGpaSessionAMD";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession );
    };

    template <>
    struct FunctionTraits <Function::CmdEndPerTileExecutionQCOM>
    {
        constexpr static auto Name = "vkCmdEndPerTileExecutionQCOM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PerTileEndInfoQCOM*                                         pPerTileEndInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdEndQuery>
    {
        constexpr static auto Name = "vkCmdEndQuery";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     query );
    };

    template <>
    struct FunctionTraits <Function::CmdEndQueryIndexedEXT>
    {
        constexpr static auto Name = "vkCmdEndQueryIndexedEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     query,
            std::uint32_t                                                     index );
    };

    template <>
    struct FunctionTraits <Function::CmdEndRenderPass>
    {
        constexpr static auto Name = "vkCmdEndRenderPass";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdEndRenderPass2>
    {
        constexpr static auto Name = "vkCmdEndRenderPass2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const SubpassEndInfo*                                             pSubpassEndInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdEndRendering>
    {
        constexpr static auto Name = "vkCmdEndRendering";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdEndRendering2KHR>
    {
        constexpr static auto Name = "vkCmdEndRendering2KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const RenderingEndInfoKHR*                                        pRenderingEndInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdEndShaderInstrumentationARM>
    {
        constexpr static auto Name = "vkCmdEndShaderInstrumentationARM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdEndTransformFeedback2EXT>
    {
        constexpr static auto Name = "vkCmdEndTransformFeedback2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstCounterRange,
            std::uint32_t                                                     counterRangeCount,
            const BindTransformFeedbackBuffer2InfoEXT*                        pCounterInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdEndTransformFeedbackEXT>
    {
        constexpr static auto Name = "vkCmdEndTransformFeedbackEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstCounterBuffer,
            std::uint32_t                                                     counterBufferCount,
            Reference<ObjectType::Buffer>**                                   pCounterBuffers,
            const std::uint64_t*                                              pCounterBufferOffsets );
    };

    template <>
    struct FunctionTraits <Function::CmdExecuteCommands>
    {
        constexpr static auto Name = "vkCmdExecuteCommands";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     commandBufferCount,
            Reference<ObjectType::CommandBuffer>**                            pCommandBuffers );
    };

    template <>
    struct FunctionTraits <Function::CmdExecuteGeneratedCommandsEXT>
    {
        constexpr static auto Name = "vkCmdExecuteGeneratedCommandsEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     isPreprocessed,
            const GeneratedCommandsInfoEXT*                                   pGeneratedCommandsInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdExecuteGeneratedCommandsNV>
    {
        constexpr static auto Name = "vkCmdExecuteGeneratedCommandsNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     isPreprocessed,
            const GeneratedCommandsInfoNV*                                    pGeneratedCommandsInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdFillBuffer>
    {
        constexpr static auto Name = "vkCmdFillBuffer";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    dstBuffer,
            std::uint64_t                                                     dstOffset,
            std::uint64_t                                                     size,
            std::uint32_t                                                     data );
    };

    template <>
    struct FunctionTraits <Function::CmdFillMemoryKHR>
    {
        constexpr static auto Name = "vkCmdFillMemoryKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DeviceAddressRangeKHR*                                      pDstRange,
            std::uint32_t                                                     dstFlags,
            std::uint32_t                                                     data );
    };

    template <>
    struct FunctionTraits <Function::CmdInitializeGraphScratchMemoryAMDX>
    {
        constexpr static auto Name = "vkCmdInitializeGraphScratchMemoryAMDX";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Pipeline>*                                  executionGraph,
            std::uint64_t                                                     scratch,
            std::uint64_t                                                     scratchSize );
    };

    template <>
    struct FunctionTraits <Function::CmdInsertDebugUtilsLabelEXT>
    {
        constexpr static auto Name = "vkCmdInsertDebugUtilsLabelEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DebugUtilsLabelEXT*                                         pLabelInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdNextSubpass>
    {
        constexpr static auto Name = "vkCmdNextSubpass";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            SubpassContents                                                   contents );
    };

    template <>
    struct FunctionTraits <Function::CmdNextSubpass2>
    {
        constexpr static auto Name = "vkCmdNextSubpass2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const SubpassBeginInfo*                                           pSubpassBeginInfo,
            const SubpassEndInfo*                                             pSubpassEndInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdOpticalFlowExecuteNV>
    {
        constexpr static auto Name = "vkCmdOpticalFlowExecuteNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::OpticalFlowSessionNV>*                      session,
            const OpticalFlowExecuteInfoNV*                                   pExecuteInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdPipelineBarrier>
    {
        constexpr static auto Name = "vkCmdPipelineBarrier";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     srcStageMask,
            std::uint32_t                                                     dstStageMask,
            std::uint32_t                                                     dependencyFlags,
            std::uint32_t                                                     memoryBarrierCount,
            const MemoryBarrier*                                              pMemoryBarriers,
            std::uint32_t                                                     bufferMemoryBarrierCount,
            const BufferMemoryBarrier*                                        pBufferMemoryBarriers,
            std::uint32_t                                                     imageMemoryBarrierCount,
            const ImageMemoryBarrier*                                         pImageMemoryBarriers );
    };

    template <>
    struct FunctionTraits <Function::CmdPipelineBarrier2>
    {
        constexpr static auto Name = "vkCmdPipelineBarrier2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DependencyInfo*                                             pDependencyInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdPreprocessGeneratedCommandsEXT>
    {
        constexpr static auto Name = "vkCmdPreprocessGeneratedCommandsEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const GeneratedCommandsInfoEXT*                                   pGeneratedCommandsInfo,
            Reference<ObjectType::CommandBuffer>*                             stateCommandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdPreprocessGeneratedCommandsNV>
    {
        constexpr static auto Name = "vkCmdPreprocessGeneratedCommandsNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const GeneratedCommandsInfoNV*                                    pGeneratedCommandsInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdPushConstants>
    {
        constexpr static auto Name = "vkCmdPushConstants";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::PipelineLayout>*                            layout,
            std::uint32_t                                                     stageFlags,
            std::uint32_t                                                     offset,
            std::uint32_t                                                     size,
            const void*                                                       pValues );
    };

    template <>
    struct FunctionTraits <Function::CmdPushConstants2>
    {
        constexpr static auto Name = "vkCmdPushConstants2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PushConstantsInfo*                                          pPushConstantsInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdPushDataEXT>
    {
        constexpr static auto Name = "vkCmdPushDataEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PushDataInfoEXT*                                            pPushDataInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdPushDescriptorSet>
    {
        constexpr static auto Name = "vkCmdPushDescriptorSet";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineBindPoint                                                 pipelineBindPoint,
            Reference<ObjectType::PipelineLayout>*                            layout,
            std::uint32_t                                                     set,
            std::uint32_t                                                     descriptorWriteCount,
            const WriteDescriptorSet*                                         pDescriptorWrites );
    };

    template <>
    struct FunctionTraits <Function::CmdPushDescriptorSet2>
    {
        constexpr static auto Name = "vkCmdPushDescriptorSet2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PushDescriptorSetInfo*                                      pPushDescriptorSetInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdPushDescriptorSetWithTemplate>
    {
        constexpr static auto Name = "vkCmdPushDescriptorSetWithTemplate";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::DescriptorUpdateTemplate>*                  descriptorUpdateTemplate,
            Reference<ObjectType::PipelineLayout>*                            layout,
            std::uint32_t                                                     set,
            const void*                                                       pData );
    };

    template <>
    struct FunctionTraits <Function::CmdPushDescriptorSetWithTemplate2>
    {
        constexpr static auto Name = "vkCmdPushDescriptorSetWithTemplate2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PushDescriptorSetWithTemplateInfo*                          pPushDescriptorSetWithTemplateInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdRefreshObjectsKHR>
    {
        constexpr static auto Name = "vkCmdRefreshObjectsKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const RefreshObjectListKHR*                                       pRefreshObjects );
    };

    template <>
    struct FunctionTraits <Function::CmdResetEvent>
    {
        constexpr static auto Name = "vkCmdResetEvent";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Event>*                                     event,
            std::uint32_t                                                     stageMask );
    };

    template <>
    struct FunctionTraits <Function::CmdResetEvent2>
    {
        constexpr static auto Name = "vkCmdResetEvent2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Event>*                                     event,
            std::uint64_t                                                     stageMask );
    };

    template <>
    struct FunctionTraits <Function::CmdResetQueryPool>
    {
        constexpr static auto Name = "vkCmdResetQueryPool";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery,
            std::uint32_t                                                     queryCount );
    };

    template <>
    struct FunctionTraits <Function::CmdResolveImage>
    {
        constexpr static auto Name = "vkCmdResolveImage";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Image>*                                     srcImage,
            ImageLayout                                                       srcImageLayout,
            Reference<ObjectType::Image>*                                     dstImage,
            ImageLayout                                                       dstImageLayout,
            std::uint32_t                                                     regionCount,
            const ImageResolve*                                               pRegions );
    };

    template <>
    struct FunctionTraits <Function::CmdResolveImage2>
    {
        constexpr static auto Name = "vkCmdResolveImage2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const ResolveImageInfo2*                                          pResolveImageInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetAlphaToCoverageEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetAlphaToCoverageEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     alphaToCoverageEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetAlphaToOneEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetAlphaToOneEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     alphaToOneEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetAttachmentFeedbackLoopEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetAttachmentFeedbackLoopEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     aspectMask );
    };

    template <>
    struct FunctionTraits <Function::CmdSetBlendConstants>
    {
        constexpr static auto Name = "vkCmdSetBlendConstants";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            float                                                             blendConstants );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCheckpointNV>
    {
        constexpr static auto Name = "vkCmdSetCheckpointNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const void*                                                       pCheckpointMarker );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCoarseSampleOrderNV>
    {
        constexpr static auto Name = "vkCmdSetCoarseSampleOrderNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            CoarseSampleOrderTypeNV                                           sampleOrderType,
            std::uint32_t                                                     customSampleOrderCount,
            const CoarseSampleOrderCustomNV*                                  pCustomSampleOrders );
    };

    template <>
    struct FunctionTraits <Function::CmdSetColorBlendAdvancedEXT>
    {
        constexpr static auto Name = "vkCmdSetColorBlendAdvancedEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstAttachment,
            std::uint32_t                                                     attachmentCount,
            const ColorBlendAdvancedEXT*                                      pColorBlendAdvanced );
    };

    template <>
    struct FunctionTraits <Function::CmdSetColorBlendEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetColorBlendEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstAttachment,
            std::uint32_t                                                     attachmentCount,
            const std::uint32_t*                                              pColorBlendEnables );
    };

    template <>
    struct FunctionTraits <Function::CmdSetColorBlendEquationEXT>
    {
        constexpr static auto Name = "vkCmdSetColorBlendEquationEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstAttachment,
            std::uint32_t                                                     attachmentCount,
            const ColorBlendEquationEXT*                                      pColorBlendEquations );
    };

    template <>
    struct FunctionTraits <Function::CmdSetColorWriteEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetColorWriteEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     attachmentCount,
            const std::uint32_t*                                              pColorWriteEnables );
    };

    template <>
    struct FunctionTraits <Function::CmdSetColorWriteMaskEXT>
    {
        constexpr static auto Name = "vkCmdSetColorWriteMaskEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstAttachment,
            std::uint32_t                                                     attachmentCount,
            const std::uint32_t*                                              pColorWriteMasks );
    };

    template <>
    struct FunctionTraits <Function::CmdSetComputeOccupancyPriorityNV>
    {
        constexpr static auto Name = "vkCmdSetComputeOccupancyPriorityNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const ComputeOccupancyPriorityParametersNV*                       pParameters );
    };

    template <>
    struct FunctionTraits <Function::CmdSetConservativeRasterizationModeEXT>
    {
        constexpr static auto Name = "vkCmdSetConservativeRasterizationModeEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            ConservativeRasterizationModeEXT                                  conservativeRasterizationMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCoverageModulationModeNV>
    {
        constexpr static auto Name = "vkCmdSetCoverageModulationModeNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            CoverageModulationModeNV                                          coverageModulationMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCoverageModulationTableEnableNV>
    {
        constexpr static auto Name = "vkCmdSetCoverageModulationTableEnableNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     coverageModulationTableEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCoverageModulationTableNV>
    {
        constexpr static auto Name = "vkCmdSetCoverageModulationTableNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     coverageModulationTableCount,
            const float*                                                      pCoverageModulationTable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCoverageReductionModeNV>
    {
        constexpr static auto Name = "vkCmdSetCoverageReductionModeNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            CoverageReductionModeNV                                           coverageReductionMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCoverageToColorEnableNV>
    {
        constexpr static auto Name = "vkCmdSetCoverageToColorEnableNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     coverageToColorEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCoverageToColorLocationNV>
    {
        constexpr static auto Name = "vkCmdSetCoverageToColorLocationNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     coverageToColorLocation );
    };

    template <>
    struct FunctionTraits <Function::CmdSetCullMode>
    {
        constexpr static auto Name = "vkCmdSetCullMode";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     cullMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthBias>
    {
        constexpr static auto Name = "vkCmdSetDepthBias";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            float                                                             depthBiasConstantFactor,
            float                                                             depthBiasClamp,
            float                                                             depthBiasSlopeFactor );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthBias2EXT>
    {
        constexpr static auto Name = "vkCmdSetDepthBias2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DepthBiasInfoEXT*                                           pDepthBiasInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthBiasEnable>
    {
        constexpr static auto Name = "vkCmdSetDepthBiasEnable";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     depthBiasEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthBounds>
    {
        constexpr static auto Name = "vkCmdSetDepthBounds";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            float                                                             minDepthBounds,
            float                                                             maxDepthBounds );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthBoundsTestEnable>
    {
        constexpr static auto Name = "vkCmdSetDepthBoundsTestEnable";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     depthBoundsTestEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthClampEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetDepthClampEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     depthClampEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthClampRangeEXT>
    {
        constexpr static auto Name = "vkCmdSetDepthClampRangeEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            DepthClampModeEXT                                                 depthClampMode,
            const DepthClampRangeEXT*                                         pDepthClampRange );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthClipEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetDepthClipEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     depthClipEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthClipNegativeOneToOneEXT>
    {
        constexpr static auto Name = "vkCmdSetDepthClipNegativeOneToOneEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     negativeOneToOne );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthCompareOp>
    {
        constexpr static auto Name = "vkCmdSetDepthCompareOp";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            CompareOp                                                         depthCompareOp );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthTestEnable>
    {
        constexpr static auto Name = "vkCmdSetDepthTestEnable";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     depthTestEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDepthWriteEnable>
    {
        constexpr static auto Name = "vkCmdSetDepthWriteEnable";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     depthWriteEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDescriptorBufferOffsets2EXT>
    {
        constexpr static auto Name = "vkCmdSetDescriptorBufferOffsets2EXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const SetDescriptorBufferOffsetsInfoEXT*                          pSetDescriptorBufferOffsetsInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDescriptorBufferOffsetsEXT>
    {
        constexpr static auto Name = "vkCmdSetDescriptorBufferOffsetsEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineBindPoint                                                 pipelineBindPoint,
            Reference<ObjectType::PipelineLayout>*                            layout,
            std::uint32_t                                                     firstSet,
            std::uint32_t                                                     setCount,
            const std::uint32_t*                                              pBufferIndices,
            const std::uint64_t*                                              pOffsets );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDeviceMask>
    {
        constexpr static auto Name = "vkCmdSetDeviceMask";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     deviceMask );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDiscardRectangleEXT>
    {
        constexpr static auto Name = "vkCmdSetDiscardRectangleEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstDiscardRectangle,
            std::uint32_t                                                     discardRectangleCount,
            const Rect2D*                                                     pDiscardRectangles );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDiscardRectangleEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetDiscardRectangleEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     discardRectangleEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDiscardRectangleModeEXT>
    {
        constexpr static auto Name = "vkCmdSetDiscardRectangleModeEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            DiscardRectangleModeEXT                                           discardRectangleMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetDispatchParametersARM>
    {
        constexpr static auto Name = "vkCmdSetDispatchParametersARM";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DispatchParametersARM*                                      pDispatchParameters );
    };

    template <>
    struct FunctionTraits <Function::CmdSetEvent>
    {
        constexpr static auto Name = "vkCmdSetEvent";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Event>*                                     event,
            std::uint32_t                                                     stageMask );
    };

    template <>
    struct FunctionTraits <Function::CmdSetEvent2>
    {
        constexpr static auto Name = "vkCmdSetEvent2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Event>*                                     event,
            const DependencyInfo*                                             pDependencyInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetExclusiveScissorEnableNV>
    {
        constexpr static auto Name = "vkCmdSetExclusiveScissorEnableNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstExclusiveScissor,
            std::uint32_t                                                     exclusiveScissorCount,
            const std::uint32_t*                                              pExclusiveScissorEnables );
    };

    template <>
    struct FunctionTraits <Function::CmdSetExclusiveScissorNV>
    {
        constexpr static auto Name = "vkCmdSetExclusiveScissorNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstExclusiveScissor,
            std::uint32_t                                                     exclusiveScissorCount,
            const Rect2D*                                                     pExclusiveScissors );
    };

    template <>
    struct FunctionTraits <Function::CmdSetExtraPrimitiveOverestimationSizeEXT>
    {
        constexpr static auto Name = "vkCmdSetExtraPrimitiveOverestimationSizeEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            float                                                             extraPrimitiveOverestimationSize );
    };

    template <>
    struct FunctionTraits <Function::CmdSetFragmentShadingRateEnumNV>
    {
        constexpr static auto Name = "vkCmdSetFragmentShadingRateEnumNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            FragmentShadingRateNV                                             shadingRate,
            FragmentShadingRateCombinerOpKHR                                  combinerOps );
    };

    template <>
    struct FunctionTraits <Function::CmdSetFragmentShadingRateKHR>
    {
        constexpr static auto Name = "vkCmdSetFragmentShadingRateKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const Extent2D*                                                   pFragmentSize,
            FragmentShadingRateCombinerOpKHR                                  combinerOps );
    };

    template <>
    struct FunctionTraits <Function::CmdSetFrontFace>
    {
        constexpr static auto Name = "vkCmdSetFrontFace";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            FrontFace                                                         frontFace );
    };

    template <>
    struct FunctionTraits <Function::CmdSetLineRasterizationModeEXT>
    {
        constexpr static auto Name = "vkCmdSetLineRasterizationModeEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            LineRasterizationMode                                             lineRasterizationMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetLineStipple>
    {
        constexpr static auto Name = "vkCmdSetLineStipple";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     lineStippleFactor,
            std::uint16_t                                                     lineStipplePattern );
    };

    template <>
    struct FunctionTraits <Function::CmdSetLineStippleEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetLineStippleEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     stippledLineEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetLineWidth>
    {
        constexpr static auto Name = "vkCmdSetLineWidth";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            float                                                             lineWidth );
    };

    template <>
    struct FunctionTraits <Function::CmdSetLogicOpEXT>
    {
        constexpr static auto Name = "vkCmdSetLogicOpEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            LogicOp                                                           logicOp );
    };

    template <>
    struct FunctionTraits <Function::CmdSetLogicOpEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetLogicOpEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     logicOpEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPatchControlPointsEXT>
    {
        constexpr static auto Name = "vkCmdSetPatchControlPointsEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     patchControlPoints );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPerformanceMarkerINTEL>
    {
        constexpr static auto Name = "vkCmdSetPerformanceMarkerINTEL";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PerformanceMarkerInfoINTEL*                                 pMarkerInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPerformanceOverrideINTEL>
    {
        constexpr static auto Name = "vkCmdSetPerformanceOverrideINTEL";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PerformanceOverrideInfoINTEL*                               pOverrideInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPerformanceStreamMarkerINTEL>
    {
        constexpr static auto Name = "vkCmdSetPerformanceStreamMarkerINTEL";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const PerformanceStreamMarkerInfoINTEL*                           pMarkerInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPolygonModeEXT>
    {
        constexpr static auto Name = "vkCmdSetPolygonModeEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PolygonMode                                                       polygonMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPrimitiveRestartEnable>
    {
        constexpr static auto Name = "vkCmdSetPrimitiveRestartEnable";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     primitiveRestartEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPrimitiveRestartIndexEXT>
    {
        constexpr static auto Name = "vkCmdSetPrimitiveRestartIndexEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     primitiveRestartIndex );
    };

    template <>
    struct FunctionTraits <Function::CmdSetPrimitiveTopology>
    {
        constexpr static auto Name = "vkCmdSetPrimitiveTopology";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PrimitiveTopology                                                 primitiveTopology );
    };

    template <>
    struct FunctionTraits <Function::CmdSetProvokingVertexModeEXT>
    {
        constexpr static auto Name = "vkCmdSetProvokingVertexModeEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            ProvokingVertexModeEXT                                            provokingVertexMode );
    };

    template <>
    struct FunctionTraits <Function::CmdSetRasterizationSamplesEXT>
    {
        constexpr static auto Name = "vkCmdSetRasterizationSamplesEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            SampleCountFlagBits                                               rasterizationSamples );
    };

    template <>
    struct FunctionTraits <Function::CmdSetRasterizationStreamEXT>
    {
        constexpr static auto Name = "vkCmdSetRasterizationStreamEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     rasterizationStream );
    };

    template <>
    struct FunctionTraits <Function::CmdSetRasterizerDiscardEnable>
    {
        constexpr static auto Name = "vkCmdSetRasterizerDiscardEnable";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     rasterizerDiscardEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetRayTracingPipelineStackSizeKHR>
    {
        constexpr static auto Name = "vkCmdSetRayTracingPipelineStackSizeKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     pipelineStackSize );
    };

    template <>
    struct FunctionTraits <Function::CmdSetRenderingAttachmentLocations>
    {
        constexpr static auto Name = "vkCmdSetRenderingAttachmentLocations";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const RenderingAttachmentLocationInfo*                            pLocationInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetRenderingInputAttachmentIndices>
    {
        constexpr static auto Name = "vkCmdSetRenderingInputAttachmentIndices";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const RenderingInputAttachmentIndexInfo*                          pInputAttachmentIndexInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetRepresentativeFragmentTestEnableNV>
    {
        constexpr static auto Name = "vkCmdSetRepresentativeFragmentTestEnableNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     representativeFragmentTestEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetSampleLocationsEXT>
    {
        constexpr static auto Name = "vkCmdSetSampleLocationsEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const SampleLocationsInfoEXT*                                     pSampleLocationsInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdSetSampleLocationsEnableEXT>
    {
        constexpr static auto Name = "vkCmdSetSampleLocationsEnableEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     sampleLocationsEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetSampleMaskEXT>
    {
        constexpr static auto Name = "vkCmdSetSampleMaskEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            SampleCountFlagBits                                               samples,
            const std::uint32_t*                                              pSampleMask );
    };

    template <>
    struct FunctionTraits <Function::CmdSetScissor>
    {
        constexpr static auto Name = "vkCmdSetScissor";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstScissor,
            std::uint32_t                                                     scissorCount,
            const Rect2D*                                                     pScissors );
    };

    template <>
    struct FunctionTraits <Function::CmdSetScissorWithCount>
    {
        constexpr static auto Name = "vkCmdSetScissorWithCount";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     scissorCount,
            const Rect2D*                                                     pScissors );
    };

    template <>
    struct FunctionTraits <Function::CmdSetShadingRateImageEnableNV>
    {
        constexpr static auto Name = "vkCmdSetShadingRateImageEnableNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     shadingRateImageEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetStencilCompareMask>
    {
        constexpr static auto Name = "vkCmdSetStencilCompareMask";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     faceMask,
            std::uint32_t                                                     compareMask );
    };

    template <>
    struct FunctionTraits <Function::CmdSetStencilOp>
    {
        constexpr static auto Name = "vkCmdSetStencilOp";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     faceMask,
            StencilOp                                                         failOp,
            StencilOp                                                         passOp,
            StencilOp                                                         depthFailOp,
            CompareOp                                                         compareOp );
    };

    template <>
    struct FunctionTraits <Function::CmdSetStencilReference>
    {
        constexpr static auto Name = "vkCmdSetStencilReference";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     faceMask,
            std::uint32_t                                                     reference );
    };

    template <>
    struct FunctionTraits <Function::CmdSetStencilTestEnable>
    {
        constexpr static auto Name = "vkCmdSetStencilTestEnable";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     stencilTestEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetStencilWriteMask>
    {
        constexpr static auto Name = "vkCmdSetStencilWriteMask";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     faceMask,
            std::uint32_t                                                     writeMask );
    };

    template <>
    struct FunctionTraits <Function::CmdSetTessellationDomainOriginEXT>
    {
        constexpr static auto Name = "vkCmdSetTessellationDomainOriginEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            TessellationDomainOrigin                                          domainOrigin );
    };

    template <>
    struct FunctionTraits <Function::CmdSetVertexInputEXT>
    {
        constexpr static auto Name = "vkCmdSetVertexInputEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     vertexBindingDescriptionCount,
            const VertexInputBindingDescription2EXT*                          pVertexBindingDescriptions,
            std::uint32_t                                                     vertexAttributeDescriptionCount,
            const VertexInputAttributeDescription2EXT*                        pVertexAttributeDescriptions );
    };

    template <>
    struct FunctionTraits <Function::CmdSetViewport>
    {
        constexpr static auto Name = "vkCmdSetViewport";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstViewport,
            std::uint32_t                                                     viewportCount,
            const Viewport*                                                   pViewports );
    };

    template <>
    struct FunctionTraits <Function::CmdSetViewportShadingRatePaletteNV>
    {
        constexpr static auto Name = "vkCmdSetViewportShadingRatePaletteNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstViewport,
            std::uint32_t                                                     viewportCount,
            const ShadingRatePaletteNV*                                       pShadingRatePalettes );
    };

    template <>
    struct FunctionTraits <Function::CmdSetViewportSwizzleNV>
    {
        constexpr static auto Name = "vkCmdSetViewportSwizzleNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstViewport,
            std::uint32_t                                                     viewportCount,
            const ViewportSwizzleNV*                                          pViewportSwizzles );
    };

    template <>
    struct FunctionTraits <Function::CmdSetViewportWScalingEnableNV>
    {
        constexpr static auto Name = "vkCmdSetViewportWScalingEnableNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     viewportWScalingEnable );
    };

    template <>
    struct FunctionTraits <Function::CmdSetViewportWScalingNV>
    {
        constexpr static auto Name = "vkCmdSetViewportWScalingNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     firstViewport,
            std::uint32_t                                                     viewportCount,
            const ViewportWScalingNV*                                         pViewportWScalings );
    };

    template <>
    struct FunctionTraits <Function::CmdSetViewportWithCount>
    {
        constexpr static auto Name = "vkCmdSetViewportWithCount";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     viewportCount,
            const Viewport*                                                   pViewports );
    };

    template <>
    struct FunctionTraits <Function::CmdSubpassShadingHUAWEI>
    {
        constexpr static auto Name = "vkCmdSubpassShadingHUAWEI";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::CmdTraceRaysIndirect2KHR>
    {
        constexpr static auto Name = "vkCmdTraceRaysIndirect2KHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     indirectDeviceAddress );
    };

    template <>
    struct FunctionTraits <Function::CmdTraceRaysIndirectKHR>
    {
        constexpr static auto Name = "vkCmdTraceRaysIndirectKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const StridedDeviceAddressRegionKHR*                              pRaygenShaderBindingTable,
            const StridedDeviceAddressRegionKHR*                              pMissShaderBindingTable,
            const StridedDeviceAddressRegionKHR*                              pHitShaderBindingTable,
            const StridedDeviceAddressRegionKHR*                              pCallableShaderBindingTable,
            std::uint64_t                                                     indirectDeviceAddress );
    };

    template <>
    struct FunctionTraits <Function::CmdTraceRaysKHR>
    {
        constexpr static auto Name = "vkCmdTraceRaysKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const StridedDeviceAddressRegionKHR*                              pRaygenShaderBindingTable,
            const StridedDeviceAddressRegionKHR*                              pMissShaderBindingTable,
            const StridedDeviceAddressRegionKHR*                              pHitShaderBindingTable,
            const StridedDeviceAddressRegionKHR*                              pCallableShaderBindingTable,
            std::uint32_t                                                     width,
            std::uint32_t                                                     height,
            std::uint32_t                                                     depth );
    };

    template <>
    struct FunctionTraits <Function::CmdTraceRaysNV>
    {
        constexpr static auto Name = "vkCmdTraceRaysNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    raygenShaderBindingTableBuffer,
            std::uint64_t                                                     raygenShaderBindingOffset,
            Reference<ObjectType::Buffer>*                                    missShaderBindingTableBuffer,
            std::uint64_t                                                     missShaderBindingOffset,
            std::uint64_t                                                     missShaderBindingStride,
            Reference<ObjectType::Buffer>*                                    hitShaderBindingTableBuffer,
            std::uint64_t                                                     hitShaderBindingOffset,
            std::uint64_t                                                     hitShaderBindingStride,
            Reference<ObjectType::Buffer>*                                    callableShaderBindingTableBuffer,
            std::uint64_t                                                     callableShaderBindingOffset,
            std::uint64_t                                                     callableShaderBindingStride,
            std::uint32_t                                                     width,
            std::uint32_t                                                     height,
            std::uint32_t                                                     depth );
    };

    template <>
    struct FunctionTraits <Function::CmdUpdateBuffer>
    {
        constexpr static auto Name = "vkCmdUpdateBuffer";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            Reference<ObjectType::Buffer>*                                    dstBuffer,
            std::uint64_t                                                     dstOffset,
            std::uint64_t                                                     dataSize,
            const void*                                                       pData );
    };

    template <>
    struct FunctionTraits <Function::CmdUpdateMemoryKHR>
    {
        constexpr static auto Name = "vkCmdUpdateMemoryKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const DeviceAddressRangeKHR*                                      pDstRange,
            std::uint32_t                                                     dstFlags,
            std::uint64_t                                                     dataSize,
            const void*                                                       pData );
    };

    template <>
    struct FunctionTraits <Function::CmdUpdatePipelineIndirectBufferNV>
    {
        constexpr static auto Name = "vkCmdUpdatePipelineIndirectBufferNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineBindPoint                                                 pipelineBindPoint,
            Reference<ObjectType::Pipeline>*                                  pipeline );
    };

    template <>
    struct FunctionTraits <Function::CmdWaitEvents>
    {
        constexpr static auto Name = "vkCmdWaitEvents";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     eventCount,
            Reference<ObjectType::Event>**                                    pEvents,
            std::uint32_t                                                     srcStageMask,
            std::uint32_t                                                     dstStageMask,
            std::uint32_t                                                     memoryBarrierCount,
            const MemoryBarrier*                                              pMemoryBarriers,
            std::uint32_t                                                     bufferMemoryBarrierCount,
            const BufferMemoryBarrier*                                        pBufferMemoryBarriers,
            std::uint32_t                                                     imageMemoryBarrierCount,
            const ImageMemoryBarrier*                                         pImageMemoryBarriers );
    };

    template <>
    struct FunctionTraits <Function::CmdWaitEvents2>
    {
        constexpr static auto Name = "vkCmdWaitEvents2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     eventCount,
            Reference<ObjectType::Event>**                                    pEvents,
            const DependencyInfo*                                             pDependencyInfos );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteAccelerationStructuresPropertiesKHR>
    {
        constexpr static auto Name = "vkCmdWriteAccelerationStructuresPropertiesKHR";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     accelerationStructureCount,
            Reference<ObjectType::AccelerationStructureKHR>**                 pAccelerationStructures,
            QueryType                                                         queryType,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteAccelerationStructuresPropertiesNV>
    {
        constexpr static auto Name = "vkCmdWriteAccelerationStructuresPropertiesNV";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     accelerationStructureCount,
            Reference<ObjectType::AccelerationStructureNV>**                  pAccelerationStructures,
            QueryType                                                         queryType,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteBufferMarker2AMD>
    {
        constexpr static auto Name = "vkCmdWriteBufferMarker2AMD";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     stage,
            Reference<ObjectType::Buffer>*                                    dstBuffer,
            std::uint64_t                                                     dstOffset,
            std::uint32_t                                                     marker );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteBufferMarkerAMD>
    {
        constexpr static auto Name = "vkCmdWriteBufferMarkerAMD";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineStageFlagBits                                             pipelineStage,
            Reference<ObjectType::Buffer>*                                    dstBuffer,
            std::uint64_t                                                     dstOffset,
            std::uint32_t                                                     marker );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteMarkerToMemoryAMD>
    {
        constexpr static auto Name = "vkCmdWriteMarkerToMemoryAMD";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            const MemoryMarkerInfoAMD*                                        pInfo );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteMicromapsPropertiesEXT>
    {
        constexpr static auto Name = "vkCmdWriteMicromapsPropertiesEXT";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     micromapCount,
            Reference<ObjectType::MicromapEXT>**                              pMicromaps,
            QueryType                                                         queryType,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteTimestamp>
    {
        constexpr static auto Name = "vkCmdWriteTimestamp";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            PipelineStageFlagBits                                             pipelineStage,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     query );
    };

    template <>
    struct FunctionTraits <Function::CmdWriteTimestamp2>
    {
        constexpr static auto Name = "vkCmdWriteTimestamp2";
        using Type = void (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint64_t                                                     stage,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     query );
    };

    template <>
    struct FunctionTraits <Function::CompileDeferredNV>
    {
        constexpr static auto Name = "vkCompileDeferredNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Pipeline>*                                  pipeline,
            std::uint32_t                                                     shader );
    };

    template <>
    struct FunctionTraits <Function::ConvertCooperativeVectorMatrixNV>
    {
        constexpr static auto Name = "vkConvertCooperativeVectorMatrixNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ConvertCooperativeVectorMatrixInfoNV*                       pInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyAccelerationStructureKHR>
    {
        constexpr static auto Name = "vkCopyAccelerationStructureKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            const CopyAccelerationStructureInfoKHR*                           pInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyAccelerationStructureToMemoryKHR>
    {
        constexpr static auto Name = "vkCopyAccelerationStructureToMemoryKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            const CopyAccelerationStructureToMemoryInfoKHR*                   pInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyImageToImage>
    {
        constexpr static auto Name = "vkCopyImageToImage";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const CopyImageToImageInfo*                                       pCopyImageToImageInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyImageToMemory>
    {
        constexpr static auto Name = "vkCopyImageToMemory";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const CopyImageToMemoryInfo*                                      pCopyImageToMemoryInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyMemoryToAccelerationStructureKHR>
    {
        constexpr static auto Name = "vkCopyMemoryToAccelerationStructureKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            const CopyMemoryToAccelerationStructureInfoKHR*                   pInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyMemoryToImage>
    {
        constexpr static auto Name = "vkCopyMemoryToImage";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const CopyMemoryToImageInfo*                                      pCopyMemoryToImageInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyMemoryToMicromapEXT>
    {
        constexpr static auto Name = "vkCopyMemoryToMicromapEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            const CopyMemoryToMicromapInfoEXT*                                pInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyMicromapEXT>
    {
        constexpr static auto Name = "vkCopyMicromapEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            const CopyMicromapInfoEXT*                                        pInfo );
    };

    template <>
    struct FunctionTraits <Function::CopyMicromapToMemoryEXT>
    {
        constexpr static auto Name = "vkCopyMicromapToMemoryEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            const CopyMicromapToMemoryInfoEXT*                                pInfo );
    };

    template <>
    struct FunctionTraits <Function::CreateAccelerationStructure2KHR>
    {
        constexpr static auto Name = "vkCreateAccelerationStructure2KHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const AccelerationStructureCreateInfo2KHR*                        pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::AccelerationStructureKHR>**                 pAccelerationStructure );
    };

    template <>
    struct FunctionTraits <Function::CreateAccelerationStructureKHR>
    {
        constexpr static auto Name = "vkCreateAccelerationStructureKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const AccelerationStructureCreateInfoKHR*                         pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::AccelerationStructureKHR>**                 pAccelerationStructure );
    };

    template <>
    struct FunctionTraits <Function::CreateAccelerationStructureNV>
    {
        constexpr static auto Name = "vkCreateAccelerationStructureNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const AccelerationStructureCreateInfoNV*                          pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::AccelerationStructureNV>**                  pAccelerationStructure );
    };

    template <>
    struct FunctionTraits <Function::CreateBuffer>
    {
        constexpr static auto Name = "vkCreateBuffer";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const BufferCreateInfo*                                           pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Buffer>**                                   pBuffer );
    };

    template <>
    struct FunctionTraits <Function::CreateBufferView>
    {
        constexpr static auto Name = "vkCreateBufferView";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const BufferViewCreateInfo*                                       pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::BufferView>**                               pView );
    };

    template <>
    struct FunctionTraits <Function::CreateCommandPool>
    {
        constexpr static auto Name = "vkCreateCommandPool";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const CommandPoolCreateInfo*                                      pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::CommandPool>**                              pCommandPool );
    };

    template <>
    struct FunctionTraits <Function::CreateComputePipelines>
    {
        constexpr static auto Name = "vkCreateComputePipelines";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineCache>*                             pipelineCache,
            std::uint32_t                                                     createInfoCount,
            const ComputePipelineCreateInfo*                                  pCreateInfos,
            const void*                                                       pAllocator,
            Reference<ObjectType::Pipeline>**                                 pPipelines );
    };

    template <>
    struct FunctionTraits <Function::CreateCuFunctionNVX>
    {
        constexpr static auto Name = "vkCreateCuFunctionNVX";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const CuFunctionCreateInfoNVX*                                    pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::CuFunctionNVX>**                            pFunction );
    };

    template <>
    struct FunctionTraits <Function::CreateCuModuleNVX>
    {
        constexpr static auto Name = "vkCreateCuModuleNVX";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const CuModuleCreateInfoNVX*                                      pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::CuModuleNVX>**                              pModule );
    };

    template <>
    struct FunctionTraits <Function::CreateDataGraphPipelineSessionARM>
    {
        constexpr static auto Name = "vkCreateDataGraphPipelineSessionARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DataGraphPipelineSessionCreateInfoARM*                      pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DataGraphPipelineSessionARM>**              pSession );
    };

    template <>
    struct FunctionTraits <Function::CreateDataGraphPipelinesARM>
    {
        constexpr static auto Name = "vkCreateDataGraphPipelinesARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            Reference<ObjectType::PipelineCache>*                             pipelineCache,
            std::uint32_t                                                     createInfoCount,
            const DataGraphPipelineCreateInfoARM*                             pCreateInfos,
            const void*                                                       pAllocator,
            Reference<ObjectType::Pipeline>**                                 pPipelines );
    };

    template <>
    struct FunctionTraits <Function::CreateDebugReportCallbackEXT>
    {
        constexpr static auto Name = "vkCreateDebugReportCallbackEXT";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const DebugReportCallbackCreateInfoEXT*                           pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DebugReportCallbackEXT>**                   pCallback );
    };

    template <>
    struct FunctionTraits <Function::CreateDebugUtilsMessengerEXT>
    {
        constexpr static auto Name = "vkCreateDebugUtilsMessengerEXT";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const DebugUtilsMessengerCreateInfoEXT*                           pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DebugUtilsMessengerEXT>**                   pMessenger );
    };

    template <>
    struct FunctionTraits <Function::CreateDeferredOperationKHR>
    {
        constexpr static auto Name = "vkCreateDeferredOperationKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const void*                                                       pAllocator,
            Reference<ObjectType::DeferredOperationKHR>**                     pDeferredOperation );
    };

    template <>
    struct FunctionTraits <Function::CreateDescriptorPool>
    {
        constexpr static auto Name = "vkCreateDescriptorPool";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DescriptorPoolCreateInfo*                                   pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DescriptorPool>**                           pDescriptorPool );
    };

    template <>
    struct FunctionTraits <Function::CreateDescriptorSetLayout>
    {
        constexpr static auto Name = "vkCreateDescriptorSetLayout";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DescriptorSetLayoutCreateInfo*                              pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DescriptorSetLayout>**                      pSetLayout );
    };

    template <>
    struct FunctionTraits <Function::CreateDescriptorUpdateTemplate>
    {
        constexpr static auto Name = "vkCreateDescriptorUpdateTemplate";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DescriptorUpdateTemplateCreateInfo*                         pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DescriptorUpdateTemplate>**                 pDescriptorUpdateTemplate );
    };

    template <>
    struct FunctionTraits <Function::CreateDevice>
    {
        constexpr static auto Name = "vkCreateDevice";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const DeviceCreateInfo*                                           pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Device>**                                   pDevice );
    };

    template <>
    struct FunctionTraits <Function::CreateDisplayModeKHR>
    {
        constexpr static auto Name = "vkCreateDisplayModeKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::DisplayKHR>*                                display,
            const DisplayModeCreateInfoKHR*                                   pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::DisplayModeKHR>**                           pMode );
    };

    template <>
    struct FunctionTraits <Function::CreateDisplayPlaneSurfaceKHR>
    {
        constexpr static auto Name = "vkCreateDisplayPlaneSurfaceKHR";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const DisplaySurfaceCreateInfoKHR*                                pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SurfaceKHR>**                               pSurface );
    };

    template <>
    struct FunctionTraits <Function::CreateEvent>
    {
        constexpr static auto Name = "vkCreateEvent";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const EventCreateInfo*                                            pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Event>**                                    pEvent );
    };

    template <>
    struct FunctionTraits <Function::CreateExternalComputeQueueNV>
    {
        constexpr static auto Name = "vkCreateExternalComputeQueueNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ExternalComputeQueueCreateInfoNV*                           pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::ExternalComputeQueueNV>**                   pExternalQueue );
    };

    template <>
    struct FunctionTraits <Function::CreateFence>
    {
        constexpr static auto Name = "vkCreateFence";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const FenceCreateInfo*                                            pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Fence>**                                    pFence );
    };

    template <>
    struct FunctionTraits <Function::CreateFramebuffer>
    {
        constexpr static auto Name = "vkCreateFramebuffer";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const FramebufferCreateInfo*                                      pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Framebuffer>**                              pFramebuffer );
    };

    template <>
    struct FunctionTraits <Function::CreateGpaSessionAMD>
    {
        constexpr static auto Name = "vkCreateGpaSessionAMD";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const GpaSessionCreateInfoAMD*                                    pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::GpaSessionAMD>**                            pGpaSession );
    };

    template <>
    struct FunctionTraits <Function::CreateGraphicsPipelines>
    {
        constexpr static auto Name = "vkCreateGraphicsPipelines";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineCache>*                             pipelineCache,
            std::uint32_t                                                     createInfoCount,
            const GraphicsPipelineCreateInfo*                                 pCreateInfos,
            const void*                                                       pAllocator,
            Reference<ObjectType::Pipeline>**                                 pPipelines );
    };

    template <>
    struct FunctionTraits <Function::CreateHeadlessSurfaceEXT>
    {
        constexpr static auto Name = "vkCreateHeadlessSurfaceEXT";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const HeadlessSurfaceCreateInfoEXT*                               pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SurfaceKHR>**                               pSurface );
    };

    template <>
    struct FunctionTraits <Function::CreateImage>
    {
        constexpr static auto Name = "vkCreateImage";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageCreateInfo*                                            pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Image>**                                    pImage );
    };

    template <>
    struct FunctionTraits <Function::CreateImageView>
    {
        constexpr static auto Name = "vkCreateImageView";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageViewCreateInfo*                                        pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::ImageView>**                                pView );
    };

    template <>
    struct FunctionTraits <Function::CreateIndirectCommandsLayoutEXT>
    {
        constexpr static auto Name = "vkCreateIndirectCommandsLayoutEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const IndirectCommandsLayoutCreateInfoEXT*                        pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::IndirectCommandsLayoutEXT>**                pIndirectCommandsLayout );
    };

    template <>
    struct FunctionTraits <Function::CreateIndirectCommandsLayoutNV>
    {
        constexpr static auto Name = "vkCreateIndirectCommandsLayoutNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const IndirectCommandsLayoutCreateInfoNV*                         pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::IndirectCommandsLayoutNV>**                 pIndirectCommandsLayout );
    };

    template <>
    struct FunctionTraits <Function::CreateIndirectExecutionSetEXT>
    {
        constexpr static auto Name = "vkCreateIndirectExecutionSetEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const IndirectExecutionSetCreateInfoEXT*                          pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::IndirectExecutionSetEXT>**                  pIndirectExecutionSet );
    };

    template <>
    struct FunctionTraits <Function::CreateInstance>
    {
        constexpr static auto Name = "vkCreateInstance";
        using Type = Result (*) (
            const InstanceCreateInfo*                                         pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Instance>**                                 pInstance );
    };

    template <>
    struct FunctionTraits <Function::CreateMicromapEXT>
    {
        constexpr static auto Name = "vkCreateMicromapEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const MicromapCreateInfoEXT*                                      pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::MicromapEXT>**                              pMicromap );
    };

    template <>
    struct FunctionTraits <Function::CreateOpticalFlowSessionNV>
    {
        constexpr static auto Name = "vkCreateOpticalFlowSessionNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const OpticalFlowSessionCreateInfoNV*                             pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::OpticalFlowSessionNV>**                     pSession );
    };

    template <>
    struct FunctionTraits <Function::CreatePipelineBinariesKHR>
    {
        constexpr static auto Name = "vkCreatePipelineBinariesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineBinaryCreateInfoKHR*                                pCreateInfo,
            const void*                                                       pAllocator,
            PipelineBinaryHandlesInfoKHR*                                     pBinaries );
    };

    template <>
    struct FunctionTraits <Function::CreatePipelineCache>
    {
        constexpr static auto Name = "vkCreatePipelineCache";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineCacheCreateInfo*                                    pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::PipelineCache>**                            pPipelineCache );
    };

    template <>
    struct FunctionTraits <Function::CreatePipelineLayout>
    {
        constexpr static auto Name = "vkCreatePipelineLayout";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineLayoutCreateInfo*                                   pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::PipelineLayout>**                           pPipelineLayout );
    };

    template <>
    struct FunctionTraits <Function::CreatePrivateDataSlot>
    {
        constexpr static auto Name = "vkCreatePrivateDataSlot";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PrivateDataSlotCreateInfo*                                  pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::PrivateDataSlot>**                          pPrivateDataSlot );
    };

    template <>
    struct FunctionTraits <Function::CreateQueryPool>
    {
        constexpr static auto Name = "vkCreateQueryPool";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const QueryPoolCreateInfo*                                        pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::QueryPool>**                                pQueryPool );
    };

    template <>
    struct FunctionTraits <Function::CreateRayTracingPipelinesKHR>
    {
        constexpr static auto Name = "vkCreateRayTracingPipelinesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      deferredOperation,
            Reference<ObjectType::PipelineCache>*                             pipelineCache,
            std::uint32_t                                                     createInfoCount,
            const RayTracingPipelineCreateInfoKHR*                            pCreateInfos,
            const void*                                                       pAllocator,
            Reference<ObjectType::Pipeline>**                                 pPipelines );
    };

    template <>
    struct FunctionTraits <Function::CreateRayTracingPipelinesNV>
    {
        constexpr static auto Name = "vkCreateRayTracingPipelinesNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineCache>*                             pipelineCache,
            std::uint32_t                                                     createInfoCount,
            const RayTracingPipelineCreateInfoNV*                             pCreateInfos,
            const void*                                                       pAllocator,
            Reference<ObjectType::Pipeline>**                                 pPipelines );
    };

    template <>
    struct FunctionTraits <Function::CreateRenderPass>
    {
        constexpr static auto Name = "vkCreateRenderPass";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const RenderPassCreateInfo*                                       pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::RenderPass>**                               pRenderPass );
    };

    template <>
    struct FunctionTraits <Function::CreateRenderPass2>
    {
        constexpr static auto Name = "vkCreateRenderPass2";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const RenderPassCreateInfo2*                                      pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::RenderPass>**                               pRenderPass );
    };

    template <>
    struct FunctionTraits <Function::CreateSampler>
    {
        constexpr static auto Name = "vkCreateSampler";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SamplerCreateInfo*                                          pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Sampler>**                                  pSampler );
    };

    template <>
    struct FunctionTraits <Function::CreateSamplerYcbcrConversion>
    {
        constexpr static auto Name = "vkCreateSamplerYcbcrConversion";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SamplerYcbcrConversionCreateInfo*                           pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SamplerYcbcrConversion>**                   pYcbcrConversion );
    };

    template <>
    struct FunctionTraits <Function::CreateSemaphore>
    {
        constexpr static auto Name = "vkCreateSemaphore";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SemaphoreCreateInfo*                                        pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Semaphore>**                                pSemaphore );
    };

    template <>
    struct FunctionTraits <Function::CreateShaderInstrumentationARM>
    {
        constexpr static auto Name = "vkCreateShaderInstrumentationARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ShaderInstrumentationCreateInfoARM*                         pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::ShaderInstrumentationARM>**                 pInstrumentation );
    };

    template <>
    struct FunctionTraits <Function::CreateShaderModule>
    {
        constexpr static auto Name = "vkCreateShaderModule";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ShaderModuleCreateInfo*                                     pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::ShaderModule>**                             pShaderModule );
    };

    template <>
    struct FunctionTraits <Function::CreateShadersEXT>
    {
        constexpr static auto Name = "vkCreateShadersEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     createInfoCount,
            const ShaderCreateInfoEXT*                                        pCreateInfos,
            const void*                                                       pAllocator,
            Reference<ObjectType::ShaderEXT>**                                pShaders );
    };

    template <>
    struct FunctionTraits <Function::CreateSharedSwapchainsKHR>
    {
        constexpr static auto Name = "vkCreateSharedSwapchainsKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     swapchainCount,
            const SwapchainCreateInfoKHR*                                     pCreateInfos,
            const void*                                                       pAllocator,
            Reference<ObjectType::SwapchainKHR>**                             pSwapchains );
    };

    template <>
    struct FunctionTraits <Function::CreateSwapchainKHR>
    {
        constexpr static auto Name = "vkCreateSwapchainKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SwapchainCreateInfoKHR*                                     pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::SwapchainKHR>**                             pSwapchain );
    };

    template <>
    struct FunctionTraits <Function::CreateTensorARM>
    {
        constexpr static auto Name = "vkCreateTensorARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const TensorCreateInfoARM*                                        pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::TensorARM>**                                pTensor );
    };

    template <>
    struct FunctionTraits <Function::CreateTensorViewARM>
    {
        constexpr static auto Name = "vkCreateTensorViewARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const TensorViewCreateInfoARM*                                    pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::TensorViewARM>**                            pView );
    };

    template <>
    struct FunctionTraits <Function::CreateValidationCacheEXT>
    {
        constexpr static auto Name = "vkCreateValidationCacheEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ValidationCacheCreateInfoEXT*                               pCreateInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::ValidationCacheEXT>**                       pValidationCache );
    };

    template <>
    struct FunctionTraits <Function::DebugMarkerSetObjectNameEXT>
    {
        constexpr static auto Name = "vkDebugMarkerSetObjectNameEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DebugMarkerObjectNameInfoEXT*                               pNameInfo );
    };

    template <>
    struct FunctionTraits <Function::DebugMarkerSetObjectTagEXT>
    {
        constexpr static auto Name = "vkDebugMarkerSetObjectTagEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DebugMarkerObjectTagInfoEXT*                                pTagInfo );
    };

    template <>
    struct FunctionTraits <Function::DebugReportMessageEXT>
    {
        constexpr static auto Name = "vkDebugReportMessageEXT";
        using Type = void (*) (
            Reference<ObjectType::Instance>*                                  instance,
            std::uint32_t                                                     flags,
            DebugReportObjectTypeEXT                                          objectType,
            std::uint64_t                                                     object,
            std::size_t                                                       location,
            std::int32_t                                                      messageCode,
            const char*                                                       pLayerPrefix,
            const char*                                                       pMessage );
    };

    template <>
    struct FunctionTraits <Function::DeferredOperationJoinKHR>
    {
        constexpr static auto Name = "vkDeferredOperationJoinKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      operation );
    };

    template <>
    struct FunctionTraits <Function::DestroyAccelerationStructureKHR>
    {
        constexpr static auto Name = "vkDestroyAccelerationStructureKHR";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::AccelerationStructureKHR>*                  accelerationStructure,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyAccelerationStructureNV>
    {
        constexpr static auto Name = "vkDestroyAccelerationStructureNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::AccelerationStructureNV>*                   accelerationStructure,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyBuffer>
    {
        constexpr static auto Name = "vkDestroyBuffer";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Buffer>*                                    buffer,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyBufferCollectionFUCHSIA>
    {
        constexpr static auto Name = "vkDestroyBufferCollectionFUCHSIA";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::BufferCollectionFUCHSIA>*                   collection,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyBufferView>
    {
        constexpr static auto Name = "vkDestroyBufferView";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::BufferView>*                                bufferView,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyCommandPool>
    {
        constexpr static auto Name = "vkDestroyCommandPool";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CommandPool>*                               commandPool,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyCuFunctionNVX>
    {
        constexpr static auto Name = "vkDestroyCuFunctionNVX";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CuFunctionNVX>*                             function,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyCuModuleNVX>
    {
        constexpr static auto Name = "vkDestroyCuModuleNVX";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CuModuleNVX>*                               module,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyCudaFunctionNV>
    {
        constexpr static auto Name = "vkDestroyCudaFunctionNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CudaFunctionNV>*                            function,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyCudaModuleNV>
    {
        constexpr static auto Name = "vkDestroyCudaModuleNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CudaModuleNV>*                              module,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDataGraphPipelineSessionARM>
    {
        constexpr static auto Name = "vkDestroyDataGraphPipelineSessionARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DataGraphPipelineSessionARM>*               session,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDebugReportCallbackEXT>
    {
        constexpr static auto Name = "vkDestroyDebugReportCallbackEXT";
        using Type = void (*) (
            Reference<ObjectType::Instance>*                                  instance,
            Reference<ObjectType::DebugReportCallbackEXT>*                    callback,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDebugUtilsMessengerEXT>
    {
        constexpr static auto Name = "vkDestroyDebugUtilsMessengerEXT";
        using Type = void (*) (
            Reference<ObjectType::Instance>*                                  instance,
            Reference<ObjectType::DebugUtilsMessengerEXT>*                    messenger,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDeferredOperationKHR>
    {
        constexpr static auto Name = "vkDestroyDeferredOperationKHR";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      operation,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDescriptorPool>
    {
        constexpr static auto Name = "vkDestroyDescriptorPool";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorPool>*                            descriptorPool,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDescriptorSetLayout>
    {
        constexpr static auto Name = "vkDestroyDescriptorSetLayout";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorSetLayout>*                       descriptorSetLayout,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDescriptorUpdateTemplate>
    {
        constexpr static auto Name = "vkDestroyDescriptorUpdateTemplate";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorUpdateTemplate>*                  descriptorUpdateTemplate,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyDevice>
    {
        constexpr static auto Name = "vkDestroyDevice";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyEvent>
    {
        constexpr static auto Name = "vkDestroyEvent";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Event>*                                     event,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyExternalComputeQueueNV>
    {
        constexpr static auto Name = "vkDestroyExternalComputeQueueNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ExternalComputeQueueNV>*                    externalQueue,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyFence>
    {
        constexpr static auto Name = "vkDestroyFence";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Fence>*                                     fence,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyFramebuffer>
    {
        constexpr static auto Name = "vkDestroyFramebuffer";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Framebuffer>*                               framebuffer,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyGpaSessionAMD>
    {
        constexpr static auto Name = "vkDestroyGpaSessionAMD";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyImage>
    {
        constexpr static auto Name = "vkDestroyImage";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyImageView>
    {
        constexpr static auto Name = "vkDestroyImageView";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ImageView>*                                 imageView,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyIndirectCommandsLayoutEXT>
    {
        constexpr static auto Name = "vkDestroyIndirectCommandsLayoutEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::IndirectCommandsLayoutEXT>*                 indirectCommandsLayout,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyIndirectCommandsLayoutNV>
    {
        constexpr static auto Name = "vkDestroyIndirectCommandsLayoutNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::IndirectCommandsLayoutNV>*                  indirectCommandsLayout,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyIndirectExecutionSetEXT>
    {
        constexpr static auto Name = "vkDestroyIndirectExecutionSetEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::IndirectExecutionSetEXT>*                   indirectExecutionSet,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyInstance>
    {
        constexpr static auto Name = "vkDestroyInstance";
        using Type = void (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyMicromapEXT>
    {
        constexpr static auto Name = "vkDestroyMicromapEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::MicromapEXT>*                               micromap,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyOpticalFlowSessionNV>
    {
        constexpr static auto Name = "vkDestroyOpticalFlowSessionNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::OpticalFlowSessionNV>*                      session,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyPipeline>
    {
        constexpr static auto Name = "vkDestroyPipeline";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Pipeline>*                                  pipeline,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyPipelineBinaryKHR>
    {
        constexpr static auto Name = "vkDestroyPipelineBinaryKHR";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineBinaryKHR>*                         pipelineBinary,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyPipelineCache>
    {
        constexpr static auto Name = "vkDestroyPipelineCache";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineCache>*                             pipelineCache,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyPipelineLayout>
    {
        constexpr static auto Name = "vkDestroyPipelineLayout";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineLayout>*                            pipelineLayout,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyPrivateDataSlot>
    {
        constexpr static auto Name = "vkDestroyPrivateDataSlot";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PrivateDataSlot>*                           privateDataSlot,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyQueryPool>
    {
        constexpr static auto Name = "vkDestroyQueryPool";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyRenderPass>
    {
        constexpr static auto Name = "vkDestroyRenderPass";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::RenderPass>*                                renderPass,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroySampler>
    {
        constexpr static auto Name = "vkDestroySampler";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Sampler>*                                   sampler,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroySamplerYcbcrConversion>
    {
        constexpr static auto Name = "vkDestroySamplerYcbcrConversion";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SamplerYcbcrConversion>*                    ycbcrConversion,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroySemaphore>
    {
        constexpr static auto Name = "vkDestroySemaphore";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Semaphore>*                                 semaphore,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroySemaphoreSciSyncPoolNV>
    {
        constexpr static auto Name = "vkDestroySemaphoreSciSyncPoolNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SemaphoreSciSyncPoolNV>*                    semaphorePool,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyShaderEXT>
    {
        constexpr static auto Name = "vkDestroyShaderEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ShaderEXT>*                                 shader,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyShaderInstrumentationARM>
    {
        constexpr static auto Name = "vkDestroyShaderInstrumentationARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ShaderInstrumentationARM>*                  instrumentation,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyShaderModule>
    {
        constexpr static auto Name = "vkDestroyShaderModule";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ShaderModule>*                              shaderModule,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroySurfaceKHR>
    {
        constexpr static auto Name = "vkDestroySurfaceKHR";
        using Type = void (*) (
            Reference<ObjectType::Instance>*                                  instance,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroySwapchainKHR>
    {
        constexpr static auto Name = "vkDestroySwapchainKHR";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyTensorARM>
    {
        constexpr static auto Name = "vkDestroyTensorARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::TensorARM>*                                 tensor,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyTensorViewARM>
    {
        constexpr static auto Name = "vkDestroyTensorViewARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::TensorViewARM>*                             tensorView,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DestroyValidationCacheEXT>
    {
        constexpr static auto Name = "vkDestroyValidationCacheEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ValidationCacheEXT>*                        validationCache,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::DeviceWaitIdle>
    {
        constexpr static auto Name = "vkDeviceWaitIdle";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device );
    };

    template <>
    struct FunctionTraits <Function::DisplayPowerControlEXT>
    {
        constexpr static auto Name = "vkDisplayPowerControlEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DisplayKHR>*                                display,
            const DisplayPowerInfoEXT*                                        pDisplayPowerInfo );
    };

    template <>
    struct FunctionTraits <Function::EndCommandBuffer>
    {
        constexpr static auto Name = "vkEndCommandBuffer";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer );
    };

    template <>
    struct FunctionTraits <Function::EnumerateDeviceExtensionProperties>
    {
        constexpr static auto Name = "vkEnumerateDeviceExtensionProperties";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const char*                                                       pLayerName,
            std::uint32_t*                                                    pPropertyCount,
            ExtensionProperties*                                              pProperties );
    };

    template <>
    struct FunctionTraits <Function::EnumerateDeviceLayerProperties>
    {
        constexpr static auto Name = "vkEnumerateDeviceLayerProperties";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            LayerProperties*                                                  pProperties );
    };

    template <>
    struct FunctionTraits <Function::EnumerateInstanceExtensionProperties>
    {
        constexpr static auto Name = "vkEnumerateInstanceExtensionProperties";
        using Type = Result (*) (
            const char*                                                       pLayerName,
            std::uint32_t*                                                    pPropertyCount,
            ExtensionProperties*                                              pProperties );
    };

    template <>
    struct FunctionTraits <Function::EnumerateInstanceLayerProperties>
    {
        constexpr static auto Name = "vkEnumerateInstanceLayerProperties";
        using Type = Result (*) (
            std::uint32_t*                                                    pPropertyCount,
            LayerProperties*                                                  pProperties );
    };

    template <>
    struct FunctionTraits <Function::EnumerateInstanceVersion>
    {
        constexpr static auto Name = "vkEnumerateInstanceVersion";
        using Type = Result (*) (
            std::uint32_t*                                                    pApiVersion );
    };

    template <>
    struct FunctionTraits <Function::EnumeratePhysicalDeviceGroups>
    {
        constexpr static auto Name = "vkEnumeratePhysicalDeviceGroups";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            std::uint32_t*                                                    pPhysicalDeviceGroupCount,
            PhysicalDeviceGroupProperties*                                    pPhysicalDeviceGroupProperties );
    };

    template <>
    struct FunctionTraits <Function::EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM>
    {
        constexpr static auto Name = "vkEnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            std::uint32_t*                                                    pCounterCount,
            PerformanceCounterARM*                                            pCounters,
            PerformanceCounterDescriptionARM*                                 pCounterDescriptions );
    };

    template <>
    struct FunctionTraits <Function::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR>
    {
        constexpr static auto Name = "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            std::uint32_t*                                                    pCounterCount,
            PerformanceCounterKHR*                                            pCounters,
            PerformanceCounterDescriptionKHR*                                 pCounterDescriptions );
    };

    template <>
    struct FunctionTraits <Function::EnumeratePhysicalDeviceShaderInstrumentationMetricsARM>
    {
        constexpr static auto Name = "vkEnumeratePhysicalDeviceShaderInstrumentationMetricsARM";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pDescriptionCount,
            ShaderInstrumentationMetricDescriptionARM*                        pDescriptions );
    };

    template <>
    struct FunctionTraits <Function::EnumeratePhysicalDevices>
    {
        constexpr static auto Name = "vkEnumeratePhysicalDevices";
        using Type = Result (*) (
            Reference<ObjectType::Instance>*                                  instance,
            std::uint32_t*                                                    pPhysicalDeviceCount,
            Reference<ObjectType::PhysicalDevice>**                           pPhysicalDevices );
    };

    template <>
    struct FunctionTraits <Function::FlushMappedMemoryRanges>
    {
        constexpr static auto Name = "vkFlushMappedMemoryRanges";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     memoryRangeCount,
            const MappedMemoryRange*                                          pMemoryRanges );
    };

    template <>
    struct FunctionTraits <Function::FreeCommandBuffers>
    {
        constexpr static auto Name = "vkFreeCommandBuffers";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CommandPool>*                               commandPool,
            std::uint32_t                                                     commandBufferCount,
            Reference<ObjectType::CommandBuffer>**                            pCommandBuffers );
    };

    template <>
    struct FunctionTraits <Function::FreeDescriptorSets>
    {
        constexpr static auto Name = "vkFreeDescriptorSets";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorPool>*                            descriptorPool,
            std::uint32_t                                                     descriptorSetCount,
            Reference<ObjectType::DescriptorSet>**                            pDescriptorSets );
    };

    template <>
    struct FunctionTraits <Function::FreeMemory>
    {
        constexpr static auto Name = "vkFreeMemory";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeviceMemory>*                              memory,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::GetAccelerationStructureBuildSizesKHR>
    {
        constexpr static auto Name = "vkGetAccelerationStructureBuildSizesKHR";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            AccelerationStructureBuildTypeKHR                                 buildType,
            const AccelerationStructureBuildGeometryInfoKHR*                  pBuildInfo,
            const std::uint32_t*                                              pMaxPrimitiveCounts,
            AccelerationStructureBuildSizesInfoKHR*                           pSizeInfo );
    };

    template <>
    struct FunctionTraits <Function::GetAccelerationStructureDeviceAddressKHR>
    {
        constexpr static auto Name = "vkGetAccelerationStructureDeviceAddressKHR";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            const AccelerationStructureDeviceAddressInfoKHR*                  pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetAccelerationStructureHandleNV>
    {
        constexpr static auto Name = "vkGetAccelerationStructureHandleNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::AccelerationStructureNV>*                   accelerationStructure,
            std::size_t                                                       dataSize,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetAccelerationStructureMemoryRequirementsNV>
    {
        constexpr static auto Name = "vkGetAccelerationStructureMemoryRequirementsNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const AccelerationStructureMemoryRequirementsInfoNV*              pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetAccelerationStructureOpaqueCaptureDescriptorDataEXT>
    {
        constexpr static auto Name = "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const AccelerationStructureCaptureDescriptorDataInfoEXT*          pInfo,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetBufferDeviceAddress>
    {
        constexpr static auto Name = "vkGetBufferDeviceAddress";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            const BufferDeviceAddressInfo*                                    pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetBufferMemoryRequirements>
    {
        constexpr static auto Name = "vkGetBufferMemoryRequirements";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Buffer>*                                    buffer,
            MemoryRequirements*                                               pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetBufferMemoryRequirements2>
    {
        constexpr static auto Name = "vkGetBufferMemoryRequirements2";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const BufferMemoryRequirementsInfo2*                              pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetBufferOpaqueCaptureAddress>
    {
        constexpr static auto Name = "vkGetBufferOpaqueCaptureAddress";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            const BufferDeviceAddressInfo*                                    pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetBufferOpaqueCaptureDescriptorDataEXT>
    {
        constexpr static auto Name = "vkGetBufferOpaqueCaptureDescriptorDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const BufferCaptureDescriptorDataInfoEXT*                         pInfo,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetCalibratedTimestampsKHR>
    {
        constexpr static auto Name = "vkGetCalibratedTimestampsKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     timestampCount,
            const CalibratedTimestampInfoKHR*                                 pTimestampInfos,
            std::uint64_t*                                                    pTimestamps,
            std::uint64_t*                                                    pMaxDeviation );
    };

    template <>
    struct FunctionTraits <Function::GetClusterAccelerationStructureBuildSizesNV>
    {
        constexpr static auto Name = "vkGetClusterAccelerationStructureBuildSizesNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const ClusterAccelerationStructureInputInfoNV*                    pInfo,
            AccelerationStructureBuildSizesInfoKHR*                           pSizeInfo );
    };

    template <>
    struct FunctionTraits <Function::GetCommandPoolMemoryConsumption>
    {
        constexpr static auto Name = "vkGetCommandPoolMemoryConsumption";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CommandPool>*                               commandPool,
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            CommandPoolMemoryConsumption*                                     pConsumption );
    };

    template <>
    struct FunctionTraits <Function::GetCudaModuleCacheNV>
    {
        constexpr static auto Name = "vkGetCudaModuleCacheNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CudaModuleNV>*                              module,
            std::size_t*                                                      pCacheSize,
            void*                                                             pCacheData );
    };

    template <>
    struct FunctionTraits <Function::GetDataGraphPipelineAvailablePropertiesARM>
    {
        constexpr static auto Name = "vkGetDataGraphPipelineAvailablePropertiesARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DataGraphPipelineInfoARM*                                   pPipelineInfo,
            std::uint32_t*                                                    pPropertiesCount,
            DataGraphPipelinePropertyARM*                                     pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetDataGraphPipelinePropertiesARM>
    {
        constexpr static auto Name = "vkGetDataGraphPipelinePropertiesARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DataGraphPipelineInfoARM*                                   pPipelineInfo,
            std::uint32_t                                                     propertiesCount,
            DataGraphPipelinePropertyQueryResultARM*                          pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetDataGraphPipelineSessionBindPointRequirementsARM>
    {
        constexpr static auto Name = "vkGetDataGraphPipelineSessionBindPointRequirementsARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DataGraphPipelineSessionBindPointRequirementsInfoARM*       pInfo,
            std::uint32_t*                                                    pBindPointRequirementCount,
            DataGraphPipelineSessionBindPointRequirementARM*                  pBindPointRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetDataGraphPipelineSessionMemoryRequirementsARM>
    {
        constexpr static auto Name = "vkGetDataGraphPipelineSessionMemoryRequirementsARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DataGraphPipelineSessionMemoryRequirementsInfoARM*          pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetDeferredOperationMaxConcurrencyKHR>
    {
        constexpr static auto Name = "vkGetDeferredOperationMaxConcurrencyKHR";
        using Type = std::uint32_t (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      operation );
    };

    template <>
    struct FunctionTraits <Function::GetDeferredOperationResultKHR>
    {
        constexpr static auto Name = "vkGetDeferredOperationResultKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeferredOperationKHR>*                      operation );
    };

    template <>
    struct FunctionTraits <Function::GetDescriptorEXT>
    {
        constexpr static auto Name = "vkGetDescriptorEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DescriptorGetInfoEXT*                                       pDescriptorInfo,
            std::size_t                                                       dataSize,
            void*                                                             pDescriptor );
    };

    template <>
    struct FunctionTraits <Function::GetDescriptorSetHostMappingVALVE>
    {
        constexpr static auto Name = "vkGetDescriptorSetHostMappingVALVE";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorSet>*                             descriptorSet,
            void**                                                            ppData );
    };

    template <>
    struct FunctionTraits <Function::GetDescriptorSetLayoutBindingOffsetEXT>
    {
        constexpr static auto Name = "vkGetDescriptorSetLayoutBindingOffsetEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorSetLayout>*                       layout,
            std::uint32_t                                                     binding,
            std::uint64_t*                                                    pOffset );
    };

    template <>
    struct FunctionTraits <Function::GetDescriptorSetLayoutHostMappingInfoVALVE>
    {
        constexpr static auto Name = "vkGetDescriptorSetLayoutHostMappingInfoVALVE";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DescriptorSetBindingReferenceVALVE*                         pBindingReference,
            DescriptorSetLayoutHostMappingInfoVALVE*                          pHostMapping );
    };

    template <>
    struct FunctionTraits <Function::GetDescriptorSetLayoutSizeEXT>
    {
        constexpr static auto Name = "vkGetDescriptorSetLayoutSizeEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorSetLayout>*                       layout,
            std::uint64_t*                                                    pLayoutSizeInBytes );
    };

    template <>
    struct FunctionTraits <Function::GetDescriptorSetLayoutSupport>
    {
        constexpr static auto Name = "vkGetDescriptorSetLayoutSupport";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DescriptorSetLayoutCreateInfo*                              pCreateInfo,
            DescriptorSetLayoutSupport*                                       pSupport );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceAccelerationStructureCompatibilityKHR>
    {
        constexpr static auto Name = "vkGetDeviceAccelerationStructureCompatibilityKHR";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const AccelerationStructureVersionInfoKHR*                        pVersionInfo,
            AccelerationStructureCompatibilityKHR*                            pCompatibility );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceBufferMemoryRequirements>
    {
        constexpr static auto Name = "vkGetDeviceBufferMemoryRequirements";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceBufferMemoryRequirements*                             pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceCombinedImageSamplerIndexNVX>
    {
        constexpr static auto Name = "vkGetDeviceCombinedImageSamplerIndexNVX";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint64_t                                                     imageViewIndex,
            std::uint64_t                                                     samplerIndex );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceFaultDebugInfoKHR>
    {
        constexpr static auto Name = "vkGetDeviceFaultDebugInfoKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            DeviceFaultDebugInfoKHR*                                          pDebugInfo );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceFaultInfoEXT>
    {
        constexpr static auto Name = "vkGetDeviceFaultInfoEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            DeviceFaultCountsEXT*                                             pFaultCounts,
            DeviceFaultInfoEXT*                                               pFaultInfo );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceFaultReportsKHR>
    {
        constexpr static auto Name = "vkGetDeviceFaultReportsKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint64_t                                                     timeout,
            std::uint32_t*                                                    pFaultCounts,
            DeviceFaultInfoKHR*                                               pFaultInfo );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceGroupPeerMemoryFeatures>
    {
        constexpr static auto Name = "vkGetDeviceGroupPeerMemoryFeatures";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     heapIndex,
            std::uint32_t                                                     localDeviceIndex,
            std::uint32_t                                                     remoteDeviceIndex,
            std::uint32_t*                                                    pPeerMemoryFeatures );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceGroupPresentCapabilitiesKHR>
    {
        constexpr static auto Name = "vkGetDeviceGroupPresentCapabilitiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            DeviceGroupPresentCapabilitiesKHR*                                pDeviceGroupPresentCapabilities );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceGroupSurfacePresentModes2EXT>
    {
        constexpr static auto Name = "vkGetDeviceGroupSurfacePresentModes2EXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PhysicalDeviceSurfaceInfo2KHR*                              pSurfaceInfo,
            std::uint32_t*                                                    pModes );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceGroupSurfacePresentModesKHR>
    {
        constexpr static auto Name = "vkGetDeviceGroupSurfacePresentModesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            std::uint32_t*                                                    pModes );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceImageMemoryRequirements>
    {
        constexpr static auto Name = "vkGetDeviceImageMemoryRequirements";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceImageMemoryRequirements*                              pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceImageSparseMemoryRequirements>
    {
        constexpr static auto Name = "vkGetDeviceImageSparseMemoryRequirements";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceImageMemoryRequirements*                              pInfo,
            std::uint32_t*                                                    pSparseMemoryRequirementCount,
            SparseImageMemoryRequirements2*                                   pSparseMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceImageSubresourceLayout>
    {
        constexpr static auto Name = "vkGetDeviceImageSubresourceLayout";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceImageSubresourceInfo*                                 pInfo,
            SubresourceLayout2*                                               pLayout );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceMemoryCommitment>
    {
        constexpr static auto Name = "vkGetDeviceMemoryCommitment";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeviceMemory>*                              memory,
            std::uint64_t*                                                    pCommittedMemoryInBytes );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceMemoryOpaqueCaptureAddress>
    {
        constexpr static auto Name = "vkGetDeviceMemoryOpaqueCaptureAddress";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceMemoryOpaqueCaptureAddressInfo*                       pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceMicromapCompatibilityEXT>
    {
        constexpr static auto Name = "vkGetDeviceMicromapCompatibilityEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const MicromapVersionInfoEXT*                                     pVersionInfo,
            AccelerationStructureCompatibilityKHR*                            pCompatibility );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceProcAddr>
    {
        constexpr static auto Name = "vkGetDeviceProcAddr";
        using Type = void* (*) (
            Reference<ObjectType::Device>*                                    device,
            const char*                                                       pName );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceQueue>
    {
        constexpr static auto Name = "vkGetDeviceQueue";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     queueFamilyIndex,
            std::uint32_t                                                     queueIndex,
            Reference<ObjectType::Queue>**                                    pQueue );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceQueue2>
    {
        constexpr static auto Name = "vkGetDeviceQueue2";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceQueueInfo2*                                           pQueueInfo,
            Reference<ObjectType::Queue>**                                    pQueue );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI>
    {
        constexpr static auto Name = "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::RenderPass>*                                renderpass,
            Extent2D*                                                         pMaxWorkgroupSize );
    };

    template <>
    struct FunctionTraits <Function::GetDeviceTensorMemoryRequirementsARM>
    {
        constexpr static auto Name = "vkGetDeviceTensorMemoryRequirementsARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceTensorMemoryRequirementsARM*                          pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetDisplayModeProperties2KHR>
    {
        constexpr static auto Name = "vkGetDisplayModeProperties2KHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::DisplayKHR>*                                display,
            std::uint32_t*                                                    pPropertyCount,
            DisplayModeProperties2KHR*                                        pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetDisplayModePropertiesKHR>
    {
        constexpr static auto Name = "vkGetDisplayModePropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::DisplayKHR>*                                display,
            std::uint32_t*                                                    pPropertyCount,
            DisplayModePropertiesKHR*                                         pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetDisplayPlaneCapabilities2KHR>
    {
        constexpr static auto Name = "vkGetDisplayPlaneCapabilities2KHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const DisplayPlaneInfo2KHR*                                       pDisplayPlaneInfo,
            DisplayPlaneCapabilities2KHR*                                     pCapabilities );
    };

    template <>
    struct FunctionTraits <Function::GetDisplayPlaneCapabilitiesKHR>
    {
        constexpr static auto Name = "vkGetDisplayPlaneCapabilitiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::DisplayModeKHR>*                            mode,
            std::uint32_t                                                     planeIndex,
            DisplayPlaneCapabilitiesKHR*                                      pCapabilities );
    };

    template <>
    struct FunctionTraits <Function::GetDisplayPlaneSupportedDisplaysKHR>
    {
        constexpr static auto Name = "vkGetDisplayPlaneSupportedDisplaysKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     planeIndex,
            std::uint32_t*                                                    pDisplayCount,
            Reference<ObjectType::DisplayKHR>**                               pDisplays );
    };

    template <>
    struct FunctionTraits <Function::GetDrmDisplayEXT>
    {
        constexpr static auto Name = "vkGetDrmDisplayEXT";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::int32_t                                                      drmFd,
            std::uint32_t                                                     connectorId,
            Reference<ObjectType::DisplayKHR>**                               display );
    };

    template <>
    struct FunctionTraits <Function::GetDynamicRenderingTilePropertiesQCOM>
    {
        constexpr static auto Name = "vkGetDynamicRenderingTilePropertiesQCOM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const RenderingInfo*                                              pRenderingInfo,
            TilePropertiesQCOM*                                               pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetEventStatus>
    {
        constexpr static auto Name = "vkGetEventStatus";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Event>*                                     event );
    };

    template <>
    struct FunctionTraits <Function::GetExternalComputeQueueDataNV>
    {
        constexpr static auto Name = "vkGetExternalComputeQueueDataNV";
        using Type = void (*) (
            Reference<ObjectType::ExternalComputeQueueNV>*                    externalQueue,
            ExternalComputeQueueDataParamsNV*                                 params,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetFaultData>
    {
        constexpr static auto Name = "vkGetFaultData";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            FaultQueryBehavior                                                faultQueryBehavior,
            std::uint32_t*                                                    pUnrecordedFaults,
            std::uint32_t*                                                    pFaultCount,
            FaultData*                                                        pFaults );
    };

    template <>
    struct FunctionTraits <Function::GetFenceFdKHR>
    {
        constexpr static auto Name = "vkGetFenceFdKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const FenceGetFdInfoKHR*                                          pGetFdInfo,
            std::int32_t*                                                     pFd );
    };

    template <>
    struct FunctionTraits <Function::GetFenceStatus>
    {
        constexpr static auto Name = "vkGetFenceStatus";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Fence>*                                     fence );
    };

    template <>
    struct FunctionTraits <Function::GetFramebufferTilePropertiesQCOM>
    {
        constexpr static auto Name = "vkGetFramebufferTilePropertiesQCOM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Framebuffer>*                               framebuffer,
            std::uint32_t*                                                    pPropertiesCount,
            TilePropertiesQCOM*                                               pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetGeneratedCommandsMemoryRequirementsEXT>
    {
        constexpr static auto Name = "vkGetGeneratedCommandsMemoryRequirementsEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const GeneratedCommandsMemoryRequirementsInfoEXT*                 pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetGeneratedCommandsMemoryRequirementsNV>
    {
        constexpr static auto Name = "vkGetGeneratedCommandsMemoryRequirementsNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const GeneratedCommandsMemoryRequirementsInfoNV*                  pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetGpaDeviceClockInfoAMD>
    {
        constexpr static auto Name = "vkGetGpaDeviceClockInfoAMD";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            GpaDeviceGetClockInfoAMD*                                         pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetGpaSessionResultsAMD>
    {
        constexpr static auto Name = "vkGetGpaSessionResultsAMD";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession,
            std::uint32_t                                                     sampleID,
            std::size_t*                                                      pSizeInBytes,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetGpaSessionStatusAMD>
    {
        constexpr static auto Name = "vkGetGpaSessionStatusAMD";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession );
    };

    template <>
    struct FunctionTraits <Function::GetImageDrmFormatModifierPropertiesEXT>
    {
        constexpr static auto Name = "vkGetImageDrmFormatModifierPropertiesEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            ImageDrmFormatModifierPropertiesEXT*                              pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetImageMemoryRequirements>
    {
        constexpr static auto Name = "vkGetImageMemoryRequirements";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            MemoryRequirements*                                               pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetImageMemoryRequirements2>
    {
        constexpr static auto Name = "vkGetImageMemoryRequirements2";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageMemoryRequirementsInfo2*                               pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetImageOpaqueCaptureDataEXT>
    {
        constexpr static auto Name = "vkGetImageOpaqueCaptureDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     imageCount,
            Reference<ObjectType::Image>**                                    pImages,
            HostAddressRangeEXT*                                              pDatas );
    };

    template <>
    struct FunctionTraits <Function::GetImageOpaqueCaptureDescriptorDataEXT>
    {
        constexpr static auto Name = "vkGetImageOpaqueCaptureDescriptorDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageCaptureDescriptorDataInfoEXT*                          pInfo,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetImageSparseMemoryRequirements>
    {
        constexpr static auto Name = "vkGetImageSparseMemoryRequirements";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            std::uint32_t*                                                    pSparseMemoryRequirementCount,
            SparseImageMemoryRequirements*                                    pSparseMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetImageSparseMemoryRequirements2>
    {
        constexpr static auto Name = "vkGetImageSparseMemoryRequirements2";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageSparseMemoryRequirementsInfo2*                         pInfo,
            std::uint32_t*                                                    pSparseMemoryRequirementCount,
            SparseImageMemoryRequirements2*                                   pSparseMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetImageSubresourceLayout>
    {
        constexpr static auto Name = "vkGetImageSubresourceLayout";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            const ImageSubresource*                                           pSubresource,
            SubresourceLayout*                                                pLayout );
    };

    template <>
    struct FunctionTraits <Function::GetImageSubresourceLayout2>
    {
        constexpr static auto Name = "vkGetImageSubresourceLayout2";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Image>*                                     image,
            const ImageSubresource2*                                          pSubresource,
            SubresourceLayout2*                                               pLayout );
    };

    template <>
    struct FunctionTraits <Function::GetImageViewAddressNVX>
    {
        constexpr static auto Name = "vkGetImageViewAddressNVX";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ImageView>*                                 imageView,
            ImageViewAddressPropertiesNVX*                                    pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetImageViewHandle64NVX>
    {
        constexpr static auto Name = "vkGetImageViewHandle64NVX";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageViewHandleInfoNVX*                                     pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetImageViewHandleNVX>
    {
        constexpr static auto Name = "vkGetImageViewHandleNVX";
        using Type = std::uint32_t (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageViewHandleInfoNVX*                                     pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetImageViewOpaqueCaptureDescriptorDataEXT>
    {
        constexpr static auto Name = "vkGetImageViewOpaqueCaptureDescriptorDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImageViewCaptureDescriptorDataInfoEXT*                      pInfo,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetInstanceProcAddr>
    {
        constexpr static auto Name = "vkGetInstanceProcAddr";
        using Type = void* (*) (
            Reference<ObjectType::Instance>*                                  instance,
            const char*                                                       pName );
    };

    template <>
    struct FunctionTraits <Function::GetLatencyTimingsLegacyNV>
    {
        constexpr static auto Name = "vkGetLatencyTimingsLegacyNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            void*                                                             pTimings );
    };

    template <>
    struct FunctionTraits <Function::GetLatencyTimingsNV>
    {
        constexpr static auto Name = "vkGetLatencyTimingsNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            GetLatencyMarkerInfoNV*                                           pLatencyMarkerInfo );
    };

    template <>
    struct FunctionTraits <Function::GetMemoryFdKHR>
    {
        constexpr static auto Name = "vkGetMemoryFdKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const MemoryGetFdInfoKHR*                                         pGetFdInfo,
            std::int32_t*                                                     pFd );
    };

    template <>
    struct FunctionTraits <Function::GetMemoryFdPropertiesKHR>
    {
        constexpr static auto Name = "vkGetMemoryFdPropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            ExternalMemoryHandleTypeFlagBits                                  handleType,
            std::int32_t                                                      fd,
            MemoryFdPropertiesKHR*                                            pMemoryFdProperties );
    };

    template <>
    struct FunctionTraits <Function::GetMemoryHostPointerPropertiesEXT>
    {
        constexpr static auto Name = "vkGetMemoryHostPointerPropertiesEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            ExternalMemoryHandleTypeFlagBits                                  handleType,
            const void*                                                       pHostPointer,
            MemoryHostPointerPropertiesEXT*                                   pMemoryHostPointerProperties );
    };

    template <>
    struct FunctionTraits <Function::GetMemoryRemoteAddressNV>
    {
        constexpr static auto Name = "vkGetMemoryRemoteAddressNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const MemoryGetRemoteAddressInfoNV*                               pMemoryGetRemoteAddressInfo,
            void**                                                            pAddress );
    };

    template <>
    struct FunctionTraits <Function::GetMicromapBuildSizesEXT>
    {
        constexpr static auto Name = "vkGetMicromapBuildSizesEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            AccelerationStructureBuildTypeKHR                                 buildType,
            const MicromapBuildInfoEXT*                                       pBuildInfo,
            MicromapBuildSizesInfoEXT*                                        pSizeInfo );
    };

    template <>
    struct FunctionTraits <Function::GetPartitionedAccelerationStructuresBuildSizesNV>
    {
        constexpr static auto Name = "vkGetPartitionedAccelerationStructuresBuildSizesNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const PartitionedAccelerationStructureInstancesInputNV*           pInfo,
            AccelerationStructureBuildSizesInfoKHR*                           pSizeInfo );
    };

    template <>
    struct FunctionTraits <Function::GetPastPresentationTimingEXT>
    {
        constexpr static auto Name = "vkGetPastPresentationTimingEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PastPresentationTimingInfoEXT*                              pPastPresentationTimingInfo,
            PastPresentationTimingPropertiesEXT*                              pPastPresentationTimingProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPastPresentationTimingGOOGLE>
    {
        constexpr static auto Name = "vkGetPastPresentationTimingGOOGLE";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            std::uint32_t*                                                    pPresentationTimingCount,
            PastPresentationTimingGOOGLE*                                     pPresentationTimings );
    };

    template <>
    struct FunctionTraits <Function::GetPerformanceParameterINTEL>
    {
        constexpr static auto Name = "vkGetPerformanceParameterINTEL";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            PerformanceParameterTypeINTEL                                     parameter,
            PerformanceValueINTEL*                                            pValue );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceCalibrateableTimeDomainsKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pTimeDomainCount,
            TimeDomainKHR*                                                    pTimeDomains );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            CooperativeMatrixFlexibleDimensionsPropertiesNV*                  pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceCooperativeMatrixProperties2EXT>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceCooperativeMatrixProperties2EXT";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceCooperativeMatrixInfo2EXT*                    pCooperativeMatrixInfo,
            std::uint32_t*                                                    pPropertyCount,
            CooperativeMatrixProperties2EXT*                                  pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceCooperativeMatrixPropertiesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            CooperativeMatrixPropertiesKHR*                                   pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceCooperativeMatrixPropertiesNV>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            CooperativeMatrixPropertiesNV*                                    pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceCooperativeVectorPropertiesNV>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceCooperativeVectorPropertiesNV";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            CooperativeVectorPropertiesNV*                                    pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceDescriptorSizeEXT>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceDescriptorSizeEXT";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            DescriptorType                                                    descriptorType );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceDisplayPlaneProperties2KHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceDisplayPlaneProperties2KHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            DisplayPlaneProperties2KHR*                                       pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceDisplayPlanePropertiesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceDisplayPlanePropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            DisplayPlanePropertiesKHR*                                        pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceDisplayProperties2KHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceDisplayProperties2KHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            DisplayProperties2KHR*                                            pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceDisplayPropertiesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceDisplayPropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pPropertyCount,
            DisplayPropertiesKHR*                                             pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceExternalBufferProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceExternalBufferProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceExternalBufferInfo*                           pExternalBufferInfo,
            ExternalBufferProperties*                                         pExternalBufferProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceExternalFenceProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceExternalFenceProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceExternalFenceInfo*                            pExternalFenceInfo,
            ExternalFenceProperties*                                          pExternalFenceProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceExternalImageFormatPropertiesNV>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceExternalImageFormatPropertiesNV";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Format                                                            format,
            ImageType                                                         type,
            ImageTiling                                                       tiling,
            std::uint32_t                                                     usage,
            std::uint32_t                                                     flags,
            std::uint32_t                                                     externalHandleType,
            ExternalImageFormatPropertiesNV*                                  pExternalImageFormatProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceExternalSemaphoreProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceExternalSemaphoreProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceExternalSemaphoreInfo*                        pExternalSemaphoreInfo,
            ExternalSemaphoreProperties*                                      pExternalSemaphoreProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceExternalTensorPropertiesARM>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceExternalTensorPropertiesARM";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceExternalTensorInfoARM*                        pExternalTensorInfo,
            ExternalTensorPropertiesARM*                                      pExternalTensorProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceFeatures>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceFeatures";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            PhysicalDeviceFeatures*                                           pFeatures );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceFeatures2>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceFeatures2";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            PhysicalDeviceFeatures2*                                          pFeatures );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceFormatProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceFormatProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Format                                                            format,
            FormatProperties*                                                 pFormatProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceFormatProperties2>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceFormatProperties2";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Format                                                            format,
            FormatProperties2*                                                pFormatProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceFragmentShadingRatesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceFragmentShadingRatesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pFragmentShadingRateCount,
            PhysicalDeviceFragmentShadingRateKHR*                             pFragmentShadingRates );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceImageFormatProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceImageFormatProperties";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Format                                                            format,
            ImageType                                                         type,
            ImageTiling                                                       tiling,
            std::uint32_t                                                     usage,
            std::uint32_t                                                     flags,
            ImageFormatProperties*                                            pImageFormatProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceImageFormatProperties2>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceImageFormatProperties2";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceImageFormatInfo2*                             pImageFormatInfo,
            ImageFormatProperties2*                                           pImageFormatProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceMemoryProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceMemoryProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            PhysicalDeviceMemoryProperties*                                   pMemoryProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceMemoryProperties2>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceMemoryProperties2";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            PhysicalDeviceMemoryProperties2*                                  pMemoryProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceMultisamplePropertiesEXT>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceMultisamplePropertiesEXT";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            SampleCountFlagBits                                               samples,
            MultisamplePropertiesEXT*                                         pMultisampleProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceOpticalFlowImageFormatsNV>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceOpticalFlowImageFormatsNV";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const OpticalFlowImageFormatInfoNV*                               pOpticalFlowImageFormatInfo,
            std::uint32_t*                                                    pFormatCount,
            OpticalFlowImageFormatPropertiesNV*                               pImageFormatProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDevicePresentRectanglesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDevicePresentRectanglesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            std::uint32_t*                                                    pRectCount,
            Rect2D*                                                           pRects );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            PhysicalDeviceProperties*                                         pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceProperties2>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceProperties2";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            PhysicalDeviceProperties2*                                        pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            const QueueFamilyDataGraphPropertiesARM*                          pQueueFamilyDataGraphProperties,
            BaseOutStructure*                                                 pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            const QueueFamilyDataGraphPropertiesARM*                          pQueueFamilyDataGraphProperties,
            const DataGraphOpticalFlowImageFormatInfoARM*                     pOpticalFlowImageFormatInfo,
            std::uint32_t*                                                    pFormatCount,
            DataGraphOpticalFlowImageFormatPropertiesARM*                     pImageFormatProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM*  pQueueFamilyDataGraphProcessingEngineInfo,
            QueueFamilyDataGraphProcessingEnginePropertiesARM*                pQueueFamilyDataGraphProcessingEngineProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            std::uint32_t*                                                    pQueueFamilyDataGraphPropertyCount,
            QueueFamilyDataGraphPropertiesARM*                                pQueueFamilyDataGraphProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const QueryPoolPerformanceCreateInfoKHR*                          pPerformanceQueryCreateInfo,
            std::uint32_t*                                                    pNumPasses );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceQueueFamilyProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceQueueFamilyProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pQueueFamilyPropertyCount,
            QueueFamilyProperties*                                            pQueueFamilyProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceQueueFamilyProperties2>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceQueueFamilyProperties2";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pQueueFamilyPropertyCount,
            QueueFamilyProperties2*                                           pQueueFamilyProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceRefreshableObjectTypesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceRefreshableObjectTypesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pRefreshableObjectTypeCount,
            ObjectType*                                                       pRefreshableObjectTypes );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSciBufAttributesNV>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSciBufAttributesNV";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            void*                                                             pAttributes );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceScreenPresentationSupportQNX>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceScreenPresentationSupportQNX";
        using Type = std::uint32_t (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            void**                                                            window );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSparseImageFormatProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSparseImageFormatProperties";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Format                                                            format,
            ImageType                                                         type,
            SampleCountFlagBits                                               samples,
            std::uint32_t                                                     usage,
            ImageTiling                                                       tiling,
            std::uint32_t*                                                    pPropertyCount,
            SparseImageFormatProperties*                                      pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSparseImageFormatProperties2>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSparseImageFormatProperties2";
        using Type = void (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceSparseImageFormatInfo2*                       pFormatInfo,
            std::uint32_t*                                                    pPropertyCount,
            SparseImageFormatProperties2*                                     pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pCombinationCount,
            FramebufferMixedSamplesCombinationNV*                             pCombinations );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfaceCapabilities2EXT>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfaceCapabilities2EXT";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            SurfaceCapabilities2EXT*                                          pSurfaceCapabilities );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfaceCapabilities2KHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfaceCapabilities2KHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceSurfaceInfo2KHR*                              pSurfaceInfo,
            SurfaceCapabilities2KHR*                                          pSurfaceCapabilities );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfaceCapabilitiesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfaceCapabilitiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            SurfaceCapabilitiesKHR*                                           pSurfaceCapabilities );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfaceFormats2KHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfaceFormats2KHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceSurfaceInfo2KHR*                              pSurfaceInfo,
            std::uint32_t*                                                    pSurfaceFormatCount,
            SurfaceFormat2KHR*                                                pSurfaceFormats );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfaceFormatsKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfaceFormatsKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            std::uint32_t*                                                    pSurfaceFormatCount,
            SurfaceFormatKHR*                                                 pSurfaceFormats );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfacePresentModes2EXT>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfacePresentModes2EXT";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            const PhysicalDeviceSurfaceInfo2KHR*                              pSurfaceInfo,
            std::uint32_t*                                                    pPresentModeCount,
            PresentModeKHR*                                                   pPresentModes );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfacePresentModesKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfacePresentModesKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            std::uint32_t*                                                    pPresentModeCount,
            PresentModeKHR*                                                   pPresentModes );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceSurfaceSupportKHR>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceSurfaceSupportKHR";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            Reference<ObjectType::SurfaceKHR>*                                surface,
            std::uint32_t*                                                    pSupported );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceToolProperties>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceToolProperties";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t*                                                    pToolCount,
            PhysicalDeviceToolProperties*                                     pToolProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPhysicalDeviceUbmPresentationSupportSEC>
    {
        constexpr static auto Name = "vkGetPhysicalDeviceUbmPresentationSupportSEC";
        using Type = std::uint32_t (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            std::uint32_t                                                     queueFamilyIndex,
            void**                                                            device );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineBinaryDataKHR>
    {
        constexpr static auto Name = "vkGetPipelineBinaryDataKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineBinaryDataInfoKHR*                                  pInfo,
            PipelineBinaryKeyKHR*                                             pPipelineBinaryKey,
            std::size_t*                                                      pPipelineBinaryDataSize,
            void*                                                             pPipelineBinaryData );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineCacheData>
    {
        constexpr static auto Name = "vkGetPipelineCacheData";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineCache>*                             pipelineCache,
            std::size_t*                                                      pDataSize,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineExecutableInternalRepresentationsKHR>
    {
        constexpr static auto Name = "vkGetPipelineExecutableInternalRepresentationsKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineExecutableInfoKHR*                                  pExecutableInfo,
            std::uint32_t*                                                    pInternalRepresentationCount,
            PipelineExecutableInternalRepresentationKHR*                      pInternalRepresentations );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineExecutablePropertiesKHR>
    {
        constexpr static auto Name = "vkGetPipelineExecutablePropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineInfoKHR*                                            pPipelineInfo,
            std::uint32_t*                                                    pExecutableCount,
            PipelineExecutablePropertiesKHR*                                  pProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineExecutableStatisticsKHR>
    {
        constexpr static auto Name = "vkGetPipelineExecutableStatisticsKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineExecutableInfoKHR*                                  pExecutableInfo,
            std::uint32_t*                                                    pStatisticCount,
            PipelineExecutableStatisticKHR*                                   pStatistics );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineIndirectDeviceAddressNV>
    {
        constexpr static auto Name = "vkGetPipelineIndirectDeviceAddressNV";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineIndirectDeviceAddressInfoNV*                        pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineIndirectMemoryRequirementsNV>
    {
        constexpr static auto Name = "vkGetPipelineIndirectMemoryRequirementsNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const ComputePipelineCreateInfo*                                  pCreateInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetPipelineKeyKHR>
    {
        constexpr static auto Name = "vkGetPipelineKeyKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineCreateInfoKHR*                                      pPipelineCreateInfo,
            PipelineBinaryKeyKHR*                                             pPipelineKey );
    };

    template <>
    struct FunctionTraits <Function::GetPipelinePropertiesEXT>
    {
        constexpr static auto Name = "vkGetPipelinePropertiesEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const PipelineInfoKHR*                                            pPipelineInfo,
            BaseOutStructure*                                                 pPipelineProperties );
    };

    template <>
    struct FunctionTraits <Function::GetPrivateData>
    {
        constexpr static auto Name = "vkGetPrivateData";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            ObjectType                                                        objectType,
            std::uint64_t                                                     objectHandle,
            Reference<ObjectType::PrivateDataSlot>*                           privateDataSlot,
            std::uint64_t*                                                    pData );
    };

    template <>
    struct FunctionTraits <Function::GetQueryPoolResults>
    {
        constexpr static auto Name = "vkGetQueryPoolResults";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery,
            std::uint32_t                                                     queryCount,
            std::size_t                                                       dataSize,
            void*                                                             pData,
            std::uint64_t                                                     stride,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::GetQueueCheckpointData2NV>
    {
        constexpr static auto Name = "vkGetQueueCheckpointData2NV";
        using Type = void (*) (
            Reference<ObjectType::Queue>*                                     queue,
            std::uint32_t*                                                    pCheckpointDataCount,
            CheckpointData2NV*                                                pCheckpointData );
    };

    template <>
    struct FunctionTraits <Function::GetQueueCheckpointDataNV>
    {
        constexpr static auto Name = "vkGetQueueCheckpointDataNV";
        using Type = void (*) (
            Reference<ObjectType::Queue>*                                     queue,
            std::uint32_t*                                                    pCheckpointDataCount,
            CheckpointDataNV*                                                 pCheckpointData );
    };

    template <>
    struct FunctionTraits <Function::GetRandROutputDisplayEXT>
    {
        constexpr static auto Name = "vkGetRandROutputDisplayEXT";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            void**                                                            dpy,
            void*                                                             rrOutput,
            Reference<ObjectType::DisplayKHR>**                               pDisplay );
    };

    template <>
    struct FunctionTraits <Function::GetRayTracingCaptureReplayShaderGroupHandlesKHR>
    {
        constexpr static auto Name = "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Pipeline>*                                  pipeline,
            std::uint32_t                                                     firstGroup,
            std::uint32_t                                                     groupCount,
            std::size_t                                                       dataSize,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetRayTracingShaderGroupHandlesKHR>
    {
        constexpr static auto Name = "vkGetRayTracingShaderGroupHandlesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Pipeline>*                                  pipeline,
            std::uint32_t                                                     firstGroup,
            std::uint32_t                                                     groupCount,
            std::size_t                                                       dataSize,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetRayTracingShaderGroupStackSizeKHR>
    {
        constexpr static auto Name = "vkGetRayTracingShaderGroupStackSizeKHR";
        using Type = std::uint64_t (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Pipeline>*                                  pipeline,
            std::uint32_t                                                     group,
            ShaderGroupShaderKHR                                              groupShader );
    };

    template <>
    struct FunctionTraits <Function::GetRefreshCycleDurationGOOGLE>
    {
        constexpr static auto Name = "vkGetRefreshCycleDurationGOOGLE";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            RefreshCycleDurationGOOGLE*                                       pDisplayTimingProperties );
    };

    template <>
    struct FunctionTraits <Function::GetRenderAreaGranularity>
    {
        constexpr static auto Name = "vkGetRenderAreaGranularity";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::RenderPass>*                                renderPass,
            Extent2D*                                                         pGranularity );
    };

    template <>
    struct FunctionTraits <Function::GetRenderingAreaGranularity>
    {
        constexpr static auto Name = "vkGetRenderingAreaGranularity";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const RenderingAreaInfo*                                          pRenderingAreaInfo,
            Extent2D*                                                         pGranularity );
    };

    template <>
    struct FunctionTraits <Function::GetSamplerOpaqueCaptureDescriptorDataEXT>
    {
        constexpr static auto Name = "vkGetSamplerOpaqueCaptureDescriptorDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SamplerCaptureDescriptorDataInfoEXT*                        pInfo,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetSemaphoreCounterValue>
    {
        constexpr static auto Name = "vkGetSemaphoreCounterValue";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Semaphore>*                                 semaphore,
            std::uint64_t*                                                    pValue );
    };

    template <>
    struct FunctionTraits <Function::GetSemaphoreFdKHR>
    {
        constexpr static auto Name = "vkGetSemaphoreFdKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SemaphoreGetFdInfoKHR*                                      pGetFdInfo,
            std::int32_t*                                                     pFd );
    };

    template <>
    struct FunctionTraits <Function::GetShaderBinaryDataEXT>
    {
        constexpr static auto Name = "vkGetShaderBinaryDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ShaderEXT>*                                 shader,
            std::size_t*                                                      pDataSize,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetShaderInfoAMD>
    {
        constexpr static auto Name = "vkGetShaderInfoAMD";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Pipeline>*                                  pipeline,
            ShaderStageFlagBits                                               shaderStage,
            ShaderInfoTypeAMD                                                 infoType,
            std::size_t*                                                      pInfoSize,
            void*                                                             pInfo );
    };

    template <>
    struct FunctionTraits <Function::GetShaderInstrumentationValuesARM>
    {
        constexpr static auto Name = "vkGetShaderInstrumentationValuesARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ShaderInstrumentationARM>*                  instrumentation,
            std::uint32_t*                                                    pMetricBlockCount,
            void*                                                             pMetricValues,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::GetShaderModuleCreateInfoIdentifierEXT>
    {
        constexpr static auto Name = "vkGetShaderModuleCreateInfoIdentifierEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const ShaderModuleCreateInfo*                                     pCreateInfo,
            ShaderModuleIdentifierEXT*                                        pIdentifier );
    };

    template <>
    struct FunctionTraits <Function::GetShaderModuleIdentifierEXT>
    {
        constexpr static auto Name = "vkGetShaderModuleIdentifierEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ShaderModule>*                              shaderModule,
            ShaderModuleIdentifierEXT*                                        pIdentifier );
    };

    template <>
    struct FunctionTraits <Function::GetSleepStatusLegacyNV>
    {
        constexpr static auto Name = "vkGetSleepStatusLegacyNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t*                                                    pLowLatencyMode );
    };

    template <>
    struct FunctionTraits <Function::GetSwapchainCounterEXT>
    {
        constexpr static auto Name = "vkGetSwapchainCounterEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            SurfaceCounterFlagBitsEXT                                         counter,
            std::uint64_t*                                                    pCounterValue );
    };

    template <>
    struct FunctionTraits <Function::GetSwapchainGrallocUsage2ANDROID>
    {
        constexpr static auto Name = "vkGetSwapchainGrallocUsage2ANDROID";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Format                                                            format,
            std::uint32_t                                                     imageUsage,
            std::uint32_t                                                     swapchainImageUsage,
            std::uint64_t*                                                    grallocConsumerUsage,
            std::uint64_t*                                                    grallocProducerUsage );
    };

    template <>
    struct FunctionTraits <Function::GetSwapchainGrallocUsageANDROID>
    {
        constexpr static auto Name = "vkGetSwapchainGrallocUsageANDROID";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Format                                                            format,
            std::uint32_t                                                     imageUsage,
            std::int32_t*                                                     grallocUsage );
    };

    template <>
    struct FunctionTraits <Function::GetSwapchainImagesKHR>
    {
        constexpr static auto Name = "vkGetSwapchainImagesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            std::uint32_t*                                                    pSwapchainImageCount,
            Reference<ObjectType::Image>**                                    pSwapchainImages );
    };

    template <>
    struct FunctionTraits <Function::GetSwapchainStatusKHR>
    {
        constexpr static auto Name = "vkGetSwapchainStatusKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain );
    };

    template <>
    struct FunctionTraits <Function::GetSwapchainTimeDomainPropertiesEXT>
    {
        constexpr static auto Name = "vkGetSwapchainTimeDomainPropertiesEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            SwapchainTimeDomainPropertiesEXT*                                 pSwapchainTimeDomainProperties,
            std::uint64_t*                                                    pTimeDomainsCounter );
    };

    template <>
    struct FunctionTraits <Function::GetSwapchainTimingPropertiesEXT>
    {
        constexpr static auto Name = "vkGetSwapchainTimingPropertiesEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            SwapchainTimingPropertiesEXT*                                     pSwapchainTimingProperties,
            std::uint64_t*                                                    pSwapchainTimingPropertiesCounter );
    };

    template <>
    struct FunctionTraits <Function::GetTensorMemoryRequirementsARM>
    {
        constexpr static auto Name = "vkGetTensorMemoryRequirementsARM";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            const TensorMemoryRequirementsInfoARM*                            pInfo,
            MemoryRequirements2*                                              pMemoryRequirements );
    };

    template <>
    struct FunctionTraits <Function::GetTensorOpaqueCaptureDataARM>
    {
        constexpr static auto Name = "vkGetTensorOpaqueCaptureDataARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     tensorCount,
            Reference<ObjectType::TensorARM>**                                pTensors,
            HostAddressRangeEXT*                                              pDatas );
    };

    template <>
    struct FunctionTraits <Function::GetTensorOpaqueCaptureDescriptorDataARM>
    {
        constexpr static auto Name = "vkGetTensorOpaqueCaptureDescriptorDataARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const TensorCaptureDescriptorDataInfoARM*                         pInfo,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetTensorViewOpaqueCaptureDescriptorDataARM>
    {
        constexpr static auto Name = "vkGetTensorViewOpaqueCaptureDescriptorDataARM";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const TensorViewCaptureDescriptorDataInfoARM*                     pInfo,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::GetValidationCacheDataEXT>
    {
        constexpr static auto Name = "vkGetValidationCacheDataEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ValidationCacheEXT>*                        validationCache,
            std::size_t*                                                      pDataSize,
            void*                                                             pData );
    };

    template <>
    struct FunctionTraits <Function::ImportFenceFdKHR>
    {
        constexpr static auto Name = "vkImportFenceFdKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImportFenceFdInfoKHR*                                       pImportFenceFdInfo );
    };

    template <>
    struct FunctionTraits <Function::ImportSemaphoreFdKHR>
    {
        constexpr static auto Name = "vkImportSemaphoreFdKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ImportSemaphoreFdInfoKHR*                                   pImportSemaphoreFdInfo );
    };

    template <>
    struct FunctionTraits <Function::InitializePerformanceApiINTEL>
    {
        constexpr static auto Name = "vkInitializePerformanceApiINTEL";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const InitializePerformanceApiInfoINTEL*                          pInitializeInfo );
    };

    template <>
    struct FunctionTraits <Function::InvalidateMappedMemoryRanges>
    {
        constexpr static auto Name = "vkInvalidateMappedMemoryRanges";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     memoryRangeCount,
            const MappedMemoryRange*                                          pMemoryRanges );
    };

    template <>
    struct FunctionTraits <Function::LatencySleepLegacyNV>
    {
        constexpr static auto Name = "vkLatencySleepLegacyNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Semaphore>*                                 signalSemaphore,
            std::uint64_t                                                     value );
    };

    template <>
    struct FunctionTraits <Function::LatencySleepNV>
    {
        constexpr static auto Name = "vkLatencySleepNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            const LatencySleepInfoNV*                                         pSleepInfo );
    };

    template <>
    struct FunctionTraits <Function::MapMemory>
    {
        constexpr static auto Name = "vkMapMemory";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeviceMemory>*                              memory,
            std::uint64_t                                                     offset,
            std::uint64_t                                                     size,
            std::uint32_t                                                     flags,
            void**                                                            ppData );
    };

    template <>
    struct FunctionTraits <Function::MapMemory2>
    {
        constexpr static auto Name = "vkMapMemory2";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const MemoryMapInfo*                                              pMemoryMapInfo,
            void**                                                            ppData );
    };

    template <>
    struct FunctionTraits <Function::MergePipelineCaches>
    {
        constexpr static auto Name = "vkMergePipelineCaches";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PipelineCache>*                             dstCache,
            std::uint32_t                                                     srcCacheCount,
            Reference<ObjectType::PipelineCache>**                            pSrcCaches );
    };

    template <>
    struct FunctionTraits <Function::MergeValidationCachesEXT>
    {
        constexpr static auto Name = "vkMergeValidationCachesEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::ValidationCacheEXT>*                        dstCache,
            std::uint32_t                                                     srcCacheCount,
            Reference<ObjectType::ValidationCacheEXT>**                       pSrcCaches );
    };

    template <>
    struct FunctionTraits <Function::QueueBeginDebugUtilsLabelEXT>
    {
        constexpr static auto Name = "vkQueueBeginDebugUtilsLabelEXT";
        using Type = void (*) (
            Reference<ObjectType::Queue>*                                     queue,
            const DebugUtilsLabelEXT*                                         pLabelInfo );
    };

    template <>
    struct FunctionTraits <Function::QueueBindSparse>
    {
        constexpr static auto Name = "vkQueueBindSparse";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue,
            std::uint32_t                                                     bindInfoCount,
            const BindSparseInfo*                                             pBindInfo,
            Reference<ObjectType::Fence>*                                     fence );
    };

    template <>
    struct FunctionTraits <Function::QueueEndDebugUtilsLabelEXT>
    {
        constexpr static auto Name = "vkQueueEndDebugUtilsLabelEXT";
        using Type = void (*) (
            Reference<ObjectType::Queue>*                                     queue );
    };

    template <>
    struct FunctionTraits <Function::QueueInsertDebugUtilsLabelEXT>
    {
        constexpr static auto Name = "vkQueueInsertDebugUtilsLabelEXT";
        using Type = void (*) (
            Reference<ObjectType::Queue>*                                     queue,
            const DebugUtilsLabelEXT*                                         pLabelInfo );
    };

    template <>
    struct FunctionTraits <Function::QueueNotifyOutOfBandLegacyNV>
    {
        constexpr static auto Name = "vkQueueNotifyOutOfBandLegacyNV";
        using Type = void (*) (
            Reference<ObjectType::Queue>*                                     queue,
            std::uint32_t                                                     queueType );
    };

    template <>
    struct FunctionTraits <Function::QueueNotifyOutOfBandNV>
    {
        constexpr static auto Name = "vkQueueNotifyOutOfBandNV";
        using Type = void (*) (
            Reference<ObjectType::Queue>*                                     queue,
            const OutOfBandQueueTypeInfoNV*                                   pQueueTypeInfo );
    };

    template <>
    struct FunctionTraits <Function::QueuePresentKHR>
    {
        constexpr static auto Name = "vkQueuePresentKHR";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue,
            const PresentInfoKHR*                                             pPresentInfo );
    };

    template <>
    struct FunctionTraits <Function::QueueSetPerfHintQCOM>
    {
        constexpr static auto Name = "vkQueueSetPerfHintQCOM";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue,
            const PerfHintInfoQCOM*                                           pPerfHintInfo );
    };

    template <>
    struct FunctionTraits <Function::QueueSetPerformanceConfigurationINTEL>
    {
        constexpr static auto Name = "vkQueueSetPerformanceConfigurationINTEL";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue,
            Reference<ObjectType::PerformanceConfigurationINTEL>*             configuration );
    };

    template <>
    struct FunctionTraits <Function::QueueSignalReleaseImageANDROID>
    {
        constexpr static auto Name = "vkQueueSignalReleaseImageANDROID";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue,
            std::uint32_t                                                     waitSemaphoreCount,
            Reference<ObjectType::Semaphore>**                                pWaitSemaphores,
            Reference<ObjectType::Image>*                                     image,
            std::int32_t*                                                     pNativeFenceFd );
    };

    template <>
    struct FunctionTraits <Function::QueueSubmit>
    {
        constexpr static auto Name = "vkQueueSubmit";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue,
            std::uint32_t                                                     submitCount,
            const SubmitInfo*                                                 pSubmits,
            Reference<ObjectType::Fence>*                                     fence );
    };

    template <>
    struct FunctionTraits <Function::QueueSubmit2>
    {
        constexpr static auto Name = "vkQueueSubmit2";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue,
            std::uint32_t                                                     submitCount,
            const SubmitInfo2*                                                pSubmits,
            Reference<ObjectType::Fence>*                                     fence );
    };

    template <>
    struct FunctionTraits <Function::QueueWaitIdle>
    {
        constexpr static auto Name = "vkQueueWaitIdle";
        using Type = Result (*) (
            Reference<ObjectType::Queue>*                                     queue );
    };

    template <>
    struct FunctionTraits <Function::RegisterCustomBorderColorEXT>
    {
        constexpr static auto Name = "vkRegisterCustomBorderColorEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SamplerCustomBorderColorCreateInfoEXT*                      pBorderColor,
            std::uint32_t                                                     requestIndex,
            std::uint32_t*                                                    pIndex );
    };

    template <>
    struct FunctionTraits <Function::RegisterDeviceEventEXT>
    {
        constexpr static auto Name = "vkRegisterDeviceEventEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DeviceEventInfoEXT*                                         pDeviceEventInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Fence>**                                    pFence );
    };

    template <>
    struct FunctionTraits <Function::RegisterDisplayEventEXT>
    {
        constexpr static auto Name = "vkRegisterDisplayEventEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DisplayKHR>*                                display,
            const DisplayEventInfoEXT*                                        pDisplayEventInfo,
            const void*                                                       pAllocator,
            Reference<ObjectType::Fence>**                                    pFence );
    };

    template <>
    struct FunctionTraits <Function::ReleaseCapturedPipelineDataKHR>
    {
        constexpr static auto Name = "vkReleaseCapturedPipelineDataKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ReleaseCapturedPipelineDataInfoKHR*                         pInfo,
            const void*                                                       pAllocator );
    };

    template <>
    struct FunctionTraits <Function::ReleaseDisplayEXT>
    {
        constexpr static auto Name = "vkReleaseDisplayEXT";
        using Type = Result (*) (
            Reference<ObjectType::PhysicalDevice>*                            physicalDevice,
            Reference<ObjectType::DisplayKHR>*                                display );
    };

    template <>
    struct FunctionTraits <Function::ReleaseFullScreenExclusiveModeEXT>
    {
        constexpr static auto Name = "vkReleaseFullScreenExclusiveModeEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain );
    };

    template <>
    struct FunctionTraits <Function::ReleasePerformanceConfigurationINTEL>
    {
        constexpr static auto Name = "vkReleasePerformanceConfigurationINTEL";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::PerformanceConfigurationINTEL>*             configuration );
    };

    template <>
    struct FunctionTraits <Function::ReleaseProfilingLockKHR>
    {
        constexpr static auto Name = "vkReleaseProfilingLockKHR";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device );
    };

    template <>
    struct FunctionTraits <Function::ReleaseSwapchainImagesKHR>
    {
        constexpr static auto Name = "vkReleaseSwapchainImagesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const ReleaseSwapchainImagesInfoKHR*                              pReleaseInfo );
    };

    template <>
    struct FunctionTraits <Function::ResetCommandBuffer>
    {
        constexpr static auto Name = "vkResetCommandBuffer";
        using Type = Result (*) (
            Reference<ObjectType::CommandBuffer>*                             commandBuffer,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::ResetCommandPool>
    {
        constexpr static auto Name = "vkResetCommandPool";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CommandPool>*                               commandPool,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::ResetDescriptorPool>
    {
        constexpr static auto Name = "vkResetDescriptorPool";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorPool>*                            descriptorPool,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::ResetEvent>
    {
        constexpr static auto Name = "vkResetEvent";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Event>*                                     event );
    };

    template <>
    struct FunctionTraits <Function::ResetFences>
    {
        constexpr static auto Name = "vkResetFences";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     fenceCount,
            Reference<ObjectType::Fence>**                                    pFences );
    };

    template <>
    struct FunctionTraits <Function::ResetGpaSessionAMD>
    {
        constexpr static auto Name = "vkResetGpaSessionAMD";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::GpaSessionAMD>*                             gpaSession );
    };

    template <>
    struct FunctionTraits <Function::ResetQueryPool>
    {
        constexpr static auto Name = "vkResetQueryPool";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::QueryPool>*                                 queryPool,
            std::uint32_t                                                     firstQuery,
            std::uint32_t                                                     queryCount );
    };

    template <>
    struct FunctionTraits <Function::SetDebugUtilsObjectNameEXT>
    {
        constexpr static auto Name = "vkSetDebugUtilsObjectNameEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DebugUtilsObjectNameInfoEXT*                                pNameInfo );
    };

    template <>
    struct FunctionTraits <Function::SetDebugUtilsObjectTagEXT>
    {
        constexpr static auto Name = "vkSetDebugUtilsObjectTagEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const DebugUtilsObjectTagInfoEXT*                                 pTagInfo );
    };

    template <>
    struct FunctionTraits <Function::SetDeviceMemoryPriorityEXT>
    {
        constexpr static auto Name = "vkSetDeviceMemoryPriorityEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeviceMemory>*                              memory,
            float                                                             priority );
    };

    template <>
    struct FunctionTraits <Function::SetEvent>
    {
        constexpr static auto Name = "vkSetEvent";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::Event>*                                     event );
    };

    template <>
    struct FunctionTraits <Function::SetGpaDeviceClockModeAMD>
    {
        constexpr static auto Name = "vkSetGpaDeviceClockModeAMD";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            GpaDeviceClockModeInfoAMD*                                        pInfo );
    };

    template <>
    struct FunctionTraits <Function::SetHdrMetadataEXT>
    {
        constexpr static auto Name = "vkSetHdrMetadataEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     swapchainCount,
            Reference<ObjectType::SwapchainKHR>**                             pSwapchains,
            const HdrMetadataEXT*                                             pMetadata );
    };

    template <>
    struct FunctionTraits <Function::SetLatencyMarkerLegacyNV>
    {
        constexpr static auto Name = "vkSetLatencyMarkerLegacyNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint64_t                                                     frameID,
            std::uint32_t                                                     marker );
    };

    template <>
    struct FunctionTraits <Function::SetLatencyMarkerNV>
    {
        constexpr static auto Name = "vkSetLatencyMarkerNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            const SetLatencyMarkerInfoNV*                                     pLatencyMarkerInfo );
    };

    template <>
    struct FunctionTraits <Function::SetLatencySleepModeLegacyNV>
    {
        constexpr static auto Name = "vkSetLatencySleepModeLegacyNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     lowLatencyMode,
            std::uint32_t                                                     lowLatencyBoost,
            std::uint32_t                                                     minimumIntervalUs );
    };

    template <>
    struct FunctionTraits <Function::SetLatencySleepModeNV>
    {
        constexpr static auto Name = "vkSetLatencySleepModeNV";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            const LatencySleepModeInfoNV*                                     pSleepModeInfo );
    };

    template <>
    struct FunctionTraits <Function::SetLocalDimmingAMD>
    {
        constexpr static auto Name = "vkSetLocalDimmingAMD";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapChain,
            std::uint32_t                                                     localDimmingEnable );
    };

    template <>
    struct FunctionTraits <Function::SetPrivateData>
    {
        constexpr static auto Name = "vkSetPrivateData";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            ObjectType                                                        objectType,
            std::uint64_t                                                     objectHandle,
            Reference<ObjectType::PrivateDataSlot>*                           privateDataSlot,
            std::uint64_t                                                     data );
    };

    template <>
    struct FunctionTraits <Function::SetSwapchainPresentTimingQueueSizeEXT>
    {
        constexpr static auto Name = "vkSetSwapchainPresentTimingQueueSizeEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            std::uint32_t                                                     size );
    };

    template <>
    struct FunctionTraits <Function::ShutdownLatencyDeviceLegacyNV>
    {
        constexpr static auto Name = "vkShutdownLatencyDeviceLegacyNV";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device );
    };

    template <>
    struct FunctionTraits <Function::SignalSemaphore>
    {
        constexpr static auto Name = "vkSignalSemaphore";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SemaphoreSignalInfo*                                        pSignalInfo );
    };

    template <>
    struct FunctionTraits <Function::SubmitDebugUtilsMessageEXT>
    {
        constexpr static auto Name = "vkSubmitDebugUtilsMessageEXT";
        using Type = void (*) (
            Reference<ObjectType::Instance>*                                  instance,
            DebugUtilsMessageSeverityFlagBitsEXT                              messageSeverity,
            std::uint32_t                                                     messageTypes,
            const DebugUtilsMessengerCallbackDataEXT*                         pCallbackData );
    };

    template <>
    struct FunctionTraits <Function::TransitionImageLayout>
    {
        constexpr static auto Name = "vkTransitionImageLayout";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     transitionCount,
            const HostImageLayoutTransitionInfo*                              pTransitions );
    };

    template <>
    struct FunctionTraits <Function::TrimCommandPool>
    {
        constexpr static auto Name = "vkTrimCommandPool";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::CommandPool>*                               commandPool,
            std::uint32_t                                                     flags );
    };

    template <>
    struct FunctionTraits <Function::UninitializePerformanceApiINTEL>
    {
        constexpr static auto Name = "vkUninitializePerformanceApiINTEL";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device );
    };

    template <>
    struct FunctionTraits <Function::UnmapMemory>
    {
        constexpr static auto Name = "vkUnmapMemory";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DeviceMemory>*                              memory );
    };

    template <>
    struct FunctionTraits <Function::UnmapMemory2>
    {
        constexpr static auto Name = "vkUnmapMemory2";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const MemoryUnmapInfo*                                            pMemoryUnmapInfo );
    };

    template <>
    struct FunctionTraits <Function::UnregisterCustomBorderColorEXT>
    {
        constexpr static auto Name = "vkUnregisterCustomBorderColorEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     index );
    };

    template <>
    struct FunctionTraits <Function::UpdateDescriptorSetWithTemplate>
    {
        constexpr static auto Name = "vkUpdateDescriptorSetWithTemplate";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::DescriptorSet>*                             descriptorSet,
            Reference<ObjectType::DescriptorUpdateTemplate>*                  descriptorUpdateTemplate,
            const void*                                                       pData );
    };

    template <>
    struct FunctionTraits <Function::UpdateDescriptorSets>
    {
        constexpr static auto Name = "vkUpdateDescriptorSets";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     descriptorWriteCount,
            const WriteDescriptorSet*                                         pDescriptorWrites,
            std::uint32_t                                                     descriptorCopyCount,
            const CopyDescriptorSet*                                          pDescriptorCopies );
    };

    template <>
    struct FunctionTraits <Function::UpdateIndirectExecutionSetPipelineEXT>
    {
        constexpr static auto Name = "vkUpdateIndirectExecutionSetPipelineEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::IndirectExecutionSetEXT>*                   indirectExecutionSet,
            std::uint32_t                                                     executionSetWriteCount,
            const WriteIndirectExecutionSetPipelineEXT*                       pExecutionSetWrites );
    };

    template <>
    struct FunctionTraits <Function::UpdateIndirectExecutionSetShaderEXT>
    {
        constexpr static auto Name = "vkUpdateIndirectExecutionSetShaderEXT";
        using Type = void (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::IndirectExecutionSetEXT>*                   indirectExecutionSet,
            std::uint32_t                                                     executionSetWriteCount,
            const WriteIndirectExecutionSetShaderEXT*                         pExecutionSetWrites );
    };

    template <>
    struct FunctionTraits <Function::WaitForFences>
    {
        constexpr static auto Name = "vkWaitForFences";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     fenceCount,
            Reference<ObjectType::Fence>**                                    pFences,
            std::uint32_t                                                     waitAll,
            std::uint64_t                                                     timeout );
    };

    template <>
    struct FunctionTraits <Function::WaitForPresent2KHR>
    {
        constexpr static auto Name = "vkWaitForPresent2KHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            const PresentWait2InfoKHR*                                        pPresentWait2Info );
    };

    template <>
    struct FunctionTraits <Function::WaitForPresentKHR>
    {
        constexpr static auto Name = "vkWaitForPresentKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            Reference<ObjectType::SwapchainKHR>*                              swapchain,
            std::uint64_t                                                     presentId,
            std::uint64_t                                                     timeout );
    };

    template <>
    struct FunctionTraits <Function::WaitSemaphores>
    {
        constexpr static auto Name = "vkWaitSemaphores";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            const SemaphoreWaitInfo*                                          pWaitInfo,
            std::uint64_t                                                     timeout );
    };

    template <>
    struct FunctionTraits <Function::WriteAccelerationStructuresPropertiesKHR>
    {
        constexpr static auto Name = "vkWriteAccelerationStructuresPropertiesKHR";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     accelerationStructureCount,
            Reference<ObjectType::AccelerationStructureKHR>**                 pAccelerationStructures,
            QueryType                                                         queryType,
            std::size_t                                                       dataSize,
            void*                                                             pData,
            std::size_t                                                       stride );
    };

    template <>
    struct FunctionTraits <Function::WriteMicromapsPropertiesEXT>
    {
        constexpr static auto Name = "vkWriteMicromapsPropertiesEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     micromapCount,
            Reference<ObjectType::MicromapEXT>**                              pMicromaps,
            QueryType                                                         queryType,
            std::size_t                                                       dataSize,
            void*                                                             pData,
            std::size_t                                                       stride );
    };

    template <>
    struct FunctionTraits <Function::WriteResourceDescriptorsEXT>
    {
        constexpr static auto Name = "vkWriteResourceDescriptorsEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     resourceCount,
            const ResourceDescriptorInfoEXT*                                  pResources,
            const HostAddressRangeEXT*                                        pDescriptors );
    };

    template <>
    struct FunctionTraits <Function::WriteSamplerDescriptorsEXT>
    {
        constexpr static auto Name = "vkWriteSamplerDescriptorsEXT";
        using Type = Result (*) (
            Reference<ObjectType::Device>*                                    device,
            std::uint32_t                                                     samplerCount,
            const SamplerCreateInfo*                                          pSamplers,
            const HostAddressRangeEXT*                                        pDescriptors );
    };

    /**
     * @brief Type-safe wrapper around a function pointer selected by a Function enumerator.
     *
     * @tparam Fu Non-type template parameter of type Function. It identifies the
     *            mapped function signature and name described by FunctionTraits<Fu>.
     *
     * @details FunctionTraits<Fu> provides:
     *          - the function pointer type via FunctionTraits<Fu>::Type;
     *          - a constexpr char* function name for diagnostics/introspection.
     *
     * The wrapper stores a function pointer and provides checked and unchecked
     * invocation paths. Availability means only that a non-null pointer is stored;
     * it does not guarantee that the pointer addresses a valid callable function.
     */
    template <Function Fu>
    class Functional
    {
    public:
        /**
         * @brief Traits associated with the mapped function.
         *
         * Exposes the function pointer type and the constexpr char* function name
         * provided by FunctionTraits<Fu>.
         */
        using Traits = FunctionTraits<Fu>;

        Functional( ) noexcept = default;
                /**
         * @brief Copy constructor (defaulted).
         *
         * Copies the wrapped function pointer from @p other. Both objects then
         * refer to the same function; the pointer is a non-owning handle, so no
         * duplication of resources occurs.
         */
        Functional( const Functional& ) = default;
        /**
         * @brief Move constructor.
         *
         * Takes ownership of the function pointer from @p function and resets
         * the source's pointer to nullptr, leaving it in the unavailable state.
         *
         * @param function Functional object to move from.
         * @note This function never throws.
         */
        Functional( Functional&& function ) noexcept
            : CoreFunction{ function.CoreFunction }
        {
            function.CoreFunction = nullptr;
        }
        /**
         * @brief Copy assignment operator (defaulted).
         *
         * Copies the wrapped function pointer from @p other.
         *
         * @return Reference to this object.
         */
        Functional& operator=( const Functional& ) = default;
        /**
         * @brief Move assignment operator.
         *
         * Clears this object's current pointer, then swaps it with @p function's
         * pointer. After the call, this object holds the incoming pointer and
         * @p function is left empty.
         *
         * @param function Functional object to move from.
         * @return Reference to this object.
         * @note This function never throws.
         */
        Functional& operator=( Functional&& function ) noexcept
        {
            return std::swap( CoreFunction, function.CoreFunction ), *this;
        }
        /**
         * @brief Constructs the bootstrap vkGetInstanceProcAddr wrapper from a Runtime.
         *
         * Resolves the function directly from @p runtime via
         * Runtime::GetProcAddress, without validating the result. Only available
         * for the Functional<Function::GetInstanceProcAddr> specialization.
         *
         * @param runtime Runtime used to resolve the function address.
         * @note This function never throws.
         * @note The resulting pointer may be nullptr if resolution fails; the
         *       caller should check IsAvailable().
         */
        explicit Functional( const Runtime& runtime ) noexcept requires std::is_same_v<Functional, Functional<Function::GetInstanceProcAddr>>
        {
            CoreFunction = runtime.GetProcAddress( Traits::Name );
        }
        /**
         * @brief Constructs an instance-independent function wrapper from
         *        vkGetInstanceProcAddr.
         *
         * Resolves the function by calling the given vkGetInstanceProcAddr with
         * a nullptr instance, and casts the result to the wrapper's signature.
         * Enabled only for entry points that can be resolved without an
         * instance (EnumerateInstanceVersion, EnumerateInstanceExtensionProperties,
         * EnumerateInstanceLayerProperties, CreateInstance, and
         * GetInstanceProcAddr itself).
         *
         * @param getInstanceProcAddr Wrapper providing vkGetInstanceProcAddr.
         * @note This function never throws.
         * @note The result is not validated; the pointer may be nullptr if the
         *       function is unavailable.
         */
        explicit Functional( const Functional<Function::GetInstanceProcAddr>& getInstanceProcAddr ) noexcept
        requires std::is_same_v<Functional, Functional<Function::GetInstanceProcAddr>>                  or
                 std::is_same_v<Functional, Functional<Function::EnumerateInstanceVersion>>             or
                 std::is_same_v<Functional, Functional<Function::EnumerateInstanceExtensionProperties>> or
                 std::is_same_v<Functional, Functional<Function::EnumerateInstanceLayerProperties>>     or
                 std::is_same_v<Functional, Functional<Function::CreateInstance>>
        {
            CoreFunction = reinterpret_cast<Traits::Type>( getInstanceProcAddr.Call( nullptr , Traits::Name ) );
        }
        /**
         * @brief Constructs an instance-level function wrapper via vkGetInstanceProcAddr.
         *
         * Resolves the function by calling vkGetInstanceProcAddr with @p instance,
         * and casts the result to the wrapper's signature.
         *
         * @param instance            Instance used to resolve the function.
         * @param getInstanceProcAddr Wrapper providing vkGetInstanceProcAddr.
         * @note This function never throws.
         * @note The result is not validated; the pointer may be nullptr if the
         *       function is unavailable for the instance.
         */
        Functional( const Reference<ObjectType::Instance>& instance,const Functional<Function::GetInstanceProcAddr>& getInstanceProcAddr  ) noexcept
        {
            CoreFunction = reinterpret_cast<Traits::Type>( getInstanceProcAddr.Call( instance, Traits::Name ) );
        }
        /**
         * @brief Constructs a function wrapper via vkGetDeviceProcAddr.
         *
         * Resolves the function by calling vkGetDeviceProcAddr with the given
         * argument, and casts the result to the wrapper's signature.
         *
         * @param instance       Argument forwarded to vkGetDeviceProcAddr.
         * @param getDeviceProcAddr Wrapper providing vkGetDeviceProcAddr.
         * @note This function never throws.
         * @note The result is not validated; the pointer may be nullptr if the
         *       function is unavailable.
         */
        Functional( const Reference<ObjectType::Instance>& instance, const Functional<Function::GetDeviceProcAddr>& getDeviceProcAddr ) noexcept
        {
            CoreFunction = reinterpret_cast<Traits::Type>( getDeviceProcAddr.Call( instance, Traits::Name ) );
        }
        /**
         * @brief Loads or replaces the stored function pointer.
         *
         * @param functionHandle Pointer to the function to install.
         * @retval true  The handle was installed successfully.
         * @retval false The incoming replacement pointer is null; no valid function
         *               is installed.
         *
         * @details On repeated calls, any currently stored pointer is first released
         *          via Free(), and then the new handle is installed. If the
         *          replacement pointer is null, the operation returns false.
         *
         * @note This function only stores the pointer. It does not validate that the
         *       pointer refers to a callable function with the expected signature.
         */
        [[nodiscard]] bool Load( void* functionHandle ) noexcept
        {
            if( CoreFunction != nullptr ) [[unlikely]]

            {
                return false;
            }
            return CoreFunction = reinterpret_cast<FunctionTraits<Fu>::Type>( functionHandle ), CoreFunction != nullptr;
        }
        /**
         * @brief Releases the stored function pointer.
         *
         * @return The operation result; typically resets the internal pointer and
         *         reports success.
         *
         * @details Normally resets the internally stored function pointer to nullptr.
         */
        [[nodiscard]] bool Free( ) noexcept
        {
            if( CoreFunction == nullptr ) [[unlikely]]

            {
                return false;
            }
            return CoreFunction = nullptr, CoreFunction == nullptr;
        }
        /**
         * @brief Reports whether a function pointer is currently stored.
         *
         * @retval true  The internal pointer is non-null.
         * @retval false No function pointer is stored.
         *
         * @warning This only checks for a stored non-null pointer. It cannot detect
         *          whether the pointer is valid, callable, or matches the expected
         *          function signature.
         */
        [[nodiscard]] bool IsAvailable( ) const noexcept
        {
            return CoreFunction != nullptr;
        }
        /**
         * @brief Invokes the stored function after checking availability.
         *
         * @tparam Args Argument types forwarded to the stored function.
         * @param args Arguments forwarded to the stored function.
         * @return The result of the stored function call, with its original type
         *         preserved via decltype(auto).
         *
         * @details IsAvailable() is checked before every call. If no function is
         *          available, std::terminate() is called.
         *
         * @note This function checks only that a non-null pointer is stored. It does
         *       not validate the pointer or the argument compatibility beyond what
         *       the underlying function call provides.
         */
        template <typename... Args>
        [[nodiscard]] decltype( auto ) Call( Args&&... args ) const noexcept
        {
            if( CoreFunction == nullptr ) [[unlikely]]

            {
                std::terminate( );
            }
            return CoreFunction( std::forward<decltype( args )>( args )... );
        }
        /**
         * @brief Invokes the stored function without checking availability.
         *
         * @tparam Args Argument types forwarded to the stored function.
         * @param args Arguments forwarded to the stored function.
         * @return The result of the stored function call, with its original type
         *         preserved via decltype(auto).
         *
         * @warning No IsAvailable() check is performed. The caller must guarantee
         *          that a valid function pointer is stored. This function is
         *          intended for performance-sensitive code where safety is already
         *          ensured by the caller. Calling it when no valid function is
         *          stored results in undefined behavior.
         *
         * @pre A valid function pointer must be stored; see IsAvailable().
         */
        template <typename... Args>
        [[nodiscard]] decltype( auto ) UnSafeCall( Args&&... args ) noexcept
        {
            return CoreFunction( std::forward<decltype( args )>( args )... );
        }
        /**
         * @brief Safely clears the internal function pointer.
         *
         * If the internal function pointer is already invalid (nullptr), this
         * function does nothing. If it is valid, the pointer is cleared
         * (reset to nullptr).
         *
         * @note This function never throws.
         */
        void Clear( ) noexcept
        {
            CoreFunction = nullptr;
        }
        /**
         * @brief Invokes the wrapped function with the given arguments.
         *
         * Perfect-forwards all arguments to the underlying function pointer and
         * returns its result, preserving the exact return type via decltype(auto).
         *
         * @tparam Args Argument types, deduced from the call.
         * @param args Arguments forwarded to the wrapped function.
         * @return The result of the underlying function call, with its exact type.
         * @note This function does NOT check whether the function has been
         *       loaded or is available; the caller must ensure IsAvailable()
         *       is true before calling, otherwise undefined behavior results.
         * @note This function never throws.
         */
        template <typename... Args>
        decltype( auto ) operator( )( Args&&... args ) noexcept
        {
            return Call( std::forward<decltype( args )>( args )... );
        }
        /**
         * @brief Destructor.
         *
         * Automatically clears the wrapped function pointer if it is still
         * valid, preventing stale function pointers from being left behind.
         * @note This function never throws.
         */
        ~Functional( ) noexcept
        {
            CoreFunction = nullptr;
        }
    private:
        /**
         * @brief Stored function pointer.
         *
         * Type is FunctionTraits<Fu>::Type and is initialized to nullptr. A null
         * value means that no function is currently available.
         */
        FunctionTraits<Fu>::Type CoreFunction{ nullptr };
    };
   
    using AcquireDrmDisplayEXT                                                = Functional<Function::AcquireDrmDisplayEXT>;
    using AcquireFullScreenExclusiveModeEXT                                   = Functional<Function::AcquireFullScreenExclusiveModeEXT>;
    using AcquireImageANDROID                                                 = Functional<Function::AcquireImageANDROID>;
    using AcquireNextImage2KHR                                                = Functional<Function::AcquireNextImage2KHR>;
    using AcquireNextImageKHR                                                 = Functional<Function::AcquireNextImageKHR>;
    using AcquirePerformanceConfigurationINTEL                                = Functional<Function::AcquirePerformanceConfigurationINTEL>;
    using AcquireProfilingLockKHR                                             = Functional<Function::AcquireProfilingLockKHR>;
    using AllocateCommandBuffers                                              = Functional<Function::AllocateCommandBuffers>;
    using AllocateDescriptorSets                                              = Functional<Function::AllocateDescriptorSets>;
    using AllocateMemory                                                      = Functional<Function::AllocateMemory>;
    using AntiLagUpdateAMD                                                    = Functional<Function::AntiLagUpdateAMD>;
    using BeginCommandBuffer                                                  = Functional<Function::BeginCommandBuffer>;
    using BindAccelerationStructureMemoryNV                                   = Functional<Function::BindAccelerationStructureMemoryNV>;
    using BindBufferMemory                                                    = Functional<Function::BindBufferMemory>;
    using BindBufferMemory2                                                   = Functional<Function::BindBufferMemory2>;
    using BindDataGraphPipelineSessionMemoryARM                               = Functional<Function::BindDataGraphPipelineSessionMemoryARM>;
    using BindImageMemory                                                     = Functional<Function::BindImageMemory>;
    using BindImageMemory2                                                    = Functional<Function::BindImageMemory2>;
    using BindOpticalFlowSessionImageNV                                       = Functional<Function::BindOpticalFlowSessionImageNV>;
    using BindTensorMemoryARM                                                 = Functional<Function::BindTensorMemoryARM>;
    using BuildAccelerationStructuresKHR                                      = Functional<Function::BuildAccelerationStructuresKHR>;
    using BuildMicromapsEXT                                                   = Functional<Function::BuildMicromapsEXT>;
    using ClearShaderInstrumentationMetricsARM                                = Functional<Function::ClearShaderInstrumentationMetricsARM>;
    using CmdBeginConditionalRendering2EXT                                    = Functional<Function::CmdBeginConditionalRendering2EXT>;
    using CmdBeginConditionalRenderingEXT                                     = Functional<Function::CmdBeginConditionalRenderingEXT>;
    using CmdBeginCustomResolveEXT                                            = Functional<Function::CmdBeginCustomResolveEXT>;
    using CmdBeginDebugUtilsLabelEXT                                          = Functional<Function::CmdBeginDebugUtilsLabelEXT>;
    using CmdBeginGpaSampleAMD                                                = Functional<Function::CmdBeginGpaSampleAMD>;
    using CmdBeginGpaSessionAMD                                               = Functional<Function::CmdBeginGpaSessionAMD>;
    using CmdBeginPerTileExecutionQCOM                                        = Functional<Function::CmdBeginPerTileExecutionQCOM>;
    using CmdBeginQuery                                                       = Functional<Function::CmdBeginQuery>;
    using CmdBeginQueryIndexedEXT                                             = Functional<Function::CmdBeginQueryIndexedEXT>;
    using CmdBeginRenderPass                                                  = Functional<Function::CmdBeginRenderPass>;
    using CmdBeginRenderPass2                                                 = Functional<Function::CmdBeginRenderPass2>;
    using CmdBeginRendering                                                   = Functional<Function::CmdBeginRendering>;
    using CmdBeginShaderInstrumentationARM                                    = Functional<Function::CmdBeginShaderInstrumentationARM>;
    using CmdBeginTransformFeedback2EXT                                       = Functional<Function::CmdBeginTransformFeedback2EXT>;
    using CmdBeginTransformFeedbackEXT                                        = Functional<Function::CmdBeginTransformFeedbackEXT>;
    using CmdBindDescriptorBufferEmbeddedSamplers2EXT                         = Functional<Function::CmdBindDescriptorBufferEmbeddedSamplers2EXT>;
    using CmdBindDescriptorBufferEmbeddedSamplersEXT                          = Functional<Function::CmdBindDescriptorBufferEmbeddedSamplersEXT>;
    using CmdBindDescriptorBuffersEXT                                         = Functional<Function::CmdBindDescriptorBuffersEXT>;
    using CmdBindDescriptorSets                                               = Functional<Function::CmdBindDescriptorSets>;
    using CmdBindDescriptorSets2                                              = Functional<Function::CmdBindDescriptorSets2>;
    using CmdBindIndexBuffer                                                  = Functional<Function::CmdBindIndexBuffer>;
    using CmdBindIndexBuffer2                                                 = Functional<Function::CmdBindIndexBuffer2>;
    using CmdBindIndexBuffer3KHR                                              = Functional<Function::CmdBindIndexBuffer3KHR>;
    using CmdBindInvocationMaskHUAWEI                                         = Functional<Function::CmdBindInvocationMaskHUAWEI>;
    using CmdBindPipeline                                                     = Functional<Function::CmdBindPipeline>;
    using CmdBindPipelineShaderGroupNV                                        = Functional<Function::CmdBindPipelineShaderGroupNV>;
    using CmdBindResourceHeapEXT                                              = Functional<Function::CmdBindResourceHeapEXT>;
    using CmdBindSamplerHeapEXT                                               = Functional<Function::CmdBindSamplerHeapEXT>;
    using CmdBindShadersEXT                                                   = Functional<Function::CmdBindShadersEXT>;
    using CmdBindShadingRateImageNV                                           = Functional<Function::CmdBindShadingRateImageNV>;
    using CmdBindTileMemoryQCOM                                               = Functional<Function::CmdBindTileMemoryQCOM>;
    using CmdBindTransformFeedbackBuffers2EXT                                 = Functional<Function::CmdBindTransformFeedbackBuffers2EXT>;
    using CmdBindTransformFeedbackBuffersEXT                                  = Functional<Function::CmdBindTransformFeedbackBuffersEXT>;
    using CmdBindVertexBuffers                                                = Functional<Function::CmdBindVertexBuffers>;
    using CmdBindVertexBuffers2                                               = Functional<Function::CmdBindVertexBuffers2>;
    using CmdBindVertexBuffers3KHR                                            = Functional<Function::CmdBindVertexBuffers3KHR>;
    using CmdBlitImage                                                        = Functional<Function::CmdBlitImage>;
    using CmdBlitImage2                                                       = Functional<Function::CmdBlitImage2>;
    using CmdBuildAccelerationStructureNV                                     = Functional<Function::CmdBuildAccelerationStructureNV>;
    using CmdBuildAccelerationStructuresIndirectKHR                           = Functional<Function::CmdBuildAccelerationStructuresIndirectKHR>;
    using CmdBuildAccelerationStructuresKHR                                   = Functional<Function::CmdBuildAccelerationStructuresKHR>;
    using CmdBuildClusterAccelerationStructureIndirectNV                      = Functional<Function::CmdBuildClusterAccelerationStructureIndirectNV>;
    using CmdBuildMicromapsEXT                                                = Functional<Function::CmdBuildMicromapsEXT>;
    using CmdBuildPartitionedAccelerationStructuresNV                         = Functional<Function::CmdBuildPartitionedAccelerationStructuresNV>;
    using CmdClearAttachments                                                 = Functional<Function::CmdClearAttachments>;
    using CmdClearColorImage                                                  = Functional<Function::CmdClearColorImage>;
    using CmdClearDepthStencilImage                                           = Functional<Function::CmdClearDepthStencilImage>;
    using CmdConvertCooperativeVectorMatrixNV                                 = Functional<Function::CmdConvertCooperativeVectorMatrixNV>;
    using CmdCopyAccelerationStructureKHR                                     = Functional<Function::CmdCopyAccelerationStructureKHR>;
    using CmdCopyAccelerationStructureNV                                      = Functional<Function::CmdCopyAccelerationStructureNV>;
    using CmdCopyAccelerationStructureToMemoryKHR                             = Functional<Function::CmdCopyAccelerationStructureToMemoryKHR>;
    using CmdCopyBuffer                                                       = Functional<Function::CmdCopyBuffer>;
    using CmdCopyBuffer2                                                      = Functional<Function::CmdCopyBuffer2>;
    using CmdCopyBufferToImage                                                = Functional<Function::CmdCopyBufferToImage>;
    using CmdCopyBufferToImage2                                               = Functional<Function::CmdCopyBufferToImage2>;
    using CmdCopyGpaSessionResultsAMD                                         = Functional<Function::CmdCopyGpaSessionResultsAMD>;
    using CmdCopyImage                                                        = Functional<Function::CmdCopyImage>;
    using CmdCopyImage2                                                       = Functional<Function::CmdCopyImage2>;
    using CmdCopyImageToBuffer                                                = Functional<Function::CmdCopyImageToBuffer>;
    using CmdCopyImageToBuffer2                                               = Functional<Function::CmdCopyImageToBuffer2>;
    using CmdCopyImageToMemoryKHR                                             = Functional<Function::CmdCopyImageToMemoryKHR>;
    using CmdCopyMemoryIndirectKHR                                            = Functional<Function::CmdCopyMemoryIndirectKHR>;
    using CmdCopyMemoryIndirectNV                                             = Functional<Function::CmdCopyMemoryIndirectNV>;
    using CmdCopyMemoryKHR                                                    = Functional<Function::CmdCopyMemoryKHR>;
    using CmdCopyMemoryToAccelerationStructureKHR                             = Functional<Function::CmdCopyMemoryToAccelerationStructureKHR>;
    using CmdCopyMemoryToImageIndirectKHR                                     = Functional<Function::CmdCopyMemoryToImageIndirectKHR>;
    using CmdCopyMemoryToImageIndirectNV                                      = Functional<Function::CmdCopyMemoryToImageIndirectNV>;
    using CmdCopyMemoryToImageKHR                                             = Functional<Function::CmdCopyMemoryToImageKHR>;
    using CmdCopyMemoryToMicromapEXT                                          = Functional<Function::CmdCopyMemoryToMicromapEXT>;
    using CmdCopyMicromapEXT                                                  = Functional<Function::CmdCopyMicromapEXT>;
    using CmdCopyMicromapToMemoryEXT                                          = Functional<Function::CmdCopyMicromapToMemoryEXT>;
    using CmdCopyQueryPoolResults                                             = Functional<Function::CmdCopyQueryPoolResults>;
    using CmdCopyQueryPoolResultsToMemoryKHR                                  = Functional<Function::CmdCopyQueryPoolResultsToMemoryKHR>;
    using CmdCopyTensorARM                                                    = Functional<Function::CmdCopyTensorARM>;
    using CmdCuLaunchKernelNVX                                                = Functional<Function::CmdCuLaunchKernelNVX>;
    using CmdDebugMarkerBeginEXT                                              = Functional<Function::CmdDebugMarkerBeginEXT>;
    using CmdDebugMarkerEndEXT                                                = Functional<Function::CmdDebugMarkerEndEXT>;
    using CmdDebugMarkerInsertEXT                                             = Functional<Function::CmdDebugMarkerInsertEXT>;
    using CmdDecompressMemoryEXT                                              = Functional<Function::CmdDecompressMemoryEXT>;
    using CmdDecompressMemoryIndirectCountEXT                                 = Functional<Function::CmdDecompressMemoryIndirectCountEXT>;
    using CmdDecompressMemoryIndirectCountNV                                  = Functional<Function::CmdDecompressMemoryIndirectCountNV>;
    using CmdDecompressMemoryNV                                               = Functional<Function::CmdDecompressMemoryNV>;
    using CmdDispatch                                                         = Functional<Function::CmdDispatch>;
    using CmdDispatchBase                                                     = Functional<Function::CmdDispatchBase>;
    using CmdDispatchDataGraphARM                                             = Functional<Function::CmdDispatchDataGraphARM>;
    using CmdDispatchGraphIndirectCountAMDX                                   = Functional<Function::CmdDispatchGraphIndirectCountAMDX>;
    using CmdDispatchIndirect                                                 = Functional<Function::CmdDispatchIndirect>;
    using CmdDispatchIndirect2KHR                                             = Functional<Function::CmdDispatchIndirect2KHR>;
    using CmdDispatchTileQCOM                                                 = Functional<Function::CmdDispatchTileQCOM>;
    using CmdDraw                                                             = Functional<Function::CmdDraw>;
    using CmdDrawClusterHUAWEI                                                = Functional<Function::CmdDrawClusterHUAWEI>;
    using CmdDrawClusterIndirectHUAWEI                                        = Functional<Function::CmdDrawClusterIndirectHUAWEI>;
    using CmdDrawIndexed                                                      = Functional<Function::CmdDrawIndexed>;
    using CmdDrawIndexedIndirect                                              = Functional<Function::CmdDrawIndexedIndirect>;
    using CmdDrawIndexedIndirect2KHR                                          = Functional<Function::CmdDrawIndexedIndirect2KHR>;
    using CmdDrawIndexedIndirectCount                                         = Functional<Function::CmdDrawIndexedIndirectCount>;
    using CmdDrawIndexedIndirectCount2KHR                                     = Functional<Function::CmdDrawIndexedIndirectCount2KHR>;
    using CmdDrawIndirect                                                     = Functional<Function::CmdDrawIndirect>;
    using CmdDrawIndirect2KHR                                                 = Functional<Function::CmdDrawIndirect2KHR>;
    using CmdDrawIndirectByteCount2EXT                                        = Functional<Function::CmdDrawIndirectByteCount2EXT>;
    using CmdDrawIndirectByteCountEXT                                         = Functional<Function::CmdDrawIndirectByteCountEXT>;
    using CmdDrawIndirectCount                                                = Functional<Function::CmdDrawIndirectCount>;
    using CmdDrawIndirectCount2KHR                                            = Functional<Function::CmdDrawIndirectCount2KHR>;
    using CmdDrawMeshTasksEXT                                                 = Functional<Function::CmdDrawMeshTasksEXT>;
    using CmdDrawMeshTasksIndirect2EXT                                        = Functional<Function::CmdDrawMeshTasksIndirect2EXT>;
    using CmdDrawMeshTasksIndirectCount2EXT                                   = Functional<Function::CmdDrawMeshTasksIndirectCount2EXT>;
    using CmdDrawMeshTasksIndirectCountEXT                                    = Functional<Function::CmdDrawMeshTasksIndirectCountEXT>;
    using CmdDrawMeshTasksIndirectCountNV                                     = Functional<Function::CmdDrawMeshTasksIndirectCountNV>;
    using CmdDrawMeshTasksIndirectEXT                                         = Functional<Function::CmdDrawMeshTasksIndirectEXT>;
    using CmdDrawMeshTasksIndirectNV                                          = Functional<Function::CmdDrawMeshTasksIndirectNV>;
    using CmdDrawMeshTasksNV                                                  = Functional<Function::CmdDrawMeshTasksNV>;
    using CmdDrawMultiEXT                                                     = Functional<Function::CmdDrawMultiEXT>;
    using CmdDrawMultiIndexedEXT                                              = Functional<Function::CmdDrawMultiIndexedEXT>;
    using CmdEndConditionalRenderingEXT                                       = Functional<Function::CmdEndConditionalRenderingEXT>;
    using CmdEndDebugUtilsLabelEXT                                            = Functional<Function::CmdEndDebugUtilsLabelEXT>;
    using CmdEndGpaSampleAMD                                                  = Functional<Function::CmdEndGpaSampleAMD>;
    using CmdEndGpaSessionAMD                                                 = Functional<Function::CmdEndGpaSessionAMD>;
    using CmdEndPerTileExecutionQCOM                                          = Functional<Function::CmdEndPerTileExecutionQCOM>;
    using CmdEndQuery                                                         = Functional<Function::CmdEndQuery>;
    using CmdEndQueryIndexedEXT                                               = Functional<Function::CmdEndQueryIndexedEXT>;
    using CmdEndRenderPass                                                    = Functional<Function::CmdEndRenderPass>;
    using CmdEndRenderPass2                                                   = Functional<Function::CmdEndRenderPass2>;
    using CmdEndRendering                                                     = Functional<Function::CmdEndRendering>;
    using CmdEndRendering2KHR                                                 = Functional<Function::CmdEndRendering2KHR>;
    using CmdEndShaderInstrumentationARM                                      = Functional<Function::CmdEndShaderInstrumentationARM>;
    using CmdEndTransformFeedback2EXT                                         = Functional<Function::CmdEndTransformFeedback2EXT>;
    using CmdEndTransformFeedbackEXT                                          = Functional<Function::CmdEndTransformFeedbackEXT>;
    using CmdExecuteCommands                                                  = Functional<Function::CmdExecuteCommands>;
    using CmdExecuteGeneratedCommandsEXT                                      = Functional<Function::CmdExecuteGeneratedCommandsEXT>;
    using CmdExecuteGeneratedCommandsNV                                       = Functional<Function::CmdExecuteGeneratedCommandsNV>;
    using CmdFillBuffer                                                       = Functional<Function::CmdFillBuffer>;
    using CmdFillMemoryKHR                                                    = Functional<Function::CmdFillMemoryKHR>;
    using CmdInitializeGraphScratchMemoryAMDX                                 = Functional<Function::CmdInitializeGraphScratchMemoryAMDX>;
    using CmdInsertDebugUtilsLabelEXT                                         = Functional<Function::CmdInsertDebugUtilsLabelEXT>;
    using CmdNextSubpass                                                      = Functional<Function::CmdNextSubpass>;
    using CmdNextSubpass2                                                     = Functional<Function::CmdNextSubpass2>;
    using CmdOpticalFlowExecuteNV                                             = Functional<Function::CmdOpticalFlowExecuteNV>;
    using CmdPipelineBarrier                                                  = Functional<Function::CmdPipelineBarrier>;
    using CmdPipelineBarrier2                                                 = Functional<Function::CmdPipelineBarrier2>;
    using CmdPreprocessGeneratedCommandsEXT                                   = Functional<Function::CmdPreprocessGeneratedCommandsEXT>;
    using CmdPreprocessGeneratedCommandsNV                                    = Functional<Function::CmdPreprocessGeneratedCommandsNV>;
    using CmdPushConstants                                                    = Functional<Function::CmdPushConstants>;
    using CmdPushConstants2                                                   = Functional<Function::CmdPushConstants2>;
    using CmdPushDataEXT                                                      = Functional<Function::CmdPushDataEXT>;
    using CmdPushDescriptorSet                                                = Functional<Function::CmdPushDescriptorSet>;
    using CmdPushDescriptorSet2                                               = Functional<Function::CmdPushDescriptorSet2>;
    using CmdPushDescriptorSetWithTemplate                                    = Functional<Function::CmdPushDescriptorSetWithTemplate>;
    using CmdPushDescriptorSetWithTemplate2                                   = Functional<Function::CmdPushDescriptorSetWithTemplate2>;
    using CmdRefreshObjectsKHR                                                = Functional<Function::CmdRefreshObjectsKHR>;
    using CmdResetEvent                                                       = Functional<Function::CmdResetEvent>;
    using CmdResetEvent2                                                      = Functional<Function::CmdResetEvent2>;
    using CmdResetQueryPool                                                   = Functional<Function::CmdResetQueryPool>;
    using CmdResolveImage                                                     = Functional<Function::CmdResolveImage>;
    using CmdResolveImage2                                                    = Functional<Function::CmdResolveImage2>;
    using CmdSetAlphaToCoverageEnableEXT                                      = Functional<Function::CmdSetAlphaToCoverageEnableEXT>;
    using CmdSetAlphaToOneEnableEXT                                           = Functional<Function::CmdSetAlphaToOneEnableEXT>;
    using CmdSetAttachmentFeedbackLoopEnableEXT                               = Functional<Function::CmdSetAttachmentFeedbackLoopEnableEXT>;
    using CmdSetBlendConstants                                                = Functional<Function::CmdSetBlendConstants>;
    using CmdSetCheckpointNV                                                  = Functional<Function::CmdSetCheckpointNV>;
    using CmdSetCoarseSampleOrderNV                                           = Functional<Function::CmdSetCoarseSampleOrderNV>;
    using CmdSetColorBlendAdvancedEXT                                         = Functional<Function::CmdSetColorBlendAdvancedEXT>;
    using CmdSetColorBlendEnableEXT                                           = Functional<Function::CmdSetColorBlendEnableEXT>;
    using CmdSetColorBlendEquationEXT                                         = Functional<Function::CmdSetColorBlendEquationEXT>;
    using CmdSetColorWriteEnableEXT                                           = Functional<Function::CmdSetColorWriteEnableEXT>;
    using CmdSetColorWriteMaskEXT                                             = Functional<Function::CmdSetColorWriteMaskEXT>;
    using CmdSetComputeOccupancyPriorityNV                                    = Functional<Function::CmdSetComputeOccupancyPriorityNV>;
    using CmdSetConservativeRasterizationModeEXT                              = Functional<Function::CmdSetConservativeRasterizationModeEXT>;
    using CmdSetCoverageModulationModeNV                                      = Functional<Function::CmdSetCoverageModulationModeNV>;
    using CmdSetCoverageModulationTableEnableNV                               = Functional<Function::CmdSetCoverageModulationTableEnableNV>;
    using CmdSetCoverageModulationTableNV                                     = Functional<Function::CmdSetCoverageModulationTableNV>;
    using CmdSetCoverageReductionModeNV                                       = Functional<Function::CmdSetCoverageReductionModeNV>;
    using CmdSetCoverageToColorEnableNV                                       = Functional<Function::CmdSetCoverageToColorEnableNV>;
    using CmdSetCoverageToColorLocationNV                                     = Functional<Function::CmdSetCoverageToColorLocationNV>;
    using CmdSetCullMode                                                      = Functional<Function::CmdSetCullMode>;
    using CmdSetDepthBias                                                     = Functional<Function::CmdSetDepthBias>;
    using CmdSetDepthBias2EXT                                                 = Functional<Function::CmdSetDepthBias2EXT>;
    using CmdSetDepthBiasEnable                                               = Functional<Function::CmdSetDepthBiasEnable>;
    using CmdSetDepthBounds                                                   = Functional<Function::CmdSetDepthBounds>;
    using CmdSetDepthBoundsTestEnable                                         = Functional<Function::CmdSetDepthBoundsTestEnable>;
    using CmdSetDepthClampEnableEXT                                           = Functional<Function::CmdSetDepthClampEnableEXT>;
    using CmdSetDepthClampRangeEXT                                            = Functional<Function::CmdSetDepthClampRangeEXT>;
    using CmdSetDepthClipEnableEXT                                            = Functional<Function::CmdSetDepthClipEnableEXT>;
    using CmdSetDepthClipNegativeOneToOneEXT                                  = Functional<Function::CmdSetDepthClipNegativeOneToOneEXT>;
    using CmdSetDepthCompareOp                                                = Functional<Function::CmdSetDepthCompareOp>;
    using CmdSetDepthTestEnable                                               = Functional<Function::CmdSetDepthTestEnable>;
    using CmdSetDepthWriteEnable                                              = Functional<Function::CmdSetDepthWriteEnable>;
    using CmdSetDescriptorBufferOffsets2EXT                                   = Functional<Function::CmdSetDescriptorBufferOffsets2EXT>;
    using CmdSetDescriptorBufferOffsetsEXT                                    = Functional<Function::CmdSetDescriptorBufferOffsetsEXT>;
    using CmdSetDeviceMask                                                    = Functional<Function::CmdSetDeviceMask>;
    using CmdSetDiscardRectangleEXT                                           = Functional<Function::CmdSetDiscardRectangleEXT>;
    using CmdSetDiscardRectangleEnableEXT                                     = Functional<Function::CmdSetDiscardRectangleEnableEXT>;
    using CmdSetDiscardRectangleModeEXT                                       = Functional<Function::CmdSetDiscardRectangleModeEXT>;
    using CmdSetDispatchParametersARM                                         = Functional<Function::CmdSetDispatchParametersARM>;
    using CmdSetEvent                                                         = Functional<Function::CmdSetEvent>;
    using CmdSetEvent2                                                        = Functional<Function::CmdSetEvent2>;
    using CmdSetExclusiveScissorEnableNV                                      = Functional<Function::CmdSetExclusiveScissorEnableNV>;
    using CmdSetExclusiveScissorNV                                            = Functional<Function::CmdSetExclusiveScissorNV>;
    using CmdSetExtraPrimitiveOverestimationSizeEXT                           = Functional<Function::CmdSetExtraPrimitiveOverestimationSizeEXT>;
    using CmdSetFragmentShadingRateEnumNV                                     = Functional<Function::CmdSetFragmentShadingRateEnumNV>;
    using CmdSetFragmentShadingRateKHR                                        = Functional<Function::CmdSetFragmentShadingRateKHR>;
    using CmdSetFrontFace                                                     = Functional<Function::CmdSetFrontFace>;
    using CmdSetLineRasterizationModeEXT                                      = Functional<Function::CmdSetLineRasterizationModeEXT>;
    using CmdSetLineStipple                                                   = Functional<Function::CmdSetLineStipple>;
    using CmdSetLineStippleEnableEXT                                          = Functional<Function::CmdSetLineStippleEnableEXT>;
    using CmdSetLineWidth                                                     = Functional<Function::CmdSetLineWidth>;
    using CmdSetLogicOpEXT                                                    = Functional<Function::CmdSetLogicOpEXT>;
    using CmdSetLogicOpEnableEXT                                              = Functional<Function::CmdSetLogicOpEnableEXT>;
    using CmdSetPatchControlPointsEXT                                         = Functional<Function::CmdSetPatchControlPointsEXT>;
    using CmdSetPerformanceMarkerINTEL                                        = Functional<Function::CmdSetPerformanceMarkerINTEL>;
    using CmdSetPerformanceOverrideINTEL                                      = Functional<Function::CmdSetPerformanceOverrideINTEL>;
    using CmdSetPerformanceStreamMarkerINTEL                                  = Functional<Function::CmdSetPerformanceStreamMarkerINTEL>;
    using CmdSetPolygonModeEXT                                                = Functional<Function::CmdSetPolygonModeEXT>;
    using CmdSetPrimitiveRestartEnable                                        = Functional<Function::CmdSetPrimitiveRestartEnable>;
    using CmdSetPrimitiveRestartIndexEXT                                      = Functional<Function::CmdSetPrimitiveRestartIndexEXT>;
    using CmdSetPrimitiveTopology                                             = Functional<Function::CmdSetPrimitiveTopology>;
    using CmdSetProvokingVertexModeEXT                                        = Functional<Function::CmdSetProvokingVertexModeEXT>;
    using CmdSetRasterizationSamplesEXT                                       = Functional<Function::CmdSetRasterizationSamplesEXT>;
    using CmdSetRasterizationStreamEXT                                        = Functional<Function::CmdSetRasterizationStreamEXT>;
    using CmdSetRasterizerDiscardEnable                                       = Functional<Function::CmdSetRasterizerDiscardEnable>;
    using CmdSetRayTracingPipelineStackSizeKHR                                = Functional<Function::CmdSetRayTracingPipelineStackSizeKHR>;
    using CmdSetRenderingAttachmentLocations                                  = Functional<Function::CmdSetRenderingAttachmentLocations>;
    using CmdSetRenderingInputAttachmentIndices                               = Functional<Function::CmdSetRenderingInputAttachmentIndices>;
    using CmdSetRepresentativeFragmentTestEnableNV                            = Functional<Function::CmdSetRepresentativeFragmentTestEnableNV>;
    using CmdSetSampleLocationsEXT                                            = Functional<Function::CmdSetSampleLocationsEXT>;
    using CmdSetSampleLocationsEnableEXT                                      = Functional<Function::CmdSetSampleLocationsEnableEXT>;
    using CmdSetSampleMaskEXT                                                 = Functional<Function::CmdSetSampleMaskEXT>;
    using CmdSetScissor                                                       = Functional<Function::CmdSetScissor>;
    using CmdSetScissorWithCount                                              = Functional<Function::CmdSetScissorWithCount>;
    using CmdSetShadingRateImageEnableNV                                      = Functional<Function::CmdSetShadingRateImageEnableNV>;
    using CmdSetStencilCompareMask                                            = Functional<Function::CmdSetStencilCompareMask>;
    using CmdSetStencilOp                                                     = Functional<Function::CmdSetStencilOp>;
    using CmdSetStencilReference                                              = Functional<Function::CmdSetStencilReference>;
    using CmdSetStencilTestEnable                                             = Functional<Function::CmdSetStencilTestEnable>;
    using CmdSetStencilWriteMask                                              = Functional<Function::CmdSetStencilWriteMask>;
    using CmdSetTessellationDomainOriginEXT                                   = Functional<Function::CmdSetTessellationDomainOriginEXT>;
    using CmdSetVertexInputEXT                                                = Functional<Function::CmdSetVertexInputEXT>;
    using CmdSetViewport                                                      = Functional<Function::CmdSetViewport>;
    using CmdSetViewportShadingRatePaletteNV                                  = Functional<Function::CmdSetViewportShadingRatePaletteNV>;
    using CmdSetViewportSwizzleNV                                             = Functional<Function::CmdSetViewportSwizzleNV>;
    using CmdSetViewportWScalingEnableNV                                      = Functional<Function::CmdSetViewportWScalingEnableNV>;
    using CmdSetViewportWScalingNV                                            = Functional<Function::CmdSetViewportWScalingNV>;
    using CmdSetViewportWithCount                                             = Functional<Function::CmdSetViewportWithCount>;
    using CmdSubpassShadingHUAWEI                                             = Functional<Function::CmdSubpassShadingHUAWEI>;
    using CmdTraceRaysIndirect2KHR                                            = Functional<Function::CmdTraceRaysIndirect2KHR>;
    using CmdTraceRaysIndirectKHR                                             = Functional<Function::CmdTraceRaysIndirectKHR>;
    using CmdTraceRaysKHR                                                     = Functional<Function::CmdTraceRaysKHR>;
    using CmdTraceRaysNV                                                      = Functional<Function::CmdTraceRaysNV>;
    using CmdUpdateBuffer                                                     = Functional<Function::CmdUpdateBuffer>;
    using CmdUpdateMemoryKHR                                                  = Functional<Function::CmdUpdateMemoryKHR>;
    using CmdUpdatePipelineIndirectBufferNV                                   = Functional<Function::CmdUpdatePipelineIndirectBufferNV>;
    using CmdWaitEvents                                                       = Functional<Function::CmdWaitEvents>;
    using CmdWaitEvents2                                                      = Functional<Function::CmdWaitEvents2>;
    using CmdWriteAccelerationStructuresPropertiesKHR                         = Functional<Function::CmdWriteAccelerationStructuresPropertiesKHR>;
    using CmdWriteAccelerationStructuresPropertiesNV                          = Functional<Function::CmdWriteAccelerationStructuresPropertiesNV>;
    using CmdWriteBufferMarker2AMD                                            = Functional<Function::CmdWriteBufferMarker2AMD>;
    using CmdWriteBufferMarkerAMD                                             = Functional<Function::CmdWriteBufferMarkerAMD>;
    using CmdWriteMarkerToMemoryAMD                                           = Functional<Function::CmdWriteMarkerToMemoryAMD>;
    using CmdWriteMicromapsPropertiesEXT                                      = Functional<Function::CmdWriteMicromapsPropertiesEXT>;
    using CmdWriteTimestamp                                                   = Functional<Function::CmdWriteTimestamp>;
    using CmdWriteTimestamp2                                                  = Functional<Function::CmdWriteTimestamp2>;
    using CompileDeferredNV                                                   = Functional<Function::CompileDeferredNV>;
    using ConvertCooperativeVectorMatrixNV                                    = Functional<Function::ConvertCooperativeVectorMatrixNV>;
    using CopyAccelerationStructureKHR                                        = Functional<Function::CopyAccelerationStructureKHR>;
    using CopyAccelerationStructureToMemoryKHR                                = Functional<Function::CopyAccelerationStructureToMemoryKHR>;
    using CopyImageToImage                                                    = Functional<Function::CopyImageToImage>;
    using CopyImageToMemory                                                   = Functional<Function::CopyImageToMemory>;
    using CopyMemoryToAccelerationStructureKHR                                = Functional<Function::CopyMemoryToAccelerationStructureKHR>;
    using CopyMemoryToImage                                                   = Functional<Function::CopyMemoryToImage>;
    using CopyMemoryToMicromapEXT                                             = Functional<Function::CopyMemoryToMicromapEXT>;
    using CopyMicromapEXT                                                     = Functional<Function::CopyMicromapEXT>;
    using CopyMicromapToMemoryEXT                                             = Functional<Function::CopyMicromapToMemoryEXT>;
    using CreateAccelerationStructure2KHR                                     = Functional<Function::CreateAccelerationStructure2KHR>;
    using CreateAccelerationStructureKHR                                      = Functional<Function::CreateAccelerationStructureKHR>;
    using CreateAccelerationStructureNV                                       = Functional<Function::CreateAccelerationStructureNV>;
    using CreateBuffer                                                        = Functional<Function::CreateBuffer>;
    using CreateBufferView                                                    = Functional<Function::CreateBufferView>;
    using CreateCommandPool                                                   = Functional<Function::CreateCommandPool>;
    using CreateComputePipelines                                              = Functional<Function::CreateComputePipelines>;
    using CreateCuFunctionNVX                                                 = Functional<Function::CreateCuFunctionNVX>;
    using CreateCuModuleNVX                                                   = Functional<Function::CreateCuModuleNVX>;
    using CreateDataGraphPipelineSessionARM                                   = Functional<Function::CreateDataGraphPipelineSessionARM>;
    using CreateDataGraphPipelinesARM                                         = Functional<Function::CreateDataGraphPipelinesARM>;
    using CreateDebugReportCallbackEXT                                        = Functional<Function::CreateDebugReportCallbackEXT>;
    using CreateDebugUtilsMessengerEXT                                        = Functional<Function::CreateDebugUtilsMessengerEXT>;
    using CreateDeferredOperationKHR                                          = Functional<Function::CreateDeferredOperationKHR>;
    using CreateDescriptorPool                                                = Functional<Function::CreateDescriptorPool>;
    using CreateDescriptorSetLayout                                           = Functional<Function::CreateDescriptorSetLayout>;
    using CreateDescriptorUpdateTemplate                                      = Functional<Function::CreateDescriptorUpdateTemplate>;
    using CreateDevice                                                        = Functional<Function::CreateDevice>;
    using CreateDisplayModeKHR                                                = Functional<Function::CreateDisplayModeKHR>;
    using CreateDisplayPlaneSurfaceKHR                                        = Functional<Function::CreateDisplayPlaneSurfaceKHR>;
    using CreateEvent                                                         = Functional<Function::CreateEvent>;
    using CreateExternalComputeQueueNV                                        = Functional<Function::CreateExternalComputeQueueNV>;
    using CreateFence                                                         = Functional<Function::CreateFence>;
    using CreateFramebuffer                                                   = Functional<Function::CreateFramebuffer>;
    using CreateGpaSessionAMD                                                 = Functional<Function::CreateGpaSessionAMD>;
    using CreateGraphicsPipelines                                             = Functional<Function::CreateGraphicsPipelines>;
    using CreateHeadlessSurfaceEXT                                            = Functional<Function::CreateHeadlessSurfaceEXT>;
    using CreateIOSSurfaceMVK                                                 = Functional<Function::CreateIOSSurfaceMVK>;
    using CreateImage                                                         = Functional<Function::CreateImage>;
    using CreateImageView                                                     = Functional<Function::CreateImageView>;
    using CreateIndirectCommandsLayoutEXT                                     = Functional<Function::CreateIndirectCommandsLayoutEXT>;
    using CreateIndirectCommandsLayoutNV                                      = Functional<Function::CreateIndirectCommandsLayoutNV>;
    using CreateIndirectExecutionSetEXT                                       = Functional<Function::CreateIndirectExecutionSetEXT>;
    using CreateInstance                                                      = Functional<Function::CreateInstance>;
    using CreateMacOSSurfaceMVK                                               = Functional<Function::CreateMacOSSurfaceMVK>;
    using CreateMicromapEXT                                                   = Functional<Function::CreateMicromapEXT>;
    using CreateOpticalFlowSessionNV                                          = Functional<Function::CreateOpticalFlowSessionNV>;
    using CreatePipelineBinariesKHR                                           = Functional<Function::CreatePipelineBinariesKHR>;
    using CreatePipelineCache                                                 = Functional<Function::CreatePipelineCache>;
    using CreatePipelineLayout                                                = Functional<Function::CreatePipelineLayout>;
    using CreatePrivateDataSlot                                               = Functional<Function::CreatePrivateDataSlot>;
    using CreateQueryPool                                                     = Functional<Function::CreateQueryPool>;
    using CreateRayTracingPipelinesKHR                                        = Functional<Function::CreateRayTracingPipelinesKHR>;
    using CreateRayTracingPipelinesNV                                         = Functional<Function::CreateRayTracingPipelinesNV>;
    using CreateRenderPass                                                    = Functional<Function::CreateRenderPass>;
    using CreateRenderPass2                                                   = Functional<Function::CreateRenderPass2>;
    using CreateSampler                                                       = Functional<Function::CreateSampler>;
    using CreateSamplerYcbcrConversion                                        = Functional<Function::CreateSamplerYcbcrConversion>;
    using CreateSemaphore                                                     = Functional<Function::CreateSemaphore>;
    using CreateShaderInstrumentationARM                                      = Functional<Function::CreateShaderInstrumentationARM>;
    using CreateShaderModule                                                  = Functional<Function::CreateShaderModule>;
    using CreateShadersEXT                                                    = Functional<Function::CreateShadersEXT>;
    using CreateSharedSwapchainsKHR                                           = Functional<Function::CreateSharedSwapchainsKHR>;
    using CreateSwapchainKHR                                                  = Functional<Function::CreateSwapchainKHR>;
    using CreateTensorARM                                                     = Functional<Function::CreateTensorARM>;
    using CreateTensorViewARM                                                 = Functional<Function::CreateTensorViewARM>;
    using CreateValidationCacheEXT                                            = Functional<Function::CreateValidationCacheEXT>;
    using CreateWaylandSurfaceKHR                                             = Functional<Function::CreateWaylandSurfaceKHR>;
    using CreateWin32SurfaceKHR                                               = Functional<Function::CreateWin32SurfaceKHR>;
    using DebugMarkerSetObjectNameEXT                                         = Functional<Function::DebugMarkerSetObjectNameEXT>;
    using DebugMarkerSetObjectTagEXT                                          = Functional<Function::DebugMarkerSetObjectTagEXT>;
    using DebugReportMessageEXT                                               = Functional<Function::DebugReportMessageEXT>;
    using DeferredOperationJoinKHR                                            = Functional<Function::DeferredOperationJoinKHR>;
    using DestroyAccelerationStructureKHR                                     = Functional<Function::DestroyAccelerationStructureKHR>;
    using DestroyAccelerationStructureNV                                      = Functional<Function::DestroyAccelerationStructureNV>;
    using DestroyBuffer                                                       = Functional<Function::DestroyBuffer>;
    using DestroyBufferCollectionFUCHSIA                                      = Functional<Function::DestroyBufferCollectionFUCHSIA>;
    using DestroyBufferView                                                   = Functional<Function::DestroyBufferView>;
    using DestroyCommandPool                                                  = Functional<Function::DestroyCommandPool>;
    using DestroyCuFunctionNVX                                                = Functional<Function::DestroyCuFunctionNVX>;
    using DestroyCuModuleNVX                                                  = Functional<Function::DestroyCuModuleNVX>;
    using DestroyCudaFunctionNV                                               = Functional<Function::DestroyCudaFunctionNV>;
    using DestroyCudaModuleNV                                                 = Functional<Function::DestroyCudaModuleNV>;
    using DestroyDataGraphPipelineSessionARM                                  = Functional<Function::DestroyDataGraphPipelineSessionARM>;
    using DestroyDebugReportCallbackEXT                                       = Functional<Function::DestroyDebugReportCallbackEXT>;
    using DestroyDebugUtilsMessengerEXT                                       = Functional<Function::DestroyDebugUtilsMessengerEXT>;
    using DestroyDeferredOperationKHR                                         = Functional<Function::DestroyDeferredOperationKHR>;
    using DestroyDescriptorPool                                               = Functional<Function::DestroyDescriptorPool>;
    using DestroyDescriptorSetLayout                                          = Functional<Function::DestroyDescriptorSetLayout>;
    using DestroyDescriptorUpdateTemplate                                     = Functional<Function::DestroyDescriptorUpdateTemplate>;
    using DestroyDevice                                                       = Functional<Function::DestroyDevice>;
    using DestroyEvent                                                        = Functional<Function::DestroyEvent>;
    using DestroyExternalComputeQueueNV                                       = Functional<Function::DestroyExternalComputeQueueNV>;
    using DestroyFence                                                        = Functional<Function::DestroyFence>;
    using DestroyFramebuffer                                                  = Functional<Function::DestroyFramebuffer>;
    using DestroyGpaSessionAMD                                                = Functional<Function::DestroyGpaSessionAMD>;
    using DestroyImage                                                        = Functional<Function::DestroyImage>;
    using DestroyImageView                                                    = Functional<Function::DestroyImageView>;
    using DestroyIndirectCommandsLayoutEXT                                    = Functional<Function::DestroyIndirectCommandsLayoutEXT>;
    using DestroyIndirectCommandsLayoutNV                                     = Functional<Function::DestroyIndirectCommandsLayoutNV>;
    using DestroyIndirectExecutionSetEXT                                      = Functional<Function::DestroyIndirectExecutionSetEXT>;
    using DestroyInstance                                                     = Functional<Function::DestroyInstance>;
    using DestroyMicromapEXT                                                  = Functional<Function::DestroyMicromapEXT>;
    using DestroyOpticalFlowSessionNV                                         = Functional<Function::DestroyOpticalFlowSessionNV>;
    using DestroyPipeline                                                     = Functional<Function::DestroyPipeline>;
    using DestroyPipelineBinaryKHR                                            = Functional<Function::DestroyPipelineBinaryKHR>;
    using DestroyPipelineCache                                                = Functional<Function::DestroyPipelineCache>;
    using DestroyPipelineLayout                                               = Functional<Function::DestroyPipelineLayout>;
    using DestroyPrivateDataSlot                                              = Functional<Function::DestroyPrivateDataSlot>;
    using DestroyQueryPool                                                    = Functional<Function::DestroyQueryPool>;
    using DestroyRenderPass                                                   = Functional<Function::DestroyRenderPass>;
    using DestroySampler                                                      = Functional<Function::DestroySampler>;
    using DestroySamplerYcbcrConversion                                       = Functional<Function::DestroySamplerYcbcrConversion>;
    using DestroySemaphore                                                    = Functional<Function::DestroySemaphore>;
    using DestroySemaphoreSciSyncPoolNV                                       = Functional<Function::DestroySemaphoreSciSyncPoolNV>;
    using DestroyShaderEXT                                                    = Functional<Function::DestroyShaderEXT>;
    using DestroyShaderInstrumentationARM                                     = Functional<Function::DestroyShaderInstrumentationARM>;
    using DestroyShaderModule                                                 = Functional<Function::DestroyShaderModule>;
    using DestroySurfaceKHR                                                   = Functional<Function::DestroySurfaceKHR>;
    using DestroySwapchainKHR                                                 = Functional<Function::DestroySwapchainKHR>;
    using DestroyTensorARM                                                    = Functional<Function::DestroyTensorARM>;
    using DestroyTensorViewARM                                                = Functional<Function::DestroyTensorViewARM>;
    using DestroyValidationCacheEXT                                           = Functional<Function::DestroyValidationCacheEXT>;
    using DeviceWaitIdle                                                      = Functional<Function::DeviceWaitIdle>;
    using DisplayPowerControlEXT                                              = Functional<Function::DisplayPowerControlEXT>;
    using EndCommandBuffer                                                    = Functional<Function::EndCommandBuffer>;
    using EnumerateDeviceExtensionProperties                                  = Functional<Function::EnumerateDeviceExtensionProperties>;
    using EnumerateDeviceLayerProperties                                      = Functional<Function::EnumerateDeviceLayerProperties>;
    using EnumerateInstanceExtensionProperties                                = Functional<Function::EnumerateInstanceExtensionProperties>;
    using EnumerateInstanceLayerProperties                                    = Functional<Function::EnumerateInstanceLayerProperties>;
    using EnumerateInstanceVersion                                            = Functional<Function::EnumerateInstanceVersion>;
    using EnumeratePhysicalDeviceGroups                                       = Functional<Function::EnumeratePhysicalDeviceGroups>;
    using EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM    = Functional<Function::EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM>;
    using EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR       = Functional<Function::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR>;
    using EnumeratePhysicalDeviceShaderInstrumentationMetricsARM              = Functional<Function::EnumeratePhysicalDeviceShaderInstrumentationMetricsARM>;
    using EnumeratePhysicalDevices                                            = Functional<Function::EnumeratePhysicalDevices>;
    using FlushMappedMemoryRanges                                             = Functional<Function::FlushMappedMemoryRanges>;
    using FreeCommandBuffers                                                  = Functional<Function::FreeCommandBuffers>;
    using FreeDescriptorSets                                                  = Functional<Function::FreeDescriptorSets>;
    using FreeMemory                                                          = Functional<Function::FreeMemory>;
    using GetAccelerationStructureBuildSizesKHR                               = Functional<Function::GetAccelerationStructureBuildSizesKHR>;
    using GetAccelerationStructureDeviceAddressKHR                            = Functional<Function::GetAccelerationStructureDeviceAddressKHR>;
    using GetAccelerationStructureHandleNV                                    = Functional<Function::GetAccelerationStructureHandleNV>;
    using GetAccelerationStructureMemoryRequirementsNV                        = Functional<Function::GetAccelerationStructureMemoryRequirementsNV>;
    using GetAccelerationStructureOpaqueCaptureDescriptorDataEXT              = Functional<Function::GetAccelerationStructureOpaqueCaptureDescriptorDataEXT>;
    using GetBufferDeviceAddress                                              = Functional<Function::GetBufferDeviceAddress>;
    using GetBufferMemoryRequirements                                         = Functional<Function::GetBufferMemoryRequirements>;
    using GetBufferMemoryRequirements2                                        = Functional<Function::GetBufferMemoryRequirements2>;
    using GetBufferOpaqueCaptureAddress                                       = Functional<Function::GetBufferOpaqueCaptureAddress>;
    using GetBufferOpaqueCaptureDescriptorDataEXT                             = Functional<Function::GetBufferOpaqueCaptureDescriptorDataEXT>;
    using GetCalibratedTimestampsKHR                                          = Functional<Function::GetCalibratedTimestampsKHR>;
    using GetClusterAccelerationStructureBuildSizesNV                         = Functional<Function::GetClusterAccelerationStructureBuildSizesNV>;
    using GetCommandPoolMemoryConsumption                                     = Functional<Function::GetCommandPoolMemoryConsumption>;
    using GetCudaModuleCacheNV                                                = Functional<Function::GetCudaModuleCacheNV>;
    using GetDataGraphPipelineAvailablePropertiesARM                          = Functional<Function::GetDataGraphPipelineAvailablePropertiesARM>;
    using GetDataGraphPipelinePropertiesARM                                   = Functional<Function::GetDataGraphPipelinePropertiesARM>;
    using GetDataGraphPipelineSessionBindPointRequirementsARM                 = Functional<Function::GetDataGraphPipelineSessionBindPointRequirementsARM>;
    using GetDataGraphPipelineSessionMemoryRequirementsARM                    = Functional<Function::GetDataGraphPipelineSessionMemoryRequirementsARM>;
    using GetDeferredOperationMaxConcurrencyKHR                               = Functional<Function::GetDeferredOperationMaxConcurrencyKHR>;
    using GetDeferredOperationResultKHR                                       = Functional<Function::GetDeferredOperationResultKHR>;
    using GetDescriptorEXT                                                    = Functional<Function::GetDescriptorEXT>;
    using GetDescriptorSetHostMappingVALVE                                    = Functional<Function::GetDescriptorSetHostMappingVALVE>;
    using GetDescriptorSetLayoutBindingOffsetEXT                              = Functional<Function::GetDescriptorSetLayoutBindingOffsetEXT>;
    using GetDescriptorSetLayoutHostMappingInfoVALVE                          = Functional<Function::GetDescriptorSetLayoutHostMappingInfoVALVE>;
    using GetDescriptorSetLayoutSizeEXT                                       = Functional<Function::GetDescriptorSetLayoutSizeEXT>;
    using GetDescriptorSetLayoutSupport                                       = Functional<Function::GetDescriptorSetLayoutSupport>;
    using GetDeviceAccelerationStructureCompatibilityKHR                      = Functional<Function::GetDeviceAccelerationStructureCompatibilityKHR>;
    using GetDeviceBufferMemoryRequirements                                   = Functional<Function::GetDeviceBufferMemoryRequirements>;
    using GetDeviceCombinedImageSamplerIndexNVX                               = Functional<Function::GetDeviceCombinedImageSamplerIndexNVX>;
    using GetDeviceFaultDebugInfoKHR                                          = Functional<Function::GetDeviceFaultDebugInfoKHR>;
    using GetDeviceFaultInfoEXT                                               = Functional<Function::GetDeviceFaultInfoEXT>;
    using GetDeviceFaultReportsKHR                                            = Functional<Function::GetDeviceFaultReportsKHR>;
    using GetDeviceGroupPeerMemoryFeatures                                    = Functional<Function::GetDeviceGroupPeerMemoryFeatures>;
    using GetDeviceGroupPresentCapabilitiesKHR                                = Functional<Function::GetDeviceGroupPresentCapabilitiesKHR>;
    using GetDeviceGroupSurfacePresentModes2EXT                               = Functional<Function::GetDeviceGroupSurfacePresentModes2EXT>;
    using GetDeviceGroupSurfacePresentModesKHR                                = Functional<Function::GetDeviceGroupSurfacePresentModesKHR>;
    using GetDeviceImageMemoryRequirements                                    = Functional<Function::GetDeviceImageMemoryRequirements>;
    using GetDeviceImageSparseMemoryRequirements                              = Functional<Function::GetDeviceImageSparseMemoryRequirements>;
    using GetDeviceImageSubresourceLayout                                     = Functional<Function::GetDeviceImageSubresourceLayout>;
    using GetDeviceMemoryCommitment                                           = Functional<Function::GetDeviceMemoryCommitment>;
    using GetDeviceMemoryOpaqueCaptureAddress                                 = Functional<Function::GetDeviceMemoryOpaqueCaptureAddress>;
    using GetDeviceMicromapCompatibilityEXT                                   = Functional<Function::GetDeviceMicromapCompatibilityEXT>;
    using GetDeviceProcAddr                                                   = Functional<Function::GetDeviceProcAddr>;
    using GetDeviceQueue                                                      = Functional<Function::GetDeviceQueue>;
    using GetDeviceQueue2                                                     = Functional<Function::GetDeviceQueue2>;
    using GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI                       = Functional<Function::GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI>;
    using GetDeviceTensorMemoryRequirementsARM                                = Functional<Function::GetDeviceTensorMemoryRequirementsARM>;
    using GetDisplayModeProperties2KHR                                        = Functional<Function::GetDisplayModeProperties2KHR>;
    using GetDisplayModePropertiesKHR                                         = Functional<Function::GetDisplayModePropertiesKHR>;
    using GetDisplayPlaneCapabilities2KHR                                     = Functional<Function::GetDisplayPlaneCapabilities2KHR>;
    using GetDisplayPlaneCapabilitiesKHR                                      = Functional<Function::GetDisplayPlaneCapabilitiesKHR>;
    using GetDisplayPlaneSupportedDisplaysKHR                                 = Functional<Function::GetDisplayPlaneSupportedDisplaysKHR>;
    using GetDrmDisplayEXT                                                    = Functional<Function::GetDrmDisplayEXT>;
    using GetDynamicRenderingTilePropertiesQCOM                               = Functional<Function::GetDynamicRenderingTilePropertiesQCOM>;
    using GetEventStatus                                                      = Functional<Function::GetEventStatus>;
    using GetExternalComputeQueueDataNV                                       = Functional<Function::GetExternalComputeQueueDataNV>;
    using GetFaultData                                                        = Functional<Function::GetFaultData>;
    using GetFenceFdKHR                                                       = Functional<Function::GetFenceFdKHR>;
    using GetFenceStatus                                                      = Functional<Function::GetFenceStatus>;
    using GetFenceWin32HandleKHR                                              = Functional<Function::GetFenceWin32HandleKHR>;
    using GetFramebufferTilePropertiesQCOM                                    = Functional<Function::GetFramebufferTilePropertiesQCOM>;
    using GetGeneratedCommandsMemoryRequirementsEXT                           = Functional<Function::GetGeneratedCommandsMemoryRequirementsEXT>;
    using GetGeneratedCommandsMemoryRequirementsNV                            = Functional<Function::GetGeneratedCommandsMemoryRequirementsNV>;
    using GetGpaDeviceClockInfoAMD                                            = Functional<Function::GetGpaDeviceClockInfoAMD>;
    using GetGpaSessionResultsAMD                                             = Functional<Function::GetGpaSessionResultsAMD>;
    using GetGpaSessionStatusAMD                                              = Functional<Function::GetGpaSessionStatusAMD>;
    using GetImageDrmFormatModifierPropertiesEXT                              = Functional<Function::GetImageDrmFormatModifierPropertiesEXT>;
    using GetImageMemoryRequirements                                          = Functional<Function::GetImageMemoryRequirements>;
    using GetImageMemoryRequirements2                                         = Functional<Function::GetImageMemoryRequirements2>;
    using GetImageOpaqueCaptureDataEXT                                        = Functional<Function::GetImageOpaqueCaptureDataEXT>;
    using GetImageOpaqueCaptureDescriptorDataEXT                              = Functional<Function::GetImageOpaqueCaptureDescriptorDataEXT>;
    using GetImageSparseMemoryRequirements                                    = Functional<Function::GetImageSparseMemoryRequirements>;
    using GetImageSparseMemoryRequirements2                                   = Functional<Function::GetImageSparseMemoryRequirements2>;
    using GetImageSubresourceLayout                                           = Functional<Function::GetImageSubresourceLayout>;
    using GetImageSubresourceLayout2                                          = Functional<Function::GetImageSubresourceLayout2>;
    using GetImageViewAddressNVX                                              = Functional<Function::GetImageViewAddressNVX>;
    using GetImageViewHandle64NVX                                             = Functional<Function::GetImageViewHandle64NVX>;
    using GetImageViewHandleNVX                                               = Functional<Function::GetImageViewHandleNVX>;
    using GetImageViewOpaqueCaptureDescriptorDataEXT                          = Functional<Function::GetImageViewOpaqueCaptureDescriptorDataEXT>;
    using GetInstanceProcAddr                                                 = Functional<Function::GetInstanceProcAddr>;
    using GetLatencyTimingsLegacyNV                                           = Functional<Function::GetLatencyTimingsLegacyNV>;
    using GetLatencyTimingsNV                                                 = Functional<Function::GetLatencyTimingsNV>;
    using GetMemoryFdKHR                                                      = Functional<Function::GetMemoryFdKHR>;
    using GetMemoryFdPropertiesKHR                                            = Functional<Function::GetMemoryFdPropertiesKHR>;
    using GetMemoryHostPointerPropertiesEXT                                   = Functional<Function::GetMemoryHostPointerPropertiesEXT>;
    using GetMemoryRemoteAddressNV                                            = Functional<Function::GetMemoryRemoteAddressNV>;
    using GetMemoryWin32HandleKHR                                             = Functional<Function::GetMemoryWin32HandleKHR>;
    using GetMemoryWin32HandleNV                                              = Functional<Function::GetMemoryWin32HandleNV>;
    using GetMemoryWin32HandlePropertiesKHR                                   = Functional<Function::GetMemoryWin32HandlePropertiesKHR>;
    using GetMicromapBuildSizesEXT                                            = Functional<Function::GetMicromapBuildSizesEXT>;
    using GetPartitionedAccelerationStructuresBuildSizesNV                    = Functional<Function::GetPartitionedAccelerationStructuresBuildSizesNV>;
    using GetPastPresentationTimingEXT                                        = Functional<Function::GetPastPresentationTimingEXT>;
    using GetPastPresentationTimingGOOGLE                                     = Functional<Function::GetPastPresentationTimingGOOGLE>;
    using GetPerformanceParameterINTEL                                        = Functional<Function::GetPerformanceParameterINTEL>;
    using GetPhysicalDeviceCalibrateableTimeDomainsKHR                        = Functional<Function::GetPhysicalDeviceCalibrateableTimeDomainsKHR>;
    using GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV    = Functional<Function::GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV>;
    using GetPhysicalDeviceCooperativeMatrixProperties2EXT                    = Functional<Function::GetPhysicalDeviceCooperativeMatrixProperties2EXT>;
    using GetPhysicalDeviceCooperativeMatrixPropertiesKHR                     = Functional<Function::GetPhysicalDeviceCooperativeMatrixPropertiesKHR>;
    using GetPhysicalDeviceCooperativeMatrixPropertiesNV                      = Functional<Function::GetPhysicalDeviceCooperativeMatrixPropertiesNV>;
    using GetPhysicalDeviceCooperativeVectorPropertiesNV                      = Functional<Function::GetPhysicalDeviceCooperativeVectorPropertiesNV>;
    using GetPhysicalDeviceDescriptorSizeEXT                                  = Functional<Function::GetPhysicalDeviceDescriptorSizeEXT>;
    using GetPhysicalDeviceDisplayPlaneProperties2KHR                         = Functional<Function::GetPhysicalDeviceDisplayPlaneProperties2KHR>;
    using GetPhysicalDeviceDisplayPlanePropertiesKHR                          = Functional<Function::GetPhysicalDeviceDisplayPlanePropertiesKHR>;
    using GetPhysicalDeviceDisplayProperties2KHR                              = Functional<Function::GetPhysicalDeviceDisplayProperties2KHR>;
    using GetPhysicalDeviceDisplayPropertiesKHR                               = Functional<Function::GetPhysicalDeviceDisplayPropertiesKHR>;
    using GetPhysicalDeviceExternalBufferProperties                           = Functional<Function::GetPhysicalDeviceExternalBufferProperties>;
    using GetPhysicalDeviceExternalFenceProperties                            = Functional<Function::GetPhysicalDeviceExternalFenceProperties>;
    using GetPhysicalDeviceExternalImageFormatPropertiesNV                    = Functional<Function::GetPhysicalDeviceExternalImageFormatPropertiesNV>;
    using GetPhysicalDeviceExternalSemaphoreProperties                        = Functional<Function::GetPhysicalDeviceExternalSemaphoreProperties>;
    using GetPhysicalDeviceExternalTensorPropertiesARM                        = Functional<Function::GetPhysicalDeviceExternalTensorPropertiesARM>;
    using GetPhysicalDeviceFeatures                                           = Functional<Function::GetPhysicalDeviceFeatures>;
    using GetPhysicalDeviceFeatures2                                          = Functional<Function::GetPhysicalDeviceFeatures2>;
    using GetPhysicalDeviceFormatProperties                                   = Functional<Function::GetPhysicalDeviceFormatProperties>;
    using GetPhysicalDeviceFormatProperties2                                  = Functional<Function::GetPhysicalDeviceFormatProperties2>;
    using GetPhysicalDeviceFragmentShadingRatesKHR                            = Functional<Function::GetPhysicalDeviceFragmentShadingRatesKHR>;
    using GetPhysicalDeviceImageFormatProperties                              = Functional<Function::GetPhysicalDeviceImageFormatProperties>;
    using GetPhysicalDeviceImageFormatProperties2                             = Functional<Function::GetPhysicalDeviceImageFormatProperties2>;
    using GetPhysicalDeviceMemoryProperties                                   = Functional<Function::GetPhysicalDeviceMemoryProperties>;
    using GetPhysicalDeviceMemoryProperties2                                  = Functional<Function::GetPhysicalDeviceMemoryProperties2>;
    using GetPhysicalDeviceMultisamplePropertiesEXT                           = Functional<Function::GetPhysicalDeviceMultisamplePropertiesEXT>;
    using GetPhysicalDeviceOpticalFlowImageFormatsNV                          = Functional<Function::GetPhysicalDeviceOpticalFlowImageFormatsNV>;
    using GetPhysicalDevicePresentRectanglesKHR                               = Functional<Function::GetPhysicalDevicePresentRectanglesKHR>;
    using GetPhysicalDeviceProperties                                         = Functional<Function::GetPhysicalDeviceProperties>;
    using GetPhysicalDeviceProperties2                                        = Functional<Function::GetPhysicalDeviceProperties2>;
    using GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM   = Functional<Function::GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM>;
    using GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM     = Functional<Function::GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM>;
    using GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM  = Functional<Function::GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM>;
    using GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM                  = Functional<Function::GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM>;
    using GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR               = Functional<Function::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR>;
    using GetPhysicalDeviceQueueFamilyProperties                              = Functional<Function::GetPhysicalDeviceQueueFamilyProperties>;
    using GetPhysicalDeviceQueueFamilyProperties2                             = Functional<Function::GetPhysicalDeviceQueueFamilyProperties2>;
    using GetPhysicalDeviceRefreshableObjectTypesKHR                          = Functional<Function::GetPhysicalDeviceRefreshableObjectTypesKHR>;
    using GetPhysicalDeviceSciBufAttributesNV                                 = Functional<Function::GetPhysicalDeviceSciBufAttributesNV>;
    using GetPhysicalDeviceScreenPresentationSupportQNX                       = Functional<Function::GetPhysicalDeviceScreenPresentationSupportQNX>;
    using GetPhysicalDeviceSparseImageFormatProperties                        = Functional<Function::GetPhysicalDeviceSparseImageFormatProperties>;
    using GetPhysicalDeviceSparseImageFormatProperties2                       = Functional<Function::GetPhysicalDeviceSparseImageFormatProperties2>;
    using GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV     = Functional<Function::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV>;
    using GetPhysicalDeviceSurfaceCapabilities2EXT                            = Functional<Function::GetPhysicalDeviceSurfaceCapabilities2EXT>;
    using GetPhysicalDeviceSurfaceCapabilities2KHR                            = Functional<Function::GetPhysicalDeviceSurfaceCapabilities2KHR>;
    using GetPhysicalDeviceSurfaceCapabilitiesKHR                             = Functional<Function::GetPhysicalDeviceSurfaceCapabilitiesKHR>;
    using GetPhysicalDeviceSurfaceFormats2KHR                                 = Functional<Function::GetPhysicalDeviceSurfaceFormats2KHR>;
    using GetPhysicalDeviceSurfaceFormatsKHR                                  = Functional<Function::GetPhysicalDeviceSurfaceFormatsKHR>;
    using GetPhysicalDeviceSurfacePresentModes2EXT                            = Functional<Function::GetPhysicalDeviceSurfacePresentModes2EXT>;
    using GetPhysicalDeviceSurfacePresentModesKHR                             = Functional<Function::GetPhysicalDeviceSurfacePresentModesKHR>;
    using GetPhysicalDeviceSurfaceSupportKHR                                  = Functional<Function::GetPhysicalDeviceSurfaceSupportKHR>;
    using GetPhysicalDeviceToolProperties                                     = Functional<Function::GetPhysicalDeviceToolProperties>;
    using GetPhysicalDeviceUbmPresentationSupportSEC                          = Functional<Function::GetPhysicalDeviceUbmPresentationSupportSEC>;
    using GetPhysicalDeviceWaylandPresentationSupportKHR                      = Functional<Function::GetPhysicalDeviceWaylandPresentationSupportKHR>;
    using GetPhysicalDeviceWin32PresentationSupportKHR                        = Functional<Function::GetPhysicalDeviceWin32PresentationSupportKHR>;
    using GetPipelineBinaryDataKHR                                            = Functional<Function::GetPipelineBinaryDataKHR>;
    using GetPipelineCacheData                                                = Functional<Function::GetPipelineCacheData>;
    using GetPipelineExecutableInternalRepresentationsKHR                     = Functional<Function::GetPipelineExecutableInternalRepresentationsKHR>;
    using GetPipelineExecutablePropertiesKHR                                  = Functional<Function::GetPipelineExecutablePropertiesKHR>;
    using GetPipelineExecutableStatisticsKHR                                  = Functional<Function::GetPipelineExecutableStatisticsKHR>;
    using GetPipelineIndirectDeviceAddressNV                                  = Functional<Function::GetPipelineIndirectDeviceAddressNV>;
    using GetPipelineIndirectMemoryRequirementsNV                             = Functional<Function::GetPipelineIndirectMemoryRequirementsNV>;
    using GetPipelineKeyKHR                                                   = Functional<Function::GetPipelineKeyKHR>;
    using GetPipelinePropertiesEXT                                            = Functional<Function::GetPipelinePropertiesEXT>;
    using GetPrivateData                                                      = Functional<Function::GetPrivateData>;
    using GetQueryPoolResults                                                 = Functional<Function::GetQueryPoolResults>;
    using GetQueueCheckpointData2NV                                           = Functional<Function::GetQueueCheckpointData2NV>;
    using GetQueueCheckpointDataNV                                            = Functional<Function::GetQueueCheckpointDataNV>;
    using GetRandROutputDisplayEXT                                            = Functional<Function::GetRandROutputDisplayEXT>;
    using GetRayTracingCaptureReplayShaderGroupHandlesKHR                     = Functional<Function::GetRayTracingCaptureReplayShaderGroupHandlesKHR>;
    using GetRayTracingShaderGroupHandlesKHR                                  = Functional<Function::GetRayTracingShaderGroupHandlesKHR>;
    using GetRayTracingShaderGroupStackSizeKHR                                = Functional<Function::GetRayTracingShaderGroupStackSizeKHR>;
    using GetRefreshCycleDurationGOOGLE                                       = Functional<Function::GetRefreshCycleDurationGOOGLE>;
    using GetRenderAreaGranularity                                            = Functional<Function::GetRenderAreaGranularity>;
    using GetRenderingAreaGranularity                                         = Functional<Function::GetRenderingAreaGranularity>;
    using GetSamplerOpaqueCaptureDescriptorDataEXT                            = Functional<Function::GetSamplerOpaqueCaptureDescriptorDataEXT>;
    using GetSemaphoreCounterValue                                            = Functional<Function::GetSemaphoreCounterValue>;
    using GetSemaphoreFdKHR                                                   = Functional<Function::GetSemaphoreFdKHR>;
    using GetSemaphoreWin32HandleKHR                                          = Functional<Function::GetSemaphoreWin32HandleKHR>;
    using GetShaderBinaryDataEXT                                              = Functional<Function::GetShaderBinaryDataEXT>;
    using GetShaderInfoAMD                                                    = Functional<Function::GetShaderInfoAMD>;
    using GetShaderInstrumentationValuesARM                                   = Functional<Function::GetShaderInstrumentationValuesARM>;
    using GetShaderModuleCreateInfoIdentifierEXT                              = Functional<Function::GetShaderModuleCreateInfoIdentifierEXT>;
    using GetShaderModuleIdentifierEXT                                        = Functional<Function::GetShaderModuleIdentifierEXT>;
    using GetSleepStatusLegacyNV                                              = Functional<Function::GetSleepStatusLegacyNV>;
    using GetSwapchainCounterEXT                                              = Functional<Function::GetSwapchainCounterEXT>;
    using GetSwapchainGrallocUsage2ANDROID                                    = Functional<Function::GetSwapchainGrallocUsage2ANDROID>;
    using GetSwapchainGrallocUsageANDROID                                     = Functional<Function::GetSwapchainGrallocUsageANDROID>;
    using GetSwapchainImagesKHR                                               = Functional<Function::GetSwapchainImagesKHR>;
    using GetSwapchainStatusKHR                                               = Functional<Function::GetSwapchainStatusKHR>;
    using GetSwapchainTimeDomainPropertiesEXT                                 = Functional<Function::GetSwapchainTimeDomainPropertiesEXT>;
    using GetSwapchainTimingPropertiesEXT                                     = Functional<Function::GetSwapchainTimingPropertiesEXT>;
    using GetTensorMemoryRequirementsARM                                      = Functional<Function::GetTensorMemoryRequirementsARM>;
    using GetTensorOpaqueCaptureDataARM                                       = Functional<Function::GetTensorOpaqueCaptureDataARM>;
    using GetTensorOpaqueCaptureDescriptorDataARM                             = Functional<Function::GetTensorOpaqueCaptureDescriptorDataARM>;
    using GetTensorViewOpaqueCaptureDescriptorDataARM                         = Functional<Function::GetTensorViewOpaqueCaptureDescriptorDataARM>;
    using GetValidationCacheDataEXT                                           = Functional<Function::GetValidationCacheDataEXT>;
    using ImportFenceFdKHR                                                    = Functional<Function::ImportFenceFdKHR>;
    using ImportFenceWin32HandleKHR                                           = Functional<Function::ImportFenceWin32HandleKHR>;
    using ImportSemaphoreFdKHR                                                = Functional<Function::ImportSemaphoreFdKHR>;
    using ImportSemaphoreWin32HandleKHR                                       = Functional<Function::ImportSemaphoreWin32HandleKHR>;
    using InitializePerformanceApiINTEL                                       = Functional<Function::InitializePerformanceApiINTEL>;
    using InvalidateMappedMemoryRanges                                        = Functional<Function::InvalidateMappedMemoryRanges>;
    using LatencySleepLegacyNV                                                = Functional<Function::LatencySleepLegacyNV>;
    using LatencySleepNV                                                      = Functional<Function::LatencySleepNV>;
    using MapMemory                                                           = Functional<Function::MapMemory>;
    using MapMemory2                                                          = Functional<Function::MapMemory2>;
    using MergePipelineCaches                                                 = Functional<Function::MergePipelineCaches>;
    using MergeValidationCachesEXT                                            = Functional<Function::MergeValidationCachesEXT>;
    using QueueBeginDebugUtilsLabelEXT                                        = Functional<Function::QueueBeginDebugUtilsLabelEXT>;
    using QueueBindSparse                                                     = Functional<Function::QueueBindSparse>;
    using QueueEndDebugUtilsLabelEXT                                          = Functional<Function::QueueEndDebugUtilsLabelEXT>;
    using QueueInsertDebugUtilsLabelEXT                                       = Functional<Function::QueueInsertDebugUtilsLabelEXT>;
    using QueueNotifyOutOfBandLegacyNV                                        = Functional<Function::QueueNotifyOutOfBandLegacyNV>;
    using QueueNotifyOutOfBandNV                                              = Functional<Function::QueueNotifyOutOfBandNV>;
    using QueuePresentKHR                                                     = Functional<Function::QueuePresentKHR>;
    using QueueSetPerfHintQCOM                                                = Functional<Function::QueueSetPerfHintQCOM>;
    using QueueSetPerformanceConfigurationINTEL                               = Functional<Function::QueueSetPerformanceConfigurationINTEL>;
    using QueueSignalReleaseImageANDROID                                      = Functional<Function::QueueSignalReleaseImageANDROID>;
    using QueueSubmit                                                         = Functional<Function::QueueSubmit>;
    using QueueSubmit2                                                        = Functional<Function::QueueSubmit2>;
    using QueueWaitIdle                                                       = Functional<Function::QueueWaitIdle>;
    using RegisterCustomBorderColorEXT                                        = Functional<Function::RegisterCustomBorderColorEXT>;
    using RegisterDeviceEventEXT                                              = Functional<Function::RegisterDeviceEventEXT>;
    using RegisterDisplayEventEXT                                             = Functional<Function::RegisterDisplayEventEXT>;
    using ReleaseCapturedPipelineDataKHR                                      = Functional<Function::ReleaseCapturedPipelineDataKHR>;
    using ReleaseDisplayEXT                                                   = Functional<Function::ReleaseDisplayEXT>;
    using ReleaseFullScreenExclusiveModeEXT                                   = Functional<Function::ReleaseFullScreenExclusiveModeEXT>;
    using ReleasePerformanceConfigurationINTEL                                = Functional<Function::ReleasePerformanceConfigurationINTEL>;
    using ReleaseProfilingLockKHR                                             = Functional<Function::ReleaseProfilingLockKHR>;
    using ReleaseSwapchainImagesKHR                                           = Functional<Function::ReleaseSwapchainImagesKHR>;
    using ResetCommandBuffer                                                  = Functional<Function::ResetCommandBuffer>;
    using ResetCommandPool                                                    = Functional<Function::ResetCommandPool>;
    using ResetDescriptorPool                                                 = Functional<Function::ResetDescriptorPool>;
    using ResetEvent                                                          = Functional<Function::ResetEvent>;
    using ResetFences                                                         = Functional<Function::ResetFences>;
    using ResetGpaSessionAMD                                                  = Functional<Function::ResetGpaSessionAMD>;
    using ResetQueryPool                                                      = Functional<Function::ResetQueryPool>;
    using SetDebugUtilsObjectNameEXT                                          = Functional<Function::SetDebugUtilsObjectNameEXT>;
    using SetDebugUtilsObjectTagEXT                                           = Functional<Function::SetDebugUtilsObjectTagEXT>;
    using SetDeviceMemoryPriorityEXT                                          = Functional<Function::SetDeviceMemoryPriorityEXT>;
    using SetEvent                                                            = Functional<Function::SetEvent>;
    using SetGpaDeviceClockModeAMD                                            = Functional<Function::SetGpaDeviceClockModeAMD>;
    using SetHdrMetadataEXT                                                   = Functional<Function::SetHdrMetadataEXT>;
    using SetLatencyMarkerLegacyNV                                            = Functional<Function::SetLatencyMarkerLegacyNV>;
    using SetLatencyMarkerNV                                                  = Functional<Function::SetLatencyMarkerNV>;
    using SetLatencySleepModeLegacyNV                                         = Functional<Function::SetLatencySleepModeLegacyNV>;
    using SetLatencySleepModeNV                                               = Functional<Function::SetLatencySleepModeNV>;
    using SetLocalDimmingAMD                                                  = Functional<Function::SetLocalDimmingAMD>;
    using SetPrivateData                                                      = Functional<Function::SetPrivateData>;
    using SetSwapchainPresentTimingQueueSizeEXT                               = Functional<Function::SetSwapchainPresentTimingQueueSizeEXT>;
    using ShutdownLatencyDeviceLegacyNV                                       = Functional<Function::ShutdownLatencyDeviceLegacyNV>;
    using SignalSemaphore                                                     = Functional<Function::SignalSemaphore>;
    using SubmitDebugUtilsMessageEXT                                          = Functional<Function::SubmitDebugUtilsMessageEXT>;
    using TransitionImageLayout                                               = Functional<Function::TransitionImageLayout>;
    using TrimCommandPool                                                     = Functional<Function::TrimCommandPool>;
    using UninitializePerformanceApiINTEL                                     = Functional<Function::UninitializePerformanceApiINTEL>;
    using UnmapMemory                                                         = Functional<Function::UnmapMemory>;
    using UnmapMemory2                                                        = Functional<Function::UnmapMemory2>;
    using UnregisterCustomBorderColorEXT                                      = Functional<Function::UnregisterCustomBorderColorEXT>;
    using UpdateDescriptorSetWithTemplate                                     = Functional<Function::UpdateDescriptorSetWithTemplate>;
    using UpdateDescriptorSets                                                = Functional<Function::UpdateDescriptorSets>;
    using UpdateIndirectExecutionSetPipelineEXT                               = Functional<Function::UpdateIndirectExecutionSetPipelineEXT>;
    using UpdateIndirectExecutionSetShaderEXT                                 = Functional<Function::UpdateIndirectExecutionSetShaderEXT>;
    using WaitForFences                                                       = Functional<Function::WaitForFences>;
    using WaitForPresent2KHR                                                  = Functional<Function::WaitForPresent2KHR>;
    using WaitForPresentKHR                                                   = Functional<Function::WaitForPresentKHR>;
    using WaitSemaphores                                                      = Functional<Function::WaitSemaphores>;
    using WriteAccelerationStructuresPropertiesKHR                            = Functional<Function::WriteAccelerationStructuresPropertiesKHR>;
    using WriteMicromapsPropertiesEXT                                         = Functional<Function::WriteMicromapsPropertiesEXT>;
    using WriteResourceDescriptorsEXT                                         = Functional<Function::WriteResourceDescriptorsEXT>;
    using WriteSamplerDescriptorsEXT                                          = Functional<Function::WriteSamplerDescriptorsEXT>;

    /**
     * @brief Loads a Vulkan function pointer through vkGetInstanceProcAddr.
     *
     * Resolves the address of the function identified by @p Fu by calling
     * @p getInstanceProcAddr with the given @p instance and the function's
     * registered name (Functional<Fu>::Traits::Name), then loads that address into
     * @p functional.
     *
     * If loading fails, the behavior depends on @p isNecessary:
     * - When @p isNecessary is true, a std::runtime_error is thrown whose message
     *   is the function name, making a missing mandatory function a hard failure.
     * - When @p isNecessary is false, the failure is silently ignored and the
     *   caller may treat the function as unavailable.
     *
     * @tparam Fu           Function identifier selecting the Functional specialization.
     * @param instance      Instance used to resolve the function address.
     * @param getInstanceProcAddr Wrapper providing vkGetInstanceProcAddr.
     * @param functional    Functional object that receives the loaded pointer.
     * @param isNecessary   Whether a load failure should be treated as fatal.
     * @throws std::runtime_error If loading fails and @p isNecessary is true.
     * @note The failure branch is marked [[unlikely]].
     */
    template <Function Fu>
    void LoadFunction( const Instance& instance, const GetInstanceProcAddr& getInstanceProcAddr, Functional<Fu>& functional, const bool isNecessary ) 
    {
        if ( not functional.Load( getInstanceProcAddr.Call( instance, Functional<Fu>::Traits::Name ) ) ) [[unlikely]]
        {
            if ( isNecessary )
            {
                throw std::runtime_error
                { std::format( "Fail to load {}", Functional<Fu>::Traits::Name ) };
            }
        }
    }
    /**
     * @brief Loads a Vulkan device-level function pointer through vkGetDeviceProcAddr.
     *
     * Resolves the address of the function identified by @p Fu by calling
     * @p getDeviceProcAddr with the given @p device and the function's registered
     * name (Functional<Fu>::Traits::Name), then loads that address into
     * @p functional.
     *
     * If loading fails, the behavior depends on @p isNecessary:
     * - When @p isNecessary is true, a std::runtime_error is thrown whose message
     *   is the function name, making a missing mandatory function a hard failure.
     * - When @p isNecessary is false, the failure is silently ignored and the
     *   caller may treat the function as unavailable.
     *
     * @tparam Fu                Function identifier selecting the Functional specialization.
     * @param device             Device used to resolve the function address.
     * @param getDeviceProcAddr  Wrapper providing vkGetDeviceProcAddr.
     * @param functional         Functional object that receives the loaded pointer.
     * @param isNecessary        Whether a load failure should be treated as fatal.
     * @throws std::runtime_error If loading fails and @p isNecessary is true.
     * @note The failure branch is marked [[unlikely]].
     * @warning This function is declared noexcept yet throws on mandatory load
     *          failure; a thrown exception will therefore call std::terminate.
     *          The noexcept specifier should likely be removed.
     */
    template <Function Fu>
    void LoadFunction( const Device& device, const GetDeviceProcAddr& getDeviceProcAddr, Functional<Fu>& functional, const bool isNecessary )
    {
        if ( not functional.Load( getDeviceProcAddr.Call( device, Functional<Fu>::Traits::Name ) ) ) [[unlikely]]
        {
            if ( isNecessary )
            {
                throw std::runtime_error
                { std::format( "Fail to load {}", Functional<Fu>::Traits::Name ) };
            }
        }
    }
    /**
     * @brief Loads the vkGetInstanceProcAddr function pointer from the runtime.
     *
     * Resolves the address of vkGetInstanceProcAddr through the given @p runtime
     * (using GetInstanceProcAddr::Traits::Name) and loads it into
     * @p getInstanceProcAddr. This function is the bootstrap step required before
     * any other Vulkan entry point can be resolved.
     *
     * @param runtime               Runtime providing the raw symbol address.
     * @param getInstanceProcAddr   Functional object that receives the loaded pointer.
     * @throws std::runtime_error If loading fails, with the function name as the
     *         error message.
     * @note The failure branch is marked [[unlikely]].
     */
    inline void LoadFunction( const Runtime& runtime, GetInstanceProcAddr& getInstanceProcAddr )
    {
        if ( not getInstanceProcAddr.Load( runtime.GetProcAddress( GetInstanceProcAddr::Traits::Name ) ) ) [[unlikely]]
        {
            throw std::runtime_error
            { std::format( "Fail to load {}", GetInstanceProcAddr::Traits::Name ) };
        }
    }
    /**
     * @brief Loads an instance-level Vulkan function pointer without an instance.
     *
     * Convenience overload that forwards to the instance-based LoadFunction with a
     * null instance. Resolves the address of the function identified by @p Fu via
     * vkGetInstanceProcAddr, passing nullptr as the instance argument, then loads
     * that address into @p functional.
     *
     * This is suitable for global/instance-independent entry points (and for
     * resolving vkCreateInstance itself, where no instance exists yet).
     *
     * If loading fails, the behavior depends on @p isNecessary:
     * - When @p isNecessary is true, a std::runtime_error is thrown whose message
     *   is the function name.
     * - When @p isNecessary is false, the failure is silently ignored and the
     *   caller may treat the function as unavailable.
     *
     * @tparam Fu                Function identifier selecting the Functional specialization.
     * @param getInstanceProcAddr Wrapper providing vkGetInstanceProcAddr.
     * @param functional         Functional object that receives the loaded pointer.
     * @param isNecessary        Whether a load failure should be treated as fatal.
     * @throws std::runtime_error If loading fails and @p isNecessary is true.
     * @see LoadFunction(const Instance&, const GetInstanceProcAddr&, Functional<Fu>&, bool)
     */
    template <Function Fu>
    void LoadFunction( const GetInstanceProcAddr& getInstanceProcAddr, Functional<Fu>& functional, const bool isNecessary )
    {
        LoadFunction<Fu>( nullptr, getInstanceProcAddr, functional, isNecessary );
    }
}

#endif
