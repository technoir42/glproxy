#include "pch.h"

// GL_VERSION_1_2
PFNGLBLENDCOLORPROC        _glBlendColor;
PFNGLBLENDEQUATIONPROC     _glBlendEquation;
PFNGLDRAWRANGEELEMENTSPROC _glDrawRangeElements;
PFNGLTEXIMAGE3DPROC        _glTexImage3D;
PFNGLTEXSUBIMAGE3DPROC     _glTexSubImage3D;
PFNGLCOPYTEXSUBIMAGE3DPROC _glCopyTexSubImage3D;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    _glBlendColor(red, green, blue, alpha);
}

void APIENTRY glBlendEquation(GLenum mode)
{
    _glBlendEquation(mode);
}

void APIENTRY glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
{
    _glDrawRangeElements(mode, start, end, count, type, indices);
}

void APIENTRY glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
    _glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void APIENTRY glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
{
    _glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void APIENTRY glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    _glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

#ifdef __cplusplus
}
#endif

void Init_GL_VERSION_1_2()
{
    LoadProc(_glBlendColor,        "glBlendColor");
    LoadProc(_glBlendEquation,     "glBlendEquation");
    LoadProc(_glDrawRangeElements, "glDrawRangeElements");
    LoadProc(_glTexImage3D,        "glTexImage3D");
    LoadProc(_glTexSubImage3D,     "glTexSubImage3D");
    LoadProc(_glCopyTexSubImage3D, "glCopyTexSubImage3D");
}
