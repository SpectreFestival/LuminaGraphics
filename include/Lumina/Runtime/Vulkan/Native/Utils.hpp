#ifndef INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_UTILS_HPP
#define INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_UTILS_HPP
#pragma once

#include <string>
#include <format>
#include <tuple>
#include <cstdint>

namespace lumina::runtime::vulkan::native
{
    /**
     * @brief Encodes a major/minor/patch version into a packed 32-bit value.
     *
     * Uses the Vulkan version packing layout: 10 bits for major (shifted left 22),
     * 10 bits for minor (shifted left 12), and 12 bits for patch (no shift).
     *
     * @param major Major version component.
     * @param minor Minor version component.
     * @param patch Patch version component.
     * @return The packed 32-bit version value.
     * @note This function never throws.
     */
    [[nodiscard]] constexpr auto EncodeVersion( const std::uint32_t major, const std::uint32_t minor, const std::uint32_t patch ) noexcept
    {
        return ( major << 22 ) | ( minor << 12 ) | patch;
    }
    /**
     * @brief Decodes a packed 32-bit version value into its components.
     *
     * Extracts the major (bits 31-22), minor (bits 21-12), and patch (bits 11-0)
     * fields using the Vulkan version packing layout. The shift/mask literals are
     * written in binary to mirror the bit layout.
     *
     * @param version Packed 32-bit version value.
     * @return Tuple of (major, minor, patch) components.
     * @note This function never throws.
     */
    [[nodiscard]] constexpr auto DecodeVersion( const std::uint32_t version ) noexcept
    {
        const std::uint32_t major = ( version >> 0b10110 ) & 0b000001111111;
        const std::uint32_t minor = ( version >> 0b01100 ) & 0b001111111111;
        const std::uint32_t patch = ( version >> 0b00000 ) & 0b111111111111;
        return std::make_tuple( major, minor, patch );
    }
    /**
     * @brief Formats a packed 32-bit version value as a human-readable string.
     *
     * Decodes the version and returns it in "major.minor.patch" form.
     *
     * @param version Packed 32-bit version value.
     * @return Formatted version string (e.g. "1.2.3").
     * @note This function never throws.
     */
    [[nodiscard]] constexpr auto StringVersion( const std::uint32_t version ) noexcept
    {
        const auto [ major, minor, patch ] = DecodeVersion( version );
        return std::format( "{}.{}.{}", major, minor, patch );
    }

    inline constexpr auto VK_VERSION_1_0 = EncodeVersion( 1, 0, 0 );
    inline constexpr auto VK_VERSION_2_0 = EncodeVersion( 2, 0, 0 );
    inline constexpr auto VK_VERSION_3_0 = EncodeVersion( 3, 0, 0 );
    inline constexpr auto VK_VERSION_4_0 = EncodeVersion( 4, 0, 0 );
}

#endif