#include <Lumina/Messenger/Chronometer.hpp>

namespace lumina::messenger {
    [[nodiscard]] Chronometer::Instant Chronometer::Current( ) noexcept {
        return Clock::now( );
    }

    Chronometer::Chronometer( ) noexcept
        : CoreInstant { Current( ) }
    {}

    [[nodiscard]] Chronometer::Instant Chronometer::Synchronize( ) noexcept {
        return CoreInstant = Current( ), CoreInstant;
    }

    // ReSharper disable once CppMemberFunctionMayBeStatic
    [[nodiscard]] Chronometer::Instant Chronometer::Capture( ) const noexcept {
        return Current( );
    }

    [[nodiscard]] Chronometer::Duration Chronometer::Measure( ) const noexcept {
        return Duration{ Capture( ) - CoreInstant };
    }
}