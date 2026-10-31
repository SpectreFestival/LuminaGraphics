#ifndef INCLUDED_LUMINA_MESSENGER_CHRONOMETER_HPP
#define INCLUDED_LUMINA_MESSENGER_CHRONOMETER_HPP
#pragma once

#include "../Platform.hpp"
#include <chrono>

namespace lumina::messenger {
    class Chronometer {
    public:
        using Clock    = std::chrono::system_clock;
        using Instant  = std::chrono::system_clock::time_point;
        using Duration = std::chrono::system_clock::duration;

        [[nodiscard]] static Instant Current( ) noexcept;

        Chronometer( ) noexcept;

        [[nodiscard]] Instant   Synchronize( ) noexcept;

        [[nodiscard]] Instant   Capture( ) const noexcept;

        [[nodiscard]] Duration  Measure( ) const noexcept;
    private:
        Instant CoreInstant { };
    };
}

#endif