#ifndef INCLUDED_LUMINA_MESSENGER_CONSOLE_HPP
#define INCLUDED_LUMINA_MESSENGER_CONSOLE_HPP
#pragma once

#include <string_view>
#include <array>
#include <cstdint>

namespace lumina::messenger {
    class stdout_flag {};
    class stderr_flag {};

    void Write( const stdout_flag&, std::string_view message ) noexcept;
    void Write( const stderr_flag&, std::string_view message ) noexcept;
    
    void Write( const stdout_flag&, std::string_view message, const std::array<std::uint8_t, 3>& color ) noexcept;
    void Write( const stderr_flag&, std::string_view message, const std::array<std::uint8_t, 3>& color ) noexcept;
}

#endif