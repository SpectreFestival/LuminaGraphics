#include <format>
#include <Lumina/Messenger/Console.hpp>
#include <Lumina/Platform.hpp>

#ifdef LUMINA_MACRO_PLATFORM_USE_WIN64
#include <windows.h>
#endif

#ifdef LUMINA_MACRO_PLATFORM_USE_WIN64
namespace {
    void LuminaConsoleWrite( const lumina::messenger::stdout_flag&, const std::string_view message ) noexcept {
        HANDLE handle = ::GetStdHandle( STD_OUTPUT_HANDLE );
        DWORD  mode{};
        if ( handle != nullptr and handle != INVALID_HANDLE_VALUE and ::GetConsoleMode( handle, &mode ) != FALSE ) [[likely]] {
            DWORD number{};
            WriteConsoleA( handle, message.data( ), message.size( ), &number, nullptr );
        } else {
            std::fwrite( message.data( ), sizeof( char ), message.size( ), stdout );
            std::fflush( stdout );
        }
    }
    void LuminaConsoleWrite( const lumina::messenger::stderr_flag&, const std::string_view message ) noexcept {
        HANDLE handle = ::GetStdHandle( STD_ERROR_HANDLE );
        DWORD  mode{};
        if ( handle != nullptr and handle != INVALID_HANDLE_VALUE and ::GetConsoleMode( handle, &mode ) != FALSE ) [[likely]] {
            DWORD number{};
            WriteConsoleA( handle, message.data( ), message.size( ), &number, nullptr );
        } else {
            std::fwrite( message.data( ), sizeof( char ), message.size( ), stderr );
            std::fflush( stderr );
        }
    }
}
#endif


namespace lumina::messenger {
    void Write( const stdout_flag&, const std::string_view message ) noexcept {
        ::LuminaConsoleWrite( stdout_flag(), message );
    }

    void Write( const stderr_flag&, const std::string_view message ) noexcept {
        ::LuminaConsoleWrite( stderr_flag(), message );
    }

    void Write(const stdout_flag&, const std::string_view message, const std::array<std::uint8_t, 3>& color ) noexcept {
        ::LuminaConsoleWrite( stdout_flag(), std::format( "\033[38;2;{};{};{}m{}\033[0m", color[ 0 ], color[ 1 ], color[ 2 ], message ) );
    }

    void Write(const stderr_flag&, const std::string_view message, const std::array<std::uint8_t, 3>& color ) noexcept {
        ::LuminaConsoleWrite( stderr_flag(), std::format( "\033[38;2;{};{};{}m{}\033[0m", color[ 0 ], color[ 1 ], color[ 2 ], message ) );
    }
}