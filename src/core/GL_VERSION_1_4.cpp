#include "pch.h"

// GL_VERSION_1_4
PFNGLBLENDFUNCSEPARATEPROC _glBlendFuncSeparate;
PFNGLMULTIDRAWARRAYSPROC   _glMultiDrawArrays;
PFNGLMULTIDRAWELEMENTSPROC _glMultiDrawElements;
PFNGLPOINTPARAMETERFPROC   _glPointParameterf;
PFNGLPOINTPARAMETERFVPROC  _glPointParameterfv;
PFNGLPOINTPARAMETERIPROC   _glPointParameteri;
PFNGLPOINTPARAMETERIVPROC  _glPointParameteriv;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    _glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void APIENTRY glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
    _glMultiDrawArrays(mode, first, count, primcount);
}

void APIENTRY glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount)
{
    _glMultiDrawElements(mode, count, type, indices, primcount);
}

void APIENTRY glPointParameterf(GLenum pname, GLfloat param)
{
    _glPointParameterf(pname, param);
}

void APIENTRY glPointParameterfv(GLenum pname, const GLfloat *params)
{
    _glPointParameterfv(pname, params);
}

void APIENTRY glPointParameteri(GLenum pname, GLint param)
{
    _glPointParameteri(pname, param);
}

void APIENTRY glPointParameteriv(GLenum pname, const GLint *params)
{
    _glPointParameteriv(pname, params);
}

#ifdef __cplusplus
}
#endif

void Init_GL_VERSION_1_4()
{
    LoadProc(_glBlendFuncSeparate, "glBlendFuncSeparate");
    LoadProc(_glMultiDrawArrays,   "glMultiDrawArrays");
    LoadProc(_glMultiDrawElements, "glMultiDrawElements");
    LoadProc(_glPointParameterf,   "glPointParameterf");
    LoadProc(_glPointParameterfv,  "glPointParameterfv");
    LoadProc(_glPointParameteri,   "glPointParameteri");
    LoadProc(_glPointParameteriv,  "glPointParameteriv");
}
