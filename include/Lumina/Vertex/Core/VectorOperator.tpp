#ifndef INCLUDED_LUMINA_VERTEX_CORE_VECTOR_OPERATOR_TPP
#define INCLUDED_LUMINA_VERTEX_CORE_VECTOR_OPERATOR_TPP
#pragma once

#include <utility>

namespace lumina::vertex::core
{
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] + B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] - B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator*( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] * B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator/( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] / B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator%( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] % B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator&( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] & B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator|( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] | B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator^( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] ^ B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] + S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] - S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator*( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] * S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator/( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] / S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator%( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] % S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator&( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] & S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator|( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] | S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator^( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] ^ S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator+=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] += B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator-=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] -= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator*=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] *= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator/=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] /= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator%=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] %= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator&=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] &= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator|=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] |= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator^=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] ^= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator+=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] += S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator-=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] -= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator*=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] *= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator/=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] /= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator%=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] %= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator&=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] &= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator|=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] |= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator^=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] ^= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator==( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] == B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator!=( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] != B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator>=( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] >= B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator<=( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] <= B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator>( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] > B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator<( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] < B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator&&( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] && B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator||( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( A[ I ] || B[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator==( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] == S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator!=( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] != S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator>=( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] >= S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator<=( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] <= S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator>( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] > S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator<( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] < S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator&&( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] && S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator||( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<bool, N>( ( static_cast<bool>( V[ I ] || S ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const VectorTemplate<Ty, N>& V ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( static_cast<bool>( +V[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const VectorTemplate<Ty, N>& V ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( static_cast<bool>( -V[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator~( const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( static_cast<bool>( ~V[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator!( const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( static_cast<bool>( !V[ I ] ) )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S + V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S - V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator*( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S * V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator/( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S / V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator%( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S % V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator&( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S & V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator|( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S | V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator^( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S ^ V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator<<( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] << B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator>>( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( A[ I ] >> B[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator<<( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] << S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator>>( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( V[ I ] >> S )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator<<( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S << V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator>>( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        return [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            return VectorTemplate<Ty, N>( ( S >> V[ I ] )... );
        }
        ( std::make_index_sequence<N>( ) );
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator<<=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] <<= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator>>=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept requires std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( A[ I ] >>= B[ I ] ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return A;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator<<=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] <<= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }

    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator>>=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept requires std::is_integral_v<std::remove_cvref_t<decltype(S)>> and std::is_integral_v<Ty>
    {
        [ & ]<std::size_t... I> ( std::index_sequence<I...> )
        {
            ( ( V[ I ] >>= S ), ... );
        }
        ( std::make_index_sequence<N>( ) );
        return V;
    }
}

#endif
