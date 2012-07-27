#include "pch.h"

PFNGLBINDBUFFERARBPROC           _glBindBufferARB;
PFNGLDELETEBUFFERSARBPROC        _glDeleteBuffersARB;
PFNGLGENBUFFERSARBPROC           _glGenBuffersARB;
PFNGLISBUFFERARBPROC             _glIsBufferARB;
PFNGLBUFFERDATAARBPROC           _glBufferDataARB;
PFNGLBUFFERSUBDATAARBPROC        _glBufferSubDataARB;
PFNGLGETBUFFERSUBDATAARBPROC     _glGetBufferSubDataARB;
PFNGLMAPBUFFERARBPROC            _glMapBufferARB;
PFNGLUNMAPBUFFERARBPROC          _glUnmapBufferARB;
PFNGLGETBUFFERPARAMETERIVARBPROC _glGetBufferParameterivARB;
PFNGLGETBUFFERPOINTERVARBPROC    _glGetBufferPointervARB;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glBindBufferARB(GLenum target, GLuint buffer)
{
    _glBindBufferARB(target, buffer);
}

void APIENTRY glDeleteBuffersARB(GLsizei n, const GLuint *buffers)
{
    _glDeleteBuffersARB(n, buffers);
}

void APIENTRY glGenBuffersARB(GLsizei n, GLuint *buffers)
{
    _glGenBuffersARB(n, buffers);
}

GLboolean APIENTRY glIsBufferARB(GLuint buffer)
{
    return _glIsBufferARB(buffer);
}

void APIENTRY glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
{
    _glBufferDataARB(target, size, data, usage);
}

void APIENTRY glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
{
    _glBufferSubDataARB(target, offset, size, data);
}

void APIENTRY glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data)
{
    _glGetBufferSubDataARB(target, offset, size, data);
}

GLvoid* APIENTRY glMapBufferARB(GLenum target, GLenum access)
{
    return _glMapBufferARB(target, access);
}

GLboolean APIENTRY glUnmapBufferARB(GLenum target)
{
    return _glUnmapBufferARB(target);
}

void APIENTRY glGetBufferParameterivARB(GLenum target, GLenum pname, GLint *params)
{
    _glGetBufferParameterivARB(target, pname, params);
}

void APIENTRY glGetBufferPointervARB(GLenum target, GLenum pname, GLvoid* *params)
{
    _glGetBufferPointervARB(target, pname, params);
}

#ifdef __cplusplus
}
#endif

void Init_GL_ARB_vertex_buffer_object()
{
    LoadProc(_glBindBufferARB,           "glBindBufferARB");
    LoadProc(_glDeleteBuffersARB,        "glDeleteBuffersARB");
    LoadProc(_glGenBuffersARB,           "glGenBuffersARB");
    LoadProc(_glIsBufferARB,             "glIsBufferARB");
    LoadProc(_glBufferDataARB,           "glBufferDataARB");
    LoadProc(_glBufferSubDataARB,        "glBufferSubDataARB");
    LoadProc(_glGetBufferSubDataARB,     "glGetBufferSubDataARB");
    LoadProc(_glMapBufferARB,            "glMapBufferARB");
    LoadProc(_glUnmapBufferARB,          "glUnmapBufferARB");
    LoadProc(_glGetBufferParameterivARB, "glGetBufferParameterivARB");
    LoadProc(_glGetBufferPointervARB,    "glGetBufferPointervARB");
}
