#ifndef INCLUDED_LUMINA_MESSENGER_FORMAT_HPP
#define INCLUDED_LUMINA_MESSENGER_FORMAT_HPP
#pragma once

#include "Enumeration.hpp"

#include <map>
#include <string>
#include <string_view>
#include <vector>

namespace lumina::messenger {
    class Format {
    public:
        Format& Emplace     ( const std::string&    key,
                              const std::string&    value   ) noexcept;
        Format& Emplace     ( const std::string&    message ) noexcept;
        Format& SetObject   ( std::string_view      object  ) noexcept;
        Format& SetLevel    ( Level                 level   ) noexcept;
        Format& SetMessages ( const std::vector<std::string>& messages ) noexcept;
        Format& SetPairs    ( const std::vector<std::pair<std::string, std::string>>& map ) noexcept;
        [[nodiscard]] std::string String( ) const noexcept;
    private:
        std::string                                         CoreObject  { "UNTITLED-OBJECT" };
        std::vector<std::pair<std::string, std::string>>    CoreMap     {                   };
        std::vector<std::string>                            CoreSet     {                   };
        Level                                               CoreLevel   {                   };
    };
}

#endif