#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <gl/gl.h>
#include <gl/glext.h>

template<typename T>
inline void LoadProc(T& pfn, const char* name)
{
    pfn = (T)wglGetProcAddress(name);
}
