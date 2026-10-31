#ifndef INCLUDED_LUMINA_VERTEX_CORE_VECTOR_OPERATOR_HPP
#define INCLUDED_LUMINA_VERTEX_CORE_VECTOR_OPERATOR_HPP
#pragma once

#include "VectorTemplate.hpp"

namespace lumina::vertex::core {
    /**
     * @brief Element-wise addition.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Vector with @c A[i] + B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise subtraction.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Vector with @c A[i] - B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise (Hadamard) product.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Vector with @c A[i] * B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator*( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise division.
     * @param A Dividend vector.
     * @param B Divisor vector.
     * @return  Vector with @c A[i] / B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator/( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise modulo.
     * @param A Dividend vector.
     * @param B Divisor vector.
     * @return  Vector with @c A[i] % B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator%( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise bitwise AND.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Vector with @c A[i] & B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator&( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise bitwise OR.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Vector with @c A[i] | B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator|( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise bitwise XOR.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Vector with @c A[i] ^ B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator^( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Adds a scalar to each element.
     * @param V Vector operand.
     * @param S Scalar added to every element.
     * @return  Vector with @c V[i] + S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Subtracts a scalar from each element.
     * @param V Vector operand.
     * @param S Scalar subtracted from every element.
     * @return  Vector with @c V[i] - S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Multiplies each element by a scalar.
     * @param V Vector operand.
     * @param S Scalar multiplier applied to every element.
     * @return  Vector with @c V[i] * S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator*( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Divides each element by a scalar.
     * @param V Dividend vector.
     * @param S Scalar divisor applied to every element.
     * @return  Vector with @c V[i] / S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator/( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Computes the element-wise modulo of a vector by a scalar.
     * @param V Dividend vector.
     * @param S Scalar divisor applied to every element.
     * @return  Vector with @c V[i] % S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator%( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise AND between a vector and a scalar.
     * @param V Vector operand.
     * @param S Scalar operand applied to every element.
     * @return  Vector with @c V[i] & S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator&( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise OR between a vector and a scalar.
     * @param V Vector operand.
     * @param S Scalar operand applied to every element.
     * @return  Vector with @c V[i] | S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator|( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise XOR between a vector and a scalar.
     * @param V Vector operand.
     * @param S Scalar operand applied to every element.
     * @return  Vector with @c V[i] ^ S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator^( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Element-wise addition in place.
     * @param A Left operand, modified as @c A[i] += B[i].
     * @param B Right operand.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator+=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise subtraction in place.
     * @param A Left operand, modified as @c A[i] -= B[i].
     * @param B Right operand.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator-=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise multiplication in place.
     * @param A Left operand, modified as @c A[i] *= B[i].
     * @param B Right operand.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator*=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise division in place.
     * @param A Dividend vector, modified as @c A[i] /= B[i].
     * @param B Divisor vector.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator/=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise modulo in place.
     * @param A Dividend vector, modified as @c A[i] %= B[i].
     * @param B Divisor vector.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator%=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise bitwise AND in place.
     * @param A Left operand, modified as @c A[i] &= B[i].
     * @param B Right operand.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator&=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise bitwise OR in place.
     * @param A Left operand, modified as @c A[i] |= B[i].
     * @param B Right operand.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator|=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise bitwise XOR in place.
     * @param A Left operand, modified as @c A[i] ^= B[i].
     * @param B Right operand.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator^=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Adds a scalar to each element in place.
     * @param V Vector operand, modified as @c V[i] += S.
     * @param S Scalar added to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator+=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Subtracts a scalar from each element in place.
     * @param V Vector operand, modified as @c V[i] -= S.
     * @param S Scalar subtracted from every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator-=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Multiplies each element by a scalar in place.
     * @param V Vector operand, modified as @c V[i] *= S.
     * @param S Scalar multiplier applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator*=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Divides each element by a scalar in place.
     * @param V Dividend vector, modified as @c V[i] /= S.
     * @param S Scalar divisor applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator/=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Computes the element-wise modulo of a vector by a scalar in place.
     * @param V Dividend vector, modified as @c V[i] %= S.
     * @param S Scalar divisor applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator%=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise AND with a scalar in place.
     * @param V Vector operand, modified as @c V[i] &= S.
     * @param S Scalar operand applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator&=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise OR with a scalar in place.
     * @param V Vector operand, modified as @c V[i] |= S.
     * @param S Scalar operand applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator|=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise XOR with a scalar in place.
     * @param V Vector operand, modified as @c V[i] ^= S.
     * @param S Scalar operand applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator^=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Element-wise equality comparison.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] == B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator==( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise inequality comparison.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] != B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator!=( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise greater-or-equal comparison.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] >= B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator>=( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise less-or-equal comparison.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] <= B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator<=( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise greater-than comparison.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] > B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator> ( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise less-than comparison.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] < B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator< ( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept;
    /**
     * @brief Element-wise logical AND.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] && B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator&&( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise logical OR.
     * @param A Left operand.
     * @param B Right operand.
     * @return  Boolean vector with @c A[i] || B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator||( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise equality comparison with a scalar.
     * @param V Vector operand.
     * @param S Scalar compared against every element.
     * @return  Boolean vector with @c V[i] == S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator==( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Element-wise inequality comparison with a scalar.
     * @param V Vector operand.
     * @param S Scalar compared against every element.
     * @return  Boolean vector with @c V[i] != S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator!=( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Element-wise greater-or-equal comparison with a scalar.
     * @param V Vector operand.
     * @param S Scalar compared against every element.
     * @return  Boolean vector with @c V[i] >= S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator>=( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Element-wise less-or-equal comparison with a scalar.
     * @param V Vector operand.
     * @param S Scalar compared against every element.
     * @return  Boolean vector with @c V[i] <= S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator<=( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Element-wise greater-than comparison with a scalar.
     * @param V Vector operand.
     * @param S Scalar compared against every element.
     * @return  Boolean vector with @c V[i] > S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator> ( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Element-wise less-than comparison with a scalar.
     * @param V Vector operand.
     * @param S Scalar compared against every element.
     * @return  Boolean vector with @c V[i] < S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator< ( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept;
    /**
     * @brief Element-wise logical AND with a scalar.
     * @param V Vector operand.
     * @param S Scalar combined with every element.
     * @return  Boolean vector with @c V[i] && S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator&&( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Element-wise logical OR with a scalar.
     * @param V Vector operand.
     * @param S Scalar combined with every element.
     * @return  Boolean vector with @c V[i] || S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<bool, N> operator||( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Element-wise unary plus.
     * @param V Vector operand.
     * @return  Vector with @c +V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const VectorTemplate<Ty, N>& V ) noexcept;
    /**
     * @brief Element-wise unary negation.
     * @param V Vector operand.
     * @return  Vector with @c -V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const VectorTemplate<Ty, N>& V ) noexcept;
    /**
     * @brief Element-wise bitwise NOT.
     * @param V Vector operand.
     * @return  Vector with @c ~V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator~( const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise logical NOT.
     * @param V Vector operand.
     * @return  Vector with @c !V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator!( const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Adds a scalar to each element.
     * @param S Scalar added to every element.
     * @param V Vector operand.
     * @return  Vector with @c S + V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator+( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept;
    /**
     * @brief Subtracts each element from a scalar.
     * @param S Scalar minuend.
     * @param V Vector whose elements are the subtrahends.
     * @return  Vector with @c S - V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator-( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept;
    /**
     * @brief Multiplies a scalar by each element.
     * @param S Scalar multiplier applied to every element.
     * @param V Vector operand.
     * @return  Vector with @c S * V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator*( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept;
    /**
     * @brief Divides a scalar by each element.
     * @param S Scalar dividend.
     * @param V Vector whose elements are the divisors.
     * @return  Vector with @c S / V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator/( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept;
    /**
     * @brief Computes the scalar modulo each element.
     * @param S Scalar dividend.
     * @param V Vector whose elements are the divisors.
     * @return  Vector with @c S % V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator%( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise AND between a scalar and a vector.
     * @param S Scalar left operand.
     * @param V Vector right operand.
     * @return  Vector with @c S & V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator&( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise OR between a scalar and a vector.
     * @param S Scalar left operand.
     * @param V Vector right operand.
     * @return  Vector with @c S | V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator|( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Performs an element-wise bitwise XOR between a scalar and a vector.
     * @param S Scalar left operand.
     * @param V Vector right operand.
     * @return  Vector with @c S ^ V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator^( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Element-wise left shift of two vectors.
     * @param A Values to be shifted.
     * @param B Per-element shift counts.
     * @return  Vector with @c A[i] << B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator<<( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise right shift of two vectors.
     * @param A Values to be shifted.
     * @param B Per-element shift counts.
     * @return  Vector with @c A[i] >> B[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator>>( const VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Left shifts each element by a scalar shift count.
     * @param V Values to be shifted.
     * @param S Scalar shift count applied to every element.
     * @return  Vector with @c V[i] << S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator<<( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Right shifts each element by a scalar shift count.
     * @param V Values to be shifted.
     * @param S Scalar shift count applied to every element.
     * @return  Vector with @c V[i] >> S.
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator>>( const VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Left shifts a scalar by each element.
     * @param S Value to be shifted.
     * @param V Per-element shift counts.
     * @return  Vector with @c S << V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator<<( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Right shifts a scalar by each element.
     * @param S Value to be shifted.
     * @param V Per-element shift counts.
     * @return  Vector with @c S >> V[i].
     */
    template <typename Ty, std::size_t N>
    [[nodiscard]] constexpr VectorTemplate<Ty, N> operator>>( const auto& S, const VectorTemplate<Ty, N>& V ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Element-wise left shift in place.
     * @param A Values to be shifted, modified as @c A[i] <<= B[i].
     * @param B Per-element shift counts.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator<<=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Element-wise right shift in place.
     * @param A Values to be shifted, modified as @c A[i] >>= B[i].
     * @param B Per-element shift counts.
     * @return  Reference to @p A.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator>>=( VectorTemplate<Ty, N>& A, const VectorTemplate<Ty, N>& B ) noexcept
    requires std::is_integral_v<Ty>;
    /**
     * @brief Left shifts each element by a scalar shift count in place.
     * @param V Values to be shifted, modified as @c V[i] <<= S.
     * @param S Scalar shift count applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator<<=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
    /**
     * @brief Right shifts each element by a scalar shift count in place.
     * @param V Values to be shifted, modified as @c V[i] >>= S.
     * @param S Scalar shift count applied to every element.
     * @return  Reference to @p V.
     */
    template <typename Ty, std::size_t N>
    constexpr VectorTemplate<Ty, N>& operator>>=( VectorTemplate<Ty, N>& V, const auto& S ) noexcept
    requires std::is_integral_v<std::remove_cvref_t<decltype(S)>>
         and std::is_integral_v<Ty>;
}

#include "VectorOperator.tpp"

#endif