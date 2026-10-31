#ifndef INCLUDED_LUMINA_VERTEX_PRECISION_HPP
#define INCLUDED_LUMINA_VERTEX_PRECISION_HPP
#pragma once

#include <cstdint>

namespace lumina::vertex::core {
    using S8  = std::int8_t;
    using S16 = std::int16_t;
    using S32 = std::int32_t;
    using S64 = std::int64_t;
    using U8  = std::uint8_t;
    using U16 = std::uint16_t;
    using U32 = std::uint32_t;
    using U64 = std::uint64_t;
    using F32 = float;
    using F64 = double;

    static_assert( sizeof( S8  ) == 0x01 );
    static_assert( sizeof( S16 ) == 0x02 );
    static_assert( sizeof( S32 ) == 0x04 );
    static_assert( sizeof( S64 ) == 0x08 );
    static_assert( sizeof( U8  ) == 0x01 );
    static_assert( sizeof( U16 ) == 0x02 );
    static_assert( sizeof( U32 ) == 0x04 );
    static_assert( sizeof( U64 ) == 0x08 );
    static_assert( sizeof( F32 ) == 0x04 );
    static_assert( sizeof( F64 ) == 0x08 );
}

#endif