#ifndef INCLUDED_LUMINA_RUNTIME_OPENGL_NATIVE_FUNCTIONAL_HPP
#define INCLUDED_LUMINA_RUNTIME_OPENGL_NATIVE_FUNCTIONAL_HPP
#pragma once

#include "Types.hpp"

namespace lumina::runtime::opengl::native
{
    Void CullFace(Enum mode);
    Void FrontFace(Enum mode);

}

#endif