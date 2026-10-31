#ifndef INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_RUNTIME_HPP
#define INCLUDED_LUMINA_RUNTIME_VULKAN_NATIVE_RUNTIME_HPP
#pragma once

#ifdef LUMINA_MACRO_PLATFORM_USE_WIN64
#include <windows.h>
#ifdef MemoryBarrier
#undef MemoryBarrier
#endif
#ifdef CreateEvent
#undef CreateEvent
#endif
#ifdef CreateSemaphore
#undef CreateSemaphore
#endif
#ifdef GetMessage
#undef GetMessage
#endif
#endif
#include <string_view>

#ifdef LUMINA_MACRO_PLATFORM_USE_WIN64

/**
 * @brief Loads a dynamic library from the given path.
 *
 * Windows platform implementation. Calls ::LoadLibraryA to load the module
 * identified by @p runtimePath.
 *
 * @param runtimePath Path to the dynamic library.
 * @return Handle to the loaded module, or nullptr on failure.
 * @note This function never throws.
 */
[[nodiscard]] inline void* LuminaLoadLibrary( const std::string_view runtimePath ) noexcept
{
    return ::LoadLibraryA( runtimePath.data( ) );
}
/**
 * @brief Frees a previously loaded dynamic library.
 *
 * Windows platform implementation. Calls ::FreeLibrary on the given module
 * handle.
 *
 * @param runtimeHandle Handle returned by LuminaLoadLibrary.
 * @return true if the module was freed (reference count reached zero);
 *         false if freeing failed.
 * @note This function never throws.
 */
[[nodiscard]] inline bool  LuminaFreeLibrary( const void* runtimeHandle ) noexcept
{
    return ::FreeLibrary( static_cast< HMODULE >( const_cast< void* >( runtimeHandle ) ) ) != FALSE;
}
/**
 * @brief Resolves the address of an exported symbol in a loaded module.
 *
 * Windows platform implementation. Calls ::GetProcAddress on the given module
 * handle to look up @p functionName.
 *
 * @param runtimeHandle Handle returned by LuminaLoadLibrary.
 * @param functionName  Name of the exported function to resolve.
 * @return Address of the resolved symbol, or nullptr if not found.
 * @note The returned pointer is generic; callers must reinterpret_cast it to
 *       the appropriate function pointer type before use.
 * @note This function never throws.
 */
[[nodiscard]] inline void* LuminaGetProcAddress( const void* runtimeHandle, const std::string_view functionName ) noexcept
{
    return reinterpret_cast< void* >( ::GetProcAddress( static_cast< HMODULE >( const_cast< void* >( runtimeHandle ) ), functionName.data( ) ) );
}
#endif

namespace lumina::runtime::vulkan::native
{
/**
 * @class Runtime
 * @brief Runtime manager for a dynamically loaded library.
 *
 * This class encapsulates the underlying Lumina dynamic-library operations,
 * providing safe load/unload mechanisms. All public interfaces are noexcept
 * and never throw exceptions.
 */
    class Runtime
    {
    public:
        /**
         * @brief Constructs a Runtime and immediately loads the given library.
         *
         * Creates a Runtime object and attempts to load the dynamic library at
         * @p runtimePath in the constructor body. If loading fails, the object
         * remains in the unloaded state (CoreRuntime stays nullptr); the failure
         * is not reported and no exception is thrown. Callers should check
         * IsAvailable() afterwards if the load result matters.
         *
         * @param runtimePath Path to the dynamic library to load.
         * @note This function never throws.
         */
        explicit Runtime( const std::string_view runtimePath ) noexcept
        {
            if ( this->Load( runtimePath ) )
            {
                //Nothing to do
            }
        }
        /**
         * @brief Default constructor.
         *
         * Creates a Runtime object in the unloaded state; no library is loaded.
         * @note This function never throws.
         */
        Runtime( ) noexcept = default;
        /**
         * @brief Copy constructor (deleted).
         *
         * Copying is disabled; Runtime exclusively owns its library handle.
         */
        Runtime( const Runtime& ) noexcept = delete;
        /**
         * @brief Move constructor (deleted).
         *
         * Moving is disabled; the library handle's ownership is not transferable.
         */
        Runtime( Runtime&& ) noexcept = delete;
        /**
         * @brief Copy assignment operator (deleted).
         *
         * Copy assignment is disabled; Runtime exclusively owns its library handle.
         */
        Runtime& operator=( const Runtime& ) noexcept = delete;
        /**
         * @brief Move assignment operator (deleted).
         *
         * Move assignment is disabled; the library handle's ownership is not transferable.
         */
        Runtime& operator=( Runtime&& ) noexcept = delete;
        /**
         * @brief Destructor.
         *
         * If the dynamic library is still loaded (i.e., Free has not been called
         * or did not succeed), the destructor automatically frees it to prevent
         * resource leaks.
         * @note This function never throws.
         */
        ~Runtime( ) noexcept
        {
            if ( IsAvailable( ) )
            {
                if ( Free( ) ) { }
            }
        }
        /**
         * @brief Loads the dynamic library from the given path.
         *
         * Internally calls LuminaLoadLibrary to perform the actual load.
         * Returns false if loading fails.
         * A guard mechanism prevents redundant invocation: if the library has
         * already been loaded successfully, repeated calls will not reload it.
         *
         * @param runtimePath Path to the dynamic library.
         * @return true on success, false on failure.
         * @note This function never throws.
         */
        [[nodiscard]] bool Load( const std::string_view runtimePath ) noexcept
        {
            if ( IsAvailable( ) ) [[unlikely]]
            {
                return false;
            }
            CoreRuntime = LuminaLoadLibrary( runtimePath );
            return IsAvailable( );
        }
        /**
         * @brief Frees the loaded dynamic library.
         *
         * Internally calls LuminaFreeLibrary to perform the actual unload.
         * Returns false if unloading fails.
         * A guard mechanism prevents redundant invocation: if the library is not
         * loaded or has already been freed, repeated calls will not free it again.
         *
         * @return true on success, false on failure.
         * @note This function never throws.
         */
        [[nodiscard]] bool Free( ) noexcept
        {
            if ( not IsAvailable( ) ) [[likely]]
            {
                return false;
            }
            return LuminaFreeLibrary( CoreRuntime ) ? ( CoreRuntime = nullptr, true ) : false;
        }
        /**
         * @brief Queries whether the dynamic library is currently available.
         *
         * @return true if the library is successfully loaded and usable,
         *         false otherwise.
         * @note This function never throws.
         */
        [[nodiscard]] bool IsAvailable( ) const noexcept
        {
            return CoreRuntime != nullptr;
        }
        /**
         * @brief Retrieves the address of a symbol in the dynamic library by name.
         *
         * The returned pointer is a generic function pointer; the caller must
         * reinterpret_cast it to the appropriate function pointer type before
         * invoking it.
         *
         * @param functionName Name of the function to look up.
         * @return The function pointer on success; nullptr if the library is not
         *         loaded, loading failed, or the function does not exist.
         * @note This function never throws.
         */
        [[nodiscard]] void* GetProcAddress( const std::string_view functionName ) const noexcept
        {
            if ( not IsAvailable( ) ) [[unlikely]]
            {
                return nullptr;
            }
            return ::LuminaGetProcAddress( CoreRuntime, functionName );
        }
    private:
        void* CoreRuntime{ nullptr }; ///< Underlying library handle; nullptr means not loaded.
    };
}

#endif