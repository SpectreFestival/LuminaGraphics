/**
 * @file Compiler.hpp
 * @brief Compile-time compiler detection for the Lumina platform layer.
 *
 * Selects exactly one compiler macro based on the target toolchain, in
 * combination with the platform macro chosen by Platform.hpp:
 * - LUMINA_MACRO_COMPILER_USE_MSVC    : Microsoft Visual C++
 * - LUMINA_MACRO_COMPILER_USE_GNUC    : GNU Compiler Collection (GCC)
 * - LUMINA_MACRO_COMPILER_USE_CLANG   : Clang / LLVM
 * - LUMINA_MACRO_COMPILER_USE_UNKNOWN : Unrecognized compiler on a known platform
 *
 * Compiler detection depends on the platform macro being defined first
 * (LUMINA_MACRO_PLATFORM_USE_WIN64 / _LINUX / _APPLE).
 */
#ifndef INCLUDED_LUMINA_PLATFORM_COMPILER_HPP
#define INCLUDED_LUMINA_PLATFORM_COMPILER_HPP
#pragma once

#if defined(LUMINA_MACRO_PLATFORM_USE_WIN64)
    /// Windows: detect MSVC, GCC (MinGW), or Clang.
    #if defined(_MSC_VER)
        /// Microsoft Visual C++ detected.
        #define LUMINA_MACRO_COMPILER_USE_MSVC
    #elif defined(__GNUC__)
        /// GNU Compiler Collection detected (e.g. MinGW).
        #define LUMINA_MACRO_COMPILER_USE_GNUC
    #elif defined(__clang__)
        /// Clang / LLVM detected.
        #define LUMINA_MACRO_COMPILER_USE_CLANG
    #else
        /// Unrecognized compiler on Windows.
        #define LUMINA_MACRO_COMPILER_USE_UNKNOWN
    #endif
#elif defined(LUMINA_MACRO_PLATFORM_USE_LINUX)
    /// Linux: detect GCC or Clang.
    #if defined(__GNUC__)
        /// GNU Compiler Collection detected.
        #define LUMINA_MACRO_COMPILER_USE_GNUC
    #elif defined(__clang__)
        /// Clang / LLVM detected.
        #define LUMINA_MACRO_COMPILER_USE_CLANG
    #else
        /// Unrecognized compiler on Linux.
        #define LUMINA_MACRO_COMPILER_USE_UNKNOWN
    #endif
#elif defined(LUMINA_MACRO_PLATFORM_USE_APPLE)
    /// Apple: detect Clang (the default Apple toolchain).
    #if defined(__clang__)
        /// Clang / LLVM detected.
        #define LUMINA_MACRO_COMPILER_USE_CLANG
    #else
        /// Unrecognized compiler on Apple platforms.
        #define LUMINA_MACRO_COMPILER_USE_UNKNOWN
    #endif
#endif
#endif