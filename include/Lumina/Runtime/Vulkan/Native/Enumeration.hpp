#ifndef INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_ENUMERATION_HPP
#define INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_ENUMERATION_HPP
#pragma once

#include <cstdint>

namespace lumina::runtime::vulkan::native
{
    enum class Function : std::uint32_t
    {
        AcquireDrmDisplayEXT                                                = 0,
        AcquireFullScreenExclusiveModeEXT                                   = 1,
        AcquireImageANDROID                                                 = 2,
        AcquireImageOHOS                                                    = 3,
        AcquireNextImage2KHR                                                = 4,
        AcquireNextImageKHR                                                 = 5,
        AcquirePerformanceConfigurationINTEL                                = 6,
        AcquireProfilingLockKHR                                             = 7,
        AcquireWinrtDisplayNV                                               = 8,
        AcquireXlibDisplayEXT                                               = 9,
        AllocateCommandBuffers                                              = 10,
        AllocateDescriptorSets                                              = 11,
        AllocateMemory                                                      = 12,
        AntiLagUpdateAMD                                                    = 13,
        BeginCommandBuffer                                                  = 14,
        BindAccelerationStructureMemoryNV                                   = 15,
        BindBufferMemory                                                    = 16,
        BindBufferMemory2                                                   = 17,
        BindDataGraphPipelineSessionMemoryARM                               = 18,
        BindImageMemory                                                     = 19,
        BindImageMemory2                                                    = 20,
        BindOpticalFlowSessionImageNV                                       = 21,
        BindTensorMemoryARM                                                 = 22,
        BindVideoSessionMemoryKHR                                           = 23,
        BuildAccelerationStructuresKHR                                      = 24,
        BuildMicromapsEXT                                                   = 25,
        ClearShaderInstrumentationMetricsARM                                = 26,
        CmdBeginConditionalRendering2EXT                                    = 27,
        CmdBeginConditionalRenderingEXT                                     = 28,
        CmdBeginCustomResolveEXT                                            = 29,
        CmdBeginDebugUtilsLabelEXT                                          = 30,
        CmdBeginGpaSampleAMD                                                = 31,
        CmdBeginGpaSessionAMD                                               = 32,
        CmdBeginPerTileExecutionQCOM                                        = 33,
        CmdBeginQuery                                                       = 34,
        CmdBeginQueryIndexedEXT                                             = 35,
        CmdBeginRenderPass                                                  = 36,
        CmdBeginRenderPass2                                                 = 37,
        CmdBeginRendering                                                   = 38,
        CmdBeginShaderInstrumentationARM                                    = 39,
        CmdBeginTransformFeedback2EXT                                       = 40,
        CmdBeginTransformFeedbackEXT                                        = 41,
        CmdBeginVideoCodingKHR                                              = 42,
        CmdBindDescriptorBufferEmbeddedSamplers2EXT                         = 43,
        CmdBindDescriptorBufferEmbeddedSamplersEXT                          = 44,
        CmdBindDescriptorBuffersEXT                                         = 45,
        CmdBindDescriptorSets                                               = 46,
        CmdBindDescriptorSets2                                              = 47,
        CmdBindIndexBuffer                                                  = 48,
        CmdBindIndexBuffer2                                                 = 49,
        CmdBindIndexBuffer3KHR                                              = 50,
        CmdBindInvocationMaskHUAWEI                                         = 51,
        CmdBindPipeline                                                     = 52,
        CmdBindPipelineShaderGroupNV                                        = 53,
        CmdBindResourceHeapEXT                                              = 54,
        CmdBindSamplerHeapEXT                                               = 55,
        CmdBindShadersEXT                                                   = 56,
        CmdBindShadingRateImageNV                                           = 57,
        CmdBindTileMemoryQCOM                                               = 58,
        CmdBindTransformFeedbackBuffers2EXT                                 = 59,
        CmdBindTransformFeedbackBuffersEXT                                  = 60,
        CmdBindVertexBuffers                                                = 61,
        CmdBindVertexBuffers2                                               = 62,
        CmdBindVertexBuffers3KHR                                            = 63,
        CmdBlitImage                                                        = 64,
        CmdBlitImage2                                                       = 65,
        CmdBuildAccelerationStructureNV                                     = 66,
        CmdBuildAccelerationStructuresIndirectKHR                           = 67,
        CmdBuildAccelerationStructuresKHR                                   = 68,
        CmdBuildClusterAccelerationStructureIndirectNV                      = 69,
        CmdBuildMicromapsEXT                                                = 70,
        CmdBuildPartitionedAccelerationStructuresNV                         = 71,
        CmdClearAttachments                                                 = 72,
        CmdClearColorImage                                                  = 73,
        CmdClearDepthStencilImage                                           = 74,
        CmdControlVideoCodingKHR                                            = 75,
        CmdConvertCooperativeVectorMatrixNV                                 = 76,
        CmdCopyAccelerationStructureKHR                                     = 77,
        CmdCopyAccelerationStructureNV                                      = 78,
        CmdCopyAccelerationStructureToMemoryKHR                             = 79,
        CmdCopyBuffer                                                       = 80,
        CmdCopyBuffer2                                                      = 81,
        CmdCopyBufferToImage                                                = 82,
        CmdCopyBufferToImage2                                               = 83,
        CmdCopyGpaSessionResultsAMD                                         = 84,
        CmdCopyImage                                                        = 85,
        CmdCopyImage2                                                       = 86,
        CmdCopyImageToBuffer                                                = 87,
        CmdCopyImageToBuffer2                                               = 88,
        CmdCopyImageToMemoryKHR                                             = 89,
        CmdCopyMemoryIndirectKHR                                            = 90,
        CmdCopyMemoryIndirectNV                                             = 91,
        CmdCopyMemoryKHR                                                    = 92,
        CmdCopyMemoryToAccelerationStructureKHR                             = 93,
        CmdCopyMemoryToImageIndirectKHR                                     = 94,
        CmdCopyMemoryToImageIndirectNV                                      = 95,
        CmdCopyMemoryToImageKHR                                             = 96,
        CmdCopyMemoryToMicromapEXT                                          = 97,
        CmdCopyMicromapEXT                                                  = 98,
        CmdCopyMicromapToMemoryEXT                                          = 99,
        CmdCopyQueryPoolResults                                             = 100,
        CmdCopyQueryPoolResultsToMemoryKHR                                  = 101,
        CmdCopyTensorARM                                                    = 102,
        CmdCuLaunchKernelNVX                                                = 103,
        CmdCudaLaunchKernelNV                                               = 104,
        CmdDebugMarkerBeginEXT                                              = 105,
        CmdDebugMarkerEndEXT                                                = 106,
        CmdDebugMarkerInsertEXT                                             = 107,
        CmdDecodeVideoKHR                                                   = 108,
        CmdDecompressMemoryEXT                                              = 109,
        CmdDecompressMemoryIndirectCountEXT                                 = 110,
        CmdDecompressMemoryIndirectCountNV                                  = 111,
        CmdDecompressMemoryNV                                               = 112,
        CmdDispatch                                                         = 113,
        CmdDispatchBase                                                     = 114,
        CmdDispatchDataGraphARM                                             = 115,
        CmdDispatchGraphAMDX                                                = 116,
        CmdDispatchGraphIndirectAMDX                                        = 117,
        CmdDispatchGraphIndirectCountAMDX                                   = 118,
        CmdDispatchIndirect                                                 = 119,
        CmdDispatchIndirect2KHR                                             = 120,
        CmdDispatchTileQCOM                                                 = 121,
        CmdDraw                                                             = 122,
        CmdDrawClusterHUAWEI                                                = 123,
        CmdDrawClusterIndirectHUAWEI                                        = 124,
        CmdDrawIndexed                                                      = 125,
        CmdDrawIndexedIndirect                                              = 126,
        CmdDrawIndexedIndirect2KHR                                          = 127,
        CmdDrawIndexedIndirectCount                                         = 128,
        CmdDrawIndexedIndirectCount2KHR                                     = 129,
        CmdDrawIndirect                                                     = 130,
        CmdDrawIndirect2KHR                                                 = 131,
        CmdDrawIndirectByteCount2EXT                                        = 132,
        CmdDrawIndirectByteCountEXT                                         = 133,
        CmdDrawIndirectCount                                                = 134,
        CmdDrawIndirectCount2KHR                                            = 135,
        CmdDrawMeshTasksEXT                                                 = 136,
        CmdDrawMeshTasksIndirect2EXT                                        = 137,
        CmdDrawMeshTasksIndirectCount2EXT                                   = 138,
        CmdDrawMeshTasksIndirectCountEXT                                    = 139,
        CmdDrawMeshTasksIndirectCountNV                                     = 140,
        CmdDrawMeshTasksIndirectEXT                                         = 141,
        CmdDrawMeshTasksIndirectNV                                          = 142,
        CmdDrawMeshTasksNV                                                  = 143,
        CmdDrawMultiEXT                                                     = 144,
        CmdDrawMultiIndexedEXT                                              = 145,
        CmdEncodeVideoKHR                                                   = 146,
        CmdEndConditionalRenderingEXT                                       = 147,
        CmdEndDebugUtilsLabelEXT                                            = 148,
        CmdEndGpaSampleAMD                                                  = 149,
        CmdEndGpaSessionAMD                                                 = 150,
        CmdEndPerTileExecutionQCOM                                          = 151,
        CmdEndQuery                                                         = 152,
        CmdEndQueryIndexedEXT                                               = 153,
        CmdEndRenderPass                                                    = 154,
        CmdEndRenderPass2                                                   = 155,
        CmdEndRendering                                                     = 156,
        CmdEndRendering2KHR                                                 = 157,
        CmdEndShaderInstrumentationARM                                      = 158,
        CmdEndTransformFeedback2EXT                                         = 159,
        CmdEndTransformFeedbackEXT                                          = 160,
        CmdEndVideoCodingKHR                                                = 161,
        CmdExecuteCommands                                                  = 162,
        CmdExecuteGeneratedCommandsEXT                                      = 163,
        CmdExecuteGeneratedCommandsNV                                       = 164,
        CmdFillBuffer                                                       = 165,
        CmdFillMemoryKHR                                                    = 166,
        CmdInitializeGraphScratchMemoryAMDX                                 = 167,
        CmdInsertDebugUtilsLabelEXT                                         = 168,
        CmdNextSubpass                                                      = 169,
        CmdNextSubpass2                                                     = 170,
        CmdOpticalFlowExecuteNV                                             = 171,
        CmdPipelineBarrier                                                  = 172,
        CmdPipelineBarrier2                                                 = 173,
        CmdPreprocessGeneratedCommandsEXT                                   = 174,
        CmdPreprocessGeneratedCommandsNV                                    = 175,
        CmdPushConstants                                                    = 176,
        CmdPushConstants2                                                   = 177,
        CmdPushDataEXT                                                      = 178,
        CmdPushDescriptorSet                                                = 179,
        CmdPushDescriptorSet2                                               = 180,
        CmdPushDescriptorSetWithTemplate                                    = 181,
        CmdPushDescriptorSetWithTemplate2                                   = 182,
        CmdRefreshObjectsKHR                                                = 183,
        CmdResetEvent                                                       = 184,
        CmdResetEvent2                                                      = 185,
        CmdResetQueryPool                                                   = 186,
        CmdResolveImage                                                     = 187,
        CmdResolveImage2                                                    = 188,
        CmdSetAlphaToCoverageEnableEXT                                      = 189,
        CmdSetAlphaToOneEnableEXT                                           = 190,
        CmdSetAttachmentFeedbackLoopEnableEXT                               = 191,
        CmdSetBlendConstants                                                = 192,
        CmdSetCheckpointNV                                                  = 193,
        CmdSetCoarseSampleOrderNV                                           = 194,
        CmdSetColorBlendAdvancedEXT                                         = 195,
        CmdSetColorBlendEnableEXT                                           = 196,
        CmdSetColorBlendEquationEXT                                         = 197,
        CmdSetColorWriteEnableEXT                                           = 198,
        CmdSetColorWriteMaskEXT                                             = 199,
        CmdSetComputeOccupancyPriorityNV                                    = 200,
        CmdSetConservativeRasterizationModeEXT                              = 201,
        CmdSetCoverageModulationModeNV                                      = 202,
        CmdSetCoverageModulationTableEnableNV                               = 203,
        CmdSetCoverageModulationTableNV                                     = 204,
        CmdSetCoverageReductionModeNV                                       = 205,
        CmdSetCoverageToColorEnableNV                                       = 206,
        CmdSetCoverageToColorLocationNV                                     = 207,
        CmdSetCullMode                                                      = 208,
        CmdSetDepthBias                                                     = 209,
        CmdSetDepthBias2EXT                                                 = 210,
        CmdSetDepthBiasEnable                                               = 211,
        CmdSetDepthBounds                                                   = 212,
        CmdSetDepthBoundsTestEnable                                         = 213,
        CmdSetDepthClampEnableEXT                                           = 214,
        CmdSetDepthClampRangeEXT                                            = 215,
        CmdSetDepthClipEnableEXT                                            = 216,
        CmdSetDepthClipNegativeOneToOneEXT                                  = 217,
        CmdSetDepthCompareOp                                                = 218,
        CmdSetDepthTestEnable                                               = 219,
        CmdSetDepthWriteEnable                                              = 220,
        CmdSetDescriptorBufferOffsets2EXT                                   = 221,
        CmdSetDescriptorBufferOffsetsEXT                                    = 222,
        CmdSetDeviceMask                                                    = 223,
        CmdSetDiscardRectangleEXT                                           = 224,
        CmdSetDiscardRectangleEnableEXT                                     = 225,
        CmdSetDiscardRectangleModeEXT                                       = 226,
        CmdSetDispatchParametersARM                                         = 227,
        CmdSetEvent                                                         = 228,
        CmdSetEvent2                                                        = 229,
        CmdSetExclusiveScissorEnableNV                                      = 230,
        CmdSetExclusiveScissorNV                                            = 231,
        CmdSetExtraPrimitiveOverestimationSizeEXT                           = 232,
        CmdSetFragmentShadingRateEnumNV                                     = 233,
        CmdSetFragmentShadingRateKHR                                        = 234,
        CmdSetFrontFace                                                     = 235,
        CmdSetLineRasterizationModeEXT                                      = 236,
        CmdSetLineStipple                                                   = 237,
        CmdSetLineStippleEnableEXT                                          = 238,
        CmdSetLineWidth                                                     = 239,
        CmdSetLogicOpEXT                                                    = 240,
        CmdSetLogicOpEnableEXT                                              = 241,
        CmdSetPatchControlPointsEXT                                         = 242,
        CmdSetPerformanceMarkerINTEL                                        = 243,
        CmdSetPerformanceOverrideINTEL                                      = 244,
        CmdSetPerformanceStreamMarkerINTEL                                  = 245,
        CmdSetPolygonModeEXT                                                = 246,
        CmdSetPrimitiveRestartEnable                                        = 247,
        CmdSetPrimitiveRestartIndexEXT                                      = 248,
        CmdSetPrimitiveTopology                                             = 249,
        CmdSetProvokingVertexModeEXT                                        = 250,
        CmdSetRasterizationSamplesEXT                                       = 251,
        CmdSetRasterizationStreamEXT                                        = 252,
        CmdSetRasterizerDiscardEnable                                       = 253,
        CmdSetRayTracingPipelineStackSizeKHR                                = 254,
        CmdSetRenderingAttachmentLocations                                  = 255,
        CmdSetRenderingInputAttachmentIndices                               = 256,
        CmdSetRepresentativeFragmentTestEnableNV                            = 257,
        CmdSetSampleLocationsEXT                                            = 258,
        CmdSetSampleLocationsEnableEXT                                      = 259,
        CmdSetSampleMaskEXT                                                 = 260,
        CmdSetScissor                                                       = 261,
        CmdSetScissorWithCount                                              = 262,
        CmdSetShadingRateImageEnableNV                                      = 263,
        CmdSetStencilCompareMask                                            = 264,
        CmdSetStencilOp                                                     = 265,
        CmdSetStencilReference                                              = 266,
        CmdSetStencilTestEnable                                             = 267,
        CmdSetStencilWriteMask                                              = 268,
        CmdSetTessellationDomainOriginEXT                                   = 269,
        CmdSetVertexInputEXT                                                = 270,
        CmdSetViewport                                                      = 271,
        CmdSetViewportShadingRatePaletteNV                                  = 272,
        CmdSetViewportSwizzleNV                                             = 273,
        CmdSetViewportWScalingEnableNV                                      = 274,
        CmdSetViewportWScalingNV                                            = 275,
        CmdSetViewportWithCount                                             = 276,
        CmdSubpassShadingHUAWEI                                             = 277,
        CmdTraceRaysIndirect2KHR                                            = 278,
        CmdTraceRaysIndirectKHR                                             = 279,
        CmdTraceRaysKHR                                                     = 280,
        CmdTraceRaysNV                                                      = 281,
        CmdUpdateBuffer                                                     = 282,
        CmdUpdateMemoryKHR                                                  = 283,
        CmdUpdatePipelineIndirectBufferNV                                   = 284,
        CmdWaitEvents                                                       = 285,
        CmdWaitEvents2                                                      = 286,
        CmdWriteAccelerationStructuresPropertiesKHR                         = 287,
        CmdWriteAccelerationStructuresPropertiesNV                          = 288,
        CmdWriteBufferMarker2AMD                                            = 289,
        CmdWriteBufferMarkerAMD                                             = 290,
        CmdWriteMarkerToMemoryAMD                                           = 291,
        CmdWriteMicromapsPropertiesEXT                                      = 292,
        CmdWriteTimestamp                                                   = 293,
        CmdWriteTimestamp2                                                  = 294,
        CompileDeferredNV                                                   = 295,
        ConvertCooperativeVectorMatrixNV                                    = 296,
        CopyAccelerationStructureKHR                                        = 297,
        CopyAccelerationStructureToMemoryKHR                                = 298,
        CopyImageToImage                                                    = 299,
        CopyImageToMemory                                                   = 300,
        CopyMemoryToAccelerationStructureKHR                                = 301,
        CopyMemoryToImage                                                   = 302,
        CopyMemoryToMicromapEXT                                             = 303,
        CopyMicromapEXT                                                     = 304,
        CopyMicromapToMemoryEXT                                             = 305,
        CreateAccelerationStructure2KHR                                     = 306,
        CreateAccelerationStructureKHR                                      = 307,
        CreateAccelerationStructureNV                                       = 308,
        CreateAndroidSurfaceKHR                                             = 309,
        CreateBuffer                                                        = 310,
        CreateBufferCollectionFUCHSIA                                       = 311,
        CreateBufferView                                                    = 312,
        CreateCommandPool                                                   = 313,
        CreateComputePipelines                                              = 314,
        CreateCuFunctionNVX                                                 = 315,
        CreateCuModuleNVX                                                   = 316,
        CreateCudaFunctionNV                                                = 317,
        CreateCudaModuleNV                                                  = 318,
        CreateDataGraphPipelineSessionARM                                   = 319,
        CreateDataGraphPipelinesARM                                         = 320,
        CreateDebugReportCallbackEXT                                        = 321,
        CreateDebugUtilsMessengerEXT                                        = 322,
        CreateDeferredOperationKHR                                          = 323,
        CreateDescriptorPool                                                = 324,
        CreateDescriptorSetLayout                                           = 325,
        CreateDescriptorUpdateTemplate                                      = 326,
        CreateDevice                                                        = 327,
        CreateDirectFBSurfaceEXT                                            = 328,
        CreateDisplayModeKHR                                                = 329,
        CreateDisplayPlaneSurfaceKHR                                        = 330,
        CreateEvent                                                         = 331,
        CreateExecutionGraphPipelinesAMDX                                   = 332,
        CreateExternalComputeQueueNV                                        = 333,
        CreateFence                                                         = 334,
        CreateFramebuffer                                                   = 335,
        CreateGpaSessionAMD                                                 = 336,
        CreateGraphicsPipelines                                             = 337,
        CreateHeadlessSurfaceEXT                                            = 338,
        CreateIOSSurfaceMVK                                                 = 339,
        CreateImage                                                         = 340,
        CreateImagePipeSurfaceFUCHSIA                                       = 341,
        CreateImageView                                                     = 342,
        CreateIndirectCommandsLayoutEXT                                     = 343,
        CreateIndirectCommandsLayoutNV                                      = 344,
        CreateIndirectExecutionSetEXT                                       = 345,
        CreateInstance                                                      = 346,
        CreateMacOSSurfaceMVK                                               = 347,
        CreateMetalSurfaceEXT                                               = 348,
        CreateMicromapEXT                                                   = 349,
        CreateOpticalFlowSessionNV                                          = 350,
        CreatePipelineBinariesKHR                                           = 351,
        CreatePipelineCache                                                 = 352,
        CreatePipelineLayout                                                = 353,
        CreatePrivateDataSlot                                               = 354,
        CreateQueryPool                                                     = 355,
        CreateRayTracingPipelinesKHR                                        = 356,
        CreateRayTracingPipelinesNV                                         = 357,
        CreateRenderPass                                                    = 358,
        CreateRenderPass2                                                   = 359,
        CreateSampler                                                       = 360,
        CreateSamplerYcbcrConversion                                        = 361,
        CreateScreenSurfaceQNX                                              = 362,
        CreateSemaphore                                                     = 363,
        CreateSemaphoreSciSyncPoolNV                                        = 364,
        CreateShaderInstrumentationARM                                      = 365,
        CreateShaderModule                                                  = 366,
        CreateShadersEXT                                                    = 367,
        CreateSharedSwapchainsKHR                                           = 368,
        CreateStreamDescriptorSurfaceGGP                                    = 369,
        CreateSurfaceOHOS                                                   = 370,
        CreateSwapchainKHR                                                  = 371,
        CreateTensorARM                                                     = 372,
        CreateTensorViewARM                                                 = 373,
        CreateUbmSurfaceSEC                                                 = 374,
        CreateValidationCacheEXT                                            = 375,
        CreateViSurfaceNN                                                   = 376,
        CreateVideoSessionKHR                                               = 377,
        CreateVideoSessionParametersKHR                                     = 378,
        CreateWaylandSurfaceKHR                                             = 379,
        CreateWin32SurfaceKHR                                               = 380,
        CreateXcbSurfaceKHR                                                 = 381,
        CreateXlibSurfaceKHR                                                = 382,
        DebugMarkerSetObjectNameEXT                                         = 383,
        DebugMarkerSetObjectTagEXT                                          = 384,
        DebugReportMessageEXT                                               = 385,
        DeferredOperationJoinKHR                                            = 386,
        DestroyAccelerationStructureKHR                                     = 387,
        DestroyAccelerationStructureNV                                      = 388,
        DestroyBuffer                                                       = 389,
        DestroyBufferCollectionFUCHSIA                                      = 390,
        DestroyBufferView                                                   = 391,
        DestroyCommandPool                                                  = 392,
        DestroyCuFunctionNVX                                                = 393,
        DestroyCuModuleNVX                                                  = 394,
        DestroyCudaFunctionNV                                               = 395,
        DestroyCudaModuleNV                                                 = 396,
        DestroyDataGraphPipelineSessionARM                                  = 397,
        DestroyDebugReportCallbackEXT                                       = 398,
        DestroyDebugUtilsMessengerEXT                                       = 399,
        DestroyDeferredOperationKHR                                         = 400,
        DestroyDescriptorPool                                               = 401,
        DestroyDescriptorSetLayout                                          = 402,
        DestroyDescriptorUpdateTemplate                                     = 403,
        DestroyDevice                                                       = 404,
        DestroyEvent                                                        = 405,
        DestroyExternalComputeQueueNV                                       = 406,
        DestroyFence                                                        = 407,
        DestroyFramebuffer                                                  = 408,
        DestroyGpaSessionAMD                                                = 409,
        DestroyImage                                                        = 410,
        DestroyImageView                                                    = 411,
        DestroyIndirectCommandsLayoutEXT                                    = 412,
        DestroyIndirectCommandsLayoutNV                                     = 413,
        DestroyIndirectExecutionSetEXT                                      = 414,
        DestroyInstance                                                     = 415,
        DestroyMicromapEXT                                                  = 416,
        DestroyOpticalFlowSessionNV                                         = 417,
        DestroyPipeline                                                     = 418,
        DestroyPipelineBinaryKHR                                            = 419,
        DestroyPipelineCache                                                = 420,
        DestroyPipelineLayout                                               = 421,
        DestroyPrivateDataSlot                                              = 422,
        DestroyQueryPool                                                    = 423,
        DestroyRenderPass                                                   = 424,
        DestroySampler                                                      = 425,
        DestroySamplerYcbcrConversion                                       = 426,
        DestroySemaphore                                                    = 427,
        DestroySemaphoreSciSyncPoolNV                                       = 428,
        DestroyShaderEXT                                                    = 429,
        DestroyShaderInstrumentationARM                                     = 430,
        DestroyShaderModule                                                 = 431,
        DestroySurfaceKHR                                                   = 432,
        DestroySwapchainKHR                                                 = 433,
        DestroyTensorARM                                                    = 434,
        DestroyTensorViewARM                                                = 435,
        DestroyValidationCacheEXT                                           = 436,
        DestroyVideoSessionKHR                                              = 437,
        DestroyVideoSessionParametersKHR                                    = 438,
        DeviceWaitIdle                                                      = 439,
        DisplayPowerControlEXT                                              = 440,
        EndCommandBuffer                                                    = 441,
        EnumerateDeviceExtensionProperties                                  = 442,
        EnumerateDeviceLayerProperties                                      = 443,
        EnumerateInstanceExtensionProperties                                = 444,
        EnumerateInstanceLayerProperties                                    = 445,
        EnumerateInstanceVersion                                            = 446,
        EnumeratePhysicalDeviceGroups                                       = 447,
        EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM    = 448,
        EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR       = 449,
        EnumeratePhysicalDeviceShaderInstrumentationMetricsARM              = 450,
        EnumeratePhysicalDevices                                            = 451,
        ExportMetalObjectsEXT                                               = 452,
        FlushMappedMemoryRanges                                             = 453,
        FreeCommandBuffers                                                  = 454,
        FreeDescriptorSets                                                  = 455,
        FreeMemory                                                          = 456,
        GetAccelerationStructureBuildSizesKHR                               = 457,
        GetAccelerationStructureDeviceAddressKHR                            = 458,
        GetAccelerationStructureHandleNV                                    = 459,
        GetAccelerationStructureMemoryRequirementsNV                        = 460,
        GetAccelerationStructureOpaqueCaptureDescriptorDataEXT              = 461,
        GetAndroidHardwareBufferPropertiesANDROID                           = 462,
        GetBufferCollectionPropertiesFUCHSIA                                = 463,
        GetBufferDeviceAddress                                              = 464,
        GetBufferMemoryRequirements                                         = 465,
        GetBufferMemoryRequirements2                                        = 466,
        GetBufferOpaqueCaptureAddress                                       = 467,
        GetBufferOpaqueCaptureDescriptorDataEXT                             = 468,
        GetCalibratedTimestampsKHR                                          = 469,
        GetClusterAccelerationStructureBuildSizesNV                         = 470,
        GetCommandPoolMemoryConsumption                                     = 471,
        GetCudaModuleCacheNV                                                = 472,
        GetDataGraphPipelineAvailablePropertiesARM                          = 473,
        GetDataGraphPipelinePropertiesARM                                   = 474,
        GetDataGraphPipelineSessionBindPointRequirementsARM                 = 475,
        GetDataGraphPipelineSessionMemoryRequirementsARM                    = 476,
        GetDeferredOperationMaxConcurrencyKHR                               = 477,
        GetDeferredOperationResultKHR                                       = 478,
        GetDescriptorEXT                                                    = 479,
        GetDescriptorSetHostMappingVALVE                                    = 480,
        GetDescriptorSetLayoutBindingOffsetEXT                              = 481,
        GetDescriptorSetLayoutHostMappingInfoVALVE                          = 482,
        GetDescriptorSetLayoutSizeEXT                                       = 483,
        GetDescriptorSetLayoutSupport                                       = 484,
        GetDeviceAccelerationStructureCompatibilityKHR                      = 485,
        GetDeviceBufferMemoryRequirements                                   = 486,
        GetDeviceCombinedImageSamplerIndexNVX                               = 487,
        GetDeviceFaultDebugInfoKHR                                          = 488,
        GetDeviceFaultInfoEXT                                               = 489,
        GetDeviceFaultReportsKHR                                            = 490,
        GetDeviceGroupPeerMemoryFeatures                                    = 491,
        GetDeviceGroupPresentCapabilitiesKHR                                = 492,
        GetDeviceGroupSurfacePresentModes2EXT                               = 493,
        GetDeviceGroupSurfacePresentModesKHR                                = 494,
        GetDeviceImageMemoryRequirements                                    = 495,
        GetDeviceImageSparseMemoryRequirements                              = 496,
        GetDeviceImageSubresourceLayout                                     = 497,
        GetDeviceMemoryCommitment                                           = 498,
        GetDeviceMemoryOpaqueCaptureAddress                                 = 499,
        GetDeviceMicromapCompatibilityEXT                                   = 500,
        GetDeviceProcAddr                                                   = 501,
        GetDeviceQueue                                                      = 502,
        GetDeviceQueue2                                                     = 503,
        GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI                       = 504,
        GetDeviceTensorMemoryRequirementsARM                                = 505,
        GetDisplayModeProperties2KHR                                        = 506,
        GetDisplayModePropertiesKHR                                         = 507,
        GetDisplayPlaneCapabilities2KHR                                     = 508,
        GetDisplayPlaneCapabilitiesKHR                                      = 509,
        GetDisplayPlaneSupportedDisplaysKHR                                 = 510,
        GetDrmDisplayEXT                                                    = 511,
        GetDynamicRenderingTilePropertiesQCOM                               = 512,
        GetEncodedVideoSessionParametersKHR                                 = 513,
        GetEventStatus                                                      = 514,
        GetExecutionGraphPipelineNodeIndexAMDX                              = 515,
        GetExecutionGraphPipelineScratchSizeAMDX                            = 516,
        GetExternalComputeQueueDataNV                                       = 517,
        GetFaultData                                                        = 518,
        GetFenceFdKHR                                                       = 519,
        GetFenceSciSyncFenceNV                                              = 520,
        GetFenceSciSyncObjNV                                                = 521,
        GetFenceStatus                                                      = 522,
        GetFenceWin32HandleKHR                                              = 523,
        GetFramebufferTilePropertiesQCOM                                    = 524,
        GetGeneratedCommandsMemoryRequirementsEXT                           = 525,
        GetGeneratedCommandsMemoryRequirementsNV                            = 526,
        GetGpaDeviceClockInfoAMD                                            = 527,
        GetGpaSessionResultsAMD                                             = 528,
        GetGpaSessionStatusAMD                                              = 529,
        GetImageDrmFormatModifierPropertiesEXT                              = 530,
        GetImageMemoryRequirements                                          = 531,
        GetImageMemoryRequirements2                                         = 532,
        GetImageOpaqueCaptureDataEXT                                        = 533,
        GetImageOpaqueCaptureDescriptorDataEXT                              = 534,
        GetImageSparseMemoryRequirements                                    = 535,
        GetImageSparseMemoryRequirements2                                   = 536,
        GetImageSubresourceLayout                                           = 537,
        GetImageSubresourceLayout2                                          = 538,
        GetImageViewAddressNVX                                              = 539,
        GetImageViewHandle64NVX                                             = 540,
        GetImageViewHandleNVX                                               = 541,
        GetImageViewOpaqueCaptureDescriptorDataEXT                          = 542,
        GetInstanceProcAddr                                                 = 543,
        GetLatencyTimingsLegacyNV                                           = 544,
        GetLatencyTimingsNV                                                 = 545,
        GetMemoryAndroidHardwareBufferANDROID                               = 546,
        GetMemoryFdKHR                                                      = 547,
        GetMemoryFdPropertiesKHR                                            = 548,
        GetMemoryHostPointerPropertiesEXT                                   = 549,
        GetMemoryMetalHandleEXT                                             = 550,
        GetMemoryMetalHandlePropertiesEXT                                   = 551,
        GetMemoryNativeBufferOHOS                                           = 552,
        GetMemoryRemoteAddressNV                                            = 553,
        GetMemorySciBufNV                                                   = 554,
        GetMemoryWin32HandleKHR                                             = 555,
        GetMemoryWin32HandleNV                                              = 556,
        GetMemoryWin32HandlePropertiesKHR                                   = 557,
        GetMemoryZirconHandleFUCHSIA                                        = 558,
        GetMemoryZirconHandlePropertiesFUCHSIA                              = 559,
        GetMicromapBuildSizesEXT                                            = 560,
        GetNativeBufferPropertiesOHOS                                       = 561,
        GetPartitionedAccelerationStructuresBuildSizesNV                    = 562,
        GetPastPresentationTimingEXT                                        = 563,
        GetPastPresentationTimingGOOGLE                                     = 564,
        GetPerformanceParameterINTEL                                        = 565,
        GetPhysicalDeviceCalibrateableTimeDomainsKHR                        = 566,
        GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV    = 567,
        GetPhysicalDeviceCooperativeMatrixProperties2EXT                    = 568,
        GetPhysicalDeviceCooperativeMatrixPropertiesKHR                     = 569,
        GetPhysicalDeviceCooperativeMatrixPropertiesNV                      = 570,
        GetPhysicalDeviceCooperativeVectorPropertiesNV                      = 571,
        GetPhysicalDeviceDescriptorSizeEXT                                  = 572,
        GetPhysicalDeviceDirectFBPresentationSupportEXT                     = 573,
        GetPhysicalDeviceDisplayPlaneProperties2KHR                         = 574,
        GetPhysicalDeviceDisplayPlanePropertiesKHR                          = 575,
        GetPhysicalDeviceDisplayProperties2KHR                              = 576,
        GetPhysicalDeviceDisplayPropertiesKHR                               = 577,
        GetPhysicalDeviceExternalBufferProperties                           = 578,
        GetPhysicalDeviceExternalFenceProperties                            = 579,
        GetPhysicalDeviceExternalImageFormatPropertiesNV                    = 580,
        GetPhysicalDeviceExternalMemorySciBufPropertiesNV                   = 581,
        GetPhysicalDeviceExternalSemaphoreProperties                        = 582,
        GetPhysicalDeviceExternalTensorPropertiesARM                        = 583,
        GetPhysicalDeviceFeatures                                           = 584,
        GetPhysicalDeviceFeatures2                                          = 585,
        GetPhysicalDeviceFormatProperties                                   = 586,
        GetPhysicalDeviceFormatProperties2                                  = 587,
        GetPhysicalDeviceFragmentShadingRatesKHR                            = 588,
        GetPhysicalDeviceImageFormatProperties                              = 589,
        GetPhysicalDeviceImageFormatProperties2                             = 590,
        GetPhysicalDeviceMemoryProperties                                   = 591,
        GetPhysicalDeviceMemoryProperties2                                  = 592,
        GetPhysicalDeviceMultisamplePropertiesEXT                           = 593,
        GetPhysicalDeviceOpticalFlowImageFormatsNV                          = 594,
        GetPhysicalDevicePresentRectanglesKHR                               = 595,
        GetPhysicalDeviceProperties                                         = 596,
        GetPhysicalDeviceProperties2                                        = 597,
        GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM   = 598,
        GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM     = 599,
        GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM  = 600,
        GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM                  = 601,
        GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR               = 602,
        GetPhysicalDeviceQueueFamilyProperties                              = 603,
        GetPhysicalDeviceQueueFamilyProperties2                             = 604,
        GetPhysicalDeviceRefreshableObjectTypesKHR                          = 605,
        GetPhysicalDeviceSciBufAttributesNV                                 = 606,
        GetPhysicalDeviceSciSyncAttributesNV                                = 607,
        GetPhysicalDeviceScreenPresentationSupportQNX                       = 608,
        GetPhysicalDeviceSparseImageFormatProperties                        = 609,
        GetPhysicalDeviceSparseImageFormatProperties2                       = 610,
        GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV     = 611,
        GetPhysicalDeviceSurfaceCapabilities2EXT                            = 612,
        GetPhysicalDeviceSurfaceCapabilities2KHR                            = 613,
        GetPhysicalDeviceSurfaceCapabilitiesKHR                             = 614,
        GetPhysicalDeviceSurfaceFormats2KHR                                 = 615,
        GetPhysicalDeviceSurfaceFormatsKHR                                  = 616,
        GetPhysicalDeviceSurfacePresentModes2EXT                            = 617,
        GetPhysicalDeviceSurfacePresentModesKHR                             = 618,
        GetPhysicalDeviceSurfaceSupportKHR                                  = 619,
        GetPhysicalDeviceToolProperties                                     = 620,
        GetPhysicalDeviceUbmPresentationSupportSEC                          = 621,
        GetPhysicalDeviceVideoCapabilitiesKHR                               = 622,
        GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR               = 623,
        GetPhysicalDeviceVideoFormatPropertiesKHR                           = 624,
        GetPhysicalDeviceWaylandPresentationSupportKHR                      = 625,
        GetPhysicalDeviceWin32PresentationSupportKHR                        = 626,
        GetPhysicalDeviceXcbPresentationSupportKHR                          = 627,
        GetPhysicalDeviceXlibPresentationSupportKHR                         = 628,
        GetPipelineBinaryDataKHR                                            = 629,
        GetPipelineCacheData                                                = 630,
        GetPipelineExecutableInternalRepresentationsKHR                     = 631,
        GetPipelineExecutablePropertiesKHR                                  = 632,
        GetPipelineExecutableStatisticsKHR                                  = 633,
        GetPipelineIndirectDeviceAddressNV                                  = 634,
        GetPipelineIndirectMemoryRequirementsNV                             = 635,
        GetPipelineKeyKHR                                                   = 636,
        GetPipelinePropertiesEXT                                            = 637,
        GetPrivateData                                                      = 638,
        GetQueryPoolResults                                                 = 639,
        GetQueueCheckpointData2NV                                           = 640,
        GetQueueCheckpointDataNV                                            = 641,
        GetRandROutputDisplayEXT                                            = 642,
        GetRayTracingCaptureReplayShaderGroupHandlesKHR                     = 643,
        GetRayTracingShaderGroupHandlesKHR                                  = 644,
        GetRayTracingShaderGroupStackSizeKHR                                = 645,
        GetRefreshCycleDurationGOOGLE                                       = 646,
        GetRenderAreaGranularity                                            = 647,
        GetRenderingAreaGranularity                                         = 648,
        GetSamplerOpaqueCaptureDescriptorDataEXT                            = 649,
        GetScreenBufferPropertiesQNX                                        = 650,
        GetSemaphoreCounterValue                                            = 651,
        GetSemaphoreFdKHR                                                   = 652,
        GetSemaphoreSciSyncObjNV                                            = 653,
        GetSemaphoreWin32HandleKHR                                          = 654,
        GetSemaphoreZirconHandleFUCHSIA                                     = 655,
        GetShaderBinaryDataEXT                                              = 656,
        GetShaderInfoAMD                                                    = 657,
        GetShaderInstrumentationValuesARM                                   = 658,
        GetShaderModuleCreateInfoIdentifierEXT                              = 659,
        GetShaderModuleIdentifierEXT                                        = 660,
        GetSleepStatusLegacyNV                                              = 661,
        GetSwapchainCounterEXT                                              = 662,
        GetSwapchainGrallocUsage2ANDROID                                    = 663,
        GetSwapchainGrallocUsageANDROID                                     = 664,
        GetSwapchainGrallocUsageOHOS                                        = 665,
        GetSwapchainImagesKHR                                               = 666,
        GetSwapchainStatusKHR                                               = 667,
        GetSwapchainTimeDomainPropertiesEXT                                 = 668,
        GetSwapchainTimingPropertiesEXT                                     = 669,
        GetTensorMemoryRequirementsARM                                      = 670,
        GetTensorOpaqueCaptureDataARM                                       = 671,
        GetTensorOpaqueCaptureDescriptorDataARM                             = 672,
        GetTensorViewOpaqueCaptureDescriptorDataARM                         = 673,
        GetValidationCacheDataEXT                                           = 674,
        GetVideoSessionMemoryRequirementsKHR                                = 675,
        GetWinrtDisplayNV                                                   = 676,
        ImportFenceFdKHR                                                    = 677,
        ImportFenceSciSyncFenceNV                                           = 678,
        ImportFenceSciSyncObjNV                                             = 679,
        ImportFenceWin32HandleKHR                                           = 680,
        ImportSemaphoreFdKHR                                                = 681,
        ImportSemaphoreSciSyncObjNV                                         = 682,
        ImportSemaphoreWin32HandleKHR                                       = 683,
        ImportSemaphoreZirconHandleFUCHSIA                                  = 684,
        InitializePerformanceApiINTEL                                       = 685,
        InvalidateMappedMemoryRanges                                        = 686,
        LatencySleepLegacyNV                                                = 687,
        LatencySleepNV                                                      = 688,
        MapMemory                                                           = 689,
        MapMemory2                                                          = 690,
        MergePipelineCaches                                                 = 691,
        MergeValidationCachesEXT                                            = 692,
        QueueBeginDebugUtilsLabelEXT                                        = 693,
        QueueBindSparse                                                     = 694,
        QueueEndDebugUtilsLabelEXT                                          = 695,
        QueueInsertDebugUtilsLabelEXT                                       = 696,
        QueueNotifyOutOfBandLegacyNV                                        = 697,
        QueueNotifyOutOfBandNV                                              = 698,
        QueuePresentKHR                                                     = 699,
        QueueSetPerfHintQCOM                                                = 700,
        QueueSetPerformanceConfigurationINTEL                               = 701,
        QueueSignalReleaseImageANDROID                                      = 702,
        QueueSignalReleaseImageOHOS                                         = 703,
        QueueSubmit                                                         = 704,
        QueueSubmit2                                                        = 705,
        QueueWaitIdle                                                       = 706,
        RegisterCustomBorderColorEXT                                        = 707,
        RegisterDeviceEventEXT                                              = 708,
        RegisterDisplayEventEXT                                             = 709,
        ReleaseCapturedPipelineDataKHR                                      = 710,
        ReleaseDisplayEXT                                                   = 711,
        ReleaseFullScreenExclusiveModeEXT                                   = 712,
        ReleasePerformanceConfigurationINTEL                                = 713,
        ReleaseProfilingLockKHR                                             = 714,
        ReleaseSwapchainImagesKHR                                           = 715,
        ResetCommandBuffer                                                  = 716,
        ResetCommandPool                                                    = 717,
        ResetDescriptorPool                                                 = 718,
        ResetEvent                                                          = 719,
        ResetFences                                                         = 720,
        ResetGpaSessionAMD                                                  = 721,
        ResetQueryPool                                                      = 722,
        SetBufferCollectionBufferConstraintsFUCHSIA                         = 723,
        SetBufferCollectionImageConstraintsFUCHSIA                          = 724,
        SetDebugUtilsObjectNameEXT                                          = 725,
        SetDebugUtilsObjectTagEXT                                           = 726,
        SetDeviceMemoryPriorityEXT                                          = 727,
        SetEvent                                                            = 728,
        SetGpaDeviceClockModeAMD                                            = 729,
        SetHdrMetadataEXT                                                   = 730,
        SetLatencyMarkerLegacyNV                                            = 731,
        SetLatencyMarkerNV                                                  = 732,
        SetLatencySleepModeLegacyNV                                         = 733,
        SetLatencySleepModeNV                                               = 734,
        SetLocalDimmingAMD                                                  = 735,
        SetPrivateData                                                      = 736,
        SetSwapchainPresentTimingQueueSizeEXT                               = 737,
        ShutdownLatencyDeviceLegacyNV                                       = 738,
        SignalSemaphore                                                     = 739,
        SubmitDebugUtilsMessageEXT                                          = 740,
        TransitionImageLayout                                               = 741,
        TrimCommandPool                                                     = 742,
        UninitializePerformanceApiINTEL                                     = 743,
        UnmapMemory                                                         = 744,
        UnmapMemory2                                                        = 745,
        UnregisterCustomBorderColorEXT                                      = 746,
        UpdateDescriptorSetWithTemplate                                     = 747,
        UpdateDescriptorSets                                                = 748,
        UpdateIndirectExecutionSetPipelineEXT                               = 749,
        UpdateIndirectExecutionSetShaderEXT                                 = 750,
        UpdateVideoSessionParametersKHR                                     = 751,
        WaitForFences                                                       = 752,
        WaitForPresent2KHR                                                  = 753,
        WaitForPresentKHR                                                   = 754,
        WaitSemaphores                                                      = 755,
        WriteAccelerationStructuresPropertiesKHR                            = 756,
        WriteMicromapsPropertiesEXT                                         = 757,
        WriteResourceDescriptorsEXT                                         = 758,
        WriteSamplerDescriptorsEXT                                          = 759,
    };

