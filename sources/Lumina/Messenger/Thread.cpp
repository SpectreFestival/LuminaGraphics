#include <Lumina/Messenger/Thread.hpp>
#include <Lumina/Platform.hpp>
#include <string>

#ifdef LUMINA_MACRO_PLATFORM_USE_WIN64
#include <windows.h>
#endif

#ifdef LUMINA_MACRO_PLATFORM_USE_WIN64
namespace {
    [[nodiscard]] std::uint64_t LuminaGetThreadID( ) noexcept {
        return ::GetCurrentThreadId( );
    }
}
#endif

namespace {
    thread_local std::string LuminaGlobalThreadName { "UNTITLED-THREAD" };
}

namespace lumina::messenger {
    [[nodiscard]] std::uint64_t GetThreadID( ) noexcept {
        return ::LuminaGetThreadID( );
    }

    [[nodiscard]] std::string_view GetThreadName( ) noexcept {
        return std::string_view{ LuminaGlobalThreadName.data( ), LuminaGlobalThreadName.size( ) };
    }

    std::string_view SetThreadName( const std::string_view threadName ) noexcept {
        return LuminaGlobalThreadName = threadName,
        std::string_view{ LuminaGlobalThreadName.data( ), LuminaGlobalThreadName.size( ) };
    }
}