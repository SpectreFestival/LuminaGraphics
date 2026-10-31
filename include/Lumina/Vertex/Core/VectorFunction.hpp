#ifndef INCLUDED_LUMINA_VERTEX_CORE_VECTOR_FUNCTION_HPP
#define INCLUDED_LUMINA_VERTEX_CORE_VECTOR_FUNCTION_HPP
#pragma once

#include "VectorTemplate.hpp"

namespace lumina::vertex::core {
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr bool Any( const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<Ty>;

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr bool All( const VectorTemplate<Ty, N>& V ) noexcept requires std::is_integral_v<Ty>;

    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr Ty Dot( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
}

#include "VectorFunction.tpp"

#endif