    enum class AccelerationStructureBuildTypeKHR : std::uint32_t
    {
        HostKHR                                                             = 0,
        DeviceKHR                                                           = 1,
        HostOrDeviceKHR                                                     = 2,
    };

    enum class AccelerationStructureCompatibilityKHR : std::uint32_t
    {
        CompatibleKHR                                                       = 0,
        IncompatibleKHR                                                     = 1,
    };

    enum class AccelerationStructureCreateFlagBitsKHR : std::uint32_t
    {
        DeviceAddressCaptureReplayBitKHR                                    = 1,
        DescriptorBufferCaptureReplayBitEXT                                 = 8,
        MotionBitNV                                                         = 4,
    };

    enum class AccelerationStructureMemoryRequirementsTypeNV : std::uint32_t
    {
        ObjectNV                                                            = 0,
        BuildScratchNV                                                      = 1,
        UpdateScratchNV                                                     = 2,
    };

    enum class AccelerationStructureMotionInstanceTypeNV : std::uint32_t
    {
        StaticNV                                                            = 0,
        MatrixMotionNV                                                      = 1,
        SrtMotionNV                                                         = 2,
    };

    enum class AccelerationStructureSerializedBlockTypeKHR : std::uint32_t
    {
        OpacityMicromapKHR                                                  = 0,
    };

    enum class AccelerationStructureTypeKHR : std::uint32_t
    {
        TopLevelKHR                                                         = 0,
        BottomLevelKHR                                                      = 1,
        GenericKHR                                                          = 2,
        OpacityMicromapKHR                                                  = 1000623000,
    };

    enum class AccessFlagBits : std::uint32_t
    {
        IndirectCommandReadBit                                              = 1,
        IndexReadBit                                                        = 2,
        VertexAttributeReadBit                                              = 4,
        UniformReadBit                                                      = 8,
        InputAttachmentReadBit                                              = 16,
        ShaderReadBit                                                       = 32,
        ShaderWriteBit                                                      = 64,
        ColorAttachmentReadBit                                              = 128,
        ColorAttachmentWriteBit                                             = 256,
        DepthStencilAttachmentReadBit                                       = 512,
        DepthStencilAttachmentWriteBit                                      = 1024,
        TransferReadBit                                                     = 2048,
        TransferWriteBit                                                    = 4096,
        HostReadBit                                                         = 8192,
        HostWriteBit                                                        = 16384,
        MemoryReadBit                                                       = 32768,
        MemoryWriteBit                                                      = 65536,
        TransformFeedbackWriteBitEXT                                        = 33554432,
        TransformFeedbackCounterReadBitEXT                                  = 67108864,
        TransformFeedbackCounterWriteBitEXT                                 = 134217728,
        ConditionalRenderingReadBitEXT                                      = 1048576,
        ColorAttachmentReadNoncoherentBitEXT                                = 524288,
        AccelerationStructureReadBitKHR                                     = 2097152,
        AccelerationStructureWriteBitKHR                                    = 4194304,
        FragmentDensityMapReadBitEXT                                        = 16777216,
        FragmentShadingRateAttachmentReadBitKHR                             = 8388608,
        CommandPreprocessReadBitEXT                                         = 131072,
        CommandPreprocessWriteBitEXT                                        = 262144,
        None                                                                = 0,
    };

    enum class AccessFlagBits2 : std::uint64_t
    {
        None                                                                = 0ULL,
        IndirectCommandReadBit                                              = 1ULL,
        IndexReadBit                                                        = 2ULL,
        VertexAttributeReadBit                                              = 4ULL,
        UniformReadBit                                                      = 8ULL,
        InputAttachmentReadBit                                              = 16ULL,
        ShaderReadBit                                                       = 32ULL,
        ShaderWriteBit                                                      = 64ULL,
        ColorAttachmentReadBit                                              = 128ULL,
        ColorAttachmentWriteBit                                             = 256ULL,
        DepthStencilAttachmentReadBit                                       = 512ULL,
        DepthStencilAttachmentWriteBit                                      = 1024ULL,
        TransferReadBit                                                     = 2048ULL,
        TransferWriteBit                                                    = 4096ULL,
        HostReadBit                                                         = 8192ULL,
        HostWriteBit                                                        = 16384ULL,
        MemoryReadBit                                                       = 32768ULL,
        MemoryWriteBit                                                      = 65536ULL,
        ShaderSampledReadBit                                                = 4294967296ULL,
        ShaderStorageReadBit                                                = 8589934592ULL,
        ShaderStorageWriteBit                                               = 17179869184ULL,
        VideoDecodeReadBitKHR                                               = 34359738368ULL,
        VideoDecodeWriteBitKHR                                              = 68719476736ULL,
        SamplerHeapReadBitEXT                                               = 144115188075855872ULL,
        ResourceHeapReadBitEXT                                              = 288230376151711744ULL,
        Reserved46BitINTEL                                                  = 70368744177664ULL,
        VideoEncodeReadBitKHR                                               = 137438953472ULL,
        VideoEncodeWriteBitKHR                                              = 274877906944ULL,
        Reserved53BitKHR                                                    = 9007199254740992ULL,
        Reserved54BitKHR                                                    = 18014398509481984ULL,
        ShaderTileAttachmentReadBitQCOM                                     = 2251799813685248ULL,
        ShaderTileAttachmentWriteBitQCOM                                    = 4503599627370496ULL,
        TransformFeedbackWriteBitEXT                                        = 33554432ULL,
        TransformFeedbackCounterReadBitEXT                                  = 67108864ULL,
        TransformFeedbackCounterWriteBitEXT                                 = 134217728ULL,
        ConditionalRenderingReadBitEXT                                      = 1048576ULL,
        CommandPreprocessReadBitEXT                                         = 131072ULL,
        CommandPreprocessWriteBitEXT                                        = 262144ULL,
        FragmentShadingRateAttachmentReadBitKHR                             = 8388608ULL,
        AccelerationStructureReadBitKHR                                     = 2097152ULL,
        AccelerationStructureWriteBitKHR                                    = 4194304ULL,
        FragmentDensityMapReadBitEXT                                        = 16777216ULL,
        ColorAttachmentReadNoncoherentBitEXT                                = 524288ULL,
        DescriptorBufferReadBitEXT                                          = 2199023255552ULL,
        InvocationMaskReadBitHUAWEI                                         = 549755813888ULL,
        ShaderBindingTableReadBitKHR                                        = 1099511627776ULL,
        MicromapReadBitEXT                                                  = 17592186044416ULL,
        MicromapWriteBitEXT                                                 = 35184372088832ULL,
        OpticalFlowReadBitNV                                                = 4398046511104ULL,
        OpticalFlowWriteBitNV                                               = 8796093022208ULL,
        DataGraphReadBitARM                                                 = 140737488355328ULL,
        DataGraphWriteBitARM                                                = 281474976710656ULL,
        MemoryDecompressionReadBitEXT                                       = 36028797018963968ULL,
        MemoryDecompressionWriteBitEXT                                      = 72057594037927936ULL,
        Reserved62BitEXT                                                    = 4611686018427387904ULL,
        Reserved63BitEXT                                                    = 9223372036854775808ULL,
        Reserved60BitKHR                                                    = 1152921504606846976ULL,
        Reserved61BitKHR                                                    = 2305843009213693952ULL,
        Reserved28BitAMD                                                    = 268435456ULL,
        Reserved29BitAMD                                                    = 536870912ULL,
        Reserved49BitARM                                                    = 562949953421312ULL,
        Reserved50BitARM                                                    = 1125899906842624ULL,
    };

    enum class AccessFlagBits3KHR : std::uint32_t
    {
        Access3NoneKHR                                                      = 0,
    };

    enum class AddressCommandFlagBitsKHR : std::uint32_t
    {
        ProtectedBitKHR                                                     = 1,
        FullyBoundBitKHR                                                    = 2,
        StorageBufferUsageBitKHR                                            = 4,
        UnknownStorageBufferUsageBitKHR                                     = 8,
        Reserved6BitIMG                                                     = 64,
        TransformFeedbackBufferUsageBitKHR                                  = 16,
        UnknownTransformFeedbackBufferUsageBitKHR                           = 32,
    };

    enum class AddressCopyFlagBitsKHR : std::uint32_t
    {
        DeviceLocalBitKHR                                                   = 1,
        SparseBitKHR                                                        = 2,
        ProtectedBitKHR                                                     = 4,
    };

    enum class AntiLagModeAMD : std::uint32_t
    {
        DriverControlAMD                                                    = 0,
        OnAMD                                                               = 1,
        OffAMD                                                              = 2,
    };

    enum class AntiLagStageAMD : std::uint32_t
    {
        InputAMD                                                            = 0,
        PresentAMD                                                          = 1,
    };

    enum class AttachmentDescriptionFlagBits : std::uint32_t
    {
        MayAliasBit                                                         = 1,
        ResolveSkipTransferFunctionBitKHR                                   = 2,
        ResolveEnableTransferFunctionBitKHR                                 = 4,
    };

    enum class AttachmentLoadOp : std::uint32_t
    {
        Load                                                                = 0,
        Clear                                                               = 1,
        DontCare                                                            = 2,
        None                                                                = 1000400000,
    };

    enum class AttachmentStoreOp : std::uint32_t
    {
        Store                                                               = 0,
        DontCare                                                            = 1,
        None                                                                = 1000301000,
    };

    enum class BlendFactor : std::uint32_t
    {
        Zero                                                                = 0,
        One                                                                 = 1,
        SrcColor                                                            = 2,
        OneMinusSrcColor                                                    = 3,
        DstColor                                                            = 4,
        OneMinusDstColor                                                    = 5,
        SrcAlpha                                                            = 6,
        OneMinusSrcAlpha                                                    = 7,
        DstAlpha                                                            = 8,
        OneMinusDstAlpha                                                    = 9,
        ConstantColor                                                       = 10,
        OneMinusConstantColor                                               = 11,
        ConstantAlpha                                                       = 12,
        OneMinusConstantAlpha                                               = 13,
        SrcAlphaSaturate                                                    = 14,
        Src1Color                                                           = 15,
        OneMinusSrc1Color                                                   = 16,
        Src1Alpha                                                           = 17,
        OneMinusSrc1Alpha                                                   = 18,
    };

    enum class BlendOp : std::uint32_t
    {
        Add                                                                 = 0,
        Subtract                                                            = 1,
        ReverseSubtract                                                     = 2,
        Min                                                                 = 3,
        Max                                                                 = 4,
        ZeroEXT                                                             = 1000148000,
        SrcEXT                                                              = 1000148001,
        DstEXT                                                              = 1000148002,
        SrcOverEXT                                                          = 1000148003,
        DstOverEXT                                                          = 1000148004,
        SrcInEXT                                                            = 1000148005,
        DstInEXT                                                            = 1000148006,
        SrcOutEXT                                                           = 1000148007,
        DstOutEXT                                                           = 1000148008,
        SrcAtopEXT                                                          = 1000148009,
        DstAtopEXT                                                          = 1000148010,
        XorEXT                                                              = 1000148011,
        MultiplyEXT                                                         = 1000148012,
        ScreenEXT                                                           = 1000148013,
        OverlayEXT                                                          = 1000148014,
        DarkenEXT                                                           = 1000148015,
        LightenEXT                                                          = 1000148016,
        ColordodgeEXT                                                       = 1000148017,
        ColorburnEXT                                                        = 1000148018,
        HardlightEXT                                                        = 1000148019,
        SoftlightEXT                                                        = 1000148020,
        DifferenceEXT                                                       = 1000148021,
        ExclusionEXT                                                        = 1000148022,
        InvertEXT                                                           = 1000148023,
        InvertRgbEXT                                                        = 1000148024,
        LineardodgeEXT                                                      = 1000148025,
        LinearburnEXT                                                       = 1000148026,
        VividlightEXT                                                       = 1000148027,
        LinearlightEXT                                                      = 1000148028,
        PinlightEXT                                                         = 1000148029,
        HardmixEXT                                                          = 1000148030,
        HslHueEXT                                                           = 1000148031,
        HslSaturationEXT                                                    = 1000148032,
        HslColorEXT                                                         = 1000148033,
        HslLuminosityEXT                                                    = 1000148034,
        PlusEXT                                                             = 1000148035,
        PlusClampedEXT                                                      = 1000148036,
        PlusClampedAlphaEXT                                                 = 1000148037,
        PlusDarkerEXT                                                       = 1000148038,
        MinusEXT                                                            = 1000148039,
        MinusClampedEXT                                                     = 1000148040,
        ContrastEXT                                                         = 1000148041,
        InvertOvgEXT                                                        = 1000148042,
        RedEXT                                                              = 1000148043,
        GreenEXT                                                            = 1000148044,
        BlueEXT                                                             = 1000148045,
    };

    enum class BlendOverlapEXT : std::uint32_t
    {
        UncorrelatedEXT                                                     = 0,
        DisjointEXT                                                         = 1,
        ConjointEXT                                                         = 2,
    };

    enum class BlockMatchWindowCompareModeQCOM : std::uint32_t
    {
        MinQCOM                                                             = 0,
        MaxQCOM                                                             = 1,
    };

    enum class BorderColor : std::uint32_t
    {
        FloatTransparentBlack                                               = 0,
        IntTransparentBlack                                                 = 1,
        FloatOpaqueBlack                                                    = 2,
        IntOpaqueBlack                                                      = 3,
        FloatOpaqueWhite                                                    = 4,
        IntOpaqueWhite                                                      = 5,
        FloatCustomEXT                                                      = 1000287003,
        IntCustomEXT                                                        = 1000287004,
    };

    enum class BufferCreateFlagBits : std::uint32_t
    {
        SparseBindingBit                                                    = 1,
        SparseResidencyBit                                                  = 2,
        SparseAliasedBit                                                    = 4,
        Reserved7BitIMG                                                     = 128,
        DescriptorBufferCaptureReplayBitEXT                                 = 32,
        VideoProfileIndependentBitKHR                                       = 64,
        ProtectedBit                                                        = 8,
        DeviceAddressCaptureReplayBit                                       = 16,
    };

    enum class BufferUsageFlagBits : std::uint32_t
    {
        TransferSrcBit                                                      = 1,
        TransferDstBit                                                      = 2,
        UniformTexelBufferBit                                               = 4,
        StorageTexelBufferBit                                               = 8,
        UniformBufferBit                                                    = 16,
        StorageBufferBit                                                    = 32,
        IndexBufferBit                                                      = 64,
        VertexBufferBit                                                     = 128,
        IndirectBufferBit                                                   = 256,
        VideoDecodeSrcBitKHR                                                = 8192,
        VideoDecodeDstBitKHR                                                = 16384,
        TransformFeedbackBufferBitEXT                                       = 2048,
        TransformFeedbackCounterBufferBitEXT                                = 4096,
        ConditionalRenderingBitEXT                                          = 512,
        ExecutionGraphScratchBitAmdx                                        = 33554432,
        DescriptorHeapBitEXT                                                = 268435456,
        AccelerationStructureBuildInputReadOnlyBitKHR                       = 524288,
        AccelerationStructureStorageBitKHR                                  = 1048576,
        ShaderBindingTableBitKHR                                            = 1024,
        VideoEncodeDstBitKHR                                                = 32768,
        VideoEncodeSrcBitKHR                                                = 65536,
        SamplerDescriptorBufferBitEXT                                       = 2097152,
        ResourceDescriptorBufferBitEXT                                      = 4194304,
        PushDescriptorsDescriptorBufferBitEXT                               = 67108864,
        MicromapBuildInputReadOnlyBitEXT                                    = 8388608,
        MicromapStorageBitEXT                                               = 16777216,
        TileMemoryBitQCOM                                                   = 134217728,
        ShaderDeviceAddressBit                                              = 131072,
    };

    enum class BufferUsageFlagBits2 : std::uint64_t
    {
        TransferSrcBit                                                      = 1,
        TransferDstBit                                                      = 2,
        UniformTexelBufferBit                                               = 4,
        StorageTexelBufferBit                                               = 8,
        UniformBufferBit                                                    = 16,
        StorageBufferBit                                                    = 32,
        IndexBufferBit                                                      = 64,
        VertexBufferBit                                                     = 128,
        IndirectBufferBit                                                   = 256,
        ExecutionGraphScratchBitAmdx                                        = 33554432,
        DescriptorHeapBitEXT                                                = 268435456,
        MicromapBuildInputReadOnlyBitEXT                                    = 8388608,
        MicromapStorageBitEXT                                               = 16777216,
        ConditionalRenderingBitEXT                                          = 512,
        ShaderBindingTableBitKHR                                            = 1024,
        TransformFeedbackBufferBitEXT                                       = 2048,
        TransformFeedbackCounterBufferBitEXT                                = 4096,
        VideoDecodeSrcBitKHR                                                = 8192,
        VideoDecodeDstBitKHR                                                = 16384,
        VideoEncodeDstBitKHR                                                = 32768,
        VideoEncodeSrcBitKHR                                                = 65536,
        AccelerationStructureBuildInputReadOnlyBitKHR                       = 524288,
        AccelerationStructureStorageBitKHR                                  = 1048576,
        SamplerDescriptorBufferBitEXT                                       = 2097152,
        ResourceDescriptorBufferBitEXT                                      = 4194304,
        PushDescriptorsDescriptorBufferBitEXT                               = 67108864,
        CompressedDataDgf1BitAmdx                                           = 8589934592,
        DataGraphForeignDescriptorBitARM                                    = 536870912,
        Reserved34BitEXT                                                    = 17179869184,
        TileMemoryBitQCOM                                                   = 134217728,
        MemoryDecompressionBitEXT                                           = 4294967296,
        PreprocessBufferBitEXT                                              = 2147483648,
        Reserved18BitEXT                                                    = 262144,
        Reserved30BitEXT                                                    = 1073741824,
        Reserved35BitKHR                                                    = 34359738368,
        Reserved36BitKHR                                                    = 68719476736,
        Reserved37BitHUAWEI                                                 = 137438953472,
        ShaderDeviceAddressBit                                              = 131072,
    };

    enum class BuildAccelerationStructureFlagBitsKHR : std::uint32_t
    {
        AllowUpdateBitKHR                                                   = 1,
        AllowCompactionBitKHR                                               = 2,
        PreferFastTraceBitKHR                                               = 4,
        PreferFastBuildBitKHR                                               = 8,
        LowMemoryBitKHR                                                     = 16,
        MotionBitNV                                                         = 32,
        AllowOpacityMicromapDataUpdateBitEXT                                = 256,
        AllowDisplacementMicromapUpdateBitNV                                = 512,
        AllowDataAccessBitKHR                                               = 2048,
        AllowClusterOpacityMicromapsBitNV                                   = 4096,
        AllowOpacityMicromapUpdateBitKHR                                    = 64,
        AllowDisableOpacityMicromapsBitKHR                                  = 128,
        MicromapLossyBitKHR                                                 = 1024,
        Reserved15BitEXT                                                    = 32768,
        Reserved14BitEXT                                                    = 16384,
        Reserved13BitAMD                                                    = 8192,
    };

    enum class BuildAccelerationStructureModeKHR : std::uint32_t
    {
        BuildKHR                                                            = 0,
        UpdateKHR                                                           = 1,
    };

    enum class BuildMicromapFlagBitsEXT : std::uint32_t
    {
        PreferFastTraceBitEXT                                               = 1,
        PreferFastBuildBitEXT                                               = 2,
        AllowCompactionBitEXT                                               = 4,
    };

    enum class BuildMicromapModeEXT : std::uint32_t
    {
        BuildEXT                                                            = 0,
    };

    enum class ChromaLocation : std::uint32_t
    {
        CositedEven                                                         = 0,
        Midpoint                                                            = 1,
    };

    enum class ClusterAccelerationStructureAddressResolutionFlagBitsNV : std::uint32_t
    {
        NoneNV                                                              = 0,
        IndirectedDstImplicitDataBitNV                                      = 1,
        IndirectedScratchDataBitNV                                          = 2,
        IndirectedDstAddressArrayBitNV                                      = 4,
        IndirectedDstSizesArrayBitNV                                        = 8,
        IndirectedSrcInfosArrayBitNV                                        = 16,
        IndirectedSrcInfosCountBitNV                                        = 32,
    };

    enum class ClusterAccelerationStructureClusterFlagBitsNV : std::uint32_t
    {
        AllowDisableOpacityMicromapsNV                                      = 1,
    };

    enum class ClusterAccelerationStructureGeometryFlagBitsNV : std::uint32_t
    {
        CullDisableBitNV                                                    = 1,
        NoDuplicateAnyhitInvocationBitNV                                    = 2,
        OpaqueBitNV                                                         = 4,
    };

    enum class ClusterAccelerationStructureIndexFormatFlagBitsNV : std::uint32_t
    {
        X8BITNV                                                             = 1,
        X16BITNV                                                            = 2,
        X32BITNV                                                            = 4,
    };

    enum class ClusterAccelerationStructureOpModeNV : std::uint32_t
    {
        ImplicitDestinationsNV                                              = 0,
        ExplicitDestinationsNV                                              = 1,
        ComputeSizesNV                                                      = 2,
    };

    enum class ClusterAccelerationStructureOpTypeNV : std::uint32_t
    {
        MoveObjectsNV                                                       = 0,
        BuildClustersBottomLevelNV                                          = 1,
        BuildTriangleClusterNV                                              = 2,
        BuildTriangleClusterTemplateNV                                      = 3,
        InstantiateTriangleClusterNV                                        = 4,
        GetClusterTemplateIndicesNV                                         = 5,
    };

    enum class ClusterAccelerationStructureTypeNV : std::uint32_t
    {
        ClustersBottomLevelNV                                               = 0,
        TriangleClusterNV                                                   = 1,
        TriangleClusterTemplateNV                                           = 2,
    };

    enum class CoarseSampleOrderTypeNV : std::uint32_t
    {
        DefaultNV                                                           = 0,
        CustomNV                                                            = 1,
        PixelMajorNV                                                        = 2,
        SampleMajorNV                                                       = 3,
    };

    enum class ColorComponentFlagBits : std::uint32_t
    {
        RBit                                                                = 1,
        GBit                                                                = 2,
        BBit                                                                = 4,
        ABit                                                                = 8,
    };

    enum class ColorSpaceKHR : std::uint32_t
    {
        SrgbNonlinearKHR                                                    = 0,
        DisplayP3NonlinearEXT                                               = 1000104001,
        ExtendedSrgbLinearEXT                                               = 1000104002,
        DisplayP3LinearEXT                                                  = 1000104003,
        DciP3NonlinearEXT                                                   = 1000104004,
        Bt709LinearEXT                                                      = 1000104005,
        Bt709NonlinearEXT                                                   = 1000104006,
        Bt2020LinearEXT                                                     = 1000104007,
        Hdr10St2084EXT                                                      = 1000104008,
        DolbyvisionEXT                                                      = 1000104009,
        Hdr10HlgEXT                                                         = 1000104010,
        AdobergbLinearEXT                                                   = 1000104011,
        AdobergbNonlinearEXT                                                = 1000104012,
        PassThroughEXT                                                      = 1000104013,
        ExtendedSrgbNonlinearEXT                                            = 1000104014,
        DisplayNativeAMD                                                    = 1000213000,
    };

    enum class CommandBufferLevel : std::uint32_t
    {
        Primary                                                             = 0,
        Secondary                                                           = 1,
    };

    enum class CommandBufferResetFlagBits : std::uint32_t
    {
        ReleaseResourcesBit                                                 = 1,
    };

    enum class CommandBufferUsageFlagBits : std::uint32_t
    {
        OneTimeSubmitBit                                                    = 1,
        RenderPassContinueBit                                               = 2,
        SimultaneousUseBit                                                  = 4,
        Reserved3BitHUAWEI                                                  = 8,
        Reserved4BitHUAWEI                                                  = 16,
    };

    enum class CommandPoolCreateFlagBits : std::uint32_t
    {
        TransientBit                                                        = 1,
        ResetCommandBufferBit                                               = 2,
        ProtectedBit                                                        = 4,
    };

    enum class CommandPoolResetFlagBits : std::uint32_t
    {
        ReleaseResourcesBit                                                 = 1,
        Reserved1BitCoreavi                                                 = 2,
    };

    enum class CompareOp : std::uint32_t
    {
        Never                                                               = 0,
        Less                                                                = 1,
        Equal                                                               = 2,
        LessOrEqual                                                         = 3,
        Greater                                                             = 4,
        NotEqual                                                            = 5,
        GreaterOrEqual                                                      = 6,
        Always                                                              = 7,
    };

    enum class ComponentSwizzle : std::uint32_t
    {
        Identity                                                            = 0,
        Zero                                                                = 1,
        One                                                                 = 2,
        R                                                                   = 3,
        G                                                                   = 4,
        B                                                                   = 5,
        A                                                                   = 6,
    };

    enum class ComponentTypeKHR : std::uint32_t
    {
        Float16KHR                                                          = 0,
        Float32KHR                                                          = 1,
        Float64KHR                                                          = 2,
        Sint8KHR                                                            = 3,
        Sint16KHR                                                           = 4,
        Sint32KHR                                                           = 5,
        Sint64KHR                                                           = 6,
        Uint8KHR                                                            = 7,
        Uint16KHR                                                           = 8,
        Uint32KHR                                                           = 9,
        Uint64KHR                                                           = 10,
        Bfloat16KHR                                                         = 1000141000,
        Sint8PackedNV                                                       = 1000491000,
        Uint8PackedNV                                                       = 1000491001,
        Float8E4m3EXT                                                       = 1000491002,
        Float8E5m2EXT                                                       = 1000491003,
        Float6E2m3EXT                                                       = 1000672000,
        Float6E3m2EXT                                                       = 1000672001,
        Float4E2m1EXT                                                       = 1000672002,
        Float8UnsignedE8m0EXT                                               = 1000672003,
        Mxint8EXT                                                           = 1000672004,
    };

    enum class CompositeAlphaFlagBitsKHR : std::uint32_t
    {
        OpaqueBitKHR                                                        = 1,
        PreMultipliedBitKHR                                                 = 2,
        PostMultipliedBitKHR                                                = 4,
        InheritBitKHR                                                       = 8,
    };

    enum class CompressedTriangleFormatAMDX : std::uint32_t
    {
        CompressedTriangleFormatDgf1Amdx                                    = 0,
    };

    enum class ConditionalRenderingFlagBitsEXT : std::uint32_t
    {
        InvertedBitEXT                                                      = 1,
    };

    enum class ConservativeRasterizationModeEXT : std::uint32_t
    {
        DisabledEXT                                                         = 0,
        OverestimateEXT                                                     = 1,
        UnderestimateEXT                                                    = 2,
    };

    enum class CooperativeMatrixFlagBitsEXT : std::uint32_t
    {
        SaturatingAccumulationBitEXT                                        = 1,
    };

    enum class CooperativeVectorMatrixLayoutNV : std::uint32_t
    {
        RowMajorNV                                                          = 0,
        ColumnMajorNV                                                       = 1,
        InferencingOptimalNV                                                = 2,
        TrainingOptimalNV                                                   = 3,
    };

    enum class CopyAccelerationStructureModeKHR : std::uint32_t
    {
        CloneKHR                                                            = 0,
        CompactKHR                                                          = 1,
        SerializeKHR                                                        = 2,
        DeserializeKHR                                                      = 3,
    };

    enum class CopyMicromapModeEXT : std::uint32_t
    {
        CloneEXT                                                            = 0,
        SerializeEXT                                                        = 1,
        DeserializeEXT                                                      = 2,
        CompactEXT                                                          = 3,
    };

    enum class CoverageModulationModeNV : std::uint32_t
    {
        NoneNV                                                              = 0,
        RgbNV                                                               = 1,
        AlphaNV                                                             = 2,
        RgbaNV                                                              = 3,
    };

    enum class CoverageReductionModeNV : std::uint32_t
    {
        MergeNV                                                             = 0,
        TruncateNV                                                          = 1,
    };

    enum class CubicFilterWeightsQCOM : std::uint32_t
    {
        CatmullRomQCOM                                                      = 0,
        ZeroTangentCardinalQCOM                                             = 1,
        BSplineQCOM                                                         = 2,
        MitchellNetravaliQCOM                                               = 3,
    };

    enum class CullModeFlagBits : std::uint32_t
    {
        None                                                                = 0,
        FrontBit                                                            = 1,
        BackBit                                                             = 2,
        FrontAndBack                                                        = 3,
    };

    enum class DataGraphModelCacheTypeQCOM : std::uint32_t
    {
        GenericBinaryQCOM                                                   = 0,
    };

    enum class DataGraphOpticalFlowCreateFlagBitsARM : std::uint32_t
    {
        EnableHintBitARM                                                    = 1,
        EnableCostBitARM                                                    = 2,
        Reserved30BitARM                                                    = 1073741824,
    };

    enum class DataGraphOpticalFlowExecuteFlagBitsARM : std::uint32_t
    {
        DisableTemporalHintsBitARM                                          = 1,
        InputUnchangedBitARM                                                = 2,
        ReferenceUnchangedBitARM                                            = 4,
        InputIsPreviousReferenceBitARM                                      = 8,
        ReferenceIsPreviousInputBitARM                                      = 16,
    };

    enum class DataGraphOpticalFlowGridSizeFlagBitsARM : std::uint32_t
    {
        UnknownARM                                                          = 0,
        X1X1BitARM                                                          = 1,
        X2X2BitARM                                                          = 2,
        X4X4BitARM                                                          = 4,
        X8X8BitARM                                                          = 8,
    };

    enum class DataGraphOpticalFlowImageUsageFlagBitsARM : std::uint32_t
    {
        UnknownARM                                                          = 0,
        InputBitARM                                                         = 1,
        OutputBitARM                                                        = 2,
        HintBitARM                                                          = 4,
        CostBitARM                                                          = 8,
    };

    enum class DataGraphOpticalFlowPerformanceLevelARM : std::uint32_t
    {
        UnknownARM                                                          = 0,
        SlowARM                                                             = 1,
        MediumARM                                                           = 2,
        FastARM                                                             = 3,
    };

    enum class DataGraphPipelineNodeConnectionTypeARM : std::uint32_t
    {
        InputARM                                                            = 1000631000,
        ReferenceARM                                                        = 1000631001,
        HintARM                                                             = 1000631002,
        FlowVectorARM                                                       = 1000631003,
        CostARM                                                             = 1000631004,
    };

    enum class DataGraphPipelineNodeTypeARM : std::uint32_t
    {
        OpticalFlowARM                                                      = 1000631000,
    };

    enum class DataGraphPipelinePropertyARM : std::uint32_t
    {
        CreationLogARM                                                      = 0,
        IdentifierARM                                                       = 1,
        NeuralAcceleratorDebugDatabaseARM                                   = 1000676000,
        NeuralAcceleratorStatisticsInfoARM                                  = 1000676001,
    };

    enum class DataGraphPipelineSessionBindPointARM : std::uint32_t
    {
        TransientARM                                                        = 0,
        OpticalFlowCacheARM                                                 = 1000631001,
        NeuralAcceleratorStatisticsARM                                      = 1000676000,
    };

    enum class DataGraphPipelineSessionBindPointTypeARM : std::uint32_t
    {
        MemoryARM                                                           = 0,
    };

    enum class DataGraphPipelineSessionCreateFlagBitsARM : std::uint32_t
    {
        ProtectedBitARM                                                     = 1,
        OpticalFlowCacheBitARM                                              = 2,
    };

    enum class DataGraphTOSALevelARM : std::uint32_t
    {
        NoneARM                                                             = 0,
        X8KARM                                                              = 1,
    };

    enum class DataGraphTOSAQualityFlagBitsARM : std::uint32_t
    {
        AcceleratedARM                                                      = 1,
        ConformantARM                                                       = 2,
        ExperimentalARM                                                     = 4,
        DeprecatedARM                                                       = 8,
    };

    enum class DebugReportFlagBitsEXT : std::uint32_t
    {
        InformationBitEXT                                                   = 1,
        WarningBitEXT                                                       = 2,
        PerformanceWarningBitEXT                                            = 4,
        ErrorBitEXT                                                         = 8,
        DebugBitEXT                                                         = 16,
    };

    enum class DebugReportObjectTypeEXT : std::uint32_t
    {
        UnknownEXT                                                          = 0,
        InstanceEXT                                                         = 1,
        PhysicalDeviceEXT                                                   = 2,
        DeviceEXT                                                           = 3,
        QueueEXT                                                            = 4,
        SemaphoreEXT                                                        = 5,
        CommandBufferEXT                                                    = 6,
        FenceEXT                                                            = 7,
        DeviceMemoryEXT                                                     = 8,
        BufferEXT                                                           = 9,
        ImageEXT                                                            = 10,
        EventEXT                                                            = 11,
        QueryPoolEXT                                                        = 12,
        BufferViewEXT                                                       = 13,
        ImageViewEXT                                                        = 14,
        ShaderModuleEXT                                                     = 15,
        PipelineCacheEXT                                                    = 16,
        PipelineLayoutEXT                                                   = 17,
        RenderPassEXT                                                       = 18,
        PipelineEXT                                                         = 19,
        DescriptorSetLayoutEXT                                              = 20,
        SamplerEXT                                                          = 21,
        DescriptorPoolEXT                                                   = 22,
        DescriptorSetEXT                                                    = 23,
        FramebufferEXT                                                      = 24,
        CommandPoolEXT                                                      = 25,
        SurfaceKHREXT                                                       = 26,
        SwapchainKHREXT                                                     = 27,
        DebugReportCallbackEXTEXT                                           = 28,
        DisplayKHREXT                                                       = 29,
        DisplayModeKHREXT                                                   = 30,
        ValidationCacheEXTEXT                                               = 33,
        SamplerYcbcrConversionEXT                                           = 1000156000,
        DescriptorUpdateTemplateEXT                                         = 1000085000,
        CuModuleNVXEXT                                                      = 1000029000,
        CuFunctionNVXEXT                                                    = 1000029001,
        AccelerationStructureKHREXT                                         = 1000150000,
        AccelerationStructureNVEXT                                          = 1000165000,
        CudaModuleNVEXT                                                     = 1000307000,
        CudaFunctionNVEXT                                                   = 1000307001,
        BufferCollectionFUCHSIAEXT                                          = 1000366000,
    };

