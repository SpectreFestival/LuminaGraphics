cmake_minimum_required(VERSION 4.3)
project(LuminaGraphics)

set(CMAKE_CXX_STANDARD 20)

add_compile_definitions(LUMINA_MACRO_PLATFORM_USE_WIN64)

add_executable(LuminaGraphics main.cpp
        sources/Lumina/Messenger/Chronometer.cpp
        sources/Lumina/Messenger/Thread.cpp
        sources/Lumina/Messenger/Console.cpp
        sources/Lumina/Messenger/Format.cpp
        sources/Lumina/Messenger.cpp
        Application/Application.cpp
        sources/Lumina/Runtime/Vulkan/Instance.cpp
)

target_include_directories(LuminaGraphics PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/Application
)

target_link_directories(LuminaGraphics PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

target_link_libraries(LuminaGraphics PRIVATE
		glfw3.lib
)
