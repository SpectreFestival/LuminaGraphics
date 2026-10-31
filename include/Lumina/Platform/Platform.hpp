/**
* @file Platform.hpp
 * @brief Compile-time platform detection for the Lumina platform layer.
 *
 * Selects exactly one platform macro based on the target toolchain:
 * - LUMINA_MACRO_PLATFORM_USE_WIN64  : 64-bit Windows
 * - LUMINA_MACRO_PLATFORM_USE_LINUX  : 64-bit Linux (x86_64 / aarch64 / LP64)
 * - LUMINA_MACRO_PLATFORM_USE_APPLE  : 64-bit macOS
 *
 * If none of the supported platforms is detected, compilation fails with
 * an #error directive.
 */
#ifndef INCLUDED_LUMINA_PLATFORM_PLATFORM_HPP
#define INCLUDED_LUMINA_PLATFORM_PLATFORM_HPP
#pragma once

#if defined(_WIN64)
    /// 64-bit Windows detected.
    #define LUMINA_MACRO_PLATFORM_USE_WIN64 1
#elif defined(__linux__) && (defined(__x86_64__) || defined(__aarch64__) || defined(__LP64__))
    /// 64-bit Linux detected (x86_64, aarch64, or generic LP64).
    #define LUMINA_MACRO_PLATFORM_USE_LINUX 1
#elif defined(__APPLE__) && defined(__MACH__)
    #if TARGET_OS_MAC && (defined(__x86_64__) || defined(__aarch64__))
        /// 64-bit macOS detected.
        #define LUMINA_MACRO_PLATFORM_USE_APPLE 1
    #endif
#else
    /// Unsupported platform: fail the build early with a clear message.
    #error "Current platform is not supposed"
#endif
#endif