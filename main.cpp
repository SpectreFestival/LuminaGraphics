#include <cstdlib>
#include <Application/Application.hpp>
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>
#include <Lumina/Messenger.hpp>

int main( ) {
    if ( glfwInit( ) != GLFW_TRUE ) [[unlikely]] {
        lumina::messenger::Fatal( "Main", "Fail to initialize GLFW" );
        std::exit( EXIT_FAILURE );
    }

    glfwInitHint( GLFW_CLIENT_API, GLFW_NO_API );
    GLFWwindow* window = glfwCreateWindow( 1600, 800, "LearnVulkan", nullptr, nullptr );

    app::Application app{};

    app.CreateInstance( );

    while( not glfwWindowShouldClose( window ) ) {
        glfwPollEvents( );
    }

    glfwDestroyWindow( window );
    glfwTerminate( );
}