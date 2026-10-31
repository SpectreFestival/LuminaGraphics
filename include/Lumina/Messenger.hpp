#ifndef INCLUDED_LUMINA_MESSENGER_HPP
#define INCLUDED_LUMINA_MESSENGER_HPP
#pragma once

#include "Messenger/Enumeration.hpp"
#include <format>
#include <vector>

namespace lumina::messenger {
    void PrintMessage( Level level, std::string_view object, const std::string& message ) noexcept;
    void PrintLine   ( Level level, std::string_view object, const std::string& message ) noexcept;

    void PrintMessage(  Level                                                   level,
                        std::string_view                                        object,
                        const std::vector<std::string>&                         messages    ) noexcept;

    void PrintMap    (  Level                                                   level,
                        std::string_view                                        object,
                        const std::vector<std::pair<std::string, std::string>>& map         ) noexcept;

    template <typename... Args>
    void PrintMessage(  const Level level, const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
         PrintMessage( level, object, std::format( format, std::forward<decltype(args)>( args )... ) );
    }

    template <typename... Args>
    void Trace( const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
        PrintMessage( Level::Trace, object, format, std::forward<decltype(args)>( args )... );
    }

    template <typename... Args>
    void Debug( const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
        PrintMessage( Level::Debug, object, format, std::forward<decltype(args)>( args )... );
    }

    template <typename... Args>
    void Infos( const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
        PrintMessage( Level::Infos, object, format, std::forward<decltype(args)>( args )... );
    }

    template <typename... Args>
    void Warns( const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
        PrintMessage( Level::Warns, object, format, std::forward<decltype(args)>( args )... );
    }

    template <typename... Args>
    void Error( const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
        PrintMessage( Level::Error, object, format, std::forward<decltype(args)>( args )... );
    }

    template <typename... Args>
    void Fatal( const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
        PrintMessage( Level::Fatal, object, format, std::forward<decltype(args)>( args )... );
    }

    template <typename... Args>
    void PrintLine( const Level level, const std::string_view object, const std::format_string<Args...>& format, Args&&... args ) noexcept {
        PrintLine( level, object, std::format( format, std::forward<decltype(args)>( args )... ) );
    }
}

#endif