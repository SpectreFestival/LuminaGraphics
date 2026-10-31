#ifndef INCLUDED_LUMINA_VERTEX_CORE_VECTOR_TEMPLATE_TPP
#define INCLUDED_LUMINA_VERTEX_CORE_VECTOR_TEMPLATE_TPP
#pragma once

#include <utility>
#include <algorithm>

#include "VectorTemplate.hpp"

namespace lumina::vertex::core
{
    template <typename Ty, std::size_t Sz>
    constexpr VectorTemplate<Ty, Sz>::VectorTemplate( std::initializer_list<Ty> args ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( CoreData[ I ] = args.begin( )[ I ] ), ... );
        }( std::make_index_sequence<Sz>( ) );
    }

    template <typename Ty, std::size_t Sz>
    constexpr VectorTemplate<Ty, Sz>::VectorTemplate( auto&&... args ) noexcept
        : CoreData{ std::forward<decltype(args)>( args )... }
    { }

    template <typename Ty, std::size_t Sz>
    [[nodiscard]] constexpr Ty& VectorTemplate<Ty, Sz>::operator[ ]( std::size_t index ) noexcept
    {
        return CoreData[ index ];
    }

    template <typename Ty, std::size_t Sz>
    [[nodiscard]] constexpr const Ty& VectorTemplate<Ty, Sz>::operator[]( std::size_t index ) const noexcept
    {
        return CoreData[ index ];
    }

    template <typename Ty, std::size_t Sz>
    template <typename Tu, std::size_t Sn>
    constexpr VectorTemplate<Ty, Sz>::operator VectorTemplate<Tu, Sn>( ) const noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Tu, Sn>( static_cast<Tu>( CoreData[ I ] )... );
        }( std::make_index_sequence<std::min( Sz, Sn )>( ) );
    }
}

#endif