    enum class DebugUtilsMessageSeverityFlagBitsEXT : std::uint32_t
    {
        VerboseBitEXT                                                       = 1,
        InfoBitEXT                                                          = 16,
        WarningBitEXT                                                       = 256,
        ErrorBitEXT                                                         = 4096,
    };

    enum class DebugUtilsMessageTypeFlagBitsEXT : std::uint32_t
    {
        GeneralBitEXT                                                       = 1,
        ValidationBitEXT                                                    = 2,
        PerformanceBitEXT                                                   = 4,
        DeviceAddressBindingBitEXT                                          = 8,
    };

    enum class DefaultVertexAttributeValueKHR : std::uint32_t
    {
        ZeroKHR                                                             = 0,
        OneKHR                                                              = 1,
    };

    enum class DependencyFlagBits : std::uint32_t
    {
        ByRegionBit                                                         = 1,
        FeedbackLoopBitEXT                                                  = 8,
        QueueFamilyOwnershipTransferUseAllStagesBitKHR                      = 32,
        AsymmetricEventBitKHR                                               = 64,
        Extension586BitIMG                                                  = 16,
        DeviceGroupBit                                                      = 4,
        ViewLocalBit                                                        = 2,
    };

    enum class DepthBiasRepresentationEXT : std::uint32_t
    {
        LeastRepresentableValueFormatEXT                                    = 0,
        LeastRepresentableValueForceUnormEXT                                = 1,
        FloatEXT                                                            = 2,
    };

    enum class DepthClampModeEXT : std::uint32_t
    {
        ViewportRangeEXT                                                    = 0,
        UserDefinedRangeEXT                                                 = 1,
    };

    enum class DescriptorBindingFlagBits : std::uint32_t
    {
        UpdateAfterBindBit                                                  = 1,
        UpdateUnusedWhilePendingBit                                         = 2,
        PartiallyBoundBit                                                   = 4,
        VariableDescriptorCountBit                                          = 8,
        Reserved4BitQCOM                                                    = 16,
    };

    enum class DescriptorMappingSourceEXT : std::uint32_t
    {
        HeapWithConstantOffsetEXT                                           = 0,
        HeapWithPushIndexEXT                                                = 1,
        HeapWithIndirectIndexEXT                                            = 2,
        HeapWithIndirectIndexArrayEXT                                       = 3,
        ResourceHeapDataEXT                                                 = 4,
        PushDataEXT                                                         = 5,
        PushAddressEXT                                                      = 6,
        IndirectAddressEXT                                                  = 7,
        HeapWithShaderRecordIndexEXT                                        = 8,
        ShaderRecordDataEXT                                                 = 9,
        ShaderRecordAddressEXT                                              = 10,
    };

    enum class DescriptorPoolCreateFlagBits : std::uint32_t
    {
        FreeDescriptorSetBit                                                = 1,
        HostOnlyBitEXT                                                      = 4,
        AllowOverallocationSetsBitNV                                        = 8,
        AllowOverallocationPoolsBitNV                                       = 16,
        UpdateAfterBindBit                                                  = 2,
    };

    enum class DescriptorSetLayoutCreateFlagBits : std::uint32_t
    {
        DescriptorBufferBitEXT                                              = 16,
        EmbeddedImmutableSamplersBitEXT                                     = 32,
        IndirectBindableBitNV                                               = 128,
        HostOnlyPoolBitEXT                                                  = 4,
        PerStageBitNV                                                       = 64,
        UpdateAfterBindPoolBit                                              = 2,
        PushDescriptorBit                                                   = 1,
    };

    enum class DescriptorType : std::uint32_t
    {
        Sampler                                                             = 0,
        CombinedImageSampler                                                = 1,
        SampledImage                                                        = 2,
        StorageImage                                                        = 3,
        UniformTexelBuffer                                                  = 4,
        StorageTexelBuffer                                                  = 5,
        UniformBuffer                                                       = 6,
        StorageBuffer                                                       = 7,
        UniformBufferDynamic                                                = 8,
        StorageBufferDynamic                                                = 9,
        InputAttachment                                                     = 10,
        AccelerationStructureKHR                                            = 1000150000,
        AccelerationStructureNV                                             = 1000165000,
        SampleWeightImageQCOM                                               = 1000440000,
        BlockMatchImageQCOM                                                 = 1000440001,
        TensorARM                                                           = 1000460000,
        MutableEXT                                                          = 1000351000,
        PartitionedAccelerationStructureNV                                  = 1000570000,
        InlineUniformBlock                                                  = 1000138000,
    };

    enum class DescriptorUpdateTemplateType : std::uint32_t
    {
        DescriptorSet                                                       = 0,
        PushDescriptors                                                     = 1,
    };

    enum class DeviceAddressBindingFlagBitsEXT : std::uint32_t
    {
        InternalObjectBitEXT                                                = 1,
    };

    enum class DeviceAddressBindingTypeEXT : std::uint32_t
    {
        BindEXT                                                             = 0,
        UnbindEXT                                                           = 1,
    };

    enum class DeviceDiagnosticsConfigFlagBitsNV : std::uint32_t
    {
        ShaderDebugInfoBitNV                                                = 1,
        ResourceTrackingBitNV                                               = 2,
        AutomaticCheckpointsBitNV                                           = 4,
        ShaderErrorReportingBitNV                                           = 8,
    };

    enum class DeviceEventTypeEXT : std::uint32_t
    {
        DisplayHotplugEXT                                                   = 0,
    };

    enum class DeviceFaultAddressTypeKHR : std::uint32_t
    {
        NoneKHR                                                             = 0,
        ReadInvalidKHR                                                      = 1,
        WriteInvalidKHR                                                     = 2,
        ExecuteInvalidKHR                                                   = 3,
        InstructionPointerUnknownKHR                                        = 4,
        InstructionPointerInvalidKHR                                        = 5,
        InstructionPointerFaultKHR                                          = 6,
    };

    enum class DeviceFaultFlagBitsKHR : std::uint32_t
    {
        DeviceLostKHR                                                       = 1,
        MemoryAddressKHR                                                    = 2,
        InstructionAddressKHR                                               = 4,
        VendorKHR                                                           = 8,
        WatchdogTimeoutKHR                                                  = 16,
        OverflowKHR                                                         = 32,
    };

    enum class DeviceFaultVendorBinaryHeaderVersionKHR : std::uint32_t
    {
        OneKHR                                                              = 1,
    };

    enum class DeviceGroupPresentModeFlagBitsKHR : std::uint32_t
    {
        LocalBitKHR                                                         = 1,
        RemoteBitKHR                                                        = 2,
        SumBitKHR                                                           = 4,
        LocalMultiDeviceBitKHR                                              = 8,
    };

    enum class DeviceMemoryReportEventTypeEXT : std::uint32_t
    {
        AllocateEXT                                                         = 0,
        FreeEXT                                                             = 1,
        ImportEXT                                                           = 2,
        UnimportEXT                                                         = 3,
        AllocationFailedEXT                                                 = 4,
    };

    enum class DeviceQueueCreateFlagBits : std::uint32_t
    {
        Reserved1BitQCOM                                                    = 2,
        InternallySynchronizedBitKHR                                        = 4,
        ProtectedBit                                                        = 1,
    };

    enum class DirectDriverLoadingModeLUNARG : std::uint32_t
    {
        ExclusiveLunarg                                                     = 0,
        InclusiveLunarg                                                     = 1,
    };

    enum class DiscardRectangleModeEXT : std::uint32_t
    {
        InclusiveEXT                                                        = 0,
        ExclusiveEXT                                                        = 1,
    };

    enum class DisplacementMicromapFormatNV : std::uint32_t
    {
        X64Triangles64BytesNV                                               = 1,
        X256Triangles128BytesNV                                             = 2,
        X1024Triangles128BytesNV                                            = 3,
    };

    enum class DisplayEventTypeEXT : std::uint32_t
    {
        FirstPixelOutEXT                                                    = 0,
    };

    enum class DisplayPlaneAlphaFlagBitsKHR : std::uint32_t
    {
        OpaqueBitKHR                                                        = 1,
        GlobalBitKHR                                                        = 2,
        PerPixelBitKHR                                                      = 4,
        PerPixelPremultipliedBitKHR                                         = 8,
    };

    enum class DisplayPowerStateEXT : std::uint32_t
    {
        OffEXT                                                              = 0,
        SuspendEXT                                                          = 1,
        OnEXT                                                               = 2,
    };

    enum class DisplaySurfaceStereoTypeNV : std::uint32_t
    {
        NoneNV                                                              = 0,
        OnboardDinNV                                                        = 1,
        HdmiX3DNV                                                           = 2,
        InbandDisplayportNV                                                 = 3,
    };

    enum class DriverId : std::uint32_t
    {
        AMDProprietary                                                      = 1,
        AMDOpenSource                                                       = 2,
        MESARadv                                                            = 3,
        NvidiaProprietary                                                   = 4,
        INTELProprietaryWindows                                             = 5,
        INTELOpenSourceMESA                                                 = 6,
        ImaginationProprietary                                              = 7,
        QualcommProprietary                                                 = 8,
        ARMProprietary                                                      = 9,
        GOOGLESwiftshader                                                   = 10,
        GgpProprietary                                                      = 11,
        BroadcomProprietary                                                 = 12,
        MESALlvmpipe                                                        = 13,
        Moltenvk                                                            = 14,
        CoreaviProprietary                                                  = 15,
        JuiceProprietary                                                    = 16,
        VerisiliconProprietary                                              = 17,
        MESATurnip                                                          = 18,
        MESAV3dv                                                            = 19,
        MESAPanvk                                                           = 20,
        SamsungProprietary                                                  = 21,
        MESAVenus                                                           = 22,
        MESADozen                                                           = 23,
        MESANvk                                                             = 24,
        ImaginationOpenSourceMESA                                           = 25,
        MESAHoneykrisp                                                      = 26,
        VulkanScEmulationOnVulkan                                           = 27,
        MESAKosmickrisp                                                     = 28,
        MESAGfxstream                                                       = 29,
        ApeSoft                                                             = 30,
        Reserved31                                                          = 31,
        Apex                                                                = 32,
        Nikki                                                               = 33,
        Momoten                                                             = 34,
    };

    enum class DynamicState : std::uint32_t
    {
        Viewport                                                            = 0,
        Scissor                                                             = 1,
        LineWidth                                                           = 2,
        DepthBias                                                           = 3,
        BlendConstants                                                      = 4,
        DepthBounds                                                         = 5,
        StencilCompareMask                                                  = 6,
        StencilWriteMask                                                    = 7,
        StencilReference                                                    = 8,
        ViewportWScalingNV                                                  = 1000087000,
        DiscardRectangleEXT                                                 = 1000099000,
        DiscardRectangleEnableEXT                                           = 1000099001,
        DiscardRectangleModeEXT                                             = 1000099002,
        SampleLocationsEXT                                                  = 1000143000,
        RayTracingPipelineStackSizeKHR                                      = 1000347000,
        ViewportShadingRatePaletteNV                                        = 1000164004,
        ViewportCoarseSampleOrderNV                                         = 1000164006,
        ExclusiveScissorEnableNV                                            = 1000205000,
        ExclusiveScissorNV                                                  = 1000205001,
        FragmentShadingRateKHR                                              = 1000226000,
        VertexInputEXT                                                      = 1000352000,
        PatchControlPointsEXT                                               = 1000377000,
        LogicOpEXT                                                          = 1000377003,
        ColorWriteEnableEXT                                                 = 1000381000,
        DepthClampEnableEXT                                                 = 1000455003,
        PolygonModeEXT                                                      = 1000455004,
        RasterizationSamplesEXT                                             = 1000455005,
        SampleMaskEXT                                                       = 1000455006,
        AlphaToCoverageEnableEXT                                            = 1000455007,
        AlphaToOneEnableEXT                                                 = 1000455008,
        LogicOpEnableEXT                                                    = 1000455009,
        ColorBlendEnableEXT                                                 = 1000455010,
        ColorBlendEquationEXT                                               = 1000455011,
        ColorWriteMaskEXT                                                   = 1000455012,
        TessellationDomainOriginEXT                                         = 1000455002,
        RasterizationStreamEXT                                              = 1000455013,
        ConservativeRasterizationModeEXT                                    = 1000455014,
        ExtraPrimitiveOverestimationSizeEXT                                 = 1000455015,
        DepthClipEnableEXT                                                  = 1000455016,
        SampleLocationsEnableEXT                                            = 1000455017,
        ColorBlendAdvancedEXT                                               = 1000455018,
        ProvokingVertexModeEXT                                              = 1000455019,
        LineRasterizationModeEXT                                            = 1000455020,
        LineStippleEnableEXT                                                = 1000455021,
        DepthClipNegativeOneToOneEXT                                        = 1000455022,
        ViewportWScalingEnableNV                                            = 1000455023,
        ViewportSwizzleNV                                                   = 1000455024,
        CoverageToColorEnableNV                                             = 1000455025,
        CoverageToColorLocationNV                                           = 1000455026,
        CoverageModulationModeNV                                            = 1000455027,
        CoverageModulationTableEnableNV                                     = 1000455028,
        CoverageModulationTableNV                                           = 1000455029,
        ShadingRateImageEnableNV                                            = 1000455030,
        RepresentativeFragmentTestEnableNV                                  = 1000455031,
        CoverageReductionModeNV                                             = 1000455032,
        AttachmentFeedbackLoopEnableEXT                                     = 1000524000,
        DepthClampRangeEXT                                                  = 1000582000,
        CullMode                                                            = 1000267000,
        FrontFace                                                           = 1000267001,
        PrimitiveTopology                                                   = 1000267002,
        ViewportWithCount                                                   = 1000267003,
        ScissorWithCount                                                    = 1000267004,
        VertexInputBindingStride                                            = 1000267005,
        DepthTestEnable                                                     = 1000267006,
        DepthWriteEnable                                                    = 1000267007,
        DepthCompareOp                                                      = 1000267008,
        DepthBoundsTestEnable                                               = 1000267009,
        StencilTestEnable                                                   = 1000267010,
        StencilOp                                                           = 1000267011,
        RasterizerDiscardEnable                                             = 1000377001,
        DepthBiasEnable                                                     = 1000377002,
        PrimitiveRestartEnable                                              = 1000377004,
        LineStipple                                                         = 1000259000,
    };

    enum class EventCreateFlagBits : std::uint32_t
    {
        DeviceOnlyBit                                                       = 1,
    };

    enum class ExportMetalObjectTypeFlagBitsEXT : std::uint32_t
    {
        DeviceBitEXT                                                        = 1,
        CommandQueueBitEXT                                                  = 2,
        BufferBitEXT                                                        = 4,
        TextureBitEXT                                                       = 8,
        IosurfaceBitEXT                                                     = 16,
        SharedEventBitEXT                                                   = 32,
    };

    enum class ExternalFenceFeatureFlagBits : std::uint32_t
    {
        ExportableBit                                                       = 1,
        ImportableBit                                                       = 2,
    };

    enum class ExternalFenceHandleTypeFlagBits : std::uint32_t
    {
        OpaqueFdBit                                                         = 1,
        OpaqueWin32Bit                                                      = 2,
        OpaqueWin32KmtBit                                                   = 4,
        SyncFdBit                                                           = 8,
        SciSyncObjBitNV                                                     = 16,
        SciSyncFenceBitNV                                                   = 32,
    };

    enum class ExternalMemoryFeatureFlagBits : std::uint32_t
    {
        DedicatedOnlyBit                                                    = 1,
        ExportableBit                                                       = 2,
        ImportableBit                                                       = 4,
    };

    enum class ExternalMemoryFeatureFlagBitsNV : std::uint32_t
    {
        DedicatedOnlyBitNV                                                  = 1,
        ExportableBitNV                                                     = 2,
        ImportableBitNV                                                     = 4,
    };

    enum class ExternalMemoryHandleTypeFlagBits : std::uint32_t
    {
        OpaqueFdBit                                                         = 1,
        OpaqueWin32Bit                                                      = 2,
        OpaqueWin32KmtBit                                                   = 4,
        D3d11TextureBit                                                     = 8,
        D3d11TextureKmtBit                                                  = 16,
        D3d12HeapBit                                                        = 32,
        D3d12ResourceBit                                                    = 64,
        DmaBufBitEXT                                                        = 512,
        ANDROIDHardwareBufferBitANDROID                                     = 1024,
        HostAllocationBitEXT                                                = 128,
        HostMappedForeignMemoryBitEXT                                       = 256,
        ZirconVmoBitFUCHSIA                                                 = 2048,
        RdmaAddressBitNV                                                    = 4096,
        SciBufBitNV                                                         = 8192,
        OhNativeBufferBitOHOS                                               = 32768,
        ScreenBufferBitQNX                                                  = 16384,
        MtlbufferBitEXT                                                     = 65536,
        MtltextureBitEXT                                                    = 131072,
        MtlheapBitEXT                                                       = 262144,
    };

    enum class ExternalMemoryHandleTypeFlagBitsNV : std::uint32_t
    {
        OpaqueWin32BitNV                                                    = 1,
        OpaqueWin32KmtBitNV                                                 = 2,
        D3d11ImageBitNV                                                     = 4,
        D3d11ImageKmtBitNV                                                  = 8,
    };

    enum class ExternalSemaphoreFeatureFlagBits : std::uint32_t
    {
        ExportableBit                                                       = 1,
        ImportableBit                                                       = 2,
    };

    enum class ExternalSemaphoreHandleTypeFlagBits : std::uint32_t
    {
        OpaqueFdBit                                                         = 1,
        OpaqueWin32Bit                                                      = 2,
        OpaqueWin32KmtBit                                                   = 4,
        D3d12FenceBit                                                       = 8,
        SyncFdBit                                                           = 16,
        ZirconEventBitFUCHSIA                                               = 128,
        SciSyncObjBitNV                                                     = 32,
    };

    enum class FaultLevel : std::uint32_t
    {
        Unassigned                                                          = 0,
        Critical                                                            = 1,
        Recoverable                                                         = 2,
        Warning                                                             = 3,
    };

    enum class FaultQueryBehavior : std::uint32_t
    {
        GetAndClearAllFaults                                                = 0,
    };

    enum class FaultType : std::uint32_t
    {
        Invalid                                                             = 0,
        Unassigned                                                          = 1,
        Implementation                                                      = 2,
        System                                                              = 3,
        PhysicalDevice                                                      = 4,
        CommandBufferFull                                                   = 5,
        InvalidApiUsage                                                     = 6,
    };

    enum class FenceCreateFlagBits : std::uint32_t
    {
        SignaledBit                                                         = 1,
    };

    enum class FenceImportFlagBits : std::uint32_t
    {
        TemporaryBit                                                        = 1,
    };

    enum class Filter : std::uint32_t
    {
        Nearest                                                             = 0,
        Linear                                                              = 1,
        CubicEXT                                                            = 1000015000,
    };

    enum class Format : std::uint32_t
    {
        Undefined                                                           = 0,
        R4g4UnormPack8                                                      = 1,
        R4g4b4a4UnormPack16                                                 = 2,
        B4g4r4a4UnormPack16                                                 = 3,
        R5g6b5UnormPack16                                                   = 4,
        B5g6r5UnormPack16                                                   = 5,
        R5g5b5a1UnormPack16                                                 = 6,
        B5g5r5a1UnormPack16                                                 = 7,
        A1r5g5b5UnormPack16                                                 = 8,
        R8Unorm                                                             = 9,
        R8Snorm                                                             = 10,
        R8Uscaled                                                           = 11,
        R8Sscaled                                                           = 12,
        R8Uint                                                              = 13,
        R8Sint                                                              = 14,
        R8Srgb                                                              = 15,
        R8g8Unorm                                                           = 16,
        R8g8Snorm                                                           = 17,
        R8g8Uscaled                                                         = 18,
        R8g8Sscaled                                                         = 19,
        R8g8Uint                                                            = 20,
        R8g8Sint                                                            = 21,
        R8g8Srgb                                                            = 22,
        R8g8b8Unorm                                                         = 23,
        R8g8b8Snorm                                                         = 24,
        R8g8b8Uscaled                                                       = 25,
        R8g8b8Sscaled                                                       = 26,
        R8g8b8Uint                                                          = 27,
        R8g8b8Sint                                                          = 28,
        R8g8b8Srgb                                                          = 29,
        B8g8r8Unorm                                                         = 30,
        B8g8r8Snorm                                                         = 31,
        B8g8r8Uscaled                                                       = 32,
        B8g8r8Sscaled                                                       = 33,
        B8g8r8Uint                                                          = 34,
        B8g8r8Sint                                                          = 35,
        B8g8r8Srgb                                                          = 36,
        R8g8b8a8Unorm                                                       = 37,
        R8g8b8a8Snorm                                                       = 38,
        R8g8b8a8Uscaled                                                     = 39,
        R8g8b8a8Sscaled                                                     = 40,
        R8g8b8a8Uint                                                        = 41,
        R8g8b8a8Sint                                                        = 42,
        R8g8b8a8Srgb                                                        = 43,
        B8g8r8a8Unorm                                                       = 44,
        B8g8r8a8Snorm                                                       = 45,
        B8g8r8a8Uscaled                                                     = 46,
        B8g8r8a8Sscaled                                                     = 47,
        B8g8r8a8Uint                                                        = 48,
        B8g8r8a8Sint                                                        = 49,
        B8g8r8a8Srgb                                                        = 50,
        A8b8g8r8UnormPack32                                                 = 51,
        A8b8g8r8SnormPack32                                                 = 52,
        A8b8g8r8UscaledPack32                                               = 53,
        A8b8g8r8SscaledPack32                                               = 54,
        A8b8g8r8UintPack32                                                  = 55,
        A8b8g8r8SintPack32                                                  = 56,
        A8b8g8r8SrgbPack32                                                  = 57,
        A2r10g10b10UnormPack32                                              = 58,
        A2r10g10b10SnormPack32                                              = 59,
        A2r10g10b10UscaledPack32                                            = 60,
        A2r10g10b10SscaledPack32                                            = 61,
        A2r10g10b10UintPack32                                               = 62,
        A2r10g10b10SintPack32                                               = 63,
        A2b10g10r10UnormPack32                                              = 64,
        A2b10g10r10SnormPack32                                              = 65,
        A2b10g10r10UscaledPack32                                            = 66,
        A2b10g10r10SscaledPack32                                            = 67,
        A2b10g10r10UintPack32                                               = 68,
        A2b10g10r10SintPack32                                               = 69,
        R16Unorm                                                            = 70,
        R16Snorm                                                            = 71,
        R16Uscaled                                                          = 72,
        R16Sscaled                                                          = 73,
        R16Uint                                                             = 74,
        R16Sint                                                             = 75,
        R16Sfloat                                                           = 76,
        R16g16Unorm                                                         = 77,
        R16g16Snorm                                                         = 78,
        R16g16Uscaled                                                       = 79,
        R16g16Sscaled                                                       = 80,
        R16g16Uint                                                          = 81,
        R16g16Sint                                                          = 82,
        R16g16Sfloat                                                        = 83,
        R16g16b16Unorm                                                      = 84,
        R16g16b16Snorm                                                      = 85,
        R16g16b16Uscaled                                                    = 86,
        R16g16b16Sscaled                                                    = 87,
        R16g16b16Uint                                                       = 88,
        R16g16b16Sint                                                       = 89,
        R16g16b16Sfloat                                                     = 90,
        R16g16b16a16Unorm                                                   = 91,
        R16g16b16a16Snorm                                                   = 92,
        R16g16b16a16Uscaled                                                 = 93,
        R16g16b16a16Sscaled                                                 = 94,
        R16g16b16a16Uint                                                    = 95,
        R16g16b16a16Sint                                                    = 96,
        R16g16b16a16Sfloat                                                  = 97,
        R32Uint                                                             = 98,
        R32Sint                                                             = 99,
        R32Sfloat                                                           = 100,
        R32g32Uint                                                          = 101,
        R32g32Sint                                                          = 102,
        R32g32Sfloat                                                        = 103,
        R32g32b32Uint                                                       = 104,
        R32g32b32Sint                                                       = 105,
        R32g32b32Sfloat                                                     = 106,
        R32g32b32a32Uint                                                    = 107,
        R32g32b32a32Sint                                                    = 108,
        R32g32b32a32Sfloat                                                  = 109,
        R64Uint                                                             = 110,
        R64Sint                                                             = 111,
        R64Sfloat                                                           = 112,
        R64g64Uint                                                          = 113,
        R64g64Sint                                                          = 114,
        R64g64Sfloat                                                        = 115,
        R64g64b64Uint                                                       = 116,
        R64g64b64Sint                                                       = 117,
        R64g64b64Sfloat                                                     = 118,
        R64g64b64a64Uint                                                    = 119,
        R64g64b64a64Sint                                                    = 120,
        R64g64b64a64Sfloat                                                  = 121,
        B10g11r11UfloatPack32                                               = 122,
        E5b9g9r9UfloatPack32                                                = 123,
        D16Unorm                                                            = 124,
        X8D24UnormPack32                                                    = 125,
        D32Sfloat                                                           = 126,
        S8Uint                                                              = 127,
        D16UnormS8Uint                                                      = 128,
        D24UnormS8Uint                                                      = 129,
        D32SfloatS8Uint                                                     = 130,
        Bc1RgbUnormBlock                                                    = 131,
        Bc1RgbSrgbBlock                                                     = 132,
        Bc1RgbaUnormBlock                                                   = 133,
        Bc1RgbaSrgbBlock                                                    = 134,
        Bc2UnormBlock                                                       = 135,
        Bc2SrgbBlock                                                        = 136,
        Bc3UnormBlock                                                       = 137,
        Bc3SrgbBlock                                                        = 138,
        Bc4UnormBlock                                                       = 139,
        Bc4SnormBlock                                                       = 140,
        Bc5UnormBlock                                                       = 141,
        Bc5SnormBlock                                                       = 142,
        Bc6hUfloatBlock                                                     = 143,
        Bc6hSfloatBlock                                                     = 144,
        Bc7UnormBlock                                                       = 145,
        Bc7SrgbBlock                                                        = 146,
        Etc2R8g8b8UnormBlock                                                = 147,
        Etc2R8g8b8SrgbBlock                                                 = 148,
        Etc2R8g8b8a1UnormBlock                                              = 149,
        Etc2R8g8b8a1SrgbBlock                                               = 150,
        Etc2R8g8b8a8UnormBlock                                              = 151,
        Etc2R8g8b8a8SrgbBlock                                               = 152,
        EacR11UnormBlock                                                    = 153,
        EacR11SnormBlock                                                    = 154,
        EacR11g11UnormBlock                                                 = 155,
        EacR11g11SnormBlock                                                 = 156,
        AstcX4X4UnormBlock                                                  = 157,
        AstcX4X4SrgbBlock                                                   = 158,
        AstcX5X4UnormBlock                                                  = 159,
        AstcX5X4SrgbBlock                                                   = 160,
        AstcX5X5UnormBlock                                                  = 161,
        AstcX5X5SrgbBlock                                                   = 162,
        AstcX6X5UnormBlock                                                  = 163,
        AstcX6X5SrgbBlock                                                   = 164,
        AstcX6X6UnormBlock                                                  = 165,
        AstcX6X6SrgbBlock                                                   = 166,
        AstcX8X5UnormBlock                                                  = 167,
        AstcX8X5SrgbBlock                                                   = 168,
        AstcX8X6UnormBlock                                                  = 169,
        AstcX8X6SrgbBlock                                                   = 170,
        AstcX8X8UnormBlock                                                  = 171,
        AstcX8X8SrgbBlock                                                   = 172,
        AstcX10X5UnormBlock                                                 = 173,
        AstcX10X5SrgbBlock                                                  = 174,
        AstcX10X6UnormBlock                                                 = 175,
        AstcX10X6SrgbBlock                                                  = 176,
        AstcX10X8UnormBlock                                                 = 177,
        AstcX10X8SrgbBlock                                                  = 178,
        AstcX10X10UnormBlock                                                = 179,
        AstcX10X10SrgbBlock                                                 = 180,
        AstcX12X10UnormBlock                                                = 181,
        AstcX12X10SrgbBlock                                                 = 182,
        AstcX12X12UnormBlock                                                = 183,
        AstcX12X12SrgbBlock                                                 = 184,
        Pvrtc1X2BPPUnormBlockIMG                                            = 1000054000,
        Pvrtc1X4BPPUnormBlockIMG                                            = 1000054001,
        Pvrtc2X2BPPUnormBlockIMG                                            = 1000054002,
        Pvrtc2X4BPPUnormBlockIMG                                            = 1000054003,
        Pvrtc1X2BPPSrgbBlockIMG                                             = 1000054004,
        Pvrtc1X4BPPSrgbBlockIMG                                             = 1000054005,
        Pvrtc2X2BPPSrgbBlockIMG                                             = 1000054006,
        Pvrtc2X4BPPSrgbBlockIMG                                             = 1000054007,
        AstcX3X3X3UnormBlockEXT                                             = 1000288000,
        AstcX3X3X3SrgbBlockEXT                                              = 1000288001,
        AstcX3X3X3SfloatBlockEXT                                            = 1000288002,
        AstcX4X3X3UnormBlockEXT                                             = 1000288003,
        AstcX4X3X3SrgbBlockEXT                                              = 1000288004,
        AstcX4X3X3SfloatBlockEXT                                            = 1000288005,
        AstcX4X4X3UnormBlockEXT                                             = 1000288006,
        AstcX4X4X3SrgbBlockEXT                                              = 1000288007,
        AstcX4X4X3SfloatBlockEXT                                            = 1000288008,
        AstcX4X4X4UnormBlockEXT                                             = 1000288009,
        AstcX4X4X4SrgbBlockEXT                                              = 1000288010,
        AstcX4X4X4SfloatBlockEXT                                            = 1000288011,
        AstcX5X4X4UnormBlockEXT                                             = 1000288012,
        AstcX5X4X4SrgbBlockEXT                                              = 1000288013,
        AstcX5X4X4SfloatBlockEXT                                            = 1000288014,
        AstcX5X5X4UnormBlockEXT                                             = 1000288015,
        AstcX5X5X4SrgbBlockEXT                                              = 1000288016,
        AstcX5X5X4SfloatBlockEXT                                            = 1000288017,
        AstcX5X5X5UnormBlockEXT                                             = 1000288018,
        AstcX5X5X5SrgbBlockEXT                                              = 1000288019,
        AstcX5X5X5SfloatBlockEXT                                            = 1000288020,
        AstcX6X5X5UnormBlockEXT                                             = 1000288021,
        AstcX6X5X5SrgbBlockEXT                                              = 1000288022,
        AstcX6X5X5SfloatBlockEXT                                            = 1000288023,
        AstcX6X6X5UnormBlockEXT                                             = 1000288024,
        AstcX6X6X5SrgbBlockEXT                                              = 1000288025,
        AstcX6X6X5SfloatBlockEXT                                            = 1000288026,
        AstcX6X6X6UnormBlockEXT                                             = 1000288027,
        AstcX6X6X6SrgbBlockEXT                                              = 1000288028,
        AstcX6X6X6SfloatBlockEXT                                            = 1000288029,
        R8BoolARM                                                           = 1000460000,
        R16SfloatFpencodingBfloat16ARM                                      = 1000460001,
        R8SfloatFpencodingFloat8e4m3ARM                                     = 1000460002,
        R8SfloatFpencodingFloat8e5m2ARM                                     = 1000460003,
        R16g16Sfixed5NV                                                     = 1000464000,
        R10x6UintPack16ARM                                                  = 1000609000,
        R10x6g10x6UintX2PACK16ARM                                           = 1000609001,
        R10x6g10x6b10x6a10x6UintX4PACK16ARM                                 = 1000609002,
        R12x4UintPack16ARM                                                  = 1000609003,
        R12x4g12x4UintX2PACK16ARM                                           = 1000609004,
        R12x4g12x4b12x4a12x4UintX4PACK16ARM                                 = 1000609005,
        R14x2UintPack16ARM                                                  = 1000609006,
        R14x2g14x2UintX2PACK16ARM                                           = 1000609007,
        R14x2g14x2b14x2a14x2UintX4PACK16ARM                                 = 1000609008,
        R14x2UnormPack16ARM                                                 = 1000609009,
        R14x2g14x2UnormX2PACK16ARM                                          = 1000609010,
        R14x2g14x2b14x2a14x2UnormX4PACK16ARM                                = 1000609011,
        G14x2B14x2r14x2X2PLANE420UnormX3PACK16ARM                           = 1000609012,
        G14x2B14x2r14x2X2PLANE422UnormX3PACK16ARM                           = 1000609013,
        G8b8g8r8422Unorm                                                    = 1000156000,
        B8g8r8g8422Unorm                                                    = 1000156001,
        G8B8R8X3PLANE420Unorm                                               = 1000156002,
        G8B8r8X2PLANE420Unorm                                               = 1000156003,
        G8B8R8X3PLANE422Unorm                                               = 1000156004,
        G8B8r8X2PLANE422Unorm                                               = 1000156005,
        G8B8R8X3PLANE444Unorm                                               = 1000156006,
        R10x6UnormPack16                                                    = 1000156007,
        R10x6g10x6UnormX2PACK16                                             = 1000156008,
        R10x6g10x6b10x6a10x6UnormX4PACK16                                   = 1000156009,
        G10x6b10x6g10x6r10x6422UnormX4PACK16                                = 1000156010,
        B10x6g10x6r10x6g10x6422UnormX4PACK16                                = 1000156011,
        G10x6B10x6R10x6X3PLANE420UnormX3PACK16                              = 1000156012,
        G10x6B10x6r10x6X2PLANE420UnormX3PACK16                              = 1000156013,
        G10x6B10x6R10x6X3PLANE422UnormX3PACK16                              = 1000156014,
        G10x6B10x6r10x6X2PLANE422UnormX3PACK16                              = 1000156015,
        G10x6B10x6R10x6X3PLANE444UnormX3PACK16                              = 1000156016,
        R12x4UnormPack16                                                    = 1000156017,
        R12x4g12x4UnormX2PACK16                                             = 1000156018,
        R12x4g12x4b12x4a12x4UnormX4PACK16                                   = 1000156019,
        G12x4b12x4g12x4r12x4422UnormX4PACK16                                = 1000156020,
        B12x4g12x4r12x4g12x4422UnormX4PACK16                                = 1000156021,
        G12x4B12x4R12x4X3PLANE420UnormX3PACK16                              = 1000156022,
        G12x4B12x4r12x4X2PLANE420UnormX3PACK16                              = 1000156023,
        G12x4B12x4R12x4X3PLANE422UnormX3PACK16                              = 1000156024,
        G12x4B12x4r12x4X2PLANE422UnormX3PACK16                              = 1000156025,
        G12x4B12x4R12x4X3PLANE444UnormX3PACK16                              = 1000156026,
        G16b16g16r16422Unorm                                                = 1000156027,
        B16g16r16g16422Unorm                                                = 1000156028,
        G16B16R16X3PLANE420Unorm                                            = 1000156029,
        G16B16r16X2PLANE420Unorm                                            = 1000156030,
        G16B16R16X3PLANE422Unorm                                            = 1000156031,
        G16B16r16X2PLANE422Unorm                                            = 1000156032,
        G16B16R16X3PLANE444Unorm                                            = 1000156033,
        G8B8r8X2PLANE444Unorm                                               = 1000330000,
        G10x6B10x6r10x6X2PLANE444UnormX3PACK16                              = 1000330001,
        G12x4B12x4r12x4X2PLANE444UnormX3PACK16                              = 1000330002,
        G16B16r16X2PLANE444Unorm                                            = 1000330003,
        A4r4g4b4UnormPack16                                                 = 1000340000,
        A4b4g4r4UnormPack16                                                 = 1000340001,
        AstcX4X4SfloatBlock                                                 = 1000066000,
        AstcX5X4SfloatBlock                                                 = 1000066001,
        AstcX5X5SfloatBlock                                                 = 1000066002,
        AstcX6X5SfloatBlock                                                 = 1000066003,
        AstcX6X6SfloatBlock                                                 = 1000066004,
        AstcX8X5SfloatBlock                                                 = 1000066005,
        AstcX8X6SfloatBlock                                                 = 1000066006,
        AstcX8X8SfloatBlock                                                 = 1000066007,
        AstcX10X5SfloatBlock                                                = 1000066008,
        AstcX10X6SfloatBlock                                                = 1000066009,
        AstcX10X8SfloatBlock                                                = 1000066010,
        AstcX10X10SfloatBlock                                               = 1000066011,
        AstcX12X10SfloatBlock                                               = 1000066012,
        AstcX12X12SfloatBlock                                               = 1000066013,
        A1b5g5r5UnormPack16                                                 = 1000470000,
        A8Unorm                                                             = 1000470001,
    };

    enum class FormatFeatureFlagBits : std::uint32_t
    {
        SampledImageBit                                                     = 1,
        StorageImageBit                                                     = 2,
        StorageImageAtomicBit                                               = 4,
        UniformTexelBufferBit                                               = 8,
        StorageTexelBufferBit                                               = 16,
        StorageTexelBufferAtomicBit                                         = 32,
        VertexBufferBit                                                     = 64,
        ColorAttachmentBit                                                  = 128,
        ColorAttachmentBlendBit                                             = 256,
        DepthStencilAttachmentBit                                           = 512,
        BlitSrcBit                                                          = 1024,
        BlitDstBit                                                          = 2048,
        SampledImageFilterLinearBit                                         = 4096,
        VideoDecodeOutputBitKHR                                             = 33554432,
        VideoDecodeDpbBitKHR                                                = 67108864,
        AccelerationStructureVertexBufferBitKHR                             = 536870912,
        SampledImageFilterCubicBitEXT                                       = 8192,
        FragmentDensityMapBitEXT                                            = 16777216,
        FragmentShadingRateAttachmentBitKHR                                 = 1073741824,
        VideoEncodeInputBitKHR                                              = 134217728,
        VideoEncodeDpbBitKHR                                                = 268435456,
        TransferSrcBit                                                      = 16384,
        TransferDstBit                                                      = 32768,
        MidpointChromaSamplesBit                                            = 131072,
        SampledImageYcbcrConversionLinearFilterBit                          = 262144,
        SampledImageYcbcrConversionSeparateReconstructionFilterBit          = 524288,
        SampledImageYcbcrConversionChromaReconstructionExplicitBit          = 1048576,
        SampledImageYcbcrConversionChromaReconstructionExplicitForceableBit = 2097152,
        DisjointBit                                                         = 4194304,
        CositedChromaSamplesBit                                             = 8388608,
        SampledImageFilterMinmaxBit                                         = 65536,
    };

