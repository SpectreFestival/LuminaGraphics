#ifndef INCLUDED_LUMINA_MESSENGER_THREAD_HPP
#define INCLUDED_LUMINA_MESSENGER_THREAD_HPP
#pragma once

#include <string_view>
#include <cstdint>

namespace lumina::messenger {
    [[nodiscard]]   std::uint64_t       GetThreadID     ( ) noexcept;
    [[nodiscard]]   std::string_view    GetThreadName   ( ) noexcept;
                    std::string_view    SetThreadName   ( std::string_view threadName ) noexcept;
}

#endif