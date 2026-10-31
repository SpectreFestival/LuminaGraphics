#include "Triangle.hpp"

#include "TriangleShader.hpp"

#include <Lumina/Messenger.hpp>
#include <Lumina/Runtime/Vulkan/Native/Interface.hpp>
#include <Lumina/Runtime/Vulkan/Native/Names.hpp>

#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>

#include <array>
#include <cstdint>
#include <vector>

namespace app
{
    namespace
    {
        constexpr std::uint32_t kWidth = 1600;
        constexpr std::uint32_t kHeight = 800;

        [[nodiscard]] bool LoadInstance( const vkapi::GetInstanceProcAddr& gipa, vkapi::Instance instance,
                                         const char* name, auto& function ) noexcept
        {
            function.Load( gipa.Call( instance, name ) );
            return function.IsAvailable( );
        }

        [[nodiscard]] bool LoadDevice( const vkapi::GetDeviceProcAddr& gdpa, vkapi::Device device,
                                       const char* name, auto& function ) noexcept
        {
            function.Load( gdpa.Call( device, name ) );
            return function.IsAvailable( );
        }
    }

    [[nodiscard]] bool RunTriangle( GLFWwindow* window ) noexcept
    {
        vkapi::Runtime runtime{};
        if ( not runtime.Load( "vulkan-1.dll" ) )
        {
            return false;
        }

        vkapi::GetInstanceProcAddr gipa{};
        gipa.Load( runtime.GetProcAddress( "vkGetInstanceProcAddr" ) );

        // ---- instance ------------------------------------------------------
        vkapi::CreateInstance createInstance{};
        LoadInstance( gipa, nullptr, "vkCreateInstance", createInstance );

        const char* layers[] = { vkapi::VK_LAYER_KHRONOS_validation };
        const char* extensions[] = { vkapi::VK_KHR_surface, vkapi::VK_KHR_win32_surface, vkapi::VK_EXT_debug_utils };

        vkapi::ApplicationInfo applicationInfo{};
        applicationInfo.SetApplicationName( "LuminaTriangle" ).SetApiVersion( vkapi::EncodeVersion( 1u, 3u, 0u ) );

        vkapi::InstanceCreateInfo instanceCreateInfo{};
        instanceCreateInfo.SetApplicationInfo( applicationInfo )
                          .SetLayerNames( layers )
                          .SetExtensionNames( extensions );

        vkapi::Instance instance{};
        if ( createInstance( &instanceCreateInfo, nullptr, &instance ) != vkapi::Result::Success )
        {
            return false;
        }

        // ---- surface -------------------------------------------------------
        vkapi::CreateWin32SurfaceKHR createSurface{};
        LoadInstance( gipa, instance, "vkCreateWin32SurfaceKHR", createSurface );

        vkapi::SurfaceCreateInfo surfaceCreateInfo{};
        surfaceCreateInfo.SetDisplay( glfwGetWin32Window( window ) ? GetModuleHandleA( nullptr ) : nullptr )
                         .SetSurface( glfwGetWin32Window( window ) );

        vkapi::SurfaceKHR surface{};
        if ( createSurface( instance, &surfaceCreateInfo, nullptr, &surface ) != vkapi::Result::Success )
        {
            return false;
        }

        // ---- physical device ----------------------------------------------
        vkapi::EnumeratePhysicalDevices enumeratePhysicalDevices{};
        LoadInstance( gipa, instance, "vkEnumeratePhysicalDevices", enumeratePhysicalDevices );

        std::uint32_t deviceCount{};
        enumeratePhysicalDevices( instance, &deviceCount, nullptr );
        if ( deviceCount == 0 )
        {
            return false;
        }

        std::vector<vkapi::PhysicalDevice> physicalDevices( deviceCount );
        enumeratePhysicalDevices( instance, &deviceCount, physicalDevices.data( ) );

        vkapi::GetPhysicalDeviceQueueFamilyProperties getQueueFamilyProperties{};
        LoadInstance( gipa, instance, "vkGetPhysicalDeviceQueueFamilyProperties", getQueueFamilyProperties );

        vkapi::GetPhysicalDeviceSurfaceSupportKHR getSurfaceSupport{};
        LoadInstance( gipa, instance, "vkGetPhysicalDeviceSurfaceSupportKHR", getSurfaceSupport );

        vkapi::PhysicalDevice physicalDevice{};
        std::uint32_t queueFamily{};
        bool found{ false };
        for ( const auto candidate : physicalDevices )
        {
            std::uint32_t familyCount{};
            getQueueFamilyProperties( candidate, &familyCount, nullptr );
            std::vector<vkapi::QueueFamilyProperties> families( familyCount );
            getQueueFamilyProperties( candidate, &familyCount, families.data( ) );

            for ( std::uint32_t index = 0; index < familyCount; ++index )
            {
                const auto flags = families[index].GetQueueFlags( );
                if ( ( flags & 0x1u ) == 0 )
                {
                    continue;
                }
                std::uint32_t supported{};
                getSurfaceSupport( candidate, index, surface, &supported );
                if ( supported != 0 )
                {
                    physicalDevice = candidate;
                    queueFamily = index;
                    found = true;
                    break;
                }
            }
            if ( found )
            {
                break;
            }
        }
        if ( not found )
        {
            return false;
        }

        // ---- device --------------------------------------------------------
        vkapi::CreateDevice createDevice{};
        LoadInstance( gipa, instance, "vkCreateDevice", createDevice );

        const float priority = 1.0f;
        vkapi::DeviceQueueCreateInfo queueCreateInfo{};
        queueCreateInfo.SetQueueFamilyIndex( queueFamily ).SetQueueProperties( std::span{ &priority, 1 } );

        const char* deviceExtensions[] = { vkapi::VK_KHR_swapchain };
        vkapi::DeviceCreateInfo deviceCreateInfo{};
        deviceCreateInfo.SetQueueCreateInfos( std::span{ &queueCreateInfo, 1 } ).SetEnabledExtensionNames( deviceExtensions );

        vkapi::Device device{};
        if ( createDevice( physicalDevice, &deviceCreateInfo, nullptr, &device ) != vkapi::Result::Success )
        {
            return false;
        }

        vkapi::GetDeviceProcAddr gdpa{};
        LoadInstance( gipa, instance, "vkGetDeviceProcAddr", gdpa );
        gdpa.Load( gipa.Call( instance, "vkGetDeviceProcAddr" ) );

        vkapi::GetDeviceQueue getDeviceQueue{};
        LoadDevice( gdpa, device, "vkGetDeviceQueue", getDeviceQueue );

        vkapi::Queue queue{};
        getDeviceQueue( device, queueFamily, 0, &queue );

        // ---- swapchain -----------------------------------------------------
        vkapi::CreateSwapchainKHR createSwapchain{};
        LoadDevice( gdpa, device, "vkCreateSwapchainKHR", createSwapchain );
        vkapi::GetSwapchainImagesKHR getSwapchainImages{};
        LoadDevice( gdpa, device, "vkGetSwapchainImagesKHR", getSwapchainImages );

        vkapi::Extent2D imageExtent{};
        imageExtent.SetWidth( kWidth ).SetHeight( kHeight );

        vkapi::SwapchainCreateInfoKHR swapchainCreateInfo{};
        swapchainCreateInfo.SetSurface( surface )
                           .SetMinImageCount( 3 )
                           .SetImageFormat( vkapi::Format::B8g8r8a8Srgb )
                           .SetImageColorSpace( vkapi::ColorSpaceKHR::SrgbNonlinearKHR )
                           .SetImageExtent( imageExtent )
                           .SetImageArrayLayers( 1 )
                           .SetImageUsage( { vkapi::ImageUsageFlagBits::ColorAttachment } )
                           .SetImageSharingMode( vkapi::SharingMode::Exclusive )
                           .SetPreTransform( { vkapi::SurfaceTransformFlagBitsKHR::IdentityKHR } )
                           .SetCompositeAlpha( { vkapi::CompositeAlphaFlagBitsKHR::OpaqueKHR } )
                           .SetPresentMode( vkapi::PresentModeKHR::FifoKHR )
                           .SetClipped( 1u );

        vkapi::SwapchainKHR swapchain{};
        if ( createSwapchain( device, &swapchainCreateInfo, nullptr, &swapchain ) != vkapi::Result::Success )
        {
            return false;
        }

        std::uint32_t imageCount{};
        getSwapchainImages( device, swapchain, &imageCount, nullptr );
        std::vector<vkapi::Image> images( imageCount );
        getSwapchainImages( device, swapchain, &imageCount, images.data( ) );

        // ---- image views ---------------------------------------------------
        vkapi::CreateImageView createImageView{};
        LoadDevice( gdpa, device, "vkCreateImageView", createImageView );

        vkapi::ImageSubresourceRange range{};
        range.SetAspectMask( { vkapi::ImageAspectFlagBits::Color } )
             .SetBaseMipLevel( 0 )
             .SetLevelCount( 1 )
             .SetBaseArrayLayer( 0 )
             .SetLayerCount( 1 );

        std::vector<vkapi::ImageView> views( imageCount );
        for ( std::uint32_t index = 0; index < imageCount; ++index )
        {
            vkapi::ImageViewCreateInfo viewInfo{};
            viewInfo.SetImage( images[index] )
                    .SetViewType( vkapi::ImageViewType::X2D )
                    .SetFormat( vkapi::Format::B8g8r8a8Srgb )
                    .SetSubResourcesRange( range );
            if ( createImageView( device, &viewInfo, nullptr, &views[index] ) != vkapi::Result::Success )
            {
                return false;
            }
        }

        // ---- render pass ---------------------------------------------------
        vkapi::CreateRenderPass createRenderPass{};
        LoadDevice( gdpa, device, "vkCreateRenderPass", createRenderPass );

        vkapi::AttachmentDescription attachment{};
        attachment.SetFormat( vkapi::Format::B8g8r8a8Srgb )
                  .SetSamples( { vkapi::SampleCountFlagBits::X1 } )
                  .SetLoadOp( vkapi::AttachmentLoadOp::Clear )
                  .SetStoreOp( vkapi::AttachmentStoreOp::Store )
                  .SetStencilLoadOp( vkapi::AttachmentLoadOp::DontCare )
                  .SetStencilStoreOp( vkapi::AttachmentStoreOp::DontCare )
                  .SetInitialLayout( vkapi::ImageLayout::Undefined )
                  .SetFinalLayout( vkapi::ImageLayout::PresentSrcKHR );

        vkapi::AttachmentReference reference{};
        reference.SetAttachment( 0 ).SetLayout( vkapi::ImageLayout::ColorAttachmentOptimal );

        vkapi::SubpassDescription subpass{};
        subpass.SetPipelineBindPoint( vkapi::PipelineBindPoint::Graphics )
               .SetColorAttachments( std::span{ &reference, 1 } );

        vkapi::RenderPassCreateInfo renderPassInfo{};
        renderPassInfo.SetAttachments( std::span{ &attachment, 1 } )
                      .SetSubpasses( std::span{ &subpass, 1 } );

        vkapi::RenderPass renderPass{};
        if ( createRenderPass( device, &renderPassInfo, nullptr, &renderPass ) != vkapi::Result::Success )
        {
            return false;
        }

        // ---- pipeline ------------------------------------------------------
        vkapi::CreateShaderModule createShaderModule{};
        LoadDevice( gdpa, device, "vkCreateShaderModule", createShaderModule );

        vkapi::ShaderModuleCreateInfo vertexModuleInfo{};
        vertexModuleInfo.SetCodeSize( sizeof( TriangleVertexSpirv ) ).SetCode( TriangleVertexSpirv );
        vkapi::ShaderModule vertexModule{};
        createShaderModule( device, &vertexModuleInfo, nullptr, &vertexModule );

        vkapi::ShaderModuleCreateInfo fragmentModuleInfo{};
        fragmentModuleInfo.SetCodeSize( sizeof( TriangleFragmentSpirv ) ).SetCode( TriangleFragmentSpirv );
        vkapi::ShaderModule fragmentModule{};
        createShaderModule( device, &fragmentModuleInfo, nullptr, &fragmentModule );

        vkapi::PipelineShaderStageCreateInfo vertexStage{};
        vertexStage.SetStage( vkapi::ShaderStageFlagBits::Vertex ).SetModule( vertexModule ).SetName( "main" );

        vkapi::PipelineShaderStageCreateInfo fragmentStage{};
        fragmentStage.SetStage( vkapi::ShaderStageFlagBits::Fragment ).SetModule( fragmentModule ).SetName( "main" );

        vkapi::PipelineVertexInputStateCreateInfo vertexInput{};
        vkapi::PipelineInputAssemblyStateCreateInfo inputAssembly{};
        inputAssembly.SetTopology( vkapi::PrimitiveTopology::TriangleList );

        vkapi::Viewport viewport{};
        viewport.SetX( 0.0f ).SetY( 0.0f ).SetWidth( static_cast<float>( kWidth ) )
                .SetHeight( static_cast<float>( kHeight ) ).SetMinDepth( 0.0f ).SetMaxDepth( 1.0f );

        vkapi::Offset2D offset{};
        offset.SetX( 0 ).SetY( 0 );
        vkapi::Extent2D scissorExtent{};
        scissorExtent.SetWidth( kWidth ).SetHeight( kHeight );
        vkapi::Rect2D scissor{};
        scissor.SetOffset( offset ).SetExtent( scissorExtent );

        vkapi::PipelineViewportStateCreateInfo viewportState{};
        viewportState.SetViewports( std::span{ &viewport, 1 } ).SetScissors( std::span{ &scissor, 1 } );

        vkapi::PipelineRasterizationStateCreateInfo rasterization{};
        rasterization.SetPolygonMode( vkapi::PolygonMode::Fill )
                     .SetCullMode( { vkapi::CullModeFlagBits::None } )
                     .SetFrontFace( vkapi::FrontFace::CounterClockwise )
                     .SetLineWidth( 1.0f );

        vkapi::PipelineMultisampleStateCreateInfo multisample{};
        multisample.SetRasterizationSamples( { vkapi::SampleCountFlagBits::X1 } );

        vkapi::PipelineColorBlendAttachmentState blendAttachment{};
        blendAttachment.SetColorWriteMask( { vkapi::ColorComponentFlagBits::R, vkapi::ColorComponentFlagBits::G,
                                             vkapi::ColorComponentFlagBits::B, vkapi::ColorComponentFlagBits::A } );

        vkapi::PipelineColorBlendStateCreateInfo colorBlend{};
        colorBlend.SetAttachments( std::span{ &blendAttachment, 1 } );

        vkapi::PipelineLayoutCreateInfo layoutInfo{};
        vkapi::CreatePipelineLayout createPipelineLayout{};
        LoadDevice( gdpa, device, "vkCreatePipelineLayout", createPipelineLayout );

        vkapi::PipelineLayout pipelineLayout{};
        if ( createPipelineLayout( device, &layoutInfo, nullptr, &pipelineLayout ) != vkapi::Result::Success )
        {
            return false;
        }

        vkapi::GraphicsPipelineCreateInfo pipelineInfo{};
        pipelineInfo.SetStages( std::span{ &vertexStage, 2 } )
                    .SetVertexInputState( vertexInput )
                    .SetInputAssemblyState( inputAssembly )
                    .SetViewportState( viewportState )
                    .SetRasterizationState( rasterization )
                    .SetMultisampleState( multisample )
                    .SetColorBlendState( colorBlend )
                    .SetLayout( pipelineLayout )
                    .SetRenderPass( renderPass );

        vkapi::CreateGraphicsPipelines createPipelines{};
        LoadDevice( gdpa, device, "vkCreateGraphicsPipelines", createPipelines );

        vkapi::Pipeline pipeline{};
        if ( createPipelines( device, nullptr, 1, &pipelineInfo, nullptr, &pipeline ) != vkapi::Result::Success )
        {
            return false;
        }

        // ---- framebuffers --------------------------------------------------
        vkapi::CreateFramebuffer createFramebuffer{};
        LoadDevice( gdpa, device, "vkCreateFramebuffer", createFramebuffer );

        std::vector<vkapi::Framebuffer> framebuffers( imageCount );
        for ( std::uint32_t index = 0; index < imageCount; ++index )
        {
            vkapi::FramebufferCreateInfo info{};
            info.SetRenderPass( renderPass )
                .SetAttachments( std::span<const vkapi::ImageView>{ &views[index], 1 } )
                .SetWidth( kWidth ).SetHeight( kHeight ).SetLayers( 1 );
            if ( createFramebuffer( device, &info, nullptr, &framebuffers[index] ) != vkapi::Result::Success )
            {
                return false;
            }
        }

        // ---- command pool, buffers and sync --------------------------------
        vkapi::CreateCommandPool createCommandPool{};
        LoadDevice( gdpa, device, "vkCreateCommandPool", createCommandPool );
        vkapi::CommandPoolCreateInfo poolInfo{};
        poolInfo.SetQueueFamilyIndex( queueFamily );
        vkapi::CommandPool commandPool{};
        createCommandPool( device, &poolInfo, nullptr, &commandPool );

        vkapi::AllocateCommandBuffers allocateCommandBuffers{};
        LoadDevice( gdpa, device, "vkAllocateCommandBuffers", allocateCommandBuffers );
        vkapi::CommandBufferAllocateInfo allocateInfo{};
        allocateInfo.SetCommandPool( commandPool )
                    .SetLevel( vkapi::CommandBufferLevel::Primary )
                    .SetCommandBufferCount( static_cast< std::uint32_t >( imageCount ) );
        std::vector<vkapi::CommandBuffer> commandBuffers( imageCount );
        allocateCommandBuffers( device, &allocateInfo, commandBuffers.data( ) );

        vkapi::CreateSemaphore createSemaphore{};
        LoadDevice( gdpa, device, "vkCreateSemaphore", createSemaphore );
        vkapi::CreateFence createFence{};
        LoadDevice( gdpa, device, "vkCreateFence", createFence );
        vkapi::WaitForFences waitForFences{};
        LoadDevice( gdpa, device, "vkWaitForFences", waitForFences );
        vkapi::ResetFences resetFences{};
        LoadDevice( gdpa, device, "vkResetFences", resetFences );

        vkapi::SemaphoreCreateInfo semaphoreInfo{};
        vkapi::Semaphore imageAvailable{}, renderFinished{};
        createSemaphore( device, &semaphoreInfo, nullptr, &imageAvailable );
        createSemaphore( device, &semaphoreInfo, nullptr, &renderFinished );

        vkapi::FenceCreateInfo fenceInfo{};
        fenceInfo.SetFlag( { vkapi::FenceCreateFlagBits::Signaled } );
        vkapi::Fence inFlight{};
        createFence( device, &fenceInfo, nullptr, &inFlight );

        // ---- record --------------------------------------------------------
        vkapi::BeginCommandBuffer beginCommandBuffer{};
        LoadDevice( gdpa, device, "vkBeginCommandBuffer", beginCommandBuffer );
        vkapi::EndCommandBuffer endCommandBuffer{};
        LoadDevice( gdpa, device, "vkEndCommandBuffer", endCommandBuffer );
        vkapi::CmdBeginRenderPass cmdBeginRenderPass{};
        LoadDevice( gdpa, device, "vkCmdBeginRenderPass", cmdBeginRenderPass );
        vkapi::CmdEndRenderPass cmdEndRenderPass{};
        LoadDevice( gdpa, device, "vkCmdEndRenderPass", cmdEndRenderPass );
        vkapi::CmdBindPipeline cmdBindPipeline{};
        LoadDevice( gdpa, device, "vkCmdBindPipeline", cmdBindPipeline );
        vkapi::CmdDraw cmdDraw{};
        LoadDevice( gdpa, device, "vkCmdDraw", cmdDraw );
        vkapi::CmdSetViewport cmdSetViewport{};
        LoadDevice( gdpa, device, "vkCmdSetViewport", cmdSetViewport );
        vkapi::CmdSetScissor cmdSetScissor{};
        LoadDevice( gdpa, device, "vkCmdSetScissor", cmdSetScissor );

        vkapi::ClearColorValue clearColor{};
        clearColor.SetFloat32( { 0.05f, 0.06f, 0.09f, 1.0f } );
        vkapi::ClearValue clearValue{};
        clearValue.SetColor( clearColor );

        for ( std::uint32_t index = 0; index < imageCount; ++index )
        {
            vkapi::CommandBufferBeginInfo beginInfo{};
            beginCommandBuffer( commandBuffers[index], &beginInfo );

            vkapi::RenderPassBeginInfo passBegin{};
            passBegin.SetRenderPass( renderPass )
                     .SetFramebuffer( framebuffers[index] )
                     .SetRenderArea( scissor )
                     .SetClearValues( std::span{ &clearValue, 1 } );

            cmdBeginRenderPass( commandBuffers[index], &passBegin, vkapi::SubpassContents::Inline );
            cmdBindPipeline( commandBuffers[index], vkapi::PipelineBindPoint::Graphics, pipeline );
            cmdDraw( commandBuffers[index], 3, 1, 0, 0 );
            cmdEndRenderPass( commandBuffers[index] );

            endCommandBuffer( commandBuffers[index] );
        }

        // ---- loop ----------------------------------------------------------
        vkapi::AcquireNextImageKHR acquireNextImage{};
        LoadDevice( gdpa, device, "vkAcquireNextImageKHR", acquireNextImage );
        vkapi::QueueSubmit queueSubmit{};
        LoadDevice( gdpa, device, "vkQueueSubmit", queueSubmit );
        vkapi::QueuePresentKHR queuePresent{};
        LoadDevice( gdpa, device, "vkQueuePresentKHR", queuePresent );

        while ( not glfwWindowShouldClose( window ) )
        {
            glfwPollEvents( );

            std::uint32_t imageIndex{};
            if ( acquireNextImage( device, swapchain, UINT64_MAX, imageAvailable, nullptr, &imageIndex ) != vkapi::Result::Success )
            {
                continue;
            }

            const vkapi::Fence fence = inFlight;
            waitForFences( device, 1, &fence, 1, UINT64_MAX );
            resetFences( device, 1, &inFlight );

            const vkapi::PipelineStageFlagBits waitStage = vkapi::PipelineStageFlagBits::ColorAttachmentOutput;

            vkapi::SubmitInfo submit{};
            submit.SetWaitSemaphores( std::span<const vkapi::Semaphore>{ &imageAvailable, 1 } )
                  .SetWaitDstStageMask( std::span{ &waitStage, 1 } )
                  .SetCommandBuffers( std::span{ &commandBuffers[imageIndex], 1 } )
                  .SetSignalSemaphores( std::span<const vkapi::Semaphore>{ &renderFinished, 1 } );

            queueSubmit( queue, 1, &submit, inFlight );

            vkapi::PresentInfoKHR present{};
            present.SetWaitSemaphores( std::span<const vkapi::Semaphore>{ &renderFinished, 1 } )
                   .SetSwapchains( std::span{ &swapchain, 1 } )
                   .SetImageIndices( std::span{ &imageIndex, 1 } );
            queuePresent( queue, &present );
        }

        vkapi::DeviceWaitIdle deviceWaitIdle{};
        LoadDevice( gdpa, device, "vkDeviceWaitIdle", deviceWaitIdle );
        deviceWaitIdle( device );

        return true;
    }
}