    enum class FormatFeatureFlagBits2 : std::uint64_t
    {
        SampledImageBit                                                     = 1,
        StorageImageBit                                                     = 2,
        StorageImageAtomicBit                                               = 4,
        UniformTexelBufferBit                                               = 8,
        StorageTexelBufferBit                                               = 16,
        StorageTexelBufferAtomicBit                                         = 32,
        VertexBufferBit                                                     = 64,
        ColorAttachmentBit                                                  = 128,
        ColorAttachmentBlendBit                                             = 256,
        DepthStencilAttachmentBit                                           = 512,
        BlitSrcBit                                                          = 1024,
        BlitDstBit                                                          = 2048,
        SampledImageFilterLinearBit                                         = 4096,
        TransferSrcBit                                                      = 16384,
        TransferDstBit                                                      = 32768,
        SampledImageFilterMinmaxBit                                         = 65536,
        MidpointChromaSamplesBit                                            = 131072,
        SampledImageYcbcrConversionLinearFilterBit                          = 262144,
        SampledImageYcbcrConversionSeparateReconstructionFilterBit          = 524288,
        SampledImageYcbcrConversionChromaReconstructionExplicitBit          = 1048576,
        SampledImageYcbcrConversionChromaReconstructionExplicitForceableBit = 2097152,
        DisjointBit                                                         = 4194304,
        CositedChromaSamplesBit                                             = 8388608,
        StorageReadWithoutFormatBit                                         = 2147483648,
        StorageWriteWithoutFormatBit                                        = 4294967296,
        SampledImageDepthComparisonBit                                      = 8589934592,
        VideoDecodeOutputBitKHR                                             = 33554432,
        VideoDecodeDpbBitKHR                                                = 67108864,
        AccelerationStructureVertexBufferBitKHR                             = 536870912,
        FragmentDensityMapBitEXT                                            = 16777216,
        FragmentShadingRateAttachmentBitKHR                                 = 1073741824,
        VideoEncodeInputBitKHR                                              = 134217728,
        VideoEncodeDpbBitKHR                                                = 268435456,
        BlockMatchingSxdBitQCOM                                             = 17592186044416,
        AccelerationStructureRadiusBufferBitNV                              = 2251799813685248,
        LinearColorAttachmentBitNV                                          = 274877906944,
        WeightImageBitQCOM                                                  = 17179869184,
        WeightSampledImageBitQCOM                                           = 34359738368,
        BlockMatchingBitQCOM                                                = 68719476736,
        BoxFilterSampledBitQCOM                                             = 137438953472,
        TensorShaderBitARM                                                  = 549755813888,
        TensorImageAliasingBitARM                                           = 8796093022208,
        OpticalFlowImageBitNV                                               = 1099511627776,
        OpticalFlowVectorBitNV                                              = 2199023255552,
        OpticalFlowCostBitNV                                                = 4398046511104,
        TensorDataGraphBitARM                                               = 281474976710656,
        Reserved60BitEXT                                                    = 1152921504606846976,
        CopyImageIndirectDstBitKHR                                          = 576460752303423488,
        VideoEncodeQuantizationDeltaMapBitKHR                               = 562949953421312,
        VideoEncodeEmphasisMapBitKHR                                        = 1125899906842624,
        SampledImageFilterLinearX2DBitIMG                                   = 35184372088832,
        DepthCopyOnComputeQueueBitKHR                                       = 4503599627370496,
        DepthCopyOnTransferQueueBitKHR                                      = 9007199254740992,
        StencilCopyOnComputeQueueBitKHR                                     = 18014398509481984,
        StencilCopyOnTransferQueueBitKHR                                    = 36028797018963968,
        DataGraphOpticalFlowImageBitARM                                     = 72057594037927936,
        DataGraphOpticalFlowVectorBitARM                                    = 144115188075855872,
        DataGraphOpticalFlowCostBitARM                                      = 288230376151711744,
        Reserved47BitARM                                                    = 140737488355328,
        Reserved61BitHUAWEI                                                 = 2305843009213693952,
        SampledImageFilterCubicBit                                          = 8192,
        HostImageTransferBit                                                = 70368744177664,
    };

    enum class FragmentShadingRateCombinerOpKHR : std::uint32_t
    {
        KeepKHR                                                             = 0,
        ReplaceKHR                                                          = 1,
        MinKHR                                                              = 2,
        MaxKHR                                                              = 3,
        MulKHR                                                              = 4,
    };

    enum class FragmentShadingRateNV : std::uint32_t
    {
        X1InvocationPerPixelNV                                              = 0,
        X1InvocationPerX1X2PixelsNV                                         = 1,
        X1InvocationPerX2X1PixelsNV                                         = 4,
        X1InvocationPerX2X2PixelsNV                                         = 5,
        X1InvocationPerX2X4PixelsNV                                         = 6,
        X1InvocationPerX4X2PixelsNV                                         = 9,
        X1InvocationPerX4X4PixelsNV                                         = 10,
        X2InvocationsPerPixelNV                                             = 11,
        X4InvocationsPerPixelNV                                             = 12,
        X8InvocationsPerPixelNV                                             = 13,
        X16InvocationsPerPixelNV                                            = 14,
        NoInvocationsNV                                                     = 15,
    };

    enum class FragmentShadingRateTypeNV : std::uint32_t
    {
        FragmentSizeNV                                                      = 0,
        EnumsNV                                                             = 1,
    };

    enum class FrameBoundaryFlagBitsEXT : std::uint32_t
    {
        FrameEndBitEXT                                                      = 1,
    };

    enum class FramebufferCreateFlagBits : std::uint32_t
    {
        ImagelessBit                                                        = 1,
    };

    enum class FrontFace : std::uint32_t
    {
        CounterClockwise                                                    = 0,
        Clockwise                                                           = 1,
    };

    enum class FullScreenExclusiveEXT : std::uint32_t
    {
        DefaultEXT                                                          = 0,
        AllowedEXT                                                          = 1,
        DisallowedEXT                                                       = 2,
        ApplicationControlledEXT                                            = 3,
    };

    enum class GeometryFlagBitsKHR : std::uint32_t
    {
        OpaqueBitKHR                                                        = 1,
        NoDuplicateAnyHitInvocationBitKHR                                   = 2,
    };

    enum class GeometryInstanceFlagBitsKHR : std::uint32_t
    {
        TriangleFacingCullDisableBitKHR                                     = 1,
        TriangleFlipFacingBitKHR                                            = 2,
        ForceOpaqueBitKHR                                                   = 4,
        ForceNoOpaqueBitKHR                                                 = 8,
        ForceOpacityMicromap2StateBitKHR                                    = 16,
        DisableOpacityMicromapsBitKHR                                       = 32,
    };

    enum class GeometryTypeKHR : std::uint32_t
    {
        TrianglesKHR                                                        = 0,
        AabbsKHR                                                            = 1,
        InstancesKHR                                                        = 2,
        SpheresNV                                                           = 1000429004,
        LinearSweptSpheresNV                                                = 1000429005,
        DenseGeometryFormatTrianglesAmdx                                    = 1000478000,
        MicromapKHR                                                         = 1000623000,
    };

    enum class GpaDeviceClockModeAMD : std::uint32_t
    {
        DefaultAMD                                                          = 0,
        QueryAMD                                                            = 1,
        ProfilingAMD                                                        = 2,
        MinMemoryAMD                                                        = 3,
        MinEngineAMD                                                        = 4,
        PeakAMD                                                             = 5,
    };

    enum class GpaPerfBlockAMD : std::uint32_t
    {
        CpfAMD                                                              = 0,
        IaAMD                                                               = 1,
        VgtAMD                                                              = 2,
        PaAMD                                                               = 3,
        ScAMD                                                               = 4,
        SpiAMD                                                              = 5,
        SqAMD                                                               = 6,
        SxAMD                                                               = 7,
        TaAMD                                                               = 8,
        TdAMD                                                               = 9,
        TcpAMD                                                              = 10,
        TccAMD                                                              = 11,
        TcaAMD                                                              = 12,
        DbAMD                                                               = 13,
        CbAMD                                                               = 14,
        GdsAMD                                                              = 15,
        SrbmAMD                                                             = 16,
        GrbmAMD                                                             = 17,
        GrbmSeAMD                                                           = 18,
        RlcAMD                                                              = 19,
        DmaAMD                                                              = 20,
        McAMD                                                               = 21,
        CpgAMD                                                              = 22,
        CpcAMD                                                              = 23,
        WdAMD                                                               = 24,
        TcsAMD                                                              = 25,
        AtcAMD                                                              = 26,
        AtcL2AMD                                                            = 27,
        McVmL2AMD                                                           = 28,
        EaAMD                                                               = 29,
        RpbAMD                                                              = 30,
        RmiAMD                                                              = 31,
        UmcchAMD                                                            = 32,
        GeAMD                                                               = 33,
        Gl1aAMD                                                             = 34,
        Gl1cAMD                                                             = 35,
        Gl1cgAMD                                                            = 36,
        Gl2aAMD                                                             = 37,
        Gl2cAMD                                                             = 38,
        ChaAMD                                                              = 39,
        ChcAMD                                                              = 40,
        ChcgAMD                                                             = 41,
        GusAMD                                                              = 42,
        GcrAMD                                                              = 43,
        PhAMD                                                               = 44,
        Utcl1AMD                                                            = 45,
        GeDistAMD                                                           = 46,
        GeSeAMD                                                             = 47,
        DfMallAMD                                                           = 48,
        SqWgpAMD                                                            = 49,
        PcAMD                                                               = 50,
        Gl1xaAMD                                                            = 51,
        Gl1xcAMD                                                            = 52,
        WgsAMD                                                              = 53,
        EacpwdAMD                                                           = 54,
        EaseAMD                                                             = 55,
        RlcuserAMD                                                          = 56,
    };

    enum class GpaSampleTypeAMD : std::uint32_t
    {
        CumulativeAMD                                                       = 0,
        TraceAMD                                                            = 1,
        TimingAMD                                                           = 2,
    };

    enum class GpaSqShaderStageFlagBitsAMD : std::uint32_t
    {
        PsBitAMD                                                            = 1,
        VsBitAMD                                                            = 2,
        GsBitAMD                                                            = 4,
        EsBitAMD                                                            = 8,
        HsBitAMD                                                            = 16,
        LsBitAMD                                                            = 32,
        CsBitAMD                                                            = 64,
    };

    enum class GraphicsPipelineLibraryFlagBitsEXT : std::uint32_t
    {
        VertexInputInterfaceBitEXT                                          = 1,
        PreRasterizationShadersBitEXT                                       = 2,
        FragmentShaderBitEXT                                                = 4,
        FragmentOutputInterfaceBitEXT                                       = 8,
    };

    enum class HdrSmpteSt209450PowerPreferenceGOOGLE : std::uint32_t
    {
        ColorAccuracyGOOGLE                                                 = 0,
        LowPowerGOOGLE                                                      = 1,
    };

    enum class HostImageCopyFlagBits : std::uint32_t
    {
        MemcpyBit                                                           = 1,
    };

    enum class ImageAspectFlagBits : std::uint32_t
    {
        ColorBit                                                            = 1,
        DepthBit                                                            = 2,
        StencilBit                                                          = 4,
        MetadataBit                                                         = 8,
        MemoryPlane0BitEXT                                                  = 128,
        MemoryPlane1BitEXT                                                  = 256,
        MemoryPlane2BitEXT                                                  = 512,
        MemoryPlane3BitEXT                                                  = 1024,
        Reserved11BitHUAWEI                                                 = 2048,
        Plane0Bit                                                           = 16,
        Plane1Bit                                                           = 32,
        Plane2Bit                                                           = 64,
        None                                                                = 0,
    };

    enum class ImageCompressionFixedRateFlagBitsEXT : std::uint32_t
    {
        NoneEXT                                                             = 0,
        X1BPCBitEXT                                                         = 1,
        X2BPCBitEXT                                                         = 2,
        X3BPCBitEXT                                                         = 4,
        X4BPCBitEXT                                                         = 8,
        X5BPCBitEXT                                                         = 16,
        X6BPCBitEXT                                                         = 32,
        X7BPCBitEXT                                                         = 64,
        X8BPCBitEXT                                                         = 128,
        X9BPCBitEXT                                                         = 256,
        X10BPCBitEXT                                                        = 512,
        X11BPCBitEXT                                                        = 1024,
        X12BPCBitEXT                                                        = 2048,
        X13BPCBitEXT                                                        = 4096,
        X14BPCBitEXT                                                        = 8192,
        X15BPCBitEXT                                                        = 16384,
        X16BPCBitEXT                                                        = 32768,
        X17BPCBitEXT                                                        = 65536,
        X18BPCBitEXT                                                        = 131072,
        X19BPCBitEXT                                                        = 262144,
        X20BPCBitEXT                                                        = 524288,
        X21BPCBitEXT                                                        = 1048576,
        X22BPCBitEXT                                                        = 2097152,
        X23BPCBitEXT                                                        = 4194304,
        X24BPCBitEXT                                                        = 8388608,
    };

    enum class ImageCompressionFlagBitsEXT : std::uint32_t
    {
        DefaultEXT                                                          = 0,
        FixedRateDefaultEXT                                                 = 1,
        FixedRateExplicitEXT                                                = 2,
        DisabledEXT                                                         = 4,
    };

    enum class ImageConstraintsInfoFlagBitsFUCHSIA : std::uint32_t
    {
        CpuReadRarelyFUCHSIA                                                = 1,
        CpuReadOftenFUCHSIA                                                 = 2,
        CpuWriteRarelyFUCHSIA                                               = 4,
        CpuWriteOftenFUCHSIA                                                = 8,
        ProtectedOptionalFUCHSIA                                            = 16,
    };

    enum class ImageCreateFlagBits : std::uint32_t
    {
        SparseBindingBit                                                    = 1,
        SparseResidencyBit                                                  = 2,
        SparseAliasedBit                                                    = 4,
        MutableFormatBit                                                    = 8,
        CubeCompatibleBit                                                   = 16,
        CornerSampledBitNV                                                  = 8192,
        Reserved21BitIMG                                                    = 2097152,
        DescriptorHeapCaptureReplayBitEXT                                   = 65536,
        SampleLocationsCompatibleDepthBitEXT                                = 4096,
        SubsampledBitEXT                                                    = 16384,
        MultisampledRenderToSingleSampledBitEXT                             = 262144,
        X2DViewCompatibleBitEXT                                             = 131072,
        VideoProfileIndependentBitKHR                                       = 1048576,
        FragmentDensityMapOffsetBitEXT                                      = 32768,
        AliasSingleLayerDescriptorBitKHR                                    = 4194304,
        Reserved19BitNV                                                     = 524288,
        AliasBit                                                            = 1024,
        SplitInstanceBindRegionsBit                                         = 64,
        X2DArrayCompatibleBit                                               = 32,
        BlockTexelViewCompatibleBit                                         = 128,
        ExtendedUsageBit                                                    = 256,
        ProtectedBit                                                        = 2048,
        DisjointBit                                                         = 512,
    };

    enum class ImageCreateFlagBits2KHR : std::uint32_t
    {
        SparseBindingBitKHR                                                 = 1,
        SparseResidencyBitKHR                                               = 2,
        SparseAliasedBitKHR                                                 = 4,
        MutableFormatBitKHR                                                 = 8,
        CubeCompatibleBitKHR                                                = 16,
        Reserved21BitIMG                                                    = 2097152,
        AliasSingleLayerDescriptorBitKHR                                    = 4194304,
        X2DArrayCompatibleBitKHR                                            = 32,
        SplitInstanceBindRegionsBitKHR                                      = 64,
        BlockTexelViewCompatibleBitKHR                                      = 128,
        ExtendedUsageBitKHR                                                 = 256,
        DisjointBitKHR                                                      = 512,
        AliasBitKHR                                                         = 1024,
        ProtectedBitKHR                                                     = 2048,
        SampleLocationsCompatibleDepthBitEXT                                = 4096,
        CornerSampledBitNV                                                  = 8192,
        SubsampledBitEXT                                                    = 16384,
        FragmentDensityMapOffsetBitEXT                                      = 32768,
        DescriptorBufferCaptureReplayBitEXT                                 = 65536,
        X2DViewCompatibleBitEXT                                             = 131072,
        MultisampledRenderToSingleSampledBitEXT                             = 262144,
        VideoProfileIndependentBitKHR                                       = 1048576,
        Reserved19BitNV                                                     = 524288,
    };

    enum class ImageLayout : std::uint32_t
    {
        Undefined                                                           = 0,
        General                                                             = 1,
        ColorAttachmentOptimal                                              = 2,
        DepthStencilAttachmentOptimal                                       = 3,
        DepthStencilReadOnlyOptimal                                         = 4,
        ShaderReadOnlyOptimal                                               = 5,
        TransferSrcOptimal                                                  = 6,
        TransferDstOptimal                                                  = 7,
        Preinitialized                                                      = 8,
        PresentSrcKHR                                                       = 1000001002,
        VideoDecodeDstKHR                                                   = 1000024000,
        VideoDecodeSrcKHR                                                   = 1000024001,
        VideoDecodeDpbKHR                                                   = 1000024002,
        SharedPresentKHR                                                    = 1000111000,
        FragmentDensityMapOptimalEXT                                        = 1000218000,
        FragmentShadingRateAttachmentOptimalKHR                             = 1000164003,
        VideoEncodeDstKHR                                                   = 1000299000,
        VideoEncodeSrcKHR                                                   = 1000299001,
        VideoEncodeDpbKHR                                                   = 1000299002,
        AttachmentFeedbackLoopOptimalEXT                                    = 1000339000,
        TensorAliasingARM                                                   = 1000460000,
        VideoEncodeQuantizationMapKHR                                       = 1000553000,
        ZeroInitializedEXT                                                  = 1000620000,
        DepthReadOnlyStencilAttachmentOptimal                               = 1000117000,
        DepthAttachmentStencilReadOnlyOptimal                               = 1000117001,
        DepthAttachmentOptimal                                              = 1000241000,
        DepthReadOnlyOptimal                                                = 1000241001,
        StencilAttachmentOptimal                                            = 1000241002,
        StencilReadOnlyOptimal                                              = 1000241003,
        ReadOnlyOptimal                                                     = 1000314000,
        AttachmentOptimal                                                   = 1000314001,
        RenderingLocalRead                                                  = 1000232000,
    };

    enum class ImageTiling : std::uint32_t
    {
        Optimal                                                             = 0,
        Linear                                                              = 1,
        DrmFormatModifierEXT                                                = 1000158000,
    };

    enum class ImageTilingControlEXT : std::uint32_t
    {
        DefaultEXT                                                          = 0,
        MinSizeEXT                                                          = 1,
        MaxPerformanceEXT                                                   = 2,
    };

    enum class ImageType : std::uint32_t
    {
        X1D                                                                 = 0,
        X2D                                                                 = 1,
        X3D                                                                 = 2,
    };

    enum class ImageUsageFlagBits : std::uint32_t
    {
        TransferSrcBit                                                      = 1,
        TransferDstBit                                                      = 2,
        SampledBit                                                          = 4,
        StorageBit                                                          = 8,
        ColorAttachmentBit                                                  = 16,
        DepthStencilAttachmentBit                                           = 32,
        TransientAttachmentBit                                              = 64,
        InputAttachmentBit                                                  = 128,
        VideoDecodeDstBitKHR                                                = 1024,
        VideoDecodeSrcBitKHR                                                = 2048,
        VideoDecodeDpbBitKHR                                                = 4096,
        FragmentDensityMapBitEXT                                            = 512,
        FragmentShadingRateAttachmentBitKHR                                 = 256,
        VideoEncodeDstBitKHR                                                = 8192,
        VideoEncodeSrcBitKHR                                                = 16384,
        VideoEncodeDpbBitKHR                                                = 32768,
        AttachmentFeedbackLoopBitEXT                                        = 524288,
        InvocationMaskBitHUAWEI                                             = 262144,
        SampleWeightBitQCOM                                                 = 1048576,
        SampleBlockMatchBitQCOM                                             = 2097152,
        Reserved24BitCoreavi                                                = 16777216,
        TensorAliasingBitARM                                                = 8388608,
        Reserved28BitEXT                                                    = 268435456,
        TileMemoryBitQCOM                                                   = 134217728,
        VideoEncodeQuantizationDeltaMapBitKHR                               = 33554432,
        VideoEncodeEmphasisMapBitKHR                                        = 67108864,
        Reserved29BitKHR                                                    = 536870912,
        Reserved30BitKHR                                                    = 1073741824,
        Reserved16BitHUAWEI                                                 = 65536,
        Reserved17BitHUAWEI                                                 = 131072,
        HostTransferBit                                                     = 4194304,
    };

    enum class ImageUsageFlagBits2KHR : std::uint32_t
    {
        TransferSrcBitKHR                                                   = 1,
        TransferDstBitKHR                                                   = 2,
        SampledBitKHR                                                       = 4,
        StorageBitKHR                                                       = 8,
        ColorAttachmentBitKHR                                               = 16,
        DepthStencilAttachmentBitKHR                                        = 32,
        TransientAttachmentBitKHR                                           = 64,
        InputAttachmentBitKHR                                               = 128,
        Reserved31BitEXT                                                    = 2147483648,
        Reserved24BitCoreavi                                                = 16777216,
        Reserved28BitEXT                                                    = 268435456,
        Reserved29BitKHR                                                    = 536870912,
        Reserved30BitKHR                                                    = 1073741824,
        Reserved16BitHUAWEI                                                 = 65536,
        Reserved27BitHUAWEI                                                 = 131072,
        FragmentShadingRateAttachmentBitKHR                                 = 256,
        FragmentDensityMapBitEXT                                            = 512,
        VideoDecodeDstBitKHR                                                = 1024,
        VideoDecodeSrcBitKHR                                                = 2048,
        VideoDecodeDpbBitKHR                                                = 4096,
        VideoEncodeDstBitKHR                                                = 8192,
        VideoEncodeSrcBitKHR                                                = 16384,
        VideoEncodeDpbBitKHR                                                = 32768,
        InvocationMaskBitHUAWEI                                             = 262144,
        AttachmentFeedbackLoopBitEXT                                        = 524288,
        SampleWeightBitQCOM                                                 = 1048576,
        SampleBlockMatchBitQCOM                                             = 2097152,
        HostTransferBitKHR                                                  = 4194304,
        TensorAliasingBitARM                                                = 8388608,
        VideoEncodeQuantizationDeltaMapBitKHR                               = 33554432,
        VideoEncodeEmphasisMapBitKHR                                        = 67108864,
        TileMemoryBitQCOM                                                   = 134217728,
    };

    enum class ImageViewCreateFlagBits : std::uint32_t
    {
        FragmentDensityMapDynamicBitEXT                                     = 1,
        DescriptorBufferCaptureReplayBitEXT                                 = 4,
        FragmentDensityMapDeferredBitEXT                                    = 2,
    };

    enum class ImageViewType : std::uint32_t
    {
        X1D                                                                 = 0,
        X2D                                                                 = 1,
        X3D                                                                 = 2,
        Cube                                                                = 3,
        X1DArray                                                            = 4,
        X2DArray                                                            = 5,
        CubeArray                                                           = 6,
    };

    enum class IndexType : std::uint32_t
    {
        Uint16                                                              = 0,
        Uint32                                                              = 1,
        NoneKHR                                                             = 1000165000,
        Uint8                                                               = 1000265000,
    };

    enum class IndirectCommandsInputModeFlagBitsEXT : std::uint32_t
    {
        VulkanIndexBufferEXT                                                = 1,
        DxgiIndexBufferEXT                                                  = 2,
    };

    enum class IndirectCommandsLayoutUsageFlagBitsEXT : std::uint32_t
    {
        ExplicitPreprocessBitEXT                                            = 1,
        UnorderedSequencesBitEXT                                            = 2,
    };

    enum class IndirectCommandsLayoutUsageFlagBitsNV : std::uint32_t
    {
        ExplicitPreprocessBitNV                                             = 1,
        IndexedSequencesBitNV                                               = 2,
        UnorderedSequencesBitNV                                             = 4,
    };

    enum class IndirectCommandsTokenTypeEXT : std::uint32_t
    {
        ExecutionSetEXT                                                     = 0,
        PushConstantEXT                                                     = 1,
        SequenceIndexEXT                                                    = 2,
        IndexBufferEXT                                                      = 3,
        VertexBufferEXT                                                     = 4,
        DrawIndexedEXT                                                      = 5,
        DrawEXT                                                             = 6,
        DrawIndexedCountEXT                                                 = 7,
        DrawCountEXT                                                        = 8,
        DispatchEXT                                                         = 9,
        PushDataEXT                                                         = 1000135000,
        PushDataSequenceIndexEXT                                            = 1000135001,
        DrawMeshTasksNVEXT                                                  = 1000202002,
        DrawMeshTasksCountNVEXT                                             = 1000202003,
        DrawMeshTasksEXT                                                    = 1000328000,
        DrawMeshTasksCountEXT                                               = 1000328001,
        TraceRays2EXT                                                       = 1000386004,
    };

    enum class IndirectCommandsTokenTypeNV : std::uint32_t
    {
        ShaderGroupNV                                                       = 0,
        StateFlagsNV                                                        = 1,
        IndexBufferNV                                                       = 2,
        VertexBufferNV                                                      = 3,
        PushConstantNV                                                      = 4,
        DrawIndexedNV                                                       = 5,
        DrawNV                                                              = 6,
        DrawTasksNV                                                         = 7,
        PushDataNV                                                          = 1000135000,
        DrawMeshTasksNV                                                     = 1000328000,
        PipelineNV                                                          = 1000428003,
        DispatchNV                                                          = 1000428004,
    };

    enum class IndirectExecutionSetInfoTypeEXT : std::uint32_t
    {
        PipelinesEXT                                                        = 0,
        ShaderObjectsEXT                                                    = 1,
    };

    enum class IndirectStateFlagBitsNV : std::uint32_t
    {
        FlagFrontfaceBitNV                                                  = 1,
    };

    enum class InstanceCreateFlagBits : std::uint32_t
    {
        EnumeratePortabilityBitKHR                                          = 1,
        Reserved616BitEXT                                                   = 2,
    };

    enum class InternalAllocationType : std::uint32_t
    {
        Executable                                                          = 0,
    };

    enum class LatencyMarkerNV : std::uint32_t
    {
        SimulationStartNV                                                   = 0,
        SimulationEndNV                                                     = 1,
        RendersubmitStartNV                                                 = 2,
        RendersubmitEndNV                                                   = 3,
        PresentStartNV                                                      = 4,
        PresentEndNV                                                        = 5,
        InputSampleNV                                                       = 6,
        TriggerFlashNV                                                      = 7,
        OutOfBandRendersubmitStartNV                                        = 8,
        OutOfBandRendersubmitEndNV                                          = 9,
        OutOfBandPresentStartNV                                             = 10,
        OutOfBandPresentEndNV                                               = 11,
    };

    enum class LayerSettingTypeEXT : std::uint32_t
    {
        Bool32EXT                                                           = 0,
        Int32EXT                                                            = 1,
        Int64EXT                                                            = 2,
        Uint32EXT                                                           = 3,
        Uint64EXT                                                           = 4,
        Float32EXT                                                          = 5,
        Float64EXT                                                          = 6,
        StringEXT                                                           = 7,
    };

    enum class LayeredDriverUnderlyingApiMSFT : std::uint32_t
    {
        NoneMsft                                                            = 0,
        D3d12Msft                                                           = 1,
    };

    enum class LineRasterizationMode : std::uint32_t
    {
        Default                                                             = 0,
        Rectangular                                                         = 1,
        Bresenham                                                           = 2,
        RectangularSmooth                                                   = 3,
    };

    enum class LogicOp : std::uint32_t
    {
        Clear                                                               = 0,
        And                                                                 = 1,
        AndReverse                                                          = 2,
        Copy                                                                = 3,
        AndInverted                                                         = 4,
        NoOp                                                                = 5,
        Xor                                                                 = 6,
        Or                                                                  = 7,
        Nor                                                                 = 8,
        Equivalent                                                          = 9,
        Invert                                                              = 10,
        OrReverse                                                           = 11,
        CopyInverted                                                        = 12,
        OrInverted                                                          = 13,
        Nand                                                                = 14,
        Set                                                                 = 15,
    };

    enum class MemoryAllocateFlagBits : std::uint32_t
    {
        DeviceMaskBit                                                       = 1,
        ZeroInitializeBitEXT                                                = 8,
        DeviceAddressBit                                                    = 2,
        DeviceAddressCaptureReplayBit                                       = 4,
    };

    enum class MemoryDecompressionMethodFlagBitsEXT : std::uint32_t
    {
        Gdeflate10BitEXT                                                    = 1,
    };

    enum class MemoryHeapFlagBits : std::uint32_t
    {
        DeviceLocalBit                                                      = 1,
        TileMemoryBitQCOM                                                   = 8,
        MultiInstanceBit                                                    = 2,
        SeuSafeBit                                                          = 4,
    };

    enum class MemoryMapFlagBits : std::uint32_t
    {
        PlacedBitEXT                                                        = 1,
    };

    enum class MemoryOverallocationBehaviorAMD : std::uint32_t
    {
        DefaultAMD                                                          = 0,
        AllowedAMD                                                          = 1,
        DisallowedAMD                                                       = 2,
    };

    enum class MemoryPropertyFlagBits : std::uint32_t
    {
        DeviceLocalBit                                                      = 1,
        HostVisibleBit                                                      = 2,
        HostCoherentBit                                                     = 4,
        HostCachedBit                                                       = 8,
        LazilyAllocatedBit                                                  = 16,
        DeviceCoherentBitAMD                                                = 64,
        DeviceUncachedBitAMD                                                = 128,
        RdmaCapableBitNV                                                    = 256,
        ProtectedBit                                                        = 32,
    };

    enum class MemoryUnmapFlagBits : std::uint32_t
    {
        ReserveBitEXT                                                       = 1,
    };

    enum class MicromapCreateFlagBitsEXT : std::uint32_t
    {
        DeviceAddressCaptureReplayBitEXT                                    = 1,
    };

    enum class MicromapTypeEXT : std::uint32_t
    {
        OpacityMicromapEXT                                                  = 0,
        DisplacementMicromapNV                                              = 1000397000,
    };

    enum class NeuralAcceleratorStatisticsModeARM : std::uint32_t
    {
        DisabledARM                                                         = 0,
        Statistics0ARM                                                      = 1,
        Statistics1ARM                                                      = 2,
    };

    enum class ObjectType : std::uint32_t
    {
        Unknown                                                             = 0,
        Instance                                                            = 1,
        PhysicalDevice                                                      = 2,
        Device                                                              = 3,
        Queue                                                               = 4,
        Semaphore                                                           = 5,
        CommandBuffer                                                       = 6,
        Fence                                                               = 7,
        DeviceMemory                                                        = 8,
        Buffer                                                              = 9,
        Image                                                               = 10,
        Event                                                               = 11,
        QueryPool                                                           = 12,
        BufferView                                                          = 13,
        ImageView                                                           = 14,
        ShaderModule                                                        = 15,
        PipelineCache                                                       = 16,
        PipelineLayout                                                      = 17,
        RenderPass                                                          = 18,
        Pipeline                                                            = 19,
        DescriptorSetLayout                                                 = 20,
        Sampler                                                             = 21,
        DescriptorPool                                                      = 22,
        DescriptorSet                                                       = 23,
        Framebuffer                                                         = 24,
        CommandPool                                                         = 25,
        SurfaceKHR                                                          = 1000000000,
        SwapchainKHR                                                        = 1000001000,
        DisplayKHR                                                          = 1000002000,
        DisplayModeKHR                                                      = 1000002001,
        DebugReportCallbackEXT                                              = 1000011000,
        VideoSessionKHR                                                     = 1000023000,
        VideoSessionParametersKHR                                           = 1000023001,
        CuModuleNVX                                                         = 1000029000,
        CuFunctionNVX                                                       = 1000029001,
        DebugUtilsMessengerEXT                                              = 1000128000,
        GpaSessionAMD                                                       = 1000133000,
        AccelerationStructureKHR                                            = 1000150000,
        ValidationCacheEXT                                                  = 1000160000,
        AccelerationStructureNV                                             = 1000165000,
        PerformanceConfigurationINTEL                                       = 1000210000,
        DeferredOperationKHR                                                = 1000268000,
        IndirectCommandsLayoutNV                                            = 1000277000,
        CudaModuleNV                                                        = 1000307000,
        CudaFunctionNV                                                      = 1000307001,
        BufferCollectionFUCHSIA                                             = 1000366000,
        MicromapEXT                                                         = 1000396000,
        TensorARM                                                           = 1000460000,
        TensorViewARM                                                       = 1000460001,
        OpticalFlowSessionNV                                                = 1000464000,
        ShaderEXT                                                           = 1000482000,
        PipelineBinaryKHR                                                   = 1000483000,
        SemaphoreSciSyncPoolNV                                              = 1000489000,
        DataGraphPipelineSessionARM                                         = 1000507000,
        ExternalComputeQueueNV                                              = 1000556000,
        IndirectCommandsLayoutEXT                                           = 1000572000,
        IndirectExecutionSetEXT                                             = 1000572001,
        ShaderInstrumentationARM                                            = 1000607000,
        DescriptorUpdateTemplate                                            = 1000085000,
        SamplerYcbcrConversion                                              = 1000156000,
        PrivateDataSlot                                                     = 1000295000,
    };

    enum class OpacityMicromapFormatKHR : std::uint32_t
    {
        X2StateKHR                                                          = 1,
        X4StateKHR                                                          = 2,
    };

    enum class OpacityMicromapSpecialIndexKHR : std::int32_t
    {
        FullyTransparentKHR                                                 = -1,
        FullyOpaqueKHR                                                      = -2,
        FullyUnknownTransparentKHR                                          = -3,
        FullyUnknownOpaqueKHR                                               = -4,
        ClusterGeometryDisableOpacityMicromapNV                             = -5,
    };

    enum class OpticalFlowExecuteFlagBitsNV : std::uint32_t
    {
        DisableTemporalHintsBitNV                                           = 1,
    };

    enum class OpticalFlowGridSizeFlagBitsNV : std::uint32_t
    {
        UnknownNV                                                           = 0,
        X1X1BitNV                                                           = 1,
        X2X2BitNV                                                           = 2,
        X4X4BitNV                                                           = 4,
        X8X8BitNV                                                           = 8,
    };

    enum class OpticalFlowPerformanceLevelNV : std::uint32_t
    {
        UnknownNV                                                           = 0,
        SlowNV                                                              = 1,
        MediumNV                                                            = 2,
        FastNV                                                              = 3,
    };

    enum class OpticalFlowSessionBindingPointNV : std::uint32_t
    {
        UnknownNV                                                           = 0,
        InputNV                                                             = 1,
        ReferenceNV                                                         = 2,
        HintNV                                                              = 3,
        FlowVectorNV                                                        = 4,
        BackwardFlowVectorNV                                                = 5,
        CostNV                                                              = 6,
        BackwardCostNV                                                      = 7,
        GlobalFlowNV                                                        = 8,
    };

    enum class OpticalFlowSessionCreateFlagBitsNV : std::uint32_t
    {
        EnableHintBitNV                                                     = 1,
        EnableCostBitNV                                                     = 2,
        EnableGlobalFlowBitNV                                               = 4,
        AllowRegionsBitNV                                                   = 8,
        BothDirectionsBitNV                                                 = 16,
    };

    enum class OpticalFlowUsageFlagBitsNV : std::uint32_t
    {
        UnknownNV                                                           = 0,
        InputBitNV                                                          = 1,
        OutputBitNV                                                         = 2,
        HintBitNV                                                           = 4,
        CostBitNV                                                           = 8,
        GlobalFlowBitNV                                                     = 16,
    };

    enum class OutOfBandQueueTypeNV : std::uint32_t
    {
        RenderNV                                                            = 0,
        PresentNV                                                           = 1,
    };

    enum class PartitionedAccelerationStructureInstanceFlagBitsNV : std::uint32_t
    {
        TriangleFacingCullDisableBitNV                                      = 1,
        TriangleFlipFacingBitNV                                             = 2,
        ForceOpaqueBitNV                                                    = 4,
        ForceNoOpaqueBitNV                                                  = 8,
        EnableExplicitBoundingBoxNV                                         = 16,
    };

    enum class PartitionedAccelerationStructureOpTypeNV : std::uint32_t
    {
        WriteInstanceNV                                                     = 0,
        UpdateInstanceNV                                                    = 1,
        WritePartitionTranslationNV                                         = 2,
    };

    enum class PastPresentationTimingFlagBitsEXT : std::uint32_t
    {
        PartialResultsBitEXT                                                = 1,
        OutOfOrderResultsBitEXT                                             = 2,
    };

    enum class PeerMemoryFeatureFlagBits : std::uint32_t
    {
        CopySrcBit                                                          = 1,
        CopyDstBit                                                          = 2,
        GenericSrcBit                                                       = 4,
        GenericDstBit                                                       = 8,
    };

    enum class PerfHintTypeQCOM : std::uint32_t
    {
        DefaultQCOM                                                         = 0,
        FrequencyMinQCOM                                                    = 1,
        FrequencyMaxQCOM                                                    = 2,
        FrequencyScaledQCOM                                                 = 3,
    };

    enum class PerformanceConfigurationTypeINTEL : std::uint32_t
    {
        CommandQueueMetricsDiscoveryActivatedINTEL                          = 0,
    };

    enum class PerformanceCounterDescriptionFlagBitsKHR : std::uint32_t
    {
        PerformanceImpactingBitKHR                                          = 1,
        ConcurrentlyImpactedBitKHR                                          = 2,
    };

    enum class PerformanceCounterScopeKHR : std::uint32_t
    {
        CommandBufferKHR                                                    = 0,
        RenderPassKHR                                                       = 1,
        CommandKHR                                                          = 2,
    };

    enum class PerformanceCounterStorageKHR : std::uint32_t
    {
        Int32KHR                                                            = 0,
        Int64KHR                                                            = 1,
        Uint32KHR                                                           = 2,
        Uint64KHR                                                           = 3,
        Float32KHR                                                          = 4,
        Float64KHR                                                          = 5,
    };

