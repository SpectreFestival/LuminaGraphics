#include <Lumina/Messenger.hpp>
#include <Lumina/Messenger/Enumeration.hpp>
#include <Lumina/Messenger/Chronometer.hpp>
#include <Lumina/Messenger/Thread.hpp>
#include <Lumina/Messenger/Console.hpp>
#include <Lumina/Messenger/Format.hpp>

namespace lumina::messenger {
    void PrintMessage( const Level level, const std::string_view object, const std::string& message ) noexcept {
        Write( stdout_flag( ),
        Format{}
        .SetLevel   ( level   )
        .SetObject  ( object  )
        .Emplace    ( message )
        .String     ( ) );
    }

    void PrintLine( const Level level, const std::string_view object, const std::string& message ) noexcept {
        std::stringstream output;
        output
        << std::format( "{:%Y-%m-%d %H:%M:%S} " ,
            std::chrono::zoned_time{
            std::chrono::current_zone(),
            std::chrono::floor<std::chrono::milliseconds>( Chronometer::Current( ) )
            } )
        << ToString( level )    << ' '
        << object               << ' '
        << message
        << std::endl;
        Write( stdout_flag( ), output.str( ) );
    }

    void PrintMessage( Level level, std::string_view object, const std::vector<std::string>& messages ) noexcept {
        Format format{};
        format.SetLevel ( level     )
        .SetObject      ( object    )
        .SetMessages    ( messages  );
        Write( stdout_flag( ), format.String( ) );
    }

    void PrintMap( Level level, std::string_view object, const std::vector<std::pair<std::string, std::string>>& map ) noexcept {
        Format format{};
        format.SetLevel ( level     )
        .SetObject      ( object    )
        .SetPairs       ( map       );
        Write( stdout_flag( ), format.String( ) );
    }
}
