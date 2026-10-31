#ifndef INCLUDED_LUMINA_MESSENGER_ENUMERATION_HPP
#define INCLUDED_LUMINA_MESSENGER_ENUMERATION_HPP
#pragma once

namespace lumina::messenger {
    enum class Level {
        Trace, Debug, Infos, Warns, Error, Fatal, Close
    };

    template <Level level>
    inline constexpr auto LevelString = "UNKNOWN-LEVEL";

    template <>
    inline constexpr auto LevelString<Level::Trace> = "TRACE";

    template <>
    inline constexpr auto LevelString<Level::Debug> = "DEBUG";

    template <>
    inline constexpr auto LevelString<Level::Infos> = "INFOS";

    template <>
    inline constexpr auto LevelString<Level::Warns> = "WARNS";

    template <>
    inline constexpr auto LevelString<Level::Error> = "ERROR";

    template <>
    inline constexpr auto LevelString<Level::Fatal> = "FATAL";

    constexpr auto ToString( Level level ) noexcept -> const char* {
        switch( level ) {
            // 0000-00-00 00:00:00.000 TRACE THREAD NAME
            case Level::Trace:
                return LevelString<Level::Trace>;

            // 0000-00-00 00:00:00.000 DEBUG THREAD NAME
            case Level::Debug:
                return LevelString<Level::Debug>;

            // 0000-00-00 00:00:00.000 INFOS THREAD NAME
            case Level::Infos:
                return LevelString<Level::Infos>;

            // 0000-00-00 00:00:00.000 WARNS THREAD NAME
            case Level::Warns:
                return LevelString<Level::Warns>;

            // 0000-00-00 00:00:00.000 ERROR THREAD NAME
            case Level::Error:
                return LevelString<Level::Error>;

            // 0000-00-00 00:00:00.000 FATAL THREAD NAME
            case Level::Fatal:
                return LevelString<Level::Fatal>;

            // 0000-00-00 00:00:00.000 LEVEL THREAD NAME
            default:
                return "LEVEL";
        }
    }
}

#endif