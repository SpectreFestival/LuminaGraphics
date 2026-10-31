#include <ranges>
#include <sstream>
#include <Lumina/Messenger/Chronometer.hpp>
#include <Lumina/Messenger/Format.hpp>
#include <Lumina/Messenger/Thread.hpp>

namespace lumina::messenger {
    Format& Format::Emplace( const std::string& key, const std::string& value ) noexcept {
        return CoreMap.emplace_back( key, value ), *this;
    }

    Format& Format::Emplace( const std::string& message ) noexcept {
        return CoreSet.emplace_back( message ), *this;
    }

    Format& Format::SetObject( const std::string_view object ) noexcept {
        return CoreObject = object, *this;
    }

    Format& Format::SetLevel( const Level level ) noexcept {
        return CoreLevel = level, *this;
    }

    Format& Format::SetMessages( const std::vector<std::string>& messages ) noexcept {
        return CoreSet = messages, *this;
    }

    Format& Format::SetPairs( const std::vector<std::pair<std::string, std::string>>& map ) noexcept {
        return CoreMap = map, *this;
    }

    [[nodiscard]] std::string Format::String( ) const noexcept {
        if ( CoreLevel == Level::Close ) {
            return "";
        }

        std::stringstream output{};
        output
            << std::format( "{:%Y-%m-%d %H:%M:%S} " ,
                std::chrono::zoned_time{
                std::chrono::current_zone(),
                std::chrono::floor<std::chrono::milliseconds>( Chronometer::Current( ) )
            } )
            << std::format( "{} " , ToString( CoreLevel    ) )
            << std::format( "{} " , GetThreadName        ( ) )
            << std::format( "{:05} " , GetThreadID       ( ) )
            << std::format( "{}:\n", CoreObject );
        if ( not CoreMap.empty( ) ) {
            auto displayWidth = []( const std::string& s ) {
                int w = 0;
                for ( size_t i = 0; i < s.size( ); ) {
                    if ( const unsigned char c = s[ i ]; c >> 5 == 0x06 ) {
                        w += 1; i += 2;
                    } else if ( c >> 4 == 0x0E ) {
                        w += 2; i += 3;
                    } else if ( c >> 3 == 0x1E ) {
                        w += 2; i += 4;
                    } else {
                        w += 1; i += 1;
                    }
                }
                return w;
            };
            auto wrapByWidth = [&]( const std::string& s, const int maxWidth ) {
                std::vector<std::string> lines;
                std::string cur; int curW = 0;
                for ( size_t i = 0; i < s.size( ); ) {
                    const unsigned char c = s[ i ];
                    int bytes = 1;
                    int cw    = 1;
                    if ( c < 0x80 ) {
                        bytes = 1; cw = 1;
                    } else if ( c >> 5 == 0x06  ) {
                        bytes = 2; cw = 1;
                    } else if ( c >> 4 == 0x0E  ) {
                        bytes = 3; cw = 2;
                    } else if ( c >> 3 == 0x1E  ) {
                        bytes = 4; cw = 2;
                    }
                    if ( curW + cw > maxWidth ) {
                        lines.push_back( cur ); cur.clear( ); curW = 0;
                    }
                    cur.append( s, i, bytes );
                    curW += cw;
                    i += bytes;
                }
                if ( !cur.empty( ) || lines.empty( ) ) {
                    lines.push_back( cur );
                }
                return lines;
            };
            auto padCenter = [&]( const std::string& s, const int width ) {
                int total = width - displayWidth( s ); if ( total < 0 ) total = 0;
                const int left = total / 2;
                return std::string( left, ' ' ) + s + std::string( total - left, ' ' );
            };

            constexpr int MIN_KEY_WIDTH           = 25;
            constexpr int MIN_VALUE_WIDTH         = 40;

            struct Row {
                std::vector<std::string> k {};
                std::vector<std::string> v {};
            };
            std::vector<Row> rows;
            int keyColWidth   = 0;
            int valueColWidth = 0;
            for ( const auto& [ key, value ] : CoreMap ) {
                constexpr int MAX_VALUE_WIDTH = 50;
                constexpr int MAX_KEY_WIDTH   = 50;
                Row r;
                r.k = wrapByWidth( key,   MAX_KEY_WIDTH   );
                r.v = wrapByWidth( value, MAX_VALUE_WIDTH );
                for ( auto& l : r.k ) {
                    keyColWidth   = std::max( keyColWidth,   displayWidth( l ) );
                }
                for ( auto& l : r.v ) {
                    valueColWidth = std::max( valueColWidth, displayWidth( l ) );
                }
                rows.push_back( std::move( r ) );
            }
            keyColWidth   = std::max( keyColWidth,   MIN_KEY_WIDTH   ) + 2;
            valueColWidth = std::max( valueColWidth, MIN_VALUE_WIDTH ) + 2;

            const std::string dash = "\u2500";
            auto hline = [ & ]( const char* L, const char* M, const char* R, const int n1, const int n2 ) {
                std::string s = L;
                for ( int i = 0; i < n1; ++i ) {
                    s += dash;
                }
                s += M;
                for ( int i = 0; i < n2; ++i ) {
                    s += dash;
                }
                s += R;
                s += '\n';
                return s;
            };

            output << hline( "\u250c", "\u252c", "\u2510", keyColWidth, valueColWidth );
            for ( size_t i = 0; i < rows.size( ); ++i ) {
                const auto& [k, v] = rows[ i ];
                size_t n = std::max( k.size( ), v.size( ) );
                for ( size_t j = 0; j < n; ++j ) {
                    std::string kl = j < k.size( ) ? k[ j ] : "";
                    std::string vl = j < v.size( ) ? v[ j ] : "";
                    output << "\u2502" << padCenter( kl, keyColWidth   )
                           << "\u2502" << padCenter( vl, valueColWidth )
                           << "\u2502\n";
                }
                if ( i + 1 < rows.size( ) ) {
                    output << hline( "\u251c", "\u253c", "\u2524", keyColWidth, valueColWidth );
                }
            }
            output << hline( "\u2514", "\u2534", "\u2518", keyColWidth, valueColWidth );
        }
        if ( not CoreSet.empty( ) ) {
            int lineNumber = 1;
            for ( const auto& message : CoreSet ) {
                for ( auto&& line : message | std::views::split( '\n' ) ) {
                    constexpr std::size_t maxWidth = 150;
                    std::string_view sv( line.begin(), line.end( ) );
                    if ( sv.empty( ) ) {
                        output << std::format("(L{:05}):   {}\n", lineNumber++, "");
                        continue;
                    }
                    for ( std::size_t pos = 0; pos < sv.size( ); pos += maxWidth ) {
                        std::string_view chunk = sv.substr(pos, maxWidth);
                        output << std::format("(L{:05}):   {}\n", lineNumber++, chunk);
                    }
                }
            }
        }
        return output.str( );
    }
}