#ifndef INCLUDED_LUMINA_VERTEX_CORE_VECTOR_TEMPLATE_HPP
#define INCLUDED_LUMINA_VERTEX_CORE_VECTOR_TEMPLATE_HPP
#pragma once

#include <initializer_list>
#include <cstddef>

namespace lumina::vertex::core
{
    /**
     * @brief A fixed-size, stack-allocated vector container with compile-time size.
     *
     * Provides a lightweight, constexpr-friendly array wrapper with value semantics.
     * Supports construction from an initializer list, variadic arguments, and
     * explicit conversion between vectors of different element types and sizes.
     *
     * @tparam Ty The element type stored in the vector.
     * @tparam Sz The number of elements in the vector (fixed at compile time).
     *
     * @note All members are marked @c constexpr and @c noexcept to enable use in
     *       constant expressions and to guarantee a non-throwing interface.
     */
    template <typename Ty, std::size_t Sz>
    class VectorTemplate
    {
    public:
        /**
         * @brief Default constructor.
         *
         * Value-initializes all stored elements (@c Ty{} for each slot), which for
         * arithmetic types yields zero-initialization.
         */
        constexpr VectorTemplate( ) noexcept = default;
        /**
         * @brief Constructs the vector from an initializer list.
         *
         * Copies the elements of @p args into the internal storage in order. Any
         * remaining elements (if @p args is shorter than @c Sz) are value-initialized.
         * If @p args contains more than @c Sz elements, the excess is ignored.
         *
         * @param args The initializer list providing the element values.
         */
        constexpr VectorTemplate( std::initializer_list<Ty> args ) noexcept;
        /**
         * @brief Explicitly constructs the vector from a variadic argument pack.
         *
         * Each argument is used to initialize the corresponding element of the
         * internal storage. The number of arguments must not exceed @c Sz.
         *
         * @tparam Args The deduced types of the forwarded arguments.
         * @param  args The values used to initialize the vector elements.
         *
         * @note This constructor is @c explicit to avoid unintended implicit
         *       conversions from arbitrary argument lists.
         */
        explicit constexpr VectorTemplate( auto&&... args ) noexcept;
        /**
         * @brief Returns a mutable reference to the element at @p index.
         *
         * @param index The position of the desired element (0-based).
         * @return    A reference to the element at @p index.
         *
         * @warning No bounds checking is performed; @p index must be less than @c Sz.
         */
        [[nodiscard]] constexpr Ty& operator[ ]( std::size_t index ) noexcept;
        /**
         * @brief Returns a const reference to the element at @p index.
         *
         * @param index The position of the desired element (0-based).
         * @return    A const reference to the element at @p index.
         *
         * @warning No bounds checking is performed; @p index must be less than @c Sz.
         */
        [[nodiscard]] constexpr const Ty& operator[ ]( std::size_t index ) const noexcept;
        /**
         * @brief Explicitly converts this vector to a vector of a different element
         *        type and/or size.
         *
         * The conversion proceeds as follows:
         * - If the destination size @p Sn is **larger** than @c Sz, the additional
         *   trailing elements are **zero-initialized** (padded with @c Tu{}).
         * - If the destination size @p Sn is **smaller** than @c Sz, the elements
         *   beyond @p Sn are **truncated** (discarded).
         * - If @p Sn equals @c Sz, a straight element-wise type conversion is
         *   performed without padding or truncation.
         *
         * Each copied element is converted via @c static_cast<Tu>.
         *
         * @tparam Tu The destination element type.
         * @tparam Sn The destination vector size.
         * @return   A new @c VectorTemplate<Tu, Sn> built from the current contents.
         *
         * @note This conversion operator is @c explicit; it must be invoked through
         *       @c static_cast, an explicit construction, or direct-initialization.
         */
        template <typename Tu, std::size_t Sn>
        explicit constexpr operator VectorTemplate<Tu, Sn>( ) const noexcept;
    private:
        /// Backing storage for the vector's elements, value-initialized to @c Ty{}.
        Ty CoreData[ Sz ]{};
    };
}

#include "VectorTemplate.tpp"

#endif