    enum class PerformanceCounterUnitKHR : std::uint32_t
    {
        GenericKHR                                                          = 0,
        PercentageKHR                                                       = 1,
        NanosecondsKHR                                                      = 2,
        BytesKHR                                                            = 3,
        BytesPerSecondKHR                                                   = 4,
        KelvinKHR                                                           = 5,
        WattsKHR                                                            = 6,
        VoltsKHR                                                            = 7,
        AmpsKHR                                                             = 8,
        HertzKHR                                                            = 9,
        CyclesKHR                                                           = 10,
    };

    enum class PerformanceOverrideTypeINTEL : std::uint32_t
    {
        NullHardwareINTEL                                                   = 0,
        FlushGpuCachesINTEL                                                 = 1,
    };

    enum class PerformanceParameterTypeINTEL : std::uint32_t
    {
        HwCountersSupportedINTEL                                            = 0,
        StreamMarkerValidBitsINTEL                                          = 1,
    };

    enum class PerformanceValueTypeINTEL : std::uint32_t
    {
        Uint32INTEL                                                         = 0,
        Uint64INTEL                                                         = 1,
        FloatINTEL                                                          = 2,
        BoolINTEL                                                           = 3,
        StringINTEL                                                         = 4,
    };

    enum class PhysicalDeviceDataGraphOperationTypeARM : std::uint32_t
    {
        SpirvExtendedInstructionSetARM                                      = 0,
        NeuralModelQCOM                                                     = 1000629000,
        BuiltinModelQCOM                                                    = 1000629001,
        OpticalFlowARM                                                      = 1000631000,
    };

    enum class PhysicalDeviceDataGraphProcessingEngineTypeARM : std::uint32_t
    {
        DefaultARM                                                          = 0,
        NeuralQCOM                                                          = 1000629000,
        ComputeQCOM                                                         = 1000629001,
    };

    enum class PhysicalDeviceLayeredApiKHR : std::uint32_t
    {
        VulkanKHR                                                           = 0,
        D3d12KHR                                                            = 1,
        MetalKHR                                                            = 2,
        OpenglKHR                                                           = 3,
        OpenglesKHR                                                         = 4,
    };

    enum class PhysicalDeviceSchedulingControlsFlagBitsARM : std::uint32_t
    {
        ShaderCoreCountARM                                                  = 1,
        DispatchParametersARM                                               = 2,
    };

    enum class PhysicalDeviceType : std::uint32_t
    {
        Other                                                               = 0,
        IntegratedGpu                                                       = 1,
        DiscreteGpu                                                         = 2,
        VirtualGpu                                                          = 3,
        Cpu                                                                 = 4,
    };

    enum class PipelineBindPoint : std::uint32_t
    {
        Graphics                                                            = 0,
        Compute                                                             = 1,
        ExecutionGraphAmdx                                                  = 1000134000,
        RayTracingKHR                                                       = 1000165000,
        SubpassShadingHUAWEI                                                = 1000369003,
        DataGraphARM                                                        = 1000507000,
    };

    enum class PipelineCacheCreateFlagBits : std::uint32_t
    {
        InternallySynchronizedMergeBitKHR                                   = 8,
        ExternallySynchronizedBit                                           = 1,
        ReadOnlyBit                                                         = 2,
        UseApplicationStorageBit                                            = 4,
    };

    enum class PipelineCacheHeaderVersion : std::uint32_t
    {
        One                                                                 = 1,
        DataGraphQCOM                                                       = 1000629000,
        SafetyCriticalOne                                                   = 1000298001,
    };

    enum class PipelineCacheValidationVersion : std::uint32_t
    {
        SafetyCriticalOne                                                   = 1,
    };

    enum class PipelineColorBlendStateCreateFlagBits : std::uint32_t
    {
        RasterizationOrderAttachmentAccessBitEXT                            = 1,
    };

    enum class PipelineCreateFlagBits : std::uint32_t
    {
        DisableOptimizationBit                                              = 1,
        AllowDerivativesBit                                                 = 2,
        DerivativeBit                                                       = 4,
        RayTracingNoNullAnyHitShadersBitKHR                                 = 16384,
        RayTracingNoNullClosestHitShadersBitKHR                             = 32768,
        RayTracingNoNullMissShadersBitKHR                                   = 65536,
        RayTracingNoNullIntersectionShadersBitKHR                           = 131072,
        RayTracingSkipTrianglesBitKHR                                       = 4096,
        RayTracingSkipAabbsBitKHR                                           = 8192,
        RayTracingShaderGroupHandleCaptureReplayBitKHR                      = 524288,
        DeferCompileBitNV                                                   = 32,
        RenderingFragmentDensityMapAttachmentBitEXT                         = 4194304,
        RenderingFragmentShadingRateAttachmentBitKHR                        = 2097152,
        CaptureStatisticsBitKHR                                             = 64,
        CaptureInternalRepresentationsBitKHR                                = 128,
        IndirectBindableBitNV                                               = 262144,
        LibraryBitKHR                                                       = 2048,
        DescriptorBufferBitEXT                                              = 536870912,
        RetainLinkTimeOptimizationInfoBitEXT                                = 8388608,
        LinkTimeOptimizationBitEXT                                          = 1024,
        RayTracingAllowMotionBitNV                                          = 1048576,
        ColorAttachmentFeedbackLoopBitEXT                                   = 33554432,
        DepthStencilAttachmentFeedbackLoopBitEXT                            = 67108864,
        RayTracingDisplacementMicromapBitNV                                 = 268435456,
        RayTracingOpacityMicromapBitKHR                                     = 16777216,
        DispatchBaseBit                                                     = 16,
        ViewIndexFromDeviceIndexBit                                         = 8,
        FailOnPipelineCompileRequiredBit                                    = 256,
        EarlyReturnOnFailureBit                                             = 512,
        NoProtectedAccessBit                                                = 134217728,
        ProtectedAccessOnlyBit                                              = 1073741824,
    };

    enum class PipelineCreateFlagBits2 : std::uint64_t
    {
        X2DisableOptimizationBit                                            = 1,
        X2AllowDerivativesBit                                               = 2,
        X2DerivativeBit                                                     = 4,
        X2ViewIndexFromDeviceIndexBit                                       = 8,
        X2DispatchBaseBit                                                   = 16,
        X2FailOnPipelineCompileRequiredBit                                  = 256,
        X2EarlyReturnOnFailureBit                                           = 512,
        X2NoProtectedAccessBit                                              = 134217728,
        X2ProtectedAccessOnlyBit                                            = 1073741824,
        X2Reserved46BitIMG                                                  = 70368744177664,
        X2ExecutionGraphBitAmdx                                             = 4294967296,
        X2DescriptorHeapBitEXT                                              = 68719476736,
        Reserved44BitKHR                                                    = 17592186044416,
        X2RayTracingAllowSpheresAndLinearSweptSpheresBitNV                  = 8589934592,
        X2EnableLegacyDitheringBitEXT                                       = 17179869184,
        X2DeferCompileBitNV                                                 = 32,
        X2CaptureStatisticsBitKHR                                           = 64,
        X2CaptureInternalRepresentationsBitKHR                              = 128,
        X2LinkTimeOptimizationBitEXT                                        = 1024,
        X2RetainLinkTimeOptimizationInfoBitEXT                              = 8388608,
        X2LibraryBitKHR                                                     = 2048,
        X2RayTracingSkipTrianglesBitKHR                                     = 4096,
        X2RayTracingSkipAabbsBitKHR                                         = 8192,
        X2RayTracingNoNullAnyHitShadersBitKHR                               = 16384,
        X2RayTracingNoNullClosestHitShadersBitKHR                           = 32768,
        X2RayTracingNoNullMissShadersBitKHR                                 = 65536,
        X2RayTracingNoNullIntersectionShadersBitKHR                         = 131072,
        X2RayTracingShaderGroupHandleCaptureReplayBitKHR                    = 524288,
        X2IndirectBindableBitNV                                             = 262144,
        X2RayTracingAllowMotionBitNV                                        = 1048576,
        X2RenderingFragmentShadingRateAttachmentBitKHR                      = 2097152,
        X2RenderingFragmentDensityMapAttachmentBitEXT                       = 4194304,
        X2ColorAttachmentFeedbackLoopBitEXT                                 = 33554432,
        X2DepthStencilAttachmentFeedbackLoopBitEXT                          = 67108864,
        X2RayTracingDisplacementMicromapBitNV                               = 268435456,
        X2DescriptorBufferBitEXT                                            = 536870912,
        X2DisallowOpacityMicromapBitARM                                     = 137438953472,
        X2InstrumentShadersBitARM                                           = 549755813888,
        X2CaptureDataBitKHR                                                 = 2147483648,
        X2IndirectBindableBitEXT                                            = 274877906944,
        X2Reserved35BitKHR                                                  = 34359738368,
        X2PerLayerFragmentDensityBitVALVE                                   = 1099511627776,
        X2RayTracingOpacityMicromapBitKHR                                   = 16777216,
        X2OpacityMicromapDisallowMixedSpecialIndexBitKHR                    = 2199023255552,
        X264BitIndexingBitEXT                                               = 8796093022208,
        X2Reserved45BitEXT                                                  = 35184372088832,
        X2Reserved47BitAMD                                                  = 140737488355328,
        X2Reserved48BitHUAWEI                                               = 281474976710656,
        X2Reserved42BitKHR                                                  = 4398046511104,
    };

    enum class PipelineCreationFeedbackFlagBits : std::uint32_t
    {
        ValidBit                                                            = 1,
        ApplicationPipelineCacheHitBit                                      = 2,
        BasePipelineAccelerationBit                                         = 4,
    };

    enum class PipelineDepthStencilStateCreateFlagBits : std::uint32_t
    {
        DepthAccessBitEXT                                                   = 1,
        StencilAccessBitEXT                                                 = 2,
    };

    enum class PipelineExecutableStatisticFormatKHR : std::uint32_t
    {
        Bool32KHR                                                           = 0,
        Int64KHR                                                            = 1,
        Uint64KHR                                                           = 2,
        Float64KHR                                                          = 3,
    };

    enum class PipelineLayoutCreateFlagBits : std::uint32_t
    {
        IndependentSetsBitEXT                                               = 2,
        NoTaskShaderBitKHR                                                  = 4,
    };

    enum class PipelineMatchControl : std::uint32_t
    {
        ApplicationUuidExactMatch                                           = 0,
    };

    enum class PipelineRobustnessBufferBehavior : std::uint32_t
    {
        DeviceDefault                                                       = 0,
        Disabled                                                            = 1,
        RobustBufferAccess                                                  = 2,
        RobustBufferAccess2                                                 = 3,
    };

    enum class PipelineRobustnessImageBehavior : std::uint32_t
    {
        DeviceDefault                                                       = 0,
        Disabled                                                            = 1,
        RobustImageAccess                                                   = 2,
        RobustImageAccess2                                                  = 3,
    };

    enum class PipelineShaderStageCreateFlagBits : std::uint32_t
    {
        Reserved3BitKHR                                                     = 8,
        AllowVaryingSubgroupSizeBit                                         = 1,
        RequireFullSubgroupsBit                                             = 2,
    };

    enum class PipelineStageFlagBits : std::uint32_t
    {
        TopOfPipeBit                                                        = 1,
        DrawIndirectBit                                                     = 2,
        VertexInputBit                                                      = 4,
        VertexShaderBit                                                     = 8,
        TessellationControlShaderBit                                        = 16,
        TessellationEvaluationShaderBit                                     = 32,
        GeometryShaderBit                                                   = 64,
        FragmentShaderBit                                                   = 128,
        EarlyFragmentTestsBit                                               = 256,
        LateFragmentTestsBit                                                = 512,
        ColorAttachmentOutputBit                                            = 1024,
        ComputeShaderBit                                                    = 2048,
        TransferBit                                                         = 4096,
        BottomOfPipeBit                                                     = 8192,
        HostBit                                                             = 16384,
        AllGraphicsBit                                                      = 32768,
        AllCommandsBit                                                      = 65536,
        TransformFeedbackBitEXT                                             = 16777216,
        ConditionalRenderingBitEXT                                          = 262144,
        AccelerationStructureBuildBitKHR                                    = 33554432,
        RayTracingShaderBitKHR                                              = 2097152,
        FragmentDensityProcessBitEXT                                        = 8388608,
        FragmentShadingRateAttachmentBitKHR                                 = 4194304,
        TaskShaderBitEXT                                                    = 524288,
        MeshShaderBitEXT                                                    = 1048576,
        CommandPreprocessBitEXT                                             = 131072,
        None                                                                = 0,
    };

    enum class PipelineStageFlagBits2 : std::uint64_t
    {
        None                                                                = 0,
        TopOfPipeBit                                                        = 1,
        DrawIndirectBit                                                     = 2,
        VertexInputBit                                                      = 4,
        VertexShaderBit                                                     = 8,
        TessellationControlShaderBit                                        = 16,
        TessellationEvaluationShaderBit                                     = 32,
        GeometryShaderBit                                                   = 64,
        FragmentShaderBit                                                   = 128,
        EarlyFragmentTestsBit                                               = 256,
        LateFragmentTestsBit                                                = 512,
        ColorAttachmentOutputBit                                            = 1024,
        ComputeShaderBit                                                    = 2048,
        AllTransferBit                                                      = 4096,
        BottomOfPipeBit                                                     = 8192,
        HostBit                                                             = 16384,
        AllGraphicsBit                                                      = 32768,
        AllCommandsBit                                                      = 65536,
        CopyBit                                                             = 4294967296,
        ResolveBit                                                          = 8589934592,
        BlitBit                                                             = 17179869184,
        ClearBit                                                            = 34359738368,
        IndexInputBit                                                       = 68719476736,
        VertexAttributeInputBit                                             = 137438953472,
        PreRasterizationShadersBit                                          = 274877906944,
        VideoDecodeBitKHR                                                   = 67108864,
        VideoEncodeBitKHR                                                   = 134217728,
        Reserved50BitKHR                                                    = 1125899906842624,
        TransformFeedbackBitEXT                                             = 16777216,
        ConditionalRenderingBitEXT                                          = 262144,
        CommandPreprocessBitEXT                                             = 131072,
        FragmentShadingRateAttachmentBitKHR                                 = 4194304,
        AccelerationStructureBuildBitKHR                                    = 33554432,
        RayTracingShaderBitKHR                                              = 2097152,
        FragmentDensityProcessBitEXT                                        = 8388608,
        TaskShaderBitEXT                                                    = 524288,
        MeshShaderBitEXT                                                    = 1048576,
        SubpassShaderBitHUAWEI                                              = 549755813888,
        InvocationMaskBitHUAWEI                                             = 1099511627776,
        AccelerationStructureCopyBitKHR                                     = 268435456,
        MicromapBuildBitEXT                                                 = 1073741824,
        ClusterCullingShaderBitHUAWEI                                       = 2199023255552,
        OpticalFlowBitNV                                                    = 536870912,
        ConvertCooperativeVectorMatrixBitNV                                 = 17592186044416,
        DataGraphBitARM                                                     = 4398046511104,
        CopyIndirectBitKHR                                                  = 70368744177664,
        MemoryDecompressionBitEXT                                           = 35184372088832,
        Reserved49BitEXT                                                    = 562949953421312,
        Reserved47BitKHR                                                    = 140737488355328,
        Reserved31BitAMD                                                    = 2147483648,
        Reserved43BitARM                                                    = 8796093022208,
        Reserved48BitHUAWEI                                                 = 281474976710656,
    };

    enum class PointClippingBehavior : std::uint32_t
    {
        AllClipPlanes                                                       = 0,
        UserClipPlanesOnly                                                  = 1,
    };

    enum class PolygonMode : std::uint32_t
    {
        Fill                                                                = 0,
        Line                                                                = 1,
        Point                                                               = 2,
        FillRectangleNV                                                     = 1000153000,
    };

    enum class PresentGravityFlagBitsKHR : std::uint32_t
    {
        MinBitKHR                                                           = 1,
        MaxBitKHR                                                           = 2,
        CenteredBitKHR                                                      = 4,
    };

    enum class PresentModeKHR : std::uint32_t
    {
        ImmediateKHR                                                        = 0,
        MailboxKHR                                                          = 1,
        FifoKHR                                                             = 2,
        FifoRelaxedKHR                                                      = 3,
        SharedDemandRefreshKHR                                              = 1000111000,
        SharedContinuousRefreshKHR                                          = 1000111001,
        FifoLatestReadyKHR                                                  = 1000361000,
    };

    enum class PresentScalingFlagBitsKHR : std::uint32_t
    {
        OneToOneBitKHR                                                      = 1,
        AspectRatioStretchBitKHR                                            = 2,
        StretchBitKHR                                                       = 4,
    };

    enum class PresentStageFlagBitsEXT : std::uint32_t
    {
        QueueOperationsEndBitEXT                                            = 1,
        RequestDequeuedBitEXT                                               = 2,
        ImageFirstPixelOutBitEXT                                            = 4,
        ImageFirstPixelVisibleBitEXT                                        = 8,
    };

    enum class PresentTimingInfoFlagBitsEXT : std::uint32_t
    {
        RelativeTimeBitEXT                                                  = 1,
        NearestRefreshCycleBitEXT                                           = 2,
    };

    enum class PrimitiveTopology : std::uint32_t
    {
        PointList                                                           = 0,
        LineList                                                            = 1,
        LineStrip                                                           = 2,
        TriangleList                                                        = 3,
        TriangleStrip                                                       = 4,
        TriangleFan                                                         = 5,
        LineListWithAdjacency                                               = 6,
        LineStripWithAdjacency                                              = 7,
        TriangleListWithAdjacency                                           = 8,
        TriangleStripWithAdjacency                                          = 9,
        PatchList                                                           = 10,
    };

    enum class PrivateDataSlotCreateFlagBits : std::uint32_t
    {
        BaseObjectHandleBitNV                                               = 1,
    };

    enum class ProvokingVertexModeEXT : std::uint32_t
    {
        FirstVertexEXT                                                      = 0,
        LastVertexEXT                                                       = 1,
    };

    enum class QueryControlFlagBits : std::uint32_t
    {
        PreciseBit                                                          = 1,
    };

    enum class QueryPipelineStatisticFlagBits : std::uint32_t
    {
        InputAssemblyVerticesBit                                            = 1,
        InputAssemblyPrimitivesBit                                          = 2,
        VertexShaderInvocationsBit                                          = 4,
        GeometryShaderInvocationsBit                                        = 8,
        GeometryShaderPrimitivesBit                                         = 16,
        ClippingInvocationsBit                                              = 32,
        ClippingPrimitivesBit                                               = 64,
        FragmentShaderInvocationsBit                                        = 128,
        TessellationControlShaderPatchesBit                                 = 256,
        TessellationEvaluationShaderInvocationsBit                          = 512,
        ComputeShaderInvocationsBit                                         = 1024,
        TaskShaderInvocationsBitEXT                                         = 2048,
        MeshShaderInvocationsBitEXT                                         = 4096,
        ClusterCullingShaderInvocationsBitHUAWEI                            = 8192,
    };

    enum class QueryPoolCreateFlagBits : std::uint32_t
    {
        ResetBitKHR                                                         = 1,
    };

    enum class QueryPoolSamplingModeINTEL : std::uint32_t
    {
        ManualINTEL                                                         = 0,
    };

    enum class QueryResultFlagBits : std::uint32_t
    {
        X64Bit                                                              = 1,
        WaitBit                                                             = 2,
        WithAvailabilityBit                                                 = 4,
        PartialBit                                                          = 8,
        WithStatusBitKHR                                                    = 16,
    };

    enum class QueryResultStatusKHR : std::int32_t
    {
        ErrorKHR                                                            = -1,
        NotReadyKHR                                                         = 0,
        CompleteKHR                                                         = 1,
        InsufficientBitstreamBufferRangeKHR                                 = 1000299000,
    };

    enum class QueryType : std::uint32_t
    {
        Occlusion                                                           = 0,
        PipelineStatistics                                                  = 1,
        Timestamp                                                           = 2,
        ResultStatusOnlyKHR                                                 = 1000023000,
        TransformFeedbackStreamEXT                                          = 1000028004,
        PerformanceQueryKHR                                                 = 1000116000,
        AccelerationStructureCompactedSizeKHR                               = 1000150000,
        AccelerationStructureSerializationSizeKHR                           = 1000150001,
        AccelerationStructureCompactedSizeNV                                = 1000165000,
        TimeElapsedQCOM                                                     = 1000173000,
        PerformanceQueryINTEL                                               = 1000210000,
        VideoEncodeFeedbackKHR                                              = 1000299000,
        MeshPrimitivesGeneratedEXT                                          = 1000328000,
        PrimitivesGeneratedEXT                                              = 1000382000,
        AccelerationStructureSerializationBottomLevelPointersKHR            = 1000386000,
        AccelerationStructureSizeKHR                                        = 1000386001,
        MicromapSerializationSizeEXT                                        = 1000396000,
        MicromapCompactedSizeEXT                                            = 1000396001,
    };

    enum class QueueFlagBits : std::uint32_t
    {
        GraphicsBit                                                         = 1,
        ComputeBit                                                          = 2,
        TransferBit                                                         = 4,
        SparseBindingBit                                                    = 8,
        VideoDecodeBitKHR                                                   = 32,
        VideoEncodeBitKHR                                                   = 64,
        Reserved7BitQCOM                                                    = 128,
        OpticalFlowBitNV                                                    = 256,
        DataGraphBitARM                                                     = 1024,
        Reserved12BitEXT                                                    = 4096,
        Reserved9BitEXT                                                     = 512,
        Reserved13BitEXT                                                    = 8192,
        Reserved11BitARM                                                    = 2048,
        Reserved14BitEXT                                                    = 16384,
        ProtectedBit                                                        = 16,
    };

    enum class QueueGlobalPriority : std::uint32_t
    {
        Low                                                                 = 128,
        Medium                                                              = 256,
        High                                                                = 512,
        Realtime                                                            = 1024,
    };

    enum class RasterizationOrderAMD : std::uint32_t
    {
        StrictAMD                                                           = 0,
        RelaxedAMD                                                          = 1,
    };

    enum class RayTracingInvocationReorderModeEXT : std::uint32_t
    {
        NoneEXT                                                             = 0,
        ReorderEXT                                                          = 1,
    };

    enum class RayTracingLssIndexingModeNV : std::uint32_t
    {
        ListNV                                                              = 0,
        SuccessiveNV                                                        = 1,
    };

    enum class RayTracingLssPrimitiveEndCapsModeNV : std::uint32_t
    {
        NoneNV                                                              = 0,
        ChainedNV                                                           = 1,
    };

    enum class RayTracingShaderGroupTypeKHR : std::uint32_t
    {
        GeneralKHR                                                          = 0,
        TrianglesHitGroupKHR                                                = 1,
        ProceduralHitGroupKHR                                               = 2,
    };

    enum class RenderPassCreateFlagBits : std::uint32_t
    {
        Reserved3BitIMG                                                     = 8,
        Reserved0BitKHR                                                     = 1,
        TransformBitQCOM                                                    = 2,
        PerLayerFragmentDensityBitVALVE                                     = 4,
    };

    enum class RenderingAttachmentFlagBitsKHR : std::uint32_t
    {
        InputAttachmentFeedbackBitKHR                                       = 1,
        ResolveSkipTransferFunctionBitKHR                                   = 2,
        ResolveEnableTransferFunctionBitKHR                                 = 4,
    };

    enum class RenderingFlagBits : std::uint32_t
    {
        ContentsSecondaryCommandBuffersBit                                  = 1,
        SuspendingBit                                                       = 2,
        ResumingBit                                                         = 4,
        Reserved9BitIMG                                                     = 512,
        EnableLegacyDitheringBitEXT                                         = 8,
        ContentsInlineBitKHR                                                = 16,
        PerLayerFragmentDensityBitVALVE                                     = 32,
        FragmentRegionBitEXT                                                = 64,
        CustomResolveBitEXT                                                 = 128,
        LocalReadConcurrentAccessControlBitKHR                              = 256,
        Reserved10BitVALVE                                                  = 1024,
        Reserved11BitVALVE                                                  = 2048,
        Reserved12BitVALVE                                                  = 4096,
    };

    enum class ResolveImageFlagBitsKHR : std::uint32_t
    {
        SkipTransferFunctionBitKHR                                          = 1,
        EnableTransferFunctionBitKHR                                        = 2,
    };

    enum class ResolveModeFlagBits : std::uint32_t
    {
        None                                                                = 0,
        SampleZeroBit                                                       = 1,
        AverageBit                                                          = 2,
        MinBit                                                              = 4,
        MaxBit                                                              = 8,
        ExternalFormatDownsampleBitANDROID                                  = 16,
        CustomBitEXT                                                        = 32,
    };

    enum class Result : std::int32_t
    {
        Success                                                             = 0,
        NotReady                                                            = 1,
        Timeout                                                             = 2,
        EventSet                                                            = 3,
        EventReset                                                          = 4,
        Incomplete                                                          = 5,
        ErrorOutOfHostMemory                                                = -1,
        ErrorOutOfDeviceMemory                                              = -2,
        ErrorInitializationFailed                                           = -3,
        ErrorDeviceLost                                                     = -4,
        ErrorMemoryMapFailed                                                = -5,
        ErrorLayerNotPresent                                                = -6,
        ErrorExtensionNotPresent                                            = -7,
        ErrorFeatureNotPresent                                              = -8,
        ErrorIncompatibleDriver                                             = -9,
        ErrorTooManyObjects                                                 = -10,
        ErrorFormatNotSupported                                             = -11,
        ErrorFragmentedPool                                                 = -12,
        ErrorUnknown                                                        = -13,
        ErrorSurfaceLostKHR                                                 = 1000000000,
        ErrorNativeWindowInUseKHR                                           = 1000000001,
        SuboptimalKHR                                                       = 1000001003,
        ErrorOutOfDateKHR                                                   = 1000001004,
        ErrorIncompatibleDisplayKHR                                         = 1000003001,
        ErrorInvalidShaderNV                                                = 1000012000,
        ErrorImageUsageNotSupportedKHR                                      = 1000023000,
        ErrorVideoPictureLayoutNotSupportedKHR                              = 1000023001,
        ErrorVideoProfileOperationNotSupportedKHR                           = 1000023002,
        ErrorVideoProfileFormatNotSupportedKHR                              = 1000023003,
        ErrorVideoProfileCodecNotSupportedKHR                               = 1000023004,
        ErrorVideoSTDVersionNotSupportedKHR                                 = 1000023005,
        ErrorInvalidDrmFormatModifierPlaneLayoutEXT                         = 1000158000,
        ErrorPresentTimingQueueFullEXT                                      = 1000208000,
        ErrorFullScreenExclusiveModeLostEXT                                 = 1000255000,
        ThreadIdleKHR                                                       = 1000268000,
        ThreadDoneKHR                                                       = 1000268001,
        OperationDeferredKHR                                                = 1000268002,
        OperationNotDeferredKHR                                             = 1000268003,
        ErrorInvalidVideoSTDParametersKHR                                   = 1000299000,
        ErrorCompressionExhaustedEXT                                        = 1000338000,
        IncompatibleShaderBinaryEXT                                         = 1000482000,
        PipelineBinaryMissingKHR                                            = 1000483000,
        ErrorNotEnoughSpaceKHR                                              = 1000483000,
        ErrorValidationFailed                                               = 1000011001,
        ErrorOutOfPoolMemory                                                = 1000069000,
        ErrorInvalidExternalHandle                                          = 1000072003,
        ErrorInvalidOpaqueCaptureAddress                                    = 1000257000,
        ErrorFragmentation                                                  = 1000161000,
        PipelineCompileRequired                                             = 1000297000,
        ErrorNotPermitted                                                   = 1000174001,
        ErrorInvalidPipelineCacheData                                       = 1000298000,
        ErrorNoPipelineMatch                                                = 1000298001,
    };

    enum class SampleCountFlagBits : std::uint32_t
    {
        X1Bit                                                               = 1,
        X2Bit                                                               = 2,
        X4Bit                                                               = 4,
        X8Bit                                                               = 8,
        X16Bit                                                              = 16,
        X32Bit                                                              = 32,
        X64Bit                                                              = 64,
    };

    enum class SamplerAddressMode : std::uint32_t
    {
        Repeat                                                              = 0,
        MirroredRepeat                                                      = 1,
        ClampToEdge                                                         = 2,
        ClampToBorder                                                       = 3,
        MirrorClampToEdge                                                   = 4,
    };

    enum class SamplerCreateFlagBits : std::uint32_t
    {
        SubsampledBitEXT                                                    = 1,
        SubsampledCoarseReconstructionBitEXT                                = 2,
        DescriptorBufferCaptureReplayBitEXT                                 = 8,
        NonSeamlessCubeMapBitEXT                                            = 4,
        ImageProcessingBitQCOM                                              = 16,
    };

    enum class SamplerMipmapMode : std::uint32_t
    {
        Nearest                                                             = 0,
        Linear                                                              = 1,
    };

    enum class SamplerReductionMode : std::uint32_t
    {
        WeightedAverage                                                     = 0,
        Min                                                                 = 1,
        Max                                                                 = 2,
        WeightedAverageRangeclampQCOM                                       = 1000521000,
    };

    enum class SamplerYcbcrModelConversion : std::uint32_t
    {
        RgbIdentity                                                         = 0,
        YcbcrIdentity                                                       = 1,
        Ycbcr709                                                            = 2,
        Ycbcr601                                                            = 3,
        Ycbcr2020                                                           = 4,
    };

    enum class SamplerYcbcrRange : std::uint32_t
    {
        Full                                                                = 0,
        Narrow                                                              = 1,
    };

    enum class SciSyncClientTypeNV : std::uint32_t
    {
        SignalerNV                                                          = 0,
        WaiterNV                                                            = 1,
        SignalerWaiterNV                                                    = 2,
    };

    enum class SciSyncPrimitiveTypeNV : std::uint32_t
    {
        FenceNV                                                             = 0,
        SemaphoreNV                                                         = 1,
    };

    enum class ScopeKHR : std::uint32_t
    {
        DeviceKHR                                                           = 1,
        WorkgroupKHR                                                        = 2,
        SubgroupKHR                                                         = 3,
        QueueFamilyKHR                                                      = 5,
    };

    enum class SemaphoreImportFlagBits : std::uint32_t
    {
        TemporaryBit                                                        = 1,
    };

    enum class SemaphoreType : std::uint32_t
    {
        Binary                                                              = 0,
        Timeline                                                            = 1,
    };

    enum class SemaphoreWaitFlagBits : std::uint32_t
    {
        AnyBit                                                              = 1,
    };

    enum class ShaderCodeTypeEXT : std::uint32_t
    {
        BinaryEXT                                                           = 0,
        SpirvEXT                                                            = 1,
    };

    enum class ShaderCreateFlagBitsEXT : std::uint32_t
    {
        LinkStageBitEXT                                                     = 1,
        Reserved17BitIMG                                                    = 131072,
        DescriptorHeapBitEXT                                                = 1024,
        Reserved16BitKHR                                                    = 65536,
        InstrumentShaderBitARM                                              = 2048,
        AllowVaryingSubgroupSizeBitEXT                                      = 2,
        RequireFullSubgroupsBitEXT                                          = 4,
        NoTaskShaderBitEXT                                                  = 8,
        DispatchBaseBitEXT                                                  = 16,
        FragmentShadingRateAttachmentBitEXT                                 = 32,
        FragmentDensityMapAttachmentBitEXT                                  = 64,
        IndirectBindableBitEXT                                              = 128,
        Reserved8BitEXT                                                     = 256,
        Reserved9BitEXT                                                     = 512,
        OpacityMicromapDisallowMixedSpecialIndexBitEXT                      = 4096,
        X64BitIndexingBitEXT                                                = 32768,
        IndependentSetsBitKHR                                               = 262144,
    };

    enum class ShaderFloatControlsIndependence : std::uint32_t
    {
        X32BitOnly                                                          = 0,
        All                                                                 = 1,
        None                                                                = 2,
    };

    enum class ShaderGroupShaderKHR : std::uint32_t
    {
        GeneralKHR                                                          = 0,
        ClosestHitKHR                                                       = 1,
        AnyHitKHR                                                           = 2,
        IntersectionKHR                                                     = 3,
    };

    enum class ShaderInfoTypeAMD : std::uint32_t
    {
        StatisticsAMD                                                       = 0,
        BinaryAMD                                                           = 1,
        DisassemblyAMD                                                      = 2,
    };

    enum class ShaderStageFlagBits : std::uint32_t
    {
        VertexBit                                                           = 1,
        TessellationControlBit                                              = 2,
        TessellationEvaluationBit                                           = 4,
        GeometryBit                                                         = 8,
        FragmentBit                                                         = 16,
        ComputeBit                                                          = 32,
        AllGraphics                                                         = 31,
        All                                                                 = 2147483647,
        RaygenBitKHR                                                        = 256,
        AnyHitBitKHR                                                        = 512,
        ClosestHitBitKHR                                                    = 1024,
        MissBitKHR                                                          = 2048,
        IntersectionBitKHR                                                  = 4096,
        CallableBitKHR                                                      = 8192,
        TaskBitEXT                                                          = 64,
        MeshBitEXT                                                          = 128,
        SubpassShadingBitHUAWEI                                             = 16384,
        ClusterCullingBitHUAWEI                                             = 524288,
        Reserved15BitNV                                                     = 32768,
        Reserved16BitHUAWEI                                                 = 65536,
    };

    enum class ShadingRatePaletteEntryNV : std::uint32_t
    {
        NoInvocationsNV                                                     = 0,
        X16InvocationsPerPixelNV                                            = 1,
        X8InvocationsPerPixelNV                                             = 2,
        X4InvocationsPerPixelNV                                             = 3,
        X2InvocationsPerPixelNV                                             = 4,
        X1InvocationPerPixelNV                                              = 5,
        X1InvocationPerX2X1PixelsNV                                         = 6,
        X1InvocationPerX1X2PixelsNV                                         = 7,
        X1InvocationPerX2X2PixelsNV                                         = 8,
        X1InvocationPerX4X2PixelsNV                                         = 9,
        X1InvocationPerX2X4PixelsNV                                         = 10,
        X1InvocationPerX4X4PixelsNV                                         = 11,
    };

    enum class SharingMode : std::uint32_t
    {
        Exclusive                                                           = 0,
        Concurrent                                                          = 1,
    };

    enum class SparseImageFormatFlagBits : std::uint32_t
    {
        SingleMiptailBit                                                    = 1,
        AlignedMipSizeBit                                                   = 2,
        NonstandardBlockSizeBit                                             = 4,
    };

    enum class SparseMemoryBindFlagBits : std::uint32_t
    {
        MetadataBit                                                         = 1,
    };

    enum class SpirvResourceTypeFlagBitsEXT : std::uint32_t
    {
        AllEXT                                                              = 2147483647,
        SamplerBitEXT                                                       = 1,
        SampledImageBitEXT                                                  = 2,
        ReadOnlyImageBitEXT                                                 = 4,
        ReadWriteImageBitEXT                                                = 8,
        CombinedSampledImageBitEXT                                          = 16,
        UniformBufferBitEXT                                                 = 32,
        ReadOnlyStorageBufferBitEXT                                         = 64,
        ReadWriteStorageBufferBitEXT                                        = 128,
        AccelerationStructureBitEXT                                         = 256,
        TensorBitARM                                                        = 512,
    };

    enum class StencilFaceFlagBits : std::uint32_t
    {
        FrontBit                                                            = 1,
        BackBit                                                             = 2,
        FrontAndBack                                                        = 3,
    };

    enum class StencilOp : std::uint32_t
    {
        Keep                                                                = 0,
        Zero                                                                = 1,
        Replace                                                             = 2,
        IncrementAndClamp                                                   = 3,
        DecrementAndClamp                                                   = 4,
        Invert                                                              = 5,
        IncrementAndWrap                                                    = 6,
        DecrementAndWrap                                                    = 7,
    };

