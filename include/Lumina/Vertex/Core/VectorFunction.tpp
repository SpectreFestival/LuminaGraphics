#ifndef INCLUDED_LUMINA_VERTEX_CORE_VECTOR_FUNCTION_TPP
#define INCLUDED_LUMINA_VERTEX_CORE_VECTOR_FUNCTION_TPP
#pragma once

namespace lumina::vertex::core {
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr bool Any( const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return ( ( static_cast<bool>( V[ I ] ) ) || ... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr bool All( const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return ( ( static_cast<bool>( V[ I ] ) ) && ... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr Ty Dot( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return ( ( A[ I ] * B[ I ] ) + ... );
        }
        ( std::make_index_sequence<N>( ) );
    }
}

#endif