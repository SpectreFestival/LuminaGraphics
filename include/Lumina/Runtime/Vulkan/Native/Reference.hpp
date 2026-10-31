#ifndef INCLUDED_LUMINA_RUNTIME_NATIVE_REFERENCE_HPP
#define INCLUDED_LUMINA_RUNTIME_NATIVE_REFERENCE_HPP
#pragma once


#include "Enumeration.hpp"

namespace lumina::runtime::vulkan::native
{
    template <ObjectType>
    struct Reference
    {
        void* Placeholder{ nullptr };
    };

    using AccelerationStructureKHR       = Reference<ObjectType::AccelerationStructureKHR>*;
    using AccelerationStructureNV        = Reference<ObjectType::AccelerationStructureNV>*;
    using Buffer                         = Reference<ObjectType::Buffer>*;
    using BufferCollectionFUCHSIA        = Reference<ObjectType::BufferCollectionFUCHSIA>*;
    using BufferView                     = Reference<ObjectType::BufferView>*;
    using CommandBuffer                  = Reference<ObjectType::CommandBuffer>*;
    using CommandPool                    = Reference<ObjectType::CommandPool>*;
    using CuFunctionNVX                  = Reference<ObjectType::CuFunctionNVX>*;
    using CuModuleNVX                    = Reference<ObjectType::CuModuleNVX>*;
    using CudaFunctionNV                 = Reference<ObjectType::CudaFunctionNV>*;
    using CudaModuleNV                   = Reference<ObjectType::CudaModuleNV>*;
    using DataGraphPipelineSessionARM    = Reference<ObjectType::DataGraphPipelineSessionARM>*;
    using DebugReportCallbackEXT         = Reference<ObjectType::DebugReportCallbackEXT>*;
    using DebugUtilsMessengerEXT         = Reference<ObjectType::DebugUtilsMessengerEXT>*;
    using DeferredOperationKHR           = Reference<ObjectType::DeferredOperationKHR>*;
    using DescriptorPool                 = Reference<ObjectType::DescriptorPool>*;
    using DescriptorSet                  = Reference<ObjectType::DescriptorSet>*;
    using DescriptorSetLayout            = Reference<ObjectType::DescriptorSetLayout>*;
    using DescriptorUpdateTemplate       = Reference<ObjectType::DescriptorUpdateTemplate>*;
    using DescriptorUpdateTemplateKHR    = Reference<ObjectType::DescriptorUpdateTemplate>*;
    using Device                         = Reference<ObjectType::Device>*;
    using DeviceMemory                   = Reference<ObjectType::DeviceMemory>*;
    using DisplayKHR                     = Reference<ObjectType::DisplayKHR>*;
    using DisplayModeKHR                 = Reference<ObjectType::DisplayModeKHR>*;
    using Event                          = Reference<ObjectType::Event>*;
    using ExternalComputeQueueNV         = Reference<ObjectType::ExternalComputeQueueNV>*;
    using Fence                          = Reference<ObjectType::Fence>*;
    using Framebuffer                    = Reference<ObjectType::Framebuffer>*;
    using GpaSessionAMD                  = Reference<ObjectType::GpaSessionAMD>*;
    using Image                          = Reference<ObjectType::Image>*;
    using ImageView                      = Reference<ObjectType::ImageView>*;
    using IndirectCommandsLayoutEXT      = Reference<ObjectType::IndirectCommandsLayoutEXT>*;
    using IndirectCommandsLayoutNV       = Reference<ObjectType::IndirectCommandsLayoutNV>*;
    using IndirectExecutionSetEXT        = Reference<ObjectType::IndirectExecutionSetEXT>*;
    using Instance                       = Reference<ObjectType::Instance>*;
    using MicromapEXT                    = Reference<ObjectType::MicromapEXT>*;
    using OpticalFlowSessionNV           = Reference<ObjectType::OpticalFlowSessionNV>*;
    using PerformanceConfigurationINTEL  = Reference<ObjectType::PerformanceConfigurationINTEL>*;
    using PhysicalDevice                 = Reference<ObjectType::PhysicalDevice>*;
    using Pipeline                       = Reference<ObjectType::Pipeline>*;
    using PipelineBinaryKHR              = Reference<ObjectType::PipelineBinaryKHR>*;
    using PipelineCache                  = Reference<ObjectType::PipelineCache>*;
    using PipelineLayout                 = Reference<ObjectType::PipelineLayout>*;
    using PrivateDataSlot                = Reference<ObjectType::PrivateDataSlot>*;
    using PrivateDataSlotEXT             = Reference<ObjectType::PrivateDataSlot>*;
    using QueryPool                      = Reference<ObjectType::QueryPool>*;
    using Queue                          = Reference<ObjectType::Queue>*;
    using RenderPass                     = Reference<ObjectType::RenderPass>*;
    using Sampler                        = Reference<ObjectType::Sampler>*;
    using SamplerYcbcrConversion         = Reference<ObjectType::SamplerYcbcrConversion>*;
    using SamplerYcbcrConversionKHR      = Reference<ObjectType::SamplerYcbcrConversion>*;
    using Semaphore                      = Reference<ObjectType::Semaphore>*;
    using SemaphoreSciSyncPoolNV         = Reference<ObjectType::SemaphoreSciSyncPoolNV>*;
    using ShaderEXT                      = Reference<ObjectType::ShaderEXT>*;
    using ShaderInstrumentationARM       = Reference<ObjectType::ShaderInstrumentationARM>*;
    using ShaderModule                   = Reference<ObjectType::ShaderModule>*;
    using SurfaceKHR                     = Reference<ObjectType::SurfaceKHR>*;
    using SwapchainKHR                   = Reference<ObjectType::SwapchainKHR>*;
    using TensorARM                      = Reference<ObjectType::TensorARM>*;
    using TensorViewARM                  = Reference<ObjectType::TensorViewARM>*;
    using ValidationCacheEXT             = Reference<ObjectType::ValidationCacheEXT>*;
    using VideoSessionKHR                = Reference<ObjectType::VideoSessionKHR>*;
    using VideoSessionParametersKHR      = Reference<ObjectType::VideoSessionParametersKHR>*;
}

#endif