    enum class StructureType : std::uint32_t
    {
        ApplicationInfo                                                     = 0,
        InstanceCreateInfo                                                  = 1,
        DeviceQueueCreateInfo                                               = 2,
        DeviceCreateInfo                                                    = 3,
        SubmitInfo                                                          = 4,
        MemoryAllocateInfo                                                  = 5,
        MappedMemoryRange                                                   = 6,
        BindSparseInfo                                                      = 7,
        FenceCreateInfo                                                     = 8,
        SemaphoreCreateInfo                                                 = 9,
        EventCreateInfo                                                     = 10,
        QueryPoolCreateInfo                                                 = 11,
        BufferCreateInfo                                                    = 12,
        BufferViewCreateInfo                                                = 13,
        ImageCreateInfo                                                     = 14,
        ImageViewCreateInfo                                                 = 15,
        ShaderModuleCreateInfo                                              = 16,
        PipelineCacheCreateInfo                                             = 17,
        PipelineShaderStageCreateInfo                                       = 18,
        PipelineVertexInputStateCreateInfo                                  = 19,
        PipelineInputAssemblyStateCreateInfo                                = 20,
        PipelineTessellationStateCreateInfo                                 = 21,
        PipelineViewportStateCreateInfo                                     = 22,
        PipelineRasterizationStateCreateInfo                                = 23,
        PipelineMultisampleStateCreateInfo                                  = 24,
        PipelineDepthStencilStateCreateInfo                                 = 25,
        PipelineColorBlendStateCreateInfo                                   = 26,
        PipelineDynamicStateCreateInfo                                      = 27,
        GraphicsPipelineCreateInfo                                          = 28,
        ComputePipelineCreateInfo                                           = 29,
        PipelineLayoutCreateInfo                                            = 30,
        SamplerCreateInfo                                                   = 31,
        DescriptorSetLayoutCreateInfo                                       = 32,
        DescriptorPoolCreateInfo                                            = 33,
        DescriptorSetAllocateInfo                                           = 34,
        WriteDescriptorSet                                                  = 35,
        CopyDescriptorSet                                                   = 36,
        FramebufferCreateInfo                                               = 37,
        RenderPassCreateInfo                                                = 38,
        CommandPoolCreateInfo                                               = 39,
        CommandBufferAllocateInfo                                           = 40,
        CommandBufferInheritanceInfo                                        = 41,
        CommandBufferBeginInfo                                              = 42,
        RenderPassBeginInfo                                                 = 43,
        BufferMemoryBarrier                                                 = 44,
        ImageMemoryBarrier                                                  = 45,
        MemoryBarrier                                                       = 46,
        LoaderInstanceCreateInfo                                            = 47,
        LoaderDeviceCreateInfo                                              = 48,
        SwapchainCreateInfoKHR                                              = 1000001000,
        PresentInfoKHR                                                      = 1000001001,
        DeviceGroupPresentCapabilitiesKHR                                   = 1000060007,
        ImageSwapchainCreateInfoKHR                                         = 1000060008,
        BindImageMemorySwapchainInfoKHR                                     = 1000060009,
        AcquireNextImageInfoKHR                                             = 1000060010,
        DeviceGroupPresentInfoKHR                                           = 1000060011,
        DeviceGroupSwapchainCreateInfoKHR                                   = 1000060012,
        DisplayModeCreateInfoKHR                                            = 1000002000,
        DisplaySurfaceCreateInfoKHR                                         = 1000002001,
        DisplayPresentInfoKHR                                               = 1000003000,
        XlibSurfaceCreateInfoKHR                                            = 1000004000,
        XcbSurfaceCreateInfoKHR                                             = 1000005000,
        WaylandSurfaceCreateInfoKHR                                         = 1000006000,
        ANDROIDSurfaceCreateInfoKHR                                         = 1000008000,
        Win32SurfaceCreateInfoKHR                                           = 1000009000,
        NativeBufferANDROID                                                 = 1000010000,
        SwapchainImageCreateInfoANDROID                                     = 1000010001,
        PhysicalDevicePresentationPropertiesANDROID                         = 1000010002,
        DebugReportCallbackCreateInfoEXT                                    = 1000011000,
        PipelineRasterizationStateRasterizationOrderAMD                     = 1000018000,
        DebugMarkerObjectNameInfoEXT                                        = 1000022000,
        DebugMarkerObjectTagInfoEXT                                         = 1000022001,
        DebugMarkerMarkerInfoEXT                                            = 1000022002,
        VideoProfileInfoKHR                                                 = 1000023000,
        VideoCapabilitiesKHR                                                = 1000023001,
        VideoPictureResourceInfoKHR                                         = 1000023002,
        VideoSessionMemoryRequirementsKHR                                   = 1000023003,
        BindVideoSessionMemoryInfoKHR                                       = 1000023004,
        VideoSessionCreateInfoKHR                                           = 1000023005,
        VideoSessionParametersCreateInfoKHR                                 = 1000023006,
        VideoSessionParametersUpdateInfoKHR                                 = 1000023007,
        VideoBeginCodingInfoKHR                                             = 1000023008,
        VideoEndCodingInfoKHR                                               = 1000023009,
        VideoCodingControlInfoKHR                                           = 1000023010,
        VideoReferenceSlotInfoKHR                                           = 1000023011,
        QueueFamilyVideoPropertiesKHR                                       = 1000023012,
        VideoProfileListInfoKHR                                             = 1000023013,
        PhysicalDeviceVideoFormatInfoKHR                                    = 1000023014,
        VideoFormatPropertiesKHR                                            = 1000023015,
        QueueFamilyQueryResultStatusPropertiesKHR                           = 1000023016,
        VideoDecodeInfoKHR                                                  = 1000024000,
        VideoDecodeCapabilitiesKHR                                          = 1000024001,
        VideoDecodeUsageInfoKHR                                             = 1000024002,
        DedicatedAllocationImageCreateInfoNV                                = 1000026000,
        DedicatedAllocationBufferCreateInfoNV                               = 1000026001,
        DedicatedAllocationMemoryAllocateInfoNV                             = 1000026002,
        PhysicalDeviceTransformFeedbackFeaturesEXT                          = 1000028000,
        PhysicalDeviceTransformFeedbackPropertiesEXT                        = 1000028001,
        PipelineRasterizationStateStreamCreateInfoEXT                       = 1000028002,
        CuModuleCreateInfoNVX                                               = 1000029000,
        CuFunctionCreateInfoNVX                                             = 1000029001,
        CuLaunchInfoNVX                                                     = 1000029002,
        CuModuleTexturingModeCreateInfoNVX                                  = 1000029004,
        ImageViewHandleInfoNVX                                              = 1000030000,
        ImageViewAddressPropertiesNVX                                       = 1000030001,
        VideoEncodeH264CapabilitiesKHR                                      = 1000038000,
        VideoEncodeH264SessionParametersCreateInfoKHR                       = 1000038001,
        VideoEncodeH264SessionParametersAddInfoKHR                          = 1000038002,
        VideoEncodeH264PictureInfoKHR                                       = 1000038003,
        VideoEncodeH264DpbSlotInfoKHR                                       = 1000038004,
        VideoEncodeH264NaluSliceInfoKHR                                     = 1000038005,
        VideoEncodeH264GopRemainingFrameInfoKHR                             = 1000038006,
        VideoEncodeH264ProfileInfoKHR                                       = 1000038007,
        VideoEncodeH264RateControlInfoKHR                                   = 1000038008,
        VideoEncodeH264RateControlLayerInfoKHR                              = 1000038009,
        VideoEncodeH264SessionCreateInfoKHR                                 = 1000038010,
        VideoEncodeH264QualityLevelPropertiesKHR                            = 1000038011,
        VideoEncodeH264SessionParametersGetInfoKHR                          = 1000038012,
        VideoEncodeH264SessionParametersFeedbackInfoKHR                     = 1000038013,
        VideoEncodeH265CapabilitiesKHR                                      = 1000039000,
        VideoEncodeH265SessionParametersCreateInfoKHR                       = 1000039001,
        VideoEncodeH265SessionParametersAddInfoKHR                          = 1000039002,
        VideoEncodeH265PictureInfoKHR                                       = 1000039003,
        VideoEncodeH265DpbSlotInfoKHR                                       = 1000039004,
        VideoEncodeH265NaluSliceSegmentInfoKHR                              = 1000039005,
        VideoEncodeH265GopRemainingFrameInfoKHR                             = 1000039006,
        VideoEncodeH265ProfileInfoKHR                                       = 1000039007,
        VideoEncodeH265RateControlInfoKHR                                   = 1000039009,
        VideoEncodeH265RateControlLayerInfoKHR                              = 1000039010,
        VideoEncodeH265SessionCreateInfoKHR                                 = 1000039011,
        VideoEncodeH265QualityLevelPropertiesKHR                            = 1000039012,
        VideoEncodeH265SessionParametersGetInfoKHR                          = 1000039013,
        VideoEncodeH265SessionParametersFeedbackInfoKHR                     = 1000039014,
        VideoDecodeH264CapabilitiesKHR                                      = 1000040000,
        VideoDecodeH264PictureInfoKHR                                       = 1000040001,
        VideoDecodeH264ProfileInfoKHR                                       = 1000040003,
        VideoDecodeH264SessionParametersCreateInfoKHR                       = 1000040004,
        VideoDecodeH264SessionParametersAddInfoKHR                          = 1000040005,
        VideoDecodeH264DpbSlotInfoKHR                                       = 1000040006,
        TextureLodGatherFormatPropertiesAMD                                 = 1000041000,
        StreamDescriptorSurfaceCreateInfoGgp                                = 1000049000,
        PhysicalDeviceCornerSampledImageFeaturesNV                          = 1000050000,
        PrivateVendorInfoPlaceholderOffset0NV                               = 1000051000,
        ExternalMemoryImageCreateInfoNV                                     = 1000056000,
        ExportMemoryAllocateInfoNV                                          = 1000056001,
        ImportMemoryWin32HandleInfoNV                                       = 1000057000,
        ExportMemoryWin32HandleInfoNV                                       = 1000057001,
        Win32KeyedMutexAcquireReleaseInfoNV                                 = 1000058000,
        ValidationFlagsEXT                                                  = 1000061000,
        ViSurfaceCreateInfoNn                                               = 1000062000,
        ImageViewAstcDecodeModeEXT                                          = 1000067000,
        PhysicalDeviceAstcDecodeFeaturesEXT                                 = 1000067001,
        ImportMemoryWin32HandleInfoKHR                                      = 1000073000,
        ExportMemoryWin32HandleInfoKHR                                      = 1000073001,
        MemoryWin32HandlePropertiesKHR                                      = 1000073002,
        MemoryGetWin32HandleInfoKHR                                         = 1000073003,
        ImportMemoryFdInfoKHR                                               = 1000074000,
        MemoryFdPropertiesKHR                                               = 1000074001,
        MemoryGetFdInfoKHR                                                  = 1000074002,
        Win32KeyedMutexAcquireReleaseInfoKHR                                = 1000075000,
        ImportSemaphoreWin32HandleInfoKHR                                   = 1000078000,
        ExportSemaphoreWin32HandleInfoKHR                                   = 1000078001,
        D3d12FenceSubmitInfoKHR                                             = 1000078002,
        SemaphoreGetWin32HandleInfoKHR                                      = 1000078003,
        ImportSemaphoreFdInfoKHR                                            = 1000079000,
        SemaphoreGetFdInfoKHR                                               = 1000079001,
        CommandBufferInheritanceConditionalRenderingInfoEXT                 = 1000081000,
        PhysicalDeviceConditionalRenderingFeaturesEXT                       = 1000081001,
        ConditionalRenderingBeginInfoEXT                                    = 1000081002,
        PresentRegionsKHR                                                   = 1000084000,
        PipelineViewportWScalingStateCreateInfoNV                           = 1000087000,
        SurfaceCapabilities2EXT                                             = 1000090000,
        DisplayPowerInfoEXT                                                 = 1000091000,
        DeviceEventInfoEXT                                                  = 1000091001,
        DisplayEventInfoEXT                                                 = 1000091002,
        SwapchainCounterCreateInfoEXT                                       = 1000091003,
        PresentTimesInfoGOOGLE                                              = 1000092000,
        PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX               = 1000097000,
        MultiviewPerViewAttributesInfoNVX                                   = 1000044009,
        PipelineViewportSwizzleStateCreateInfoNV                            = 1000098000,
        PhysicalDeviceDiscardRectanglePropertiesEXT                         = 1000099000,
        PipelineDiscardRectangleStateCreateInfoEXT                          = 1000099001,
        PhysicalDeviceConservativeRasterizationPropertiesEXT                = 1000101000,
        PipelineRasterizationConservativeStateCreateInfoEXT                 = 1000101001,
        PhysicalDeviceDepthClipEnableFeaturesEXT                            = 1000102000,
        PipelineRasterizationDepthClipStateCreateInfoEXT                    = 1000102001,
        HdrMetadataEXT                                                      = 1000105000,
        PhysicalDeviceRelaxedLineRasterizationFeaturesIMG                   = 1000110000,
        SharedPresentSurfaceCapabilitiesKHR                                 = 1000111000,
        ImportFenceWin32HandleInfoKHR                                       = 1000114000,
        ExportFenceWin32HandleInfoKHR                                       = 1000114001,
        FenceGetWin32HandleInfoKHR                                          = 1000114002,
        ImportFenceFdInfoKHR                                                = 1000115000,
        FenceGetFdInfoKHR                                                   = 1000115001,
        PhysicalDevicePerformanceQueryFeaturesKHR                           = 1000116000,
        PhysicalDevicePerformanceQueryPropertiesKHR                         = 1000116001,
        QueryPoolPerformanceCreateInfoKHR                                   = 1000116002,
        PerformanceQuerySubmitInfoKHR                                       = 1000116003,
        AcquireProfilingLockInfoKHR                                         = 1000116004,
        PerformanceCounterKHR                                               = 1000116005,
        PerformanceCounterDescriptionKHR                                    = 1000116006,
        PerformanceQueryReservationInfoKHR                                  = 1000116007,
        PhysicalDeviceSurfaceInfo2KHR                                       = 1000119000,
        SurfaceCapabilities2KHR                                             = 1000119001,
        SurfaceFormat2KHR                                                   = 1000119002,
        DisplayProperties2KHR                                               = 1000121000,
        DisplayPlaneProperties2KHR                                          = 1000121001,
        DisplayModeProperties2KHR                                           = 1000121002,
        DisplayPlaneInfo2KHR                                                = 1000121003,
        DisplayPlaneCapabilities2KHR                                        = 1000121004,
        IosSurfaceCreateInfoMVK                                             = 1000122000,
        MacosSurfaceCreateInfoMVK                                           = 1000123000,
        DebugUtilsObjectNameInfoEXT                                         = 1000128000,
        DebugUtilsObjectTagInfoEXT                                          = 1000128001,
        DebugUtilsLabelEXT                                                  = 1000128002,
        DebugUtilsMessengerCallbackDataEXT                                  = 1000128003,
        DebugUtilsMessengerCreateInfoEXT                                    = 1000128004,
        ANDROIDHardwareBufferUsageANDROID                                   = 1000129000,
        ANDROIDHardwareBufferPropertiesANDROID                              = 1000129001,
        ANDROIDHardwareBufferFormatPropertiesANDROID                        = 1000129002,
        ImportANDROIDHardwareBufferInfoANDROID                              = 1000129003,
        MemoryGetANDROIDHardwareBufferInfoANDROID                           = 1000129004,
        ExternalFormatANDROID                                               = 1000129005,
        ANDROIDHardwareBufferFormatProperties2ANDROID                       = 1000129006,
        PhysicalDeviceGpaFeaturesAMD                                        = 1000133000,
        PhysicalDeviceGpaPropertiesAMD                                      = 1000133001,
        GpaSampleBeginInfoAMD                                               = 1000133002,
        GpaSessionCreateInfoAMD                                             = 1000133003,
        GpaDeviceClockModeInfoAMD                                           = 1000133004,
        PhysicalDeviceGpaProperties2AMD                                     = 1000133005,
        GpaDeviceGetClockInfoAMD                                            = 1000133006,
        PhysicalDeviceShaderEnqueueFeaturesAmdx                             = 1000134000,
        PhysicalDeviceShaderEnqueuePropertiesAmdx                           = 1000134001,
        ExecutionGraphPipelineScratchSizeAmdx                               = 1000134002,
        ExecutionGraphPipelineCreateInfoAmdx                                = 1000134003,
        PipelineShaderStageNodeCreateInfoAmdx                               = 1000134004,
        TexelBufferDescriptorInfoEXT                                        = 1000135000,
        ImageDescriptorInfoEXT                                              = 1000135001,
        ResourceDescriptorInfoEXT                                           = 1000135002,
        BindHeapInfoEXT                                                     = 1000135003,
        PushDataInfoEXT                                                     = 1000135004,
        DescriptorSetAndBindingMappingEXT                                   = 1000135005,
        ShaderDescriptorSetAndBindingMappingInfoEXT                         = 1000135006,
        OpaqueCaptureDataCreateInfoEXT                                      = 1000135007,
        PhysicalDeviceDescriptorHeapPropertiesEXT                           = 1000135008,
        PhysicalDeviceDescriptorHeapFeaturesEXT                             = 1000135009,
        CommandBufferInheritanceDescriptorHeapInfoEXT                       = 1000135010,
        SamplerCustomBorderColorIndexCreateInfoEXT                          = 1000135011,
        IndirectCommandsLayoutPushDataTokenNV                               = 1000135012,
        SubsampledImageFormatPropertiesEXT                                  = 1000135013,
        PhysicalDeviceDescriptorHeapTensorPropertiesARM                     = 1000135014,
        AttachmentSampleCountInfoAMD                                        = 1000044008,
        PhysicalDeviceShaderBfloat16FeaturesKHR                             = 1000141000,
        SampleLocationsInfoEXT                                              = 1000143000,
        RenderPassSampleLocationsBeginInfoEXT                               = 1000143001,
        PipelineSampleLocationsStateCreateInfoEXT                           = 1000143002,
        PhysicalDeviceSampleLocationsPropertiesEXT                          = 1000143003,
        MultisamplePropertiesEXT                                            = 1000143004,
        PhysicalDeviceBlendOperationAdvancedFeaturesEXT                     = 1000148000,
        PhysicalDeviceBlendOperationAdvancedPropertiesEXT                   = 1000148001,
        PipelineColorBlendAdvancedStateCreateInfoEXT                        = 1000148002,
        PipelineCoverageToColorStateCreateInfoNV                            = 1000149000,
        WriteDescriptorSetAccelerationStructureKHR                          = 1000150007,
        AccelerationStructureBuildGeometryInfoKHR                           = 1000150000,
        AccelerationStructureDeviceAddressInfoKHR                           = 1000150002,
        AccelerationStructureGeometryAabbsDataKHR                           = 1000150003,
        AccelerationStructureGeometryInstancesDataKHR                       = 1000150004,
        AccelerationStructureGeometryTrianglesDataKHR                       = 1000150005,
        AccelerationStructureGeometryKHR                                    = 1000150006,
        AccelerationStructureVersionInfoKHR                                 = 1000150009,
        CopyAccelerationStructureInfoKHR                                    = 1000150010,
        CopyAccelerationStructureToMemoryInfoKHR                            = 1000150011,
        CopyMemoryToAccelerationStructureInfoKHR                            = 1000150012,
        PhysicalDeviceAccelerationStructureFeaturesKHR                      = 1000150013,
        PhysicalDeviceAccelerationStructurePropertiesKHR                    = 1000150014,
        AccelerationStructureCreateInfoKHR                                  = 1000150017,
        AccelerationStructureBuildSizesInfoKHR                              = 1000150020,
        PhysicalDeviceRayTracingPipelineFeaturesKHR                         = 1000347000,
        PhysicalDeviceRayTracingPipelinePropertiesKHR                       = 1000347001,
        RayTracingPipelineCreateInfoKHR                                     = 1000150015,
        RayTracingShaderGroupCreateInfoKHR                                  = 1000150016,
        RayTracingPipelineInterfaceCreateInfoKHR                            = 1000150018,
        PhysicalDeviceRayQueryFeaturesKHR                                   = 1000348013,
        PipelineCoverageModulationStateCreateInfoNV                         = 1000152000,
        PhysicalDeviceShaderSmBuiltinsFeaturesNV                            = 1000154000,
        PhysicalDeviceShaderSmBuiltinsPropertiesNV                          = 1000154001,
        DrmFormatModifierPropertiesListEXT                                  = 1000158000,
        PhysicalDeviceImageDrmFormatModifierInfoEXT                         = 1000158002,
        ImageDrmFormatModifierListCreateInfoEXT                             = 1000158003,
        ImageDrmFormatModifierExplicitCreateInfoEXT                         = 1000158004,
        ImageDrmFormatModifierPropertiesEXT                                 = 1000158005,
        DrmFormatModifierPropertiesList2EXT                                 = 1000158006,
        ValidationCacheCreateInfoEXT                                        = 1000160000,
        ShaderModuleValidationCacheCreateInfoEXT                            = 1000160001,
        PhysicalDevicePortabilitySubsetFeaturesKHR                          = 1000163000,
        PhysicalDevicePortabilitySubsetPropertiesKHR                        = 1000163001,
        PipelineViewportShadingRateImageStateCreateInfoNV                   = 1000164000,
        PhysicalDeviceShadingRateImageFeaturesNV                            = 1000164001,
        PhysicalDeviceShadingRateImagePropertiesNV                          = 1000164002,
        PipelineViewportCoarseSampleOrderStateCreateInfoNV                  = 1000164005,
        RayTracingPipelineCreateInfoNV                                      = 1000165000,
        AccelerationStructureCreateInfoNV                                   = 1000165001,
        GeometryNV                                                          = 1000165003,
        GeometryTrianglesNV                                                 = 1000165004,
        GeometryAabbNV                                                      = 1000165005,
        BindAccelerationStructureMemoryInfoNV                               = 1000165006,
        WriteDescriptorSetAccelerationStructureNV                           = 1000165007,
        AccelerationStructureMemoryRequirementsInfoNV                       = 1000165008,
        PhysicalDeviceRayTracingPropertiesNV                                = 1000165009,
        RayTracingShaderGroupCreateInfoNV                                   = 1000165011,
        AccelerationStructureInfoNV                                         = 1000165012,
        PhysicalDeviceRepresentativeFragmentTestFeaturesNV                  = 1000166000,
        PipelineRepresentativeFragmentTestStateCreateInfoNV                 = 1000166001,
        PhysicalDeviceImageViewImageFormatInfoEXT                           = 1000170000,
        FilterCubicImageViewImageFormatPropertiesEXT                        = 1000170001,
        PhysicalDeviceCooperativeMatrixConversionFeaturesQCOM               = 1000172000,
        PhysicalDeviceElapsedTimerQueryFeaturesQCOM                         = 1000173000,
        ImportMemoryHostPointerInfoEXT                                      = 1000178000,
        MemoryHostPointerPropertiesEXT                                      = 1000178001,
        PhysicalDeviceExternalMemoryHostPropertiesEXT                       = 1000178002,
        PhysicalDeviceShaderClockFeaturesKHR                                = 1000181000,
        PipelineCompilerControlCreateInfoAMD                                = 1000183000,
        PhysicalDeviceShaderCorePropertiesAMD                               = 1000185000,
        VideoDecodeH265CapabilitiesKHR                                      = 1000187000,
        VideoDecodeH265SessionParametersCreateInfoKHR                       = 1000187001,
        VideoDecodeH265SessionParametersAddInfoKHR                          = 1000187002,
        VideoDecodeH265ProfileInfoKHR                                       = 1000187003,
        VideoDecodeH265PictureInfoKHR                                       = 1000187004,
        VideoDecodeH265DpbSlotInfoKHR                                       = 1000187005,
        DeviceMemoryOverallocationCreateInfoAMD                             = 1000189000,
        PhysicalDeviceVertexAttributeDivisorPropertiesEXT                   = 1000190000,
        PresentFrameTokenGgp                                                = 1000191000,
        PhysicalDeviceMeshShaderFeaturesNV                                  = 1000202000,
        PhysicalDeviceMeshShaderPropertiesNV                                = 1000202001,
        PhysicalDeviceShaderImageFootprintFeaturesNV                        = 1000204000,
        PipelineViewportExclusiveScissorStateCreateInfoNV                   = 1000205000,
        PhysicalDeviceExclusiveScissorFeaturesNV                            = 1000205002,
        CheckpointDataNV                                                    = 1000206000,
        QueueFamilyCheckpointPropertiesNV                                   = 1000206001,
        QueueFamilyCheckpointProperties2NV                                  = 1000314008,
        CheckpointData2NV                                                   = 1000314009,
        PhysicalDevicePresentTimingFeaturesEXT                              = 1000208000,
        SwapchainTimingPropertiesEXT                                        = 1000208001,
        SwapchainTimeDomainPropertiesEXT                                    = 1000208002,
        PresentTimingsInfoEXT                                               = 1000208003,
        PresentTimingInfoEXT                                                = 1000208004,
        PastPresentationTimingInfoEXT                                       = 1000208005,
        PastPresentationTimingPropertiesEXT                                 = 1000208006,
        PastPresentationTimingEXT                                           = 1000208007,
        PresentTimingSurfaceCapabilitiesEXT                                 = 1000208008,
        SwapchainCalibratedTimestampInfoEXT                                 = 1000208009,
        PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL                  = 1000209000,
        QueryPoolPerformanceQueryCreateInfoINTEL                            = 1000210000,
        InitializePerformanceApiInfoINTEL                                   = 1000210001,
        PerformanceMarkerInfoINTEL                                          = 1000210002,
        PerformanceStreamMarkerInfoINTEL                                    = 1000210003,
        PerformanceOverrideInfoINTEL                                        = 1000210004,
        PerformanceConfigurationAcquireInfoINTEL                            = 1000210005,
        PhysicalDevicePciBusInfoPropertiesEXT                               = 1000212000,
        DisplayNativeHdrSurfaceCapabilitiesAMD                              = 1000213000,
        SwapchainDisplayNativeHdrCreateInfoAMD                              = 1000213001,
        ImagepipeSurfaceCreateInfoFUCHSIA                                   = 1000214000,
        MetalSurfaceCreateInfoEXT                                           = 1000217000,
        PhysicalDeviceFragmentDensityMapFeaturesEXT                         = 1000218000,
        PhysicalDeviceFragmentDensityMapPropertiesEXT                       = 1000218001,
        RenderPassFragmentDensityMapCreateInfoEXT                           = 1000218002,
        RenderingFragmentDensityMapAttachmentInfoEXT                        = 1000044007,
        FragmentShadingRateAttachmentInfoKHR                                = 1000226000,
        PipelineFragmentShadingRateStateCreateInfoKHR                       = 1000226001,
        PhysicalDeviceFragmentShadingRatePropertiesKHR                      = 1000226002,
        PhysicalDeviceFragmentShadingRateFeaturesKHR                        = 1000226003,
        PhysicalDeviceFragmentShadingRateKHR                                = 1000226004,
        RenderingFragmentShadingRateAttachmentInfoKHR                       = 1000044006,
        PhysicalDeviceShaderCoreProperties2AMD                              = 1000227000,
        PhysicalDeviceCoherentMemoryFeaturesAMD                             = 1000229000,
        PhysicalDeviceShaderConstantDataFeaturesKHR                         = 1000231000,
        PhysicalDeviceShaderAbortFeaturesKHR                                = 1000233000,
        DeviceFaultShaderAbortMessageInfoKHR                                = 1000233001,
        PhysicalDeviceShaderAbortPropertiesKHR                              = 1000233002,
        PhysicalDeviceShaderImageAtomicInt64FeaturesEXT                     = 1000234000,
        PhysicalDeviceShaderQuadControlFeaturesKHR                          = 1000235000,
        PhysicalDeviceMemoryBudgetPropertiesEXT                             = 1000237000,
        PhysicalDeviceMemoryPriorityFeaturesEXT                             = 1000238000,
        MemoryPriorityAllocateInfoEXT                                       = 1000238001,
        SurfaceProtectedCapabilitiesKHR                                     = 1000239000,
        PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV            = 1000240000,
        PhysicalDeviceBufferDeviceAddressFeaturesEXT                        = 1000244000,
        BufferDeviceAddressCreateInfoEXT                                    = 1000244002,
        ValidationFeaturesEXT                                               = 1000247000,
        PhysicalDevicePresentWaitFeaturesKHR                                = 1000248000,
        PhysicalDeviceCooperativeMatrixFeaturesNV                           = 1000249000,
        CooperativeMatrixPropertiesNV                                       = 1000249001,
        PhysicalDeviceCooperativeMatrixPropertiesNV                         = 1000249002,
        PhysicalDeviceCoverageReductionModeFeaturesNV                       = 1000250000,
        PipelineCoverageReductionStateCreateInfoNV                          = 1000250001,
        FramebufferMixedSamplesCombinationNV                                = 1000250002,
        PhysicalDeviceFragmentShaderInterlockFeaturesEXT                    = 1000251000,
        PhysicalDeviceYcbcrImageArraysFeaturesEXT                           = 1000252000,
        PhysicalDeviceProvokingVertexFeaturesEXT                            = 1000254000,
        PipelineRasterizationProvokingVertexStateCreateInfoEXT              = 1000254001,
        PhysicalDeviceProvokingVertexPropertiesEXT                          = 1000254002,
        SurfaceFullScreenExclusiveInfoEXT                                   = 1000255000,
        SurfaceCapabilitiesFullScreenExclusiveEXT                           = 1000255002,
        SurfaceFullScreenExclusiveWin32InfoEXT                              = 1000255001,
        HeadlessSurfaceCreateInfoEXT                                        = 1000256000,
        PhysicalDeviceShaderAtomicFloatFeaturesEXT                          = 1000260000,
        PhysicalDeviceExtendedDynamicStateFeaturesEXT                       = 1000267000,
        PhysicalDevicePipelineExecutablePropertiesFeaturesKHR               = 1000269000,
        PipelineInfoKHR                                                     = 1000269001,
        PipelineExecutablePropertiesKHR                                     = 1000269002,
        PipelineExecutableInfoKHR                                           = 1000269003,
        PipelineExecutableStatisticKHR                                      = 1000269004,
        PipelineExecutableInternalRepresentationKHR                         = 1000269005,
        PhysicalDeviceMapMemoryPlacedFeaturesEXT                            = 1000272000,
        PhysicalDeviceMapMemoryPlacedPropertiesEXT                          = 1000272001,
        MemoryMapPlacedInfoEXT                                              = 1000272002,
        PhysicalDeviceShaderAtomicFloat2FeaturesEXT                         = 1000273000,
        PhysicalDeviceDeviceGeneratedCommandsPropertiesNV                   = 1000277000,
        GraphicsShaderGroupCreateInfoNV                                     = 1000277001,
        GraphicsPipelineShaderGroupsCreateInfoNV                            = 1000277002,
        IndirectCommandsLayoutTokenNV                                       = 1000277003,
        IndirectCommandsLayoutCreateInfoNV                                  = 1000277004,
        GeneratedCommandsInfoNV                                             = 1000277005,
        GeneratedCommandsMemoryRequirementsInfoNV                           = 1000277006,
        PhysicalDeviceDeviceGeneratedCommandsFeaturesNV                     = 1000277007,
        PhysicalDeviceInheritedViewportScissorFeaturesNV                    = 1000278000,
        CommandBufferInheritanceViewportScissorInfoNV                       = 1000278001,
        PhysicalDeviceTexelBufferAlignmentFeaturesEXT                       = 1000281000,
        CommandBufferInheritanceRenderPassTransformInfoQCOM                 = 1000282000,
        RenderPassTransformBeginInfoQCOM                                    = 1000282001,
        PhysicalDeviceDepthBiasControlFeaturesEXT                           = 1000283000,
        DepthBiasInfoEXT                                                    = 1000283001,
        DepthBiasRepresentationInfoEXT                                      = 1000283002,
        PhysicalDeviceDeviceMemoryReportFeaturesEXT                         = 1000284000,
        DeviceDeviceMemoryReportCreateInfoEXT                               = 1000284001,
        DeviceMemoryReportCallbackDataEXT                                   = 1000284002,
        SamplerCustomBorderColorCreateInfoEXT                               = 1000287000,
        PhysicalDeviceCustomBorderColorPropertiesEXT                        = 1000287001,
        PhysicalDeviceCustomBorderColorFeaturesEXT                          = 1000287002,
        PhysicalDeviceTextureCompressionAstcX3DFeaturesEXT                  = 1000288000,
        PipelineLibraryCreateInfoKHR                                        = 1000290000,
        PhysicalDevicePresentBarrierFeaturesNV                              = 1000292000,
        SurfaceCapabilitiesPresentBarrierNV                                 = 1000292001,
        SwapchainPresentBarrierCreateInfoNV                                 = 1000292002,
        PresentIdKHR                                                        = 1000294000,
        PhysicalDevicePresentIdFeaturesKHR                                  = 1000294001,
        VideoEncodeInfoKHR                                                  = 1000299000,
        VideoEncodeRateControlInfoKHR                                       = 1000299001,
        VideoEncodeRateControlLayerInfoKHR                                  = 1000299002,
        VideoEncodeCapabilitiesKHR                                          = 1000299003,
        VideoEncodeUsageInfoKHR                                             = 1000299004,
        QueryPoolVideoEncodeFeedbackCreateInfoKHR                           = 1000299005,
        PhysicalDeviceVideoEncodeQualityLevelInfoKHR                        = 1000299006,
        VideoEncodeQualityLevelPropertiesKHR                                = 1000299007,
        VideoEncodeQualityLevelInfoKHR                                      = 1000299008,
        VideoEncodeSessionParametersGetInfoKHR                              = 1000299009,
        VideoEncodeSessionParametersFeedbackInfoKHR                         = 1000299010,
        PhysicalDeviceDiagnosticsConfigFeaturesNV                           = 1000300000,
        DeviceDiagnosticsConfigCreateInfoNV                                 = 1000300001,
        PerfHintInfoQCOM                                                    = 1000302000,
        PhysicalDeviceQueuePerfHintFeaturesQCOM                             = 1000302001,
        PhysicalDeviceQueuePerfHintPropertiesQCOM                           = 1000302002,
        PhysicalDeviceImageProcessing3FeaturesQCOM                          = 1000303000,
        PhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM                  = 1000304000,
        PhysicalDeviceShaderMultipleWaitQueuesPropertiesQCOM                = 1000304001,
        PhysicalDeviceShaderSplitBarrierFeaturesEXT                         = 1000305000,
        PhysicalDeviceShaderSplitBarrierPropertiesEXT                       = 1000305001,
        CudaModuleCreateInfoNV                                              = 1000307000,
        CudaFunctionCreateInfoNV                                            = 1000307001,
        CudaLaunchInfoNV                                                    = 1000307002,
        PhysicalDeviceCudaKernelLaunchFeaturesNV                            = 1000307003,
        PhysicalDeviceCudaKernelLaunchPropertiesNV                          = 1000307004,
        RefreshObjectListKHR                                                = 1000308000,
        PhysicalDeviceTileShadingFeaturesQCOM                               = 1000309000,
        PhysicalDeviceTileShadingPropertiesQCOM                             = 1000309001,
        RenderPassTileShadingCreateInfoQCOM                                 = 1000309002,
        PerTileBeginInfoQCOM                                                = 1000309003,
        PerTileEndInfoQCOM                                                  = 1000309004,
        DispatchTileInfoQCOM                                                = 1000309005,
        QueryLowLatencySupportNV                                            = 1000310000,
        ExportMetalObjectCreateInfoEXT                                      = 1000311000,
        ExportMetalObjectsInfoEXT                                           = 1000311001,
        ExportMetalDeviceInfoEXT                                            = 1000311002,
        ExportMetalCommandQueueInfoEXT                                      = 1000311003,
        ExportMetalBufferInfoEXT                                            = 1000311004,
        ImportMetalBufferInfoEXT                                            = 1000311005,
        ExportMetalTextureInfoEXT                                           = 1000311006,
        ImportMetalTextureInfoEXT                                           = 1000311007,
        ExportMetalIoSurfaceInfoEXT                                         = 1000311008,
        ImportMetalIoSurfaceInfoEXT                                         = 1000311009,
        ExportMetalSharedEventInfoEXT                                       = 1000311010,
        ImportMetalSharedEventInfoEXT                                       = 1000311011,
        PhysicalDeviceDescriptorBufferPropertiesEXT                         = 1000316000,
        PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT               = 1000316001,
        PhysicalDeviceDescriptorBufferFeaturesEXT                           = 1000316002,
        DescriptorAddressInfoEXT                                            = 1000316003,
        DescriptorGetInfoEXT                                                = 1000316004,
        BufferCaptureDescriptorDataInfoEXT                                  = 1000316005,
        ImageCaptureDescriptorDataInfoEXT                                   = 1000316006,
        ImageViewCaptureDescriptorDataInfoEXT                               = 1000316007,
        SamplerCaptureDescriptorDataInfoEXT                                 = 1000316008,
        OpaqueCaptureDescriptorDataCreateInfoEXT                            = 1000316010,
        DescriptorBufferBindingInfoEXT                                      = 1000316011,
        DescriptorBufferBindingPushDescriptorBufferHandleEXT                = 1000316012,
        AccelerationStructureCaptureDescriptorDataInfoEXT                   = 1000316009,
        DeviceMemoryCopyKHR                                                 = 1000318000,
        CopyDeviceMemoryInfoKHR                                             = 1000318001,
        DeviceMemoryImageCopyKHR                                            = 1000318002,
        CopyDeviceMemoryImageInfoKHR                                        = 1000318003,
        MemoryRangeBarriersInfoKHR                                          = 1000318004,
        MemoryRangeBarrierKHR                                               = 1000318005,
        PhysicalDeviceDeviceAddressCommandsFeaturesKHR                      = 1000318006,
        BindIndexBuffer3InfoKHR                                             = 1000318007,
        BindVertexBuffer3InfoKHR                                            = 1000318008,
        DrawIndirect2InfoKHR                                                = 1000318009,
        DrawIndirectCount2InfoKHR                                           = 1000318010,
        DispatchIndirect2InfoKHR                                            = 1000318011,
        ConditionalRenderingBeginInfo2EXT                                   = 1000318012,
        BindTransformFeedbackBuffer2InfoEXT                                 = 1000318013,
        MemoryMarkerInfoAMD                                                 = 1000318014,
        AccelerationStructureCreateInfo2KHR                                 = 1000318015,
        PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT                    = 1000320000,
        PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT                  = 1000320001,
        GraphicsPipelineLibraryCreateInfoEXT                                = 1000320002,
        PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD            = 1000321000,
        PhysicalDeviceFragmentShaderBarycentricFeaturesKHR                  = 1000203000,
        PhysicalDeviceFragmentShaderBarycentricPropertiesKHR                = 1000322000,
        PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR           = 1000323000,
        PhysicalDeviceFragmentShadingRateEnumsPropertiesNV                  = 1000326000,
        PhysicalDeviceFragmentShadingRateEnumsFeaturesNV                    = 1000326001,
        PipelineFragmentShadingRateEnumStateCreateInfoNV                    = 1000326002,
        AccelerationStructureGeometryMotionTrianglesDataNV                  = 1000327000,
        PhysicalDeviceRayTracingMotionBlurFeaturesNV                        = 1000327001,
        AccelerationStructureMotionInfoNV                                   = 1000327002,
        PhysicalDeviceMeshShaderFeaturesEXT                                 = 1000328000,
        PhysicalDeviceMeshShaderPropertiesEXT                               = 1000328001,
        PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT                      = 1000330000,
        PhysicalDeviceFragmentDensityMap2FeaturesEXT                        = 1000332000,
        PhysicalDeviceFragmentDensityMap2PropertiesEXT                      = 1000332001,
        CopyCommandTransformInfoQCOM                                        = 1000333000,
        PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR              = 1000336000,
        PhysicalDeviceImageCompressionControlFeaturesEXT                    = 1000338000,
        ImageCompressionControlEXT                                          = 1000338001,
        ImageCompressionPropertiesEXT                                       = 1000338004,
        PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT               = 1000339000,
        PhysicalDevice4444FormatsFeaturesEXT                                = 1000340000,
        PhysicalDeviceFaultFeaturesEXT                                      = 1000341000,
        DeviceFaultCountsEXT                                                = 1000341001,
        DeviceFaultInfoEXT                                                  = 1000341002,
        PhysicalDeviceRgba10x6FormatsFeaturesEXT                            = 1000344000,
        DirectfbSurfaceCreateInfoEXT                                        = 1000346000,
        PhysicalDeviceVertexInputDynamicStateFeaturesEXT                    = 1000352000,
        VertexInputBindingDescription2EXT                                   = 1000352001,
        VertexInputAttributeDescription2EXT                                 = 1000352002,
        PhysicalDeviceDrmPropertiesEXT                                      = 1000353000,
        PhysicalDeviceAddressBindingReportFeaturesEXT                       = 1000354000,
        DeviceAddressBindingCallbackDataEXT                                 = 1000354001,
        PhysicalDeviceDepthClipControlFeaturesEXT                           = 1000355000,
        PipelineViewportDepthClipControlCreateInfoEXT                       = 1000355001,
        PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT               = 1000356000,
        ImportMemoryZirconHandleInfoFUCHSIA                                 = 1000364000,
        MemoryZirconHandlePropertiesFUCHSIA                                 = 1000364001,
        MemoryGetZirconHandleInfoFUCHSIA                                    = 1000364002,
        ImportSemaphoreZirconHandleInfoFUCHSIA                              = 1000365000,
        SemaphoreGetZirconHandleInfoFUCHSIA                                 = 1000365001,
        BufferCollectionCreateInfoFUCHSIA                                   = 1000366000,
        ImportMemoryBufferCollectionFUCHSIA                                 = 1000366001,
        BufferCollectionImageCreateInfoFUCHSIA                              = 1000366002,
        BufferCollectionPropertiesFUCHSIA                                   = 1000366003,
        BufferConstraintsInfoFUCHSIA                                        = 1000366004,
        BufferCollectionBufferCreateInfoFUCHSIA                             = 1000366005,
        ImageConstraintsInfoFUCHSIA                                         = 1000366006,
        ImageFormatConstraintsInfoFUCHSIA                                   = 1000366007,
        SysmemColorSpaceFUCHSIA                                             = 1000366008,
        BufferCollectionConstraintsInfoFUCHSIA                              = 1000366009,
        SubpassShadingPipelineCreateInfoHUAWEI                              = 1000369000,
        PhysicalDeviceSubpassShadingFeaturesHUAWEI                          = 1000369001,
        PhysicalDeviceSubpassShadingPropertiesHUAWEI                        = 1000369002,
        PhysicalDeviceInvocationMaskFeaturesHUAWEI                          = 1000370000,
        MemoryGetRemoteAddressInfoNV                                        = 1000371000,
        PhysicalDeviceExternalMemoryRdmaFeaturesNV                          = 1000371001,
        PipelinePropertiesIdentifierEXT                                     = 1000372000,
        PhysicalDevicePipelinePropertiesFeaturesEXT                         = 1000372001,
        ImportFenceSciSyncInfoNV                                            = 1000373000,
        ExportFenceSciSyncInfoNV                                            = 1000373001,
        FenceGetSciSyncInfoNV                                               = 1000373002,
        SciSyncAttributesInfoNV                                             = 1000373003,
        ImportSemaphoreSciSyncInfoNV                                        = 1000373004,
        ExportSemaphoreSciSyncInfoNV                                        = 1000373005,
        SemaphoreGetSciSyncInfoNV                                           = 1000373006,
        PhysicalDeviceExternalSciSyncFeaturesNV                             = 1000373007,
        ImportMemorySciBufInfoNV                                            = 1000374000,
        ExportMemorySciBufInfoNV                                            = 1000374001,
        MemoryGetSciBufInfoNV                                               = 1000374002,
        MemorySciBufPropertiesNV                                            = 1000374003,
        PhysicalDeviceExternalMemorySciBufFeaturesNV                        = 1000374004,
        PhysicalDeviceFrameBoundaryFeaturesEXT                              = 1000375000,
        FrameBoundaryEXT                                                    = 1000375001,
        PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT          = 1000376000,
        SubpassResolvePerformanceQueryEXT                                   = 1000376001,
        MultisampledRenderToSingleSampledInfoEXT                            = 1000376002,
        PhysicalDeviceExtendedDynamicState2FeaturesEXT                      = 1000377000,
        ScreenSurfaceCreateInfoQNX                                          = 1000378000,
        PhysicalDeviceColorWriteEnableFeaturesEXT                           = 1000381000,
        PipelineColorWriteCreateInfoEXT                                     = 1000381001,
        PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT                   = 1000382000,
        PhysicalDeviceRayTracingMaintenance1FeaturesKHR                     = 1000386000,
        PhysicalDeviceShaderUntypedPointersFeaturesKHR                      = 1000387000,
        PhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE                 = 1000390000,
        VideoEncodeRgbConversionCapabilitiesVALVE                           = 1000390001,
        VideoEncodeProfileRgbConversionInfoVALVE                            = 1000390002,
        VideoEncodeSessionRgbConversionCreateInfoVALVE                      = 1000390003,
        PhysicalDeviceImageViewMinLodFeaturesEXT                            = 1000391000,
        ImageViewMinLodCreateInfoEXT                                        = 1000391001,
        PhysicalDeviceMultiDrawFeaturesEXT                                  = 1000392000,
        PhysicalDeviceMultiDrawPropertiesEXT                                = 1000392001,
        PhysicalDeviceImageX2DViewOfX3DFeaturesEXT                          = 1000393000,
        PhysicalDeviceShaderTileImageFeaturesEXT                            = 1000395000,
        PhysicalDeviceShaderTileImagePropertiesEXT                          = 1000395001,
        MicromapBuildInfoEXT                                                = 1000396000,
        MicromapVersionInfoEXT                                              = 1000396001,
        CopyMicromapInfoEXT                                                 = 1000396002,
        CopyMicromapToMemoryInfoEXT                                         = 1000396003,
        CopyMemoryToMicromapInfoEXT                                         = 1000396004,
        PhysicalDeviceOpacityMicromapFeaturesEXT                            = 1000396005,
        PhysicalDeviceOpacityMicromapPropertiesEXT                          = 1000396006,
        MicromapCreateInfoEXT                                               = 1000396007,
        MicromapBuildSizesInfoEXT                                           = 1000396008,
        AccelerationStructureTrianglesOpacityMicromapEXT                    = 1000396009,
        PhysicalDeviceDisplacementMicromapFeaturesNV                        = 1000397000,
        PhysicalDeviceDisplacementMicromapPropertiesNV                      = 1000397001,
        AccelerationStructureTrianglesDisplacementMicromapNV                = 1000397002,
        PhysicalDeviceClusterCullingShaderFeaturesHUAWEI                    = 1000404000,
        PhysicalDeviceClusterCullingShaderPropertiesHUAWEI                  = 1000404001,
        PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI                 = 1000404002,
        PhysicalDeviceBorderColorSwizzleFeaturesEXT                         = 1000411000,
        SamplerBorderColorComponentMappingCreateInfoEXT                     = 1000411001,
        PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT                  = 1000412000,
        PhysicalDeviceShaderCorePropertiesARM                               = 1000415000,
        DeviceQueueShaderCoreControlCreateInfoARM                           = 1000417000,
        PhysicalDeviceSchedulingControlsFeaturesARM                         = 1000417001,
        PhysicalDeviceSchedulingControlsPropertiesARM                       = 1000417002,
        DispatchParametersARM                                               = 1000417003,
        PhysicalDeviceSchedulingControlsDispatchParametersPropertiesARM     = 1000417004,
        PhysicalDeviceImageSlicedViewOfX3DFeaturesEXT                       = 1000418000,
        ImageViewSlicedCreateInfoEXT                                        = 1000418001,
        PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE                 = 1000420000,
        DescriptorSetBindingReferenceVALVE                                  = 1000420001,
        DescriptorSetLayoutHostMappingInfoVALVE                             = 1000420002,
        PhysicalDeviceNonSeamlessCubeMapFeaturesEXT                         = 1000422000,
        PhysicalDeviceRenderPassStripedFeaturesARM                          = 1000424000,
        PhysicalDeviceRenderPassStripedPropertiesARM                        = 1000424001,
        RenderPassStripeBeginInfoARM                                        = 1000424002,
        RenderPassStripeInfoARM                                             = 1000424003,
        RenderPassStripeSubmitInfoARM                                       = 1000424004,
        PhysicalDeviceCopyMemoryIndirectFeaturesNV                          = 1000426000,
        PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV              = 1000428000,
        ComputePipelineIndirectBufferInfoNV                                 = 1000428001,
        PipelineIndirectDeviceAddressInfoNV                                 = 1000428002,
        PhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV                = 1000429008,
        AccelerationStructureGeometryLinearSweptSpheresDataNV               = 1000429009,
        AccelerationStructureGeometrySpheresDataNV                          = 1000429010,
        PhysicalDeviceLinearColorAttachmentFeaturesNV                       = 1000430000,
        PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR                 = 1000434000,
        ApplicationParametersEXT                                            = 1000435000,
        PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT           = 1000437000,
        PhysicalDeviceImageProcessingFeaturesQCOM                           = 1000440000,
        PhysicalDeviceImageProcessingPropertiesQCOM                         = 1000440001,
        ImageViewSampleWeightCreateInfoQCOM                                 = 1000440002,
        PhysicalDeviceNestedCommandBufferFeaturesEXT                        = 1000451000,
        PhysicalDeviceNestedCommandBufferPropertiesEXT                      = 1000451001,
        NativeBufferUsageOHOS                                               = 1000452000,
        NativeBufferPropertiesOHOS                                          = 1000452001,
        NativeBufferFormatPropertiesOHOS                                    = 1000452002,
        ImportNativeBufferInfoOHOS                                          = 1000452003,
        MemoryGetNativeBufferInfoOHOS                                       = 1000452004,
        ExternalFormatOHOS                                                  = 1000452005,
        ExternalMemoryAcquireUnmodifiedEXT                                  = 1000453000,
        PhysicalDeviceExtendedDynamicState3FeaturesEXT                      = 1000455000,
        PhysicalDeviceExtendedDynamicState3PropertiesEXT                    = 1000455001,
        PhysicalDeviceSubpassMergeFeedbackFeaturesEXT                       = 1000458000,
        RenderPassCreationControlEXT                                        = 1000458001,
        RenderPassCreationFeedbackCreateInfoEXT                             = 1000458002,
        RenderPassSubpassFeedbackCreateInfoEXT                              = 1000458003,
        DirectDriverLoadingInfoLunarg                                       = 1000459000,
        DirectDriverLoadingListLunarg                                       = 1000459001,
        TensorCreateInfoARM                                                 = 1000460000,
        TensorViewCreateInfoARM                                             = 1000460001,
        BindTensorMemoryInfoARM                                             = 1000460002,
        WriteDescriptorSetTensorARM                                         = 1000460003,
        PhysicalDeviceTensorPropertiesARM                                   = 1000460004,
        TensorFormatPropertiesARM                                           = 1000460005,
        TensorDescriptionARM                                                = 1000460006,
        TensorMemoryRequirementsInfoARM                                     = 1000460007,
        TensorMemoryBarrierARM                                              = 1000460008,
        PhysicalDeviceTensorFeaturesARM                                     = 1000460009,
        DeviceTensorMemoryRequirementsARM                                   = 1000460010,
        CopyTensorInfoARM                                                   = 1000460011,
        TensorCopyARM                                                       = 1000460012,
        TensorDependencyInfoARM                                             = 1000460013,
        MemoryDedicatedAllocateInfoTensorARM                                = 1000460014,
        PhysicalDeviceExternalTensorInfoARM                                 = 1000460015,
        ExternalTensorPropertiesARM                                         = 1000460016,
        ExternalMemoryTensorCreateInfoARM                                   = 1000460017,
        PhysicalDeviceDescriptorBufferTensorFeaturesARM                     = 1000460018,
        PhysicalDeviceDescriptorBufferTensorPropertiesARM                   = 1000460019,
        DescriptorGetTensorInfoARM                                          = 1000460020,
        TensorCaptureDescriptorDataInfoARM                                  = 1000460021,
        TensorViewCaptureDescriptorDataInfoARM                              = 1000460022,
        FrameBoundaryTensorsARM                                             = 1000460023,
        PhysicalDeviceShaderModuleIdentifierFeaturesEXT                     = 1000462000,
        PhysicalDeviceShaderModuleIdentifierPropertiesEXT                   = 1000462001,
        PipelineShaderStageModuleIdentifierCreateInfoEXT                    = 1000462002,
        ShaderModuleIdentifierEXT                                           = 1000462003,
        PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT         = 1000342000,
        PhysicalDeviceOpticalFlowFeaturesNV                                 = 1000464000,
        PhysicalDeviceOpticalFlowPropertiesNV                               = 1000464001,
        OpticalFlowImageFormatInfoNV                                        = 1000464002,
        OpticalFlowImageFormatPropertiesNV                                  = 1000464003,
        OpticalFlowSessionCreateInfoNV                                      = 1000464004,
        OpticalFlowExecuteInfoNV                                            = 1000464005,
        OpticalFlowSessionCreatePrivateDataInfoNV                           = 1000464010,
        PhysicalDeviceLegacyDitheringFeaturesEXT                            = 1000465000,
        PhysicalDeviceExternalFormatResolveFeaturesANDROID                  = 1000468000,
        PhysicalDeviceExternalFormatResolvePropertiesANDROID                = 1000468001,
        ANDROIDHardwareBufferFormatResolvePropertiesANDROID                 = 1000468002,
        PhysicalDeviceAntiLagFeaturesAMD                                    = 1000476000,
        AntiLagDataAMD                                                      = 1000476001,
        AntiLagPresentationInfoAMD                                          = 1000476002,
        PhysicalDeviceDenseGeometryFormatFeaturesAmdx                       = 1000478000,
        AccelerationStructureDenseGeometryFormatTrianglesDataAmdx           = 1000478001,
        SurfaceCapabilitiesPresentId2KHR                                    = 1000479000,
        PresentId2KHR                                                       = 1000479001,
        PhysicalDevicePresentId2FeaturesKHR                                 = 1000479002,
        SurfaceCapabilitiesPresentWait2KHR                                  = 1000480000,
        PhysicalDevicePresentWait2FeaturesKHR                               = 1000480001,
        PresentWait2InfoKHR                                                 = 1000480002,
        PhysicalDeviceRayTracingPositionFetchFeaturesKHR                    = 1000481000,
        PhysicalDeviceShaderObjectFeaturesEXT                               = 1000482000,
        PhysicalDeviceShaderObjectPropertiesEXT                             = 1000482001,
        ShaderCreateInfoEXT                                                 = 1000482002,
        PhysicalDevicePipelineBinaryFeaturesKHR                             = 1000483000,
        PipelineBinaryCreateInfoKHR                                         = 1000483001,
        PipelineBinaryInfoKHR                                               = 1000483002,
        PipelineBinaryKeyKHR                                                = 1000483003,
        PhysicalDevicePipelineBinaryPropertiesKHR                           = 1000483004,
        ReleaseCapturedPipelineDataInfoKHR                                  = 1000483005,
        PipelineBinaryDataInfoKHR                                           = 1000483006,
        PipelineCreateInfoKHR                                               = 1000483007,
        DevicePipelineBinaryInternalCacheControlKHR                         = 1000483008,
        PipelineBinaryHandlesInfoKHR                                        = 1000483009,
        PhysicalDeviceTilePropertiesFeaturesQCOM                            = 1000484000,
        TilePropertiesQCOM                                                  = 1000484001,
        PhysicalDeviceAmigoProfilingFeaturesSEC                             = 1000485000,
        AmigoProfilingSubmitInfoSEC                                         = 1000485001,
        SurfacePresentModeKHR                                               = 1000274000,
        SurfacePresentScalingCapabilitiesKHR                                = 1000274001,
        SurfacePresentModeCompatibilityKHR                                  = 1000274002,
        PhysicalDeviceSwapchainMaintenance1FeaturesKHR                      = 1000275000,
        SwapchainPresentFenceInfoKHR                                        = 1000275001,
        SwapchainPresentModesCreateInfoKHR                                  = 1000275002,
        SwapchainPresentModeInfoKHR                                         = 1000275003,
        SwapchainPresentScalingCreateInfoKHR                                = 1000275004,
        ReleaseSwapchainImagesInfoKHR                                       = 1000275005,
        PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM                 = 1000488000,
        SemaphoreSciSyncPoolCreateInfoNV                                    = 1000489000,
        SemaphoreSciSyncCreateInfoNV                                        = 1000489001,
        PhysicalDeviceExternalSciSync2FeaturesNV                            = 1000489002,
        DeviceSemaphoreSciSyncPoolReservationCreateInfoNV                   = 1000489003,
        PhysicalDeviceRayTracingInvocationReorderFeaturesNV                 = 1000490000,
        PhysicalDeviceRayTracingInvocationReorderPropertiesNV               = 1000490001,
        PhysicalDeviceCooperativeVectorFeaturesNV                           = 1000491000,
        PhysicalDeviceCooperativeVectorPropertiesNV                         = 1000491001,
        CooperativeVectorPropertiesNV                                       = 1000491002,
        ConvertCooperativeVectorMatrixInfoNV                                = 1000491004,
        PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV                  = 1000492000,
        PhysicalDeviceExtendedSparseAddressSpacePropertiesNV                = 1000492001,
        PhysicalDeviceMutableDescriptorTypeFeaturesEXT                      = 1000351000,
        MutableDescriptorTypeCreateInfoEXT                                  = 1000351002,
        PhysicalDeviceLegacyVertexAttributesFeaturesEXT                     = 1000495000,
        PhysicalDeviceLegacyVertexAttributesPropertiesEXT                   = 1000495001,
        LayerSettingsCreateInfoEXT                                          = 1000496000,
        PhysicalDeviceShaderCoreBuiltinsFeaturesARM                         = 1000497000,
        PhysicalDeviceShaderCoreBuiltinsPropertiesARM                       = 1000497001,
        PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT          = 1000499000,
        PhysicalDeviceInternallySynchronizedQueuesFeaturesKHR               = 1000504000,
        LatencySleepModeInfoNV                                              = 1000505000,
        LatencySleepInfoNV                                                  = 1000505001,
        SetLatencyMarkerInfoNV                                              = 1000505002,
        GetLatencyMarkerInfoNV                                              = 1000505003,
        LatencyTimingsFrameReportNV                                         = 1000505004,
        LatencySubmissionPresentIdNV                                        = 1000505005,
        OutOfBandQueueTypeInfoNV                                            = 1000505006,
        SwapchainLatencyCreateInfoNV                                        = 1000505007,
        LatencySurfaceCapabilitiesNV                                        = 1000505008,
        PhysicalDeviceCooperativeMatrixFeaturesKHR                          = 1000506000,
        CooperativeMatrixPropertiesKHR                                      = 1000506001,
        PhysicalDeviceCooperativeMatrixPropertiesKHR                        = 1000506002,
        DataGraphPipelineCreateInfoARM                                      = 1000507000,
        DataGraphPipelineSessionCreateInfoARM                               = 1000507001,
        DataGraphPipelineResourceInfoARM                                    = 1000507002,
        DataGraphPipelineConstantARM                                        = 1000507003,
        DataGraphPipelineSessionMemoryRequirementsInfoARM                   = 1000507004,
        BindDataGraphPipelineSessionMemoryInfoARM                           = 1000507005,
        PhysicalDeviceDataGraphFeaturesARM                                  = 1000507006,
        DataGraphPipelineShaderModuleCreateInfoARM                          = 1000507007,
        DataGraphPipelinePropertyQueryResultARM                             = 1000507008,
        DataGraphPipelineInfoARM                                            = 1000507009,
        DataGraphPipelineCompilerControlCreateInfoARM                       = 1000507010,
        DataGraphPipelineSessionBindPointRequirementsInfoARM                = 1000507011,
        DataGraphPipelineSessionBindPointRequirementARM                     = 1000507012,
        DataGraphPipelineIdentifierCreateInfoARM                            = 1000507013,
        DataGraphPipelineDispatchInfoARM                                    = 1000507014,
        DataGraphProcessingEngineCreateInfoARM                              = 1000507016,
        QueueFamilyDataGraphProcessingEnginePropertiesARM                   = 1000507017,
        QueueFamilyDataGraphPropertiesARM                                   = 1000507018,
        PhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM           = 1000507019,
        DataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM        = 1000507015,
        QueueFamilyDataGraphTosaPropertiesARM                               = 1000508000,
        PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM               = 1000510000,
        MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM                  = 1000510001,
        PhysicalDeviceComputeShaderDerivativesFeaturesKHR                   = 1000201000,
        PhysicalDeviceComputeShaderDerivativesPropertiesKHR                 = 1000511000,
        VideoDecodeAv1CapabilitiesKHR                                       = 1000512000,
        VideoDecodeAv1PictureInfoKHR                                        = 1000512001,
        VideoDecodeAv1ProfileInfoKHR                                        = 1000512003,
        VideoDecodeAv1SessionParametersCreateInfoKHR                        = 1000512004,
        VideoDecodeAv1DpbSlotInfoKHR                                        = 1000512005,
        VideoEncodeAv1CapabilitiesKHR                                       = 1000513000,
        VideoEncodeAv1SessionParametersCreateInfoKHR                        = 1000513001,
        VideoEncodeAv1PictureInfoKHR                                        = 1000513002,
        VideoEncodeAv1DpbSlotInfoKHR                                        = 1000513003,
        PhysicalDeviceVideoEncodeAv1FeaturesKHR                             = 1000513004,
        VideoEncodeAv1ProfileInfoKHR                                        = 1000513005,
        VideoEncodeAv1RateControlInfoKHR                                    = 1000513006,
        VideoEncodeAv1RateControlLayerInfoKHR                               = 1000513007,
        VideoEncodeAv1QualityLevelPropertiesKHR                             = 1000513008,
        VideoEncodeAv1SessionCreateInfoKHR                                  = 1000513009,
        VideoEncodeAv1GopRemainingFrameInfoKHR                              = 1000513010,
        PhysicalDeviceVideoDecodeVp9FeaturesKHR                             = 1000514000,
        VideoDecodeVp9CapabilitiesKHR                                       = 1000514001,
        VideoDecodeVp9PictureInfoKHR                                        = 1000514002,
        VideoDecodeVp9ProfileInfoKHR                                        = 1000514003,
        PhysicalDeviceVideoMaintenance1FeaturesKHR                          = 1000515000,
        VideoInlineQueryInfoKHR                                             = 1000515001,
        PhysicalDevicePerStageDescriptorSetFeaturesNV                       = 1000516000,
        PhysicalDeviceImageProcessing2FeaturesQCOM                          = 1000518000,
        PhysicalDeviceImageProcessing2PropertiesQCOM                        = 1000518001,
        SamplerBlockMatchWindowCreateInfoQCOM                               = 1000518002,
        SamplerCubicWeightsCreateInfoQCOM                                   = 1000519000,
        PhysicalDeviceCubicWeightsFeaturesQCOM                              = 1000519001,
        BlitImageCubicWeightsInfoQCOM                                       = 1000519002,
        PhysicalDeviceYcbcrDegammaFeaturesQCOM                              = 1000520000,
        SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM                    = 1000520001,
        PhysicalDeviceCubicClampFeaturesQCOM                                = 1000521000,
        PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT         = 1000524000,
        PhysicalDeviceUnifiedImageLayoutsFeaturesKHR                        = 1000527000,
        AttachmentFeedbackLoopInfoEXT                                       = 1000527001,
        ScreenBufferPropertiesQNX                                           = 1000529000,
        ScreenBufferFormatPropertiesQNX                                     = 1000529001,
        ImportScreenBufferInfoQNX                                           = 1000529002,
        ExternalFormatQNX                                                   = 1000529003,
        PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX                 = 1000529004,
        PhysicalDeviceLayeredDriverPropertiesMsft                           = 1000530000,
        CalibratedTimestampInfoKHR                                          = 1000184000,
        SetDescriptorBufferOffsetsInfoEXT                                   = 1000545007,
        BindDescriptorBufferEmbeddedSamplersInfoEXT                         = 1000545008,
        PhysicalDeviceDescriptorPoolOverallocationFeaturesNV                = 1000546000,
        PhysicalDeviceTileMemoryHeapFeaturesQCOM                            = 1000547000,
        PhysicalDeviceTileMemoryHeapPropertiesQCOM                          = 1000547001,
        TileMemoryRequirementsQCOM                                          = 1000547002,
        TileMemoryBindInfoQCOM                                              = 1000547003,
        TileMemorySizeInfoQCOM                                              = 1000547004,
        PhysicalDeviceCopyMemoryIndirectFeaturesKHR                         = 1000549000,
        PhysicalDeviceCopyMemoryIndirectPropertiesKHR                       = 1000426001,
        CopyMemoryIndirectInfoKHR                                           = 1000549002,
        CopyMemoryToImageIndirectInfoKHR                                    = 1000549003,
        PhysicalDeviceMemoryDecompressionFeaturesEXT                        = 1000427000,
        PhysicalDeviceMemoryDecompressionPropertiesEXT                      = 1000427001,
        DecompressMemoryInfoEXT                                             = 1000550002,
        DisplaySurfaceStereoCreateInfoNV                                    = 1000551000,
        DisplayModeStereoPropertiesNV                                       = 1000551001,
        VideoEncodeIntraRefreshCapabilitiesKHR                              = 1000552000,
        VideoEncodeSessionIntraRefreshCreateInfoKHR                         = 1000552001,
        VideoEncodeIntraRefreshInfoKHR                                      = 1000552002,
        VideoReferenceIntraRefreshInfoKHR                                   = 1000552003,
        PhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR                    = 1000552004,
        VideoEncodeQuantizationMapCapabilitiesKHR                           = 1000553000,
        VideoFormatQuantizationMapPropertiesKHR                             = 1000553001,
        VideoEncodeQuantizationMapInfoKHR                                   = 1000553002,
        VideoEncodeQuantizationMapSessionParametersCreateInfoKHR            = 1000553005,
        PhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR                 = 1000553009,
        VideoEncodeH264QuantizationMapCapabilitiesKHR                       = 1000553003,
        VideoEncodeH265QuantizationMapCapabilitiesKHR                       = 1000553004,
        VideoFormatH265QuantizationMapPropertiesKHR                         = 1000553006,
        VideoEncodeAv1QuantizationMapCapabilitiesKHR                        = 1000553007,
        VideoFormatAv1QuantizationMapPropertiesKHR                          = 1000553008,
        PhysicalDeviceRawAccessChainsFeaturesNV                             = 1000555000,
        ExternalComputeQueueDeviceCreateInfoNV                              = 1000556000,
        ExternalComputeQueueCreateInfoNV                                    = 1000556001,
        ExternalComputeQueueDataParamsNV                                    = 1000556002,
        PhysicalDeviceExternalComputeQueuePropertiesNV                      = 1000556003,
        PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR           = 1000558000,
        PhysicalDeviceCommandBufferInheritanceFeaturesNV                    = 1000559000,
        PhysicalDeviceMaintenance7FeaturesKHR                               = 1000562000,
        PhysicalDeviceMaintenance7PropertiesKHR                             = 1000562001,
        PhysicalDeviceLayeredApiPropertiesListKHR                           = 1000562002,
        PhysicalDeviceLayeredApiPropertiesKHR                               = 1000562003,
        PhysicalDeviceLayeredApiVulkanPropertiesKHR                         = 1000562004,
        PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV                   = 1000563000,
        PhysicalDeviceShaderReplicatedCompositesFeaturesEXT                 = 1000564000,
        TensorExplicitTilingFormatPropertiesARM                             = 1000565000,
        TensorRollingBackingCreateInfoARM                                   = 1000565001,
        PhysicalDeviceShaderFloat8FeaturesEXT                               = 1000567000,
        PhysicalDeviceRayTracingValidationFeaturesNV                        = 1000568000,
        PhysicalDeviceClusterAccelerationStructureFeaturesNV                = 1000569000,
        PhysicalDeviceClusterAccelerationStructurePropertiesNV              = 1000569001,
        ClusterAccelerationStructureClustersBottomLevelInputNV              = 1000569002,
        ClusterAccelerationStructureTriangleClusterInputNV                  = 1000569003,
        ClusterAccelerationStructureMoveObjectsInputNV                      = 1000569004,
        ClusterAccelerationStructureInputInfoNV                             = 1000569005,
        ClusterAccelerationStructureCommandsInfoNV                          = 1000569006,
        RayTracingPipelineClusterAccelerationStructureCreateInfoNV          = 1000569007,
        PhysicalDevicePartitionedAccelerationStructureFeaturesNV            = 1000570000,
        PhysicalDevicePartitionedAccelerationStructurePropertiesNV          = 1000570001,
        WriteDescriptorSetPartitionedAccelerationStructureNV                = 1000570002,
        PartitionedAccelerationStructureInstancesInputNV                    = 1000570003,
        BuildPartitionedAccelerationStructureInfoNV                         = 1000570004,
        PartitionedAccelerationStructureFlagsNV                             = 1000570005,
        PhysicalDeviceDeviceGeneratedCommandsFeaturesEXT                    = 1000572000,
        PhysicalDeviceDeviceGeneratedCommandsPropertiesEXT                  = 1000572001,
        GeneratedCommandsMemoryRequirementsInfoEXT                          = 1000572002,
        IndirectExecutionSetCreateInfoEXT                                   = 1000572003,
        GeneratedCommandsInfoEXT                                            = 1000572004,
        IndirectCommandsLayoutCreateInfoEXT                                 = 1000572006,
        IndirectCommandsLayoutTokenEXT                                      = 1000572007,
        WriteIndirectExecutionSetPipelineEXT                                = 1000572008,
        WriteIndirectExecutionSetShaderEXT                                  = 1000572009,
        IndirectExecutionSetPipelineInfoEXT                                 = 1000572010,
        IndirectExecutionSetShaderInfoEXT                                   = 1000572011,
        IndirectExecutionSetShaderLayoutInfoEXT                             = 1000572012,
        GeneratedCommandsPipelineInfoEXT                                    = 1000572013,
        GeneratedCommandsShaderInfoEXT                                      = 1000572014,
        PhysicalDeviceFaultFeaturesKHR                                      = 1000573000,
        PhysicalDeviceFaultPropertiesKHR                                    = 1000573001,
        DeviceFaultInfoKHR                                                  = 1000573002,
        DeviceFaultDebugInfoKHR                                             = 1000573003,
        PhysicalDeviceMaintenance8FeaturesKHR                               = 1000574000,
        MemoryBarrierAccessFlags3KHR                                        = 1000574002,
        PhysicalDeviceImageAlignmentControlFeaturesMESA                     = 1000575000,
        PhysicalDeviceImageAlignmentControlPropertiesMESA                   = 1000575001,
        ImageAlignmentControlCreateInfoMESA                                 = 1000575002,
        PhysicalDeviceShaderFmaFeaturesKHR                                  = 1000579000,
        PushConstantBankInfoNV                                              = 1000580000,
        PhysicalDevicePushConstantBankFeaturesNV                            = 1000580001,
        PhysicalDevicePushConstantBankPropertiesNV                          = 1000580002,
        PhysicalDeviceRayTracingInvocationReorderFeaturesEXT                = 1000581000,
        PhysicalDeviceRayTracingInvocationReorderPropertiesEXT              = 1000581001,
        PhysicalDeviceDepthClampControlFeaturesEXT                          = 1000582000,
        PipelineViewportDepthClampControlCreateInfoEXT                      = 1000582001,
        PhysicalDeviceMaintenance9FeaturesKHR                               = 1000584000,
        PhysicalDeviceMaintenance9PropertiesKHR                             = 1000584001,
        QueueFamilyOwnershipTransferPropertiesKHR                           = 1000584002,
        PhysicalDeviceVideoMaintenance2FeaturesKHR                          = 1000586000,
        VideoDecodeH264InlineSessionParametersInfoKHR                       = 1000586001,
        VideoDecodeH265InlineSessionParametersInfoKHR                       = 1000586002,
        VideoDecodeAv1InlineSessionParametersInfoKHR                        = 1000586003,
        SurfaceCreateInfoOHOS                                               = 1000685000,
        NativeBufferOHOS                                                    = 1000453001,
        SwapchainImageCreateInfoOHOS                                        = 1000453002,
        PhysicalDevicePresentationPropertiesOHOS                            = 1000453003,
        PhysicalDeviceHdrVividFeaturesHUAWEI                                = 1000590000,
        HdrVividDynamicMetadataHUAWEI                                       = 1000590001,
        PhysicalDeviceCooperativeMatrix2FeaturesNV                          = 1000593000,
        CooperativeMatrixFlexibleDimensionsPropertiesNV                     = 1000593001,
        PhysicalDeviceCooperativeMatrix2PropertiesNV                        = 1000593002,
        PhysicalDevicePipelineOpacityMicromapFeaturesARM                    = 1000596000,
        PhysicalDeviceVideoEncodeFeedback2FeaturesKHR                       = 1000598000,
        VideoEncodeFeedback2CapabilitiesKHR                                 = 1000598001,
        QueryPoolVideoEncodePerPartitionFeedbackCreateInfoKHR               = 1000598002,
        ImportMemoryMetalHandleInfoEXT                                      = 1000602000,
        MemoryMetalHandlePropertiesEXT                                      = 1000602001,
        MemoryGetMetalHandleInfoEXT                                         = 1000602002,
        PhysicalDeviceDepthClampZeroOneFeaturesKHR                          = 1000421000,
        PhysicalDevicePerformanceCountersByRegionFeaturesARM                = 1000605000,
        PhysicalDevicePerformanceCountersByRegionPropertiesARM              = 1000605001,
        PerformanceCounterARM                                               = 1000605002,
        PerformanceCounterDescriptionARM                                    = 1000605003,
        RenderPassPerformanceCountersByRegionBeginInfoARM                   = 1000605004,
        PhysicalDeviceShaderInstrumentationFeaturesARM                      = 1000607000,
        PhysicalDeviceShaderInstrumentationPropertiesARM                    = 1000607001,
        ShaderInstrumentationCreateInfoARM                                  = 1000607002,
        ShaderInstrumentationMetricDescriptionARM                           = 1000607003,
        PhysicalDeviceVertexAttributeRobustnessFeaturesEXT                  = 1000608000,
        PhysicalDeviceFormatPackFeaturesARM                                 = 1000609000,
        PhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE                = 1000611000,
        PhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE              = 1000611001,
        PipelineFragmentDensityMapLayeredCreateInfoVALVE                    = 1000611002,
        PhysicalDeviceRobustness2FeaturesKHR                                = 1000286000,
        PhysicalDeviceRobustness2PropertiesKHR                              = 1000286001,
        SetPresentConfigNV                                                  = 1000613000,
        PhysicalDevicePresentMeteringFeaturesNV                             = 1000613001,
        PhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT              = 1000616000,
        SwapchainFlagsSurfaceCapabilitiesEXT                                = 1000616001,
        PhysicalDeviceFragmentDensityMapOffsetFeaturesEXT                   = 1000425000,
        PhysicalDeviceFragmentDensityMapOffsetPropertiesEXT                 = 1000425001,
        RenderPassFragmentDensityMapOffsetEndInfoEXT                        = 1000425002,
        PhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT                 = 1000620000,
        PhysicalDevicePresentModeFifoLatestReadyFeaturesKHR                 = 1000361000,
        PhysicalDeviceOpacityMicromapFeaturesKHR                            = 1000623000,
        PhysicalDeviceOpacityMicromapPropertiesKHR                          = 1000623001,
        AccelerationStructureGeometryMicromapDataKHR                        = 1000623002,
        AccelerationStructureTrianglesOpacityMicromapKHR                    = 1000623003,
        PhysicalDeviceShader64BitIndexingFeaturesEXT                        = 1000627000,
        PhysicalDeviceCustomResolveFeaturesEXT                              = 1000628000,
        BeginCustomResolveInfoEXT                                           = 1000628001,
        CustomResolveCreateInfoEXT                                          = 1000628002,
        PhysicalDeviceDataGraphModelFeaturesQCOM                            = 1000629000,
        DataGraphPipelineBuiltinModelCreateInfoQCOM                         = 1000629001,
        PhysicalDeviceMaintenance10FeaturesKHR                              = 1000630000,
        PhysicalDeviceMaintenance10PropertiesKHR                            = 1000630001,
        RenderingAttachmentFlagsInfoKHR                                     = 1000630002,
        RenderingEndInfoKHR                                                 = 1000619003,
        ResolveImageModeInfoKHR                                             = 1000630004,
        PhysicalDeviceDataGraphOpticalFlowFeaturesARM                       = 1000631000,
        QueueFamilyDataGraphOpticalFlowPropertiesARM                        = 1000631001,
        DataGraphOpticalFlowImageFormatInfoARM                              = 1000631003,
        DataGraphOpticalFlowImageFormatPropertiesARM                        = 1000631004,
        DataGraphPipelineOpticalFlowDispatchInfoARM                         = 1000631005,
        DataGraphPipelineOpticalFlowCreateInfoARM                           = 1000631002,
        DataGraphPipelineResourceInfoImageLayoutARM                         = 1000631006,
        DataGraphPipelineSingleNodeCreateInfoARM                            = 1000631007,
        DataGraphPipelineSingleNodeConnectionARM                            = 1000631008,
        PhysicalDeviceShaderLongVectorFeaturesEXT                           = 1000635000,
        PhysicalDeviceShaderLongVectorPropertiesEXT                         = 1000635001,
        PhysicalDevicePipelineCacheIncrementalModeFeaturesSEC               = 1000637000,
        PhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT            = 1000642000,
        ComputeOccupancyPriorityParametersNV                                = 1000645000,
        PhysicalDeviceComputeOccupancyPriorityFeaturesNV                    = 1000645001,
        PhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR                = 1000498000,
        PhysicalDeviceMaintenance11FeaturesKHR                              = 1000657000,
        QueueFamilyOptimalImageTransferGranularityPropertiesKHR             = 1000657001,
        PhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT              = 1000659000,
        PhysicalDeviceCooperativeMatrixInfo2EXT                             = 1000659001,
        CooperativeMatrixProperties2EXT                                     = 1000659002,
        PhysicalDeviceShaderSubgroupPartitionedFeaturesEXT                  = 1000662000,
        UbmSurfaceCreateInfoSEC                                             = 1000664000,
        FormatProperties4KHR                                                = 1000668000,
        ImageCreateFlags2CreateInfoKHR                                      = 1000668001,
        ImageUsageFlags2CreateInfoKHR                                       = 1000668002,
        ImageViewUsage2CreateInfoKHR                                        = 1000668003,
        PhysicalDeviceExtendedFlagsFeaturesKHR                              = 1000668004,
        ImageStencilUsage2CreateInfoKHR                                     = 1000668005,
        SharedPresentSurfaceCapabilities2KHR                                = 1000668006,
        PhysicalDeviceCooperativeMatrixLayoutsFeaturesARM                   = 1000670000,
        PhysicalDeviceShaderOcpMicroscalingTypesFeaturesEXT                 = 1000672000,
        PhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE               = 1000673000,
        PhysicalDeviceThrottleHintFeaturesSEC                               = 1000674000,
        ThrottleHintSubmitInfoSEC                                           = 1000674001,
        DataGraphPipelineNeuralStatisticsCreateInfoARM                      = 1000676000,
        DataGraphPipelineSessionNeuralStatisticsCreateInfoARM               = 1000676001,
        PhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM       = 1000676002,
        PhysicalDevicePrimitiveRestartIndexFeaturesEXT                      = 1000678000,
        PhysicalDeviceImageTilingControlFeaturesEXT                         = 1000687000,
        ImageTilingControlCreateInfoEXT                                     = 1000687001,
        PhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV               = 1000689000,
        PhysicalDevicePrivateDataBaseHandleFeaturesNV                       = 1000707000,
        PhysicalDeviceInfoPropertiesINTEL                                   = 1000708000,
        PhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE   = 1000709000,
        PhysicalDeviceBufferDeviceAddressAllocationAlignmentPropertiesVALVE = 1000709001,
        BufferDeviceAddressAlignmentAllocateInfoVALVE                       = 1000709002,
        PhysicalDeviceHdrSmpteSt209450FeaturesGOOGLE                        = 1000718000,
        HdrSmpteSt209450GOOGLE                                              = 1000718001,
        SurfaceCapabilitiesHdrSmpteSt209450GOOGLE                           = 1000718002,
        BindBufferMemoryInfo                                                = 1000157000,
        BindImageMemoryInfo                                                 = 1000157001,
        MemoryDedicatedRequirements                                         = 1000127000,
        MemoryDedicatedAllocateInfo                                         = 1000127001,
        MemoryAllocateFlagsInfo                                             = 1000060000,
        DeviceGroupCommandBufferBeginInfo                                   = 1000060004,
        DeviceGroupSubmitInfo                                               = 1000060005,
        DeviceGroupBindSparseInfo                                           = 1000060006,
        BindBufferMemoryDeviceGroupInfo                                     = 1000060013,
        BindImageMemoryDeviceGroupInfo                                      = 1000060014,
        PhysicalDeviceGroupProperties                                       = 1000070000,
        DeviceGroupDeviceCreateInfo                                         = 1000070001,
        BufferMemoryRequirementsInfo2                                       = 1000146000,
        ImageMemoryRequirementsInfo2                                        = 1000146001,
        ImageSparseMemoryRequirementsInfo2                                  = 1000146002,
        MemoryRequirements2                                                 = 1000146003,
        SparseImageMemoryRequirements2                                      = 1000146004,
        PhysicalDeviceFeatures2                                             = 1000059000,
        PhysicalDeviceProperties2                                           = 1000059001,
        FormatProperties2                                                   = 1000059002,
        ImageFormatProperties2                                              = 1000059003,
        PhysicalDeviceImageFormatInfo2                                      = 1000059004,
        QueueFamilyProperties2                                              = 1000059005,
        PhysicalDeviceMemoryProperties2                                     = 1000059006,
        SparseImageFormatProperties2                                        = 1000059007,
        PhysicalDeviceSparseImageFormatInfo2                                = 1000059008,
        ImageViewUsageCreateInfo                                            = 1000117002,
        ProtectedSubmitInfo                                                 = 1000145000,
        PhysicalDeviceProtectedMemoryFeatures                               = 1000145001,
        PhysicalDeviceProtectedMemoryProperties                             = 1000145002,
        DeviceQueueInfo2                                                    = 1000145003,
        PhysicalDeviceExternalImageFormatInfo                               = 1000071000,
        ExternalImageFormatProperties                                       = 1000071001,
        PhysicalDeviceExternalBufferInfo                                    = 1000071002,
        ExternalBufferProperties                                            = 1000071003,
        PhysicalDeviceIdProperties                                          = 1000071004,
        ExternalMemoryBufferCreateInfo                                      = 1000072000,
        ExternalMemoryImageCreateInfo                                       = 1000072001,
        ExportMemoryAllocateInfo                                            = 1000072002,
        PhysicalDeviceExternalFenceInfo                                     = 1000112000,
        ExternalFenceProperties                                             = 1000112001,
        ExportFenceCreateInfo                                               = 1000113000,
        ExportSemaphoreCreateInfo                                           = 1000077000,
        PhysicalDeviceExternalSemaphoreInfo                                 = 1000076000,
        ExternalSemaphoreProperties                                         = 1000076001,
        PhysicalDeviceSubgroupProperties                                    = 1000094000,
        PhysicalDeviceX16BITStorageFeatures                                 = 1000083000,
        PhysicalDeviceVariablePointersFeatures                              = 1000120000,
        DescriptorUpdateTemplateCreateInfo                                  = 1000085000,
        PhysicalDeviceMaintenance3Properties                                = 1000168000,
        DescriptorSetLayoutSupport                                          = 1000168001,
        SamplerYcbcrConversionCreateInfo                                    = 1000156000,
        SamplerYcbcrConversionInfo                                          = 1000156001,
        BindImagePlaneMemoryInfo                                            = 1000156002,
        ImagePlaneMemoryRequirementsInfo                                    = 1000156003,
        PhysicalDeviceSamplerYcbcrConversionFeatures                        = 1000156004,
        SamplerYcbcrConversionImageFormatProperties                         = 1000156005,
        DeviceGroupRenderPassBeginInfo                                      = 1000060003,
        PhysicalDevicePointClippingProperties                               = 1000117000,
        RenderPassInputAttachmentAspectCreateInfo                           = 1000117001,
        PipelineTessellationDomainOriginStateCreateInfo                     = 1000117003,
        RenderPassMultiviewCreateInfo                                       = 1000053000,
        PhysicalDeviceMultiviewFeatures                                     = 1000053001,
        PhysicalDeviceMultiviewProperties                                   = 1000053002,
        PhysicalDeviceShaderDrawParametersFeatures                          = 1000063000,
        PhysicalDeviceDriverProperties                                      = 1000196000,
        PhysicalDeviceVulkan11Features                                      = 49,
        PhysicalDeviceVulkan11Properties                                    = 50,
        PhysicalDeviceVulkan12Features                                      = 51,
        PhysicalDeviceVulkan12Properties                                    = 52,
        ImageFormatListCreateInfo                                           = 1000147000,
        PhysicalDeviceVulkanMemoryModelFeatures                             = 1000211000,
        PhysicalDeviceHostQueryResetFeatures                                = 1000261000,
        PhysicalDeviceTimelineSemaphoreFeatures                             = 1000207000,
        PhysicalDeviceTimelineSemaphoreProperties                           = 1000207001,
        SemaphoreTypeCreateInfo                                             = 1000207002,
        TimelineSemaphoreSubmitInfo                                         = 1000207003,
        SemaphoreWaitInfo                                                   = 1000207004,
        SemaphoreSignalInfo                                                 = 1000207005,
        PhysicalDeviceBufferDeviceAddressFeatures                           = 1000257000,
        BufferDeviceAddressInfo                                             = 1000244001,
        BufferOpaqueCaptureAddressCreateInfo                                = 1000257002,
        MemoryOpaqueCaptureAddressAllocateInfo                              = 1000257003,
        DeviceMemoryOpaqueCaptureAddressInfo                                = 1000257004,
        PhysicalDeviceX8BITStorageFeatures                                  = 1000177000,
        PhysicalDeviceShaderAtomicInt64Features                             = 1000180000,
        PhysicalDeviceShaderFloat16Int8Features                             = 1000082000,
        PhysicalDeviceFloatControlsProperties                               = 1000197000,
        DescriptorSetLayoutBindingFlagsCreateInfo                           = 1000161000,
        PhysicalDeviceDescriptorIndexingFeatures                            = 1000161001,
        PhysicalDeviceDescriptorIndexingProperties                          = 1000161002,
        DescriptorSetVariableDescriptorCountAllocateInfo                    = 1000161003,
        DescriptorSetVariableDescriptorCountLayoutSupport                   = 1000161004,
        PhysicalDeviceScalarBlockLayoutFeatures                             = 1000221000,
        PhysicalDeviceSamplerFilterMinmaxProperties                         = 1000130000,
        SamplerReductionModeCreateInfo                                      = 1000130001,
        PhysicalDeviceUniformBufferStandardLayoutFeatures                   = 1000253000,
        PhysicalDeviceShaderSubgroupExtendedTypesFeatures                   = 1000175000,
        AttachmentDescription2                                              = 1000109000,
        AttachmentReference2                                                = 1000109001,
        SubpassDescription2                                                 = 1000109002,
        SubpassDependency2                                                  = 1000109003,
        RenderPassCreateInfo2                                               = 1000109004,
        SubpassBeginInfo                                                    = 1000109005,
        SubpassEndInfo                                                      = 1000109006,
        PhysicalDeviceDepthStencilResolveProperties                         = 1000199000,
        SubpassDescriptionDepthStencilResolve                               = 1000199001,
        ImageStencilUsageCreateInfo                                         = 1000246000,
        PhysicalDeviceImagelessFramebufferFeatures                          = 1000108000,
        FramebufferAttachmentsCreateInfo                                    = 1000108001,
        FramebufferAttachmentImageInfo                                      = 1000108002,
        RenderPassAttachmentBeginInfo                                       = 1000108003,
        PhysicalDeviceSeparateDepthStencilLayoutsFeatures                   = 1000241000,
        AttachmentReferenceStencilLayout                                    = 1000241001,
        AttachmentDescriptionStencilLayout                                  = 1000241002,
        PhysicalDeviceVulkan13Features                                      = 53,
        PhysicalDeviceVulkan13Properties                                    = 54,
        PhysicalDeviceToolProperties                                        = 1000245000,
        PhysicalDevicePrivateDataFeatures                                   = 1000295000,
        DevicePrivateDataCreateInfo                                         = 1000295001,
        PrivateDataSlotCreateInfo                                           = 1000295002,
        MemoryBarrier2                                                      = 1000314000,
        BufferMemoryBarrier2                                                = 1000314001,
        ImageMemoryBarrier2                                                 = 1000314002,
        DependencyInfo                                                      = 1000314003,
        SubmitInfo2                                                         = 1000314004,
        SemaphoreSubmitInfo                                                 = 1000314005,
        CommandBufferSubmitInfo                                             = 1000314006,
        PhysicalDeviceSynchronization2Features                              = 1000314007,
        CopyBufferInfo2                                                     = 1000337000,
        CopyImageInfo2                                                      = 1000337001,
        CopyBufferToImageInfo2                                              = 1000337002,
        CopyImageToBufferInfo2                                              = 1000337003,
        BufferCopy2                                                         = 1000337006,
        ImageCopy2                                                          = 1000337007,
        BufferImageCopy2                                                    = 1000337009,
        PhysicalDeviceTextureCompressionAstcHdrFeatures                     = 1000066000,
        FormatProperties3                                                   = 1000360000,
        PhysicalDeviceMaintenance4Features                                  = 1000413000,
        PhysicalDeviceMaintenance4Properties                                = 1000413001,
        DeviceBufferMemoryRequirements                                      = 1000413002,
        DeviceImageMemoryRequirements                                       = 1000413003,
        PipelineCreationFeedbackCreateInfo                                  = 1000192000,
        PhysicalDeviceShaderTerminateInvocationFeatures                     = 1000215000,
        PhysicalDeviceShaderDemoteToHelperInvocationFeatures                = 1000276000,
        PhysicalDevicePipelineCreationCacheControlFeatures                  = 1000297000,
        PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures                 = 1000325000,
        PhysicalDeviceImageRobustnessFeatures                               = 1000335000,
        PhysicalDeviceSubgroupSizeControlProperties                         = 1000225000,
        PipelineShaderStageRequiredSubgroupSizeCreateInfo                   = 1000225001,
        PhysicalDeviceSubgroupSizeControlFeatures                           = 1000225002,
        PhysicalDeviceInlineUniformBlockFeatures                            = 1000138000,
        PhysicalDeviceInlineUniformBlockProperties                          = 1000138001,
        WriteDescriptorSetInlineUniformBlock                                = 1000138002,
        DescriptorPoolInlineUniformBlockCreateInfo                          = 1000138003,
        PhysicalDeviceShaderIntegerDotProductFeatures                       = 1000280000,
        PhysicalDeviceShaderIntegerDotProductProperties                     = 1000280001,
        PhysicalDeviceTexelBufferAlignmentProperties                        = 1000281001,
        BlitImageInfo2                                                      = 1000337004,
        ResolveImageInfo2                                                   = 1000337005,
        ImageBlit2                                                          = 1000337008,
        ImageResolve2                                                       = 1000337010,
        RenderingInfo                                                       = 1000044000,
        RenderingAttachmentInfo                                             = 1000044001,
        PipelineRenderingCreateInfo                                         = 1000044002,
        PhysicalDeviceDynamicRenderingFeatures                              = 1000044003,
        CommandBufferInheritanceRenderingInfo                               = 1000044004,
        PhysicalDeviceVulkan14Features                                      = 55,
        PhysicalDeviceVulkan14Properties                                    = 56,
        DeviceQueueGlobalPriorityCreateInfo                                 = 1000174000,
        PhysicalDeviceGlobalPriorityQueryFeatures                           = 1000388000,
        QueueFamilyGlobalPriorityProperties                                 = 1000388001,
        PhysicalDeviceIndexTypeUint8Features                                = 1000265000,
        MemoryMapInfo                                                       = 1000271000,
        MemoryUnmapInfo                                                     = 1000271001,
        PhysicalDeviceMaintenance5Features                                  = 1000470000,
        PhysicalDeviceMaintenance5Properties                                = 1000470001,
        DeviceImageSubresourceInfo                                          = 1000470004,
        SubresourceLayout2                                                  = 1000338002,
        ImageSubresource2                                                   = 1000338003,
        BufferUsageFlags2CreateInfo                                         = 1000470006,
        PhysicalDeviceMaintenance6Features                                  = 1000545000,
        PhysicalDeviceMaintenance6Properties                                = 1000545001,
        BindMemoryStatus                                                    = 1000545002,
        PhysicalDeviceHostImageCopyFeatures                                 = 1000270000,
        PhysicalDeviceHostImageCopyProperties                               = 1000270001,
        MemoryToImageCopy                                                   = 1000270002,
        ImageToMemoryCopy                                                   = 1000270003,
        CopyImageToMemoryInfo                                               = 1000270004,
        CopyMemoryToImageInfo                                               = 1000270005,
        HostImageLayoutTransitionInfo                                       = 1000270006,
        CopyImageToImageInfo                                                = 1000270007,
        SubresourceHostMemcpySize                                           = 1000270008,
        HostImageCopyDevicePerformanceQuery                                 = 1000270009,
        PhysicalDeviceShaderSubgroupRotateFeatures                          = 1000416000,
        PhysicalDeviceShaderFloatControls2Features                          = 1000528000,
        PhysicalDeviceShaderExpectAssumeFeatures                            = 1000544000,
        PipelineCreateFlags2CreateInfo                                      = 1000470005,
        PhysicalDevicePushDescriptorProperties                              = 1000080000,
        BindDescriptorSetsInfo                                              = 1000545003,
        PushConstantsInfo                                                   = 1000545004,
        PushDescriptorSetInfo                                               = 1000545005,
        PushDescriptorSetWithTemplateInfo                                   = 1000545006,
        PhysicalDevicePipelineProtectedAccessFeatures                       = 1000466000,
        PipelineRobustnessCreateInfo                                        = 1000068000,
        PhysicalDevicePipelineRobustnessFeatures                            = 1000068001,
        PhysicalDevicePipelineRobustnessProperties                          = 1000068002,
        PhysicalDeviceLineRasterizationFeatures                             = 1000259000,
        PipelineRasterizationLineStateCreateInfo                            = 1000259001,
        PhysicalDeviceLineRasterizationProperties                           = 1000259002,
        PhysicalDeviceVertexAttributeDivisorProperties                      = 1000525000,
        PipelineVertexInputDivisorStateCreateInfo                           = 1000190001,
        PhysicalDeviceVertexAttributeDivisorFeatures                        = 1000190002,
        RenderingAreaInfo                                                   = 1000470003,
        PhysicalDeviceDynamicRenderingLocalReadFeatures                     = 1000232000,
        RenderingAttachmentLocationInfo                                     = 1000232001,
        RenderingInputAttachmentIndexInfo                                   = 1000232002,
        PhysicalDeviceVulkanSc10Features                                    = 1000298000,
        PhysicalDeviceVulkanSc10Properties                                  = 1000298001,
        DeviceObjectReservationCreateInfo                                   = 1000298002,
        CommandPoolMemoryReservationCreateInfo                              = 1000298003,
        CommandPoolMemoryConsumption                                        = 1000298004,
        PipelinePoolSize                                                    = 1000298005,
        FaultData                                                           = 1000298007,
        FaultCallbackInfo                                                   = 1000298008,
        PipelineOfflineCreateInfo                                           = 1000298010,
        PhysicalDevice16BITStorageFeatures                                  = 1000083000,
        PhysicalDevice8BITStorageFeatures                                   = 1000177000,
        PhysicalDeviceImage2DViewOf3DFeaturesEXT                            = 1000393000,
        PhysicalDeviceImageSlicedViewOf3DFeaturesEXT                        = 1000418000,
        PhysicalDeviceTextureCompressionAstc3DFeaturesEXT                   = 1000288000,
    };

