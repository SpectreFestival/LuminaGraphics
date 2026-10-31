/**
 * @file Macros.hpp
 * @brief Compiler-abstraction macros for the Lumina platform layer.
 *
 * Defines a common set of compiler-specific macros used throughout the
 * project, selected by the compiler macro set in Compiler.hpp:
 *
 * - LUMINA_MACRO_FORCEINLINE : forces inlining of a function.
 * - LUMINA_MACRO_RESTRICT    : restricts pointer aliasing.
 * - LUMINA_MACRO_DLLEXPORT   : marks a symbol for export from a shared library.
 * - LUMINA_MACRO_DLLIMPORT   : marks a symbol for import from a shared library.
 * - LUMINA_MACRO_PRAGMA(...) : forwards a pragma directive in a portable way.
 *
 * DLL import/export attributes are only applied when
 * LUMINA_MACRO_DYNAMIC_LIBRARY is defined; otherwise they expand to nothing.
 */
#ifndef INCLUDED_LUMINA_MACROS_HPP
#define INCLUDED_LUMINA_MACROS_HPP
#pragma once

#ifdef LUMINA_MACRO_COMPILER_USE_MSVC
    /// Force-inline attribute for MSVC.
    #define LUMINA_MACRO_FORCEINLINE    __forceinline
    /// Restrict-qualifier attribute for MSVC.
    #define LUMINA_MACRO_RESTRICT       __restrict
#ifdef LUMINA_MACRO_DYNAMIC_LIBRARY
    /// DLL export attribute for MSVC.
    #define LUMINA_MACRO_DLLEXPORT      __declspec(dllexport)
    /// DLL import attribute for MSVC.
    #define LUMINA_MACRO_DLLIMPORT      __declspec(dllimport)
#else
    /// No-op when not building a shared library.
    #define LUMINA_MACRO_DLLEXPORT
    /// No-op when not building a shared library.
    #define LUMINA_MACRO_DLLIMPORT
#endif
    /// Pragma-forwarding macro for MSVC.
    #define LUMINA_MACRO_PRAGMA(...)    __pragma(__VA_ARGS__)
#endif

#ifdef LUMINA_MACRO_COMPILER_USE_GNUC
    /// Force-inline attribute for GCC.
    #define LUMINA_MACRO_FORCEINLINE    inline __attribute__((always_inline))
    /// Restrict-qualifier attribute for GCC.
    #define LUMINA_MACRO_RESTRICT       __restrict__
#ifdef LUMINA_MACRO_DYNAMIC_LIBRARY
    /// DLL export attribute for GCC (default visibility).
    #define LUMINA_MACRO_DLLEXPORT      __attribute__((visibility("default")))
    /// DLL import attribute for GCC (default visibility).
    #define LUMINA_MACRO_DLLIMPORT      __attribute__((visibility("default")))
#else
    /// No-op when not building a shared library.
    #define LUMINA_MACRO_DLLEXPORT
    /// No-op when not building a shared library.
    #define LUMINA_MACRO_DLLIMPORT
#endif
    /// Pragma-forwarding macro for GCC.
    #define LUMINA_MACRO_PRAGMA(...)    _Pragma(#__VA_ARGS__)
#endif

#ifdef LUMINA_MACRO_COMPILER_USE_CLANG
    /// Force-inline attribute for Clang.
    #define LUMINA_MACRO_FORCEINLINE    inline __attribute__((always_inline))
    /// Restrict-qualifier attribute for Clang.
    #define LUMINA_MACRO_RESTRICT       __restrict__
#ifdef LUMINA_MACRO_DYNAMIC_LIBRARY
    /// DLL export attribute for Clang (default visibility).
    #define LUMINA_MACRO_DLLEXPORT      __attribute__((visibility("default")))
    /// DLL import attribute for Clang (default visibility).
    #define LUMINA_MACRO_DLLIMPORT      __attribute__((visibility("default")))
#else
    /// No-op when not building a shared library.
    #define LUMINA_MACRO_DLLEXPORT
    /// No-op when not building a shared library.
    #define LUMINA_MACRO_DLLIMPORT
#endif
    /// Pragma-forwarding macro for Clang.
    #define LUMINA_MACRO_PRAGMA(...)    _Pragma(#__VA_ARGS__)
#endif

#ifdef LUMINA_MACRO_COMPILER_USE_UNKNOWN
    /// Portable fallback force-inline (plain inline).
    #define LUMINA_MACRO_FORCEINLINE    inline
    /// Portable fallback restrict-qualifier (empty).
    #define LUMINA_MACRO_RESTRICT
#ifdef LUMINA_DYNAMIC_LIBRARY
    /// No-op on unknown compilers.
    #define LUMINA_MACRO_DLLEXPORT
    /// No-op on unknown compilers.
    #define LUMINA_MACRO_DLLIMPORT
#else
    /// No-op on unknown compilers.
    #define LUMINA_MACRO_DLLEXPORT
    /// No-op on unknown compilers.
    #define LUMINA_MACRO_DLLIMPORT
#endif
    /// Pragma-forwarding macro (empty) on unknown compilers.
    #define LUMINA_MACRO_PRAGMA(...)
#endif
#endif