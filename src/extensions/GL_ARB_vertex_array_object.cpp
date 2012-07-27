#include "pch.h"

PFNGLBINDVERTEXARRAYPROC    _glBindVertexArray;
PFNGLDELETEVERTEXARRAYSPROC _glDeleteVertexArrays;
PFNGLGENVERTEXARRAYSPROC    _glGenVertexArrays;
PFNGLISVERTEXARRAYPROC      _glIsVertexArray;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glBindVertexArray(GLuint array)
{
    _glBindVertexArray(array);
}

void APIENTRY glDeleteVertexArrays(GLsizei n, const GLuint *arrays)
{
    _glDeleteVertexArrays(n, arrays);
}

void APIENTRY glGenVertexArrays(GLsizei n, GLuint *arrays)
{
    _glGenVertexArrays(n, arrays);
}

GLboolean APIENTRY glIsVertexArray(GLuint array)
{
    return _glIsVertexArray(array);
}

#ifdef __cplusplus
}
#endif

void Init_GL_ARB_vertex_array_object()
{
    LoadProc(_glBindVertexArray,    "glBindVertexArray");
    LoadProc(_glDeleteVertexArrays, "glDeleteVertexArrays");
    LoadProc(_glGenVertexArrays,    "glGenVertexArrays");
    LoadProc(_glIsVertexArray,      "glIsVertexArray");
}