    enum class SubgroupFeatureFlagBits : std::uint32_t
    {
        BasicBit                                                            = 1,
        VoteBit                                                             = 2,
        ArithmeticBit                                                       = 4,
        BallotBit                                                           = 8,
        ShuffleBit                                                          = 16,
        ShuffleRelativeBit                                                  = 32,
        ClusteredBit                                                        = 64,
        QuadBit                                                             = 128,
        PartitionedBitEXT                                                   = 256,
        RotateBit                                                           = 512,
        RotateClusteredBit                                                  = 1024,
    };

    enum class SubmitFlagBits : std::uint32_t
    {
        ProtectedBit                                                        = 1,
    };

    enum class SubpassContents : std::uint32_t
    {
        Inline                                                              = 0,
        SecondaryCommandBuffers                                             = 1,
        InlineAndSecondaryCommandBuffersKHR                                 = 1000451000,
    };

    enum class SubpassDescriptionFlagBits : std::uint32_t
    {
        PerViewAttributesBitNVX                                             = 1,
        PerViewPositionXOnlyBitNVX                                          = 2,
        TileShadingApronBitQCOM                                             = 256,
        RasterizationOrderAttachmentColorAccessBitEXT                       = 16,
        RasterizationOrderAttachmentDepthAccessBitEXT                       = 32,
        RasterizationOrderAttachmentStencilAccessBitEXT                     = 64,
        EnableLegacyDitheringBitEXT                                         = 128,
        FragmentRegionBitEXT                                                = 4,
        CustomResolveBitEXT                                                 = 8,
    };

    enum class SubpassMergeStatusEXT : std::uint32_t
    {
        MergedEXT                                                           = 0,
        DisallowedEXT                                                       = 1,
        NotMergedSideEffectsEXT                                             = 2,
        NotMergedSamplesMismatchEXT                                         = 3,
        NotMergedViewsMismatchEXT                                           = 4,
        NotMergedAliasingEXT                                                = 5,
        NotMergedDependenciesEXT                                            = 6,
        NotMergedIncompatibleInputAttachmentEXT                             = 7,
        NotMergedTooManyAttachmentsEXT                                      = 8,
        NotMergedInsufficientStorageEXT                                     = 9,
        NotMergedDepthStencilCountEXT                                       = 10,
        NotMergedResolveAttachmentReuseEXT                                  = 11,
        NotMergedSingleSubpassEXT                                           = 12,
        NotMergedUnspecifiedEXT                                             = 13,
    };

    enum class SurfaceCounterFlagBitsEXT : std::uint32_t
    {
        VblankBitEXT                                                        = 1,
    };

    enum class SurfaceTransformFlagBitsKHR : std::uint32_t
    {
        IdentityBitKHR                                                      = 1,
        Rotate90BitKHR                                                      = 2,
        Rotate180BitKHR                                                     = 4,
        Rotate270BitKHR                                                     = 8,
        HorizontalMirrorBitKHR                                              = 16,
        HorizontalMirrorRotate90BitKHR                                      = 32,
        HorizontalMirrorRotate180BitKHR                                     = 64,
        HorizontalMirrorRotate270BitKHR                                     = 128,
        InheritBitKHR                                                       = 256,
    };

    enum class SwapchainCreateFlagBitsKHR : std::uint32_t
    {
        SplitInstanceBindRegionsBitKHR                                      = 1,
        ProtectedBitKHR                                                     = 2,
        MutableFormatBitKHR                                                 = 4,
        PresentTimingBitEXT                                                 = 512,
        Reserved5BitEXT                                                     = 32,
        Reserved4BitEXT                                                     = 16,
        PresentId2BitKHR                                                    = 64,
        PresentWait2BitKHR                                                  = 128,
        DeferredMemoryAllocationBitKHR                                      = 8,
        MultisampledRenderToSingleSampledBitEXT                             = 256,
        Reserved10BitHUAWEI                                                 = 1024,
    };

    enum class SwapchainImageUsageFlagBitsANDROID : std::uint32_t
    {
        SwapchainImageUsageSharedBitANDROID                                 = 1,
    };

    enum class SwapchainImageUsageFlagBitsOHOS : std::uint32_t
    {
        SwapchainImageUsageSharedBitOHOS                                    = 1,
    };

    enum class SystemAllocationScope : std::uint32_t
    {
        Command                                                             = 0,
        Object                                                              = 1,
        Cache                                                               = 2,
        Device                                                              = 3,
        Instance                                                            = 4,
    };

    enum class TensorCreateFlagBitsARM : std::uint32_t
    {
        MutableFormatBitARM                                                 = 1,
        ProtectedBitARM                                                     = 2,
        DescriptorHeapCaptureReplayBitARM                                   = 8,
        DescriptorBufferCaptureReplayBitARM                                 = 4,
    };

    enum class TensorTilingARM : std::uint32_t
    {
        OptimalARM                                                          = 0,
        LinearARM                                                           = 1,
        Brick16WideARM                                                      = 1000565000,
        Brick8WideARM                                                       = 1000565001,
        Brick4WideARM                                                       = 1000565002,
        BlockUInterleavedARM                                                = 1000565003,
        BlockUInterleavedX64KARM                                            = 1000565004,
    };

    enum class TensorUsageFlagBitsARM : std::uint32_t
    {
        ShaderBitARM                                                        = 2,
        TransferSrcBitARM                                                   = 4,
        TransferDstBitARM                                                   = 8,
        ImageAliasingBitARM                                                 = 16,
        DataGraphBitARM                                                     = 32,
    };

    enum class TensorViewCreateFlagBitsARM : std::uint32_t
    {
        DescriptorBufferCaptureReplayBitARM                                 = 1,
    };

    enum class TessellationDomainOrigin : std::uint32_t
    {
        UpperLeft                                                           = 0,
        LowerLeft                                                           = 1,
    };

    enum class ThrottleHintTypeSEC : std::uint32_t
    {
        DefaultSEC                                                          = 0,
        LowSEC                                                              = 1,
        HighSEC                                                             = 2,
    };

    enum class TileShadingRenderPassFlagBitsQCOM : std::uint32_t
    {
        EnableBitQCOM                                                       = 1,
        PerTileExecutionBitQCOM                                             = 2,
    };

    enum class TimeDomainKHR : std::uint32_t
    {
        DeviceKHR                                                           = 0,
        ClockMonotonicKHR                                                   = 1,
        ClockMonotonicRawKHR                                                = 2,
        QueryPerformanceCounterKHR                                          = 3,
        PresentStageLocalEXT                                                = 1000208000,
        SwapchainLocalEXT                                                   = 1000208001,
    };

    enum class ToolPurposeFlagBits : std::uint32_t
    {
        ValidationBit                                                       = 1,
        ProfilingBit                                                        = 2,
        TracingBit                                                          = 4,
        AdditionalFeaturesBit                                               = 8,
        ModifyingFeaturesBit                                                = 16,
        DebugReportingBitEXT                                                = 32,
        DebugMarkersBitEXT                                                  = 64,
    };

    enum class ValidationCacheHeaderVersionEXT : std::uint32_t
    {
        OneEXT                                                              = 1,
    };

    enum class ValidationCheckEXT : std::uint32_t
    {
        AllEXT                                                              = 0,
        ShadersEXT                                                          = 1,
    };

    enum class ValidationFeatureDisableEXT : std::uint32_t
    {
        AllEXT                                                              = 0,
        ShadersEXT                                                          = 1,
        ThreadSafetyEXT                                                     = 2,
        ApiParametersEXT                                                    = 3,
        ObjectLifetimesEXT                                                  = 4,
        CoreChecksEXT                                                       = 5,
        UniqueHandlesEXT                                                    = 6,
        ShaderValidationCacheEXT                                            = 7,
    };

    enum class ValidationFeatureEnableEXT : std::uint32_t
    {
        GpuAssistedEXT                                                      = 0,
        GpuAssistedReserveBindingSlotEXT                                    = 1,
        BestPracticesEXT                                                    = 2,
        DebugPrintfEXT                                                      = 3,
        SynchronizationValidationEXT                                        = 4,
    };

    enum class VendorId : std::uint32_t
    {
        Khronos                                                             = 65536,
        Viv                                                                 = 65537,
        Vsi                                                                 = 65538,
        Kazan                                                               = 65539,
        Codeplay                                                            = 65540,
        MESA                                                                = 65541,
        Pocl                                                                = 65542,
        Mobileye                                                            = 65543,
        Ape                                                                 = 65544,
        Apex                                                                = 65545,
    };

    enum class VertexInputRate : std::uint32_t
    {
        Vertex                                                              = 0,
        Instance                                                            = 1,
    };

    enum class VideoCapabilityFlagBitsKHR : std::uint32_t
    {
        ProtectedContentBitKHR                                              = 1,
        SeparateReferenceImagesBitKHR                                       = 2,
    };

    enum class VideoChromaSubsamplingFlagBitsKHR : std::uint32_t
    {
        InvalidKHR                                                          = 0,
        MonochromeBitKHR                                                    = 1,
        X420BitKHR                                                          = 2,
        X422BitKHR                                                          = 4,
        X444BitKHR                                                          = 8,
    };

    enum class VideoCodecOperationFlagBitsKHR : std::uint32_t
    {
        NoneKHR                                                             = 0,
        EncodeH264BitKHR                                                    = 65536,
        EncodeH265BitKHR                                                    = 131072,
        DecodeH264BitKHR                                                    = 1,
        DecodeH265BitKHR                                                    = 2,
        DecodeAv1BitKHR                                                     = 4,
        EncodeAv1BitKHR                                                     = 262144,
        DecodeVp9BitKHR                                                     = 8,
    };

    enum class VideoCodingControlFlagBitsKHR : std::uint32_t
    {
        ResetBitKHR                                                         = 1,
        EncodeRateControlBitKHR                                             = 2,
        EncodeQualityLevelBitKHR                                            = 4,
    };

    enum class VideoComponentBitDepthFlagBitsKHR : std::uint32_t
    {
        InvalidKHR                                                          = 0,
        X8BitKHR                                                            = 1,
        X10BitKHR                                                           = 4,
        X12BitKHR                                                           = 16,
    };

    enum class VideoDecodeCapabilityFlagBitsKHR : std::uint32_t
    {
        CoincideBitKHR                                                      = 1,
        DistinctBitKHR                                                      = 2,
    };

    enum class VideoDecodeH264PictureLayoutFlagBitsKHR : std::uint32_t
    {
        ProgressiveKHR                                                      = 0,
        InterlacedInterleavedLinesBitKHR                                    = 1,
        InterlacedSeparatePlanesBitKHR                                      = 2,
    };

    enum class VideoDecodeUsageFlagBitsKHR : std::uint32_t
    {
        DefaultKHR                                                          = 0,
        TranscodingBitKHR                                                   = 1,
        OfflineBitKHR                                                       = 2,
        StreamingBitKHR                                                     = 4,
    };

    enum class VideoEncodeAV1CapabilityFlagBitsKHR : std::uint32_t
    {
        PerRateControlGroupMinMaxQIndexBitKHR                               = 1,
        GenerateObuExtensionHeaderBitKHR                                    = 2,
        PrimaryReferenceCdfOnlyBitKHR                                       = 4,
        FrameSizeOverrideBitKHR                                             = 8,
        MotionVectorScalingBitKHR                                           = 16,
        CompoundPredictionIntraRefreshBitKHR                                = 32,
    };

    enum class VideoEncodeAV1PredictionModeKHR : std::uint32_t
    {
        IntraOnlyKHR                                                        = 0,
        SingleReferenceKHR                                                  = 1,
        UnidirectionalCompoundKHR                                           = 2,
        BidirectionalCompoundKHR                                            = 3,
    };

    enum class VideoEncodeAV1RateControlFlagBitsKHR : std::uint32_t
    {
        RegularGopBitKHR                                                    = 1,
        TemporalLayerPatternDyadicBitKHR                                    = 2,
        ReferencePatternFlatBitKHR                                          = 4,
        ReferencePatternDyadicBitKHR                                        = 8,
    };

    enum class VideoEncodeAV1RateControlGroupKHR : std::uint32_t
    {
        IntraKHR                                                            = 0,
        PredictiveKHR                                                       = 1,
        BipredictiveKHR                                                     = 2,
    };

    enum class VideoEncodeAV1StdFlagBitsKHR : std::uint32_t
    {
        UniformTileSpacingFlagSetBitKHR                                     = 1,
        SkipModePresentUnsetBitKHR                                          = 2,
        PrimaryRefFrameBitKHR                                               = 4,
        DeltaQBitKHR                                                        = 8,
    };

    enum class VideoEncodeAV1SuperblockSizeFlagBitsKHR : std::uint32_t
    {
        X64BitKHR                                                           = 1,
        X128BitKHR                                                          = 2,
    };

    enum class VideoEncodeCapabilityFlagBitsKHR : std::uint32_t
    {
        PrecedingExternallyEncodedBytesBitKHR                               = 1,
        InsufficientBitstreamBufferRangeDetectionBitKHR                     = 2,
        QuantizationDeltaMapBitKHR                                          = 4,
        EmphasisMapBitKHR                                                   = 8,
    };

    enum class VideoEncodeContentFlagBitsKHR : std::uint32_t
    {
        DefaultKHR                                                          = 0,
        CameraBitKHR                                                        = 1,
        DesktopBitKHR                                                       = 2,
        RenderedBitKHR                                                      = 4,
    };

    enum class VideoEncodeFeedbackFlagBitsKHR : std::uint32_t
    {
        BitstreamBufferOffsetBitKHR                                         = 1,
        BitstreamBytesWrittenBitKHR                                         = 2,
        BitstreamHasOverridesBitKHR                                         = 4,
        AverageQuantizationBitKHR                                           = 8,
        MinQuantizationBitKHR                                               = 16,
        MaxQuantizationBitKHR                                               = 32,
        IntraPixelsBitKHR                                                   = 64,
        InterPixelsBitKHR                                                   = 128,
        SkippedPixelsBitKHR                                                 = 256,
        PicturePartitionCountBitKHR                                         = 512,
    };

    enum class VideoEncodeFlagBitsKHR : std::uint32_t
    {
        IntraRefreshBitKHR                                                  = 4,
        WithQuantizationDeltaMapBitKHR                                      = 1,
        WithEmphasisMapBitKHR                                               = 2,
    };

    enum class VideoEncodeH264CapabilityFlagBitsKHR : std::uint32_t
    {
        HrdComplianceBitKHR                                                 = 1,
        PredictionWeightTableGeneratedBitKHR                                = 2,
        RowUnalignedSliceBitKHR                                             = 4,
        DifferentSliceTypeBitKHR                                            = 8,
        BFrameInL0ListBitKHR                                                = 16,
        BFrameInL1ListBitKHR                                                = 32,
        PerPictureTypeMinMaxQpBitKHR                                        = 64,
        PerSliceConstantQpBitKHR                                            = 128,
        GeneratePrefixNaluBitKHR                                            = 256,
        BPictureIntraRefreshBitKHR                                          = 1024,
        MbQpDiffWraparoundBitKHR                                            = 512,
    };

    enum class VideoEncodeH264RateControlFlagBitsKHR : std::uint32_t
    {
        AttemptHrdComplianceBitKHR                                          = 1,
        RegularGopBitKHR                                                    = 2,
        ReferencePatternFlatBitKHR                                          = 4,
        ReferencePatternDyadicBitKHR                                        = 8,
        TemporalLayerPatternDyadicBitKHR                                    = 16,
    };

    enum class VideoEncodeH264StdFlagBitsKHR : std::uint32_t
    {
        SeparateColorPlaneFlagSetBitKHR                                     = 1,
        QpprimeYZeroTransformBypassFlagSetBitKHR                            = 2,
        ScalingMatrixPresentFlagSetBitKHR                                   = 4,
        ChromaQpIndexOffsetBitKHR                                           = 8,
        SecondChromaQpIndexOffsetBitKHR                                     = 16,
        PicInitQpMinus26BitKHR                                              = 32,
        WeightedPredFlagSetBitKHR                                           = 64,
        WeightedBipredIdcExplicitBitKHR                                     = 128,
        WeightedBipredIdcImplicitBitKHR                                     = 256,
        TransformX8X8ModeFlagSetBitKHR                                      = 512,
        DirectSpatialMvPredFlagUnsetBitKHR                                  = 1024,
        EntropyCodingModeFlagUnsetBitKHR                                    = 2048,
        EntropyCodingModeFlagSetBitKHR                                      = 4096,
        DirectX8X8InferenceFlagUnsetBitKHR                                  = 8192,
        ConstrainedIntraPredFlagSetBitKHR                                   = 16384,
        DeblockingFilterDisabledBitKHR                                      = 32768,
        DeblockingFilterEnabledBitKHR                                       = 65536,
        DeblockingFilterPartialBitKHR                                       = 131072,
        SliceQpDeltaBitKHR                                                  = 524288,
        DifferentSliceQpDeltaBitKHR                                         = 1048576,
    };

    enum class VideoEncodeH265CapabilityFlagBitsKHR : std::uint32_t
    {
        HrdComplianceBitKHR                                                 = 1,
        PredictionWeightTableGeneratedBitKHR                                = 2,
        RowUnalignedSliceSegmentBitKHR                                      = 4,
        DifferentSliceSegmentTypeBitKHR                                     = 8,
        BFrameInL0ListBitKHR                                                = 16,
        BFrameInL1ListBitKHR                                                = 32,
        PerPictureTypeMinMaxQpBitKHR                                        = 64,
        PerSliceSegmentConstantQpBitKHR                                     = 128,
        MultipleTilesPerSliceSegmentBitKHR                                  = 256,
        MultipleSliceSegmentsPerTileBitKHR                                  = 512,
        BPictureIntraRefreshBitKHR                                          = 2048,
        CuQpDiffWraparoundBitKHR                                            = 1024,
    };

    enum class VideoEncodeH265CtbSizeFlagBitsKHR : std::uint32_t
    {
        X16BitKHR                                                           = 1,
        X32BitKHR                                                           = 2,
        X64BitKHR                                                           = 4,
    };

    enum class VideoEncodeH265RateControlFlagBitsKHR : std::uint32_t
    {
        AttemptHrdComplianceBitKHR                                          = 1,
        RegularGopBitKHR                                                    = 2,
        ReferencePatternFlatBitKHR                                          = 4,
        ReferencePatternDyadicBitKHR                                        = 8,
        TemporalSubLayerPatternDyadicBitKHR                                 = 16,
    };

    enum class VideoEncodeH265StdFlagBitsKHR : std::uint32_t
    {
        SeparateColorPlaneFlagSetBitKHR                                     = 1,
        SampleAdaptiveOffsetEnabledFlagSetBitKHR                            = 2,
        ScalingListDataPresentFlagSetBitKHR                                 = 4,
        PcmEnabledFlagSetBitKHR                                             = 8,
        SpsTemporalMvpEnabledFlagSetBitKHR                                  = 16,
        InitQpMinus26BitKHR                                                 = 32,
        WeightedPredFlagSetBitKHR                                           = 64,
        WeightedBipredFlagSetBitKHR                                         = 128,
        Log2ParallelMergeLevelMinus2BitKHR                                  = 256,
        SignDataHidingEnabledFlagSetBitKHR                                  = 512,
        TransformSkipEnabledFlagSetBitKHR                                   = 1024,
        TransformSkipEnabledFlagUnsetBitKHR                                 = 2048,
        PpsSliceChromaQpOffsetsPresentFlagSetBitKHR                         = 4096,
        TransquantBypassEnabledFlagSetBitKHR                                = 8192,
        ConstrainedIntraPredFlagSetBitKHR                                   = 16384,
        EntropyCodingSyncEnabledFlagSetBitKHR                               = 32768,
        DeblockingFilterOverrideEnabledFlagSetBitKHR                        = 65536,
        DependentSliceSegmentsEnabledFlagSetBitKHR                          = 131072,
        DependentSliceSegmentFlagSetBitKHR                                  = 262144,
        SliceQpDeltaBitKHR                                                  = 524288,
        DifferentSliceQpDeltaBitKHR                                         = 1048576,
    };

    enum class VideoEncodeH265TransformBlockSizeFlagBitsKHR : std::uint32_t
    {
        X4BitKHR                                                            = 1,
        X8BitKHR                                                            = 2,
        X16BitKHR                                                           = 4,
        X32BitKHR                                                           = 8,
    };

    enum class VideoEncodeIntraRefreshModeFlagBitsKHR : std::uint32_t
    {
        NoneKHR                                                             = 0,
        PerPicturePartitionBitKHR                                           = 1,
        BlockBasedBitKHR                                                    = 2,
        BlockRowBasedBitKHR                                                 = 4,
        BlockColumnBasedBitKHR                                              = 8,
    };

    enum class VideoEncodePerPartitionFeedbackFlagBitsKHR : std::uint32_t
    {
        StatusBitKHR                                                        = 1,
        BitstreamBufferOffsetBitKHR                                         = 2,
        BitstreamBytesWrittenBitKHR                                         = 4,
    };

    enum class VideoEncodeRateControlModeFlagBitsKHR : std::uint32_t
    {
        DefaultKHR                                                          = 0,
        DisabledBitKHR                                                      = 1,
        CbrBitKHR                                                           = 2,
        VbrBitKHR                                                           = 4,
    };

    enum class VideoEncodeRgbChromaOffsetFlagBitsVALVE : std::uint32_t
    {
        CositedEvenBitVALVE                                                 = 1,
        MidpointBitVALVE                                                    = 2,
    };

    enum class VideoEncodeRgbModelConversionFlagBitsVALVE : std::uint32_t
    {
        RgbIdentityBitVALVE                                                 = 1,
        YcbcrIdentityBitVALVE                                               = 2,
        Ycbcr709BitVALVE                                                    = 4,
        Ycbcr601BitVALVE                                                    = 8,
        Ycbcr2020BitVALVE                                                   = 16,
    };

    enum class VideoEncodeRgbRangeCompressionFlagBitsVALVE : std::uint32_t
    {
        FullRangeBitVALVE                                                   = 1,
        NarrowRangeBitVALVE                                                 = 2,
    };

    enum class VideoEncodeTuningModeKHR : std::uint32_t
    {
        DefaultKHR                                                          = 0,
        HighQualityKHR                                                      = 1,
        LowLatencyKHR                                                       = 2,
        UltraLowLatencyKHR                                                  = 3,
        LosslessKHR                                                         = 4,
    };

    enum class VideoEncodeUsageFlagBitsKHR : std::uint32_t
    {
        DefaultKHR                                                          = 0,
        TranscodingBitKHR                                                   = 1,
        StreamingBitKHR                                                     = 2,
        RecordingBitKHR                                                     = 4,
        ConferencingBitKHR                                                  = 8,
    };

    enum class VideoSessionCreateFlagBitsKHR : std::uint32_t
    {
        ProtectedContentBitKHR                                              = 1,
        AllowEncodeParameterOptimizationsBitKHR                             = 2,
        InlineQueriesBitKHR                                                 = 4,
        AllowEncodeQuantizationDeltaMapBitKHR                               = 8,
        AllowEncodeEmphasisMapBitKHR                                        = 16,
        InlineSessionParametersBitKHR                                       = 32,
    };

    enum class VideoSessionParametersCreateFlagBitsKHR : std::uint32_t
    {
        QuantizationMapCompatibleBitKHR                                     = 1,
    };

    enum class ViewportCoordinateSwizzleNV : std::uint32_t
    {
        PositiveXNV                                                         = 0,
        NegativeXNV                                                         = 1,
        PositiveYNV                                                         = 2,
        NegativeYNV                                                         = 3,
        PositiveZNV                                                         = 4,
        NegativeZNV                                                         = 5,
        PositiveWNV                                                         = 6,
        NegativeWNV                                                         = 7,
    };

    enum class WaylandSurfaceCreateFlagBitsKHR : std::uint32_t
    {
        DisableColorManagement                                              = 1,
    };

}

#endif
