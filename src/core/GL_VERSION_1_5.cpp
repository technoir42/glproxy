#include "pch.h"

// GL_VERSION_1_5
PFNGLGENQUERIESPROC           _glGenQueries;
PFNGLDELETEQUERIESPROC        _glDeleteQueries;
PFNGLISQUERYPROC              _glIsQuery;
PFNGLBEGINQUERYPROC           _glBeginQuery;
PFNGLENDQUERYPROC             _glEndQuery;
PFNGLGETQUERYIVPROC           _glGetQueryiv;
PFNGLGETQUERYOBJECTIVPROC     _glGetQueryObjectiv;
PFNGLGETQUERYOBJECTUIVPROC    _glGetQueryObjectuiv;
PFNGLBINDBUFFERPROC           _glBindBuffer;
PFNGLDELETEBUFFERSPROC        _glDeleteBuffers;
PFNGLGENBUFFERSPROC           _glGenBuffers;
PFNGLISBUFFERPROC             _glIsBuffer;
PFNGLBUFFERDATAPROC           _glBufferData;
PFNGLBUFFERSUBDATAPROC        _glBufferSubData;
PFNGLGETBUFFERSUBDATAPROC     _glGetBufferSubData;
PFNGLMAPBUFFERPROC            _glMapBuffer;
PFNGLUNMAPBUFFERPROC          _glUnmapBuffer;
PFNGLGETBUFFERPARAMETERIVPROC _glGetBufferParameteriv;
PFNGLGETBUFFERPOINTERVPROC    _glGetBufferPointerv;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glGenQueries(GLsizei n, GLuint *ids)
{
    _glGenQueries(n, ids);
}

void APIENTRY glDeleteQueries(GLsizei n, const GLuint *ids)
{
    _glDeleteQueries(n, ids);
}

GLboolean APIENTRY glIsQuery(GLuint id)
{
    return _glIsQuery(id);
}

void APIENTRY glBeginQuery(GLenum target, GLuint id)
{
    _glBeginQuery(target, id);
}

void APIENTRY glEndQuery(GLenum target)
{
    _glEndQuery(target);
}

void APIENTRY glGetQueryiv(GLenum target, GLenum pname, GLint *params)
{
    _glGetQueryiv(target, pname, params);
}

void APIENTRY glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params)
{
    _glGetQueryObjectiv(id, pname, params);
}

void APIENTRY glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
{
    _glGetQueryObjectuiv(id, pname, params);
}

void APIENTRY glBindBuffer(GLenum target, GLuint buffer)
{
    _glBindBuffer(target, buffer);
}

void APIENTRY glDeleteBuffers(GLsizei n, const GLuint *buffers)
{
    _glDeleteBuffers(n, buffers);
}

void APIENTRY glGenBuffers(GLsizei n, GLuint *buffers)
{
    _glGenBuffers(n, buffers);
}

GLboolean APIENTRY glIsBuffer(GLuint buffer)
{
    return _glIsBuffer(buffer);
}

void APIENTRY glBufferData(GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage)
{
    _glBufferData(target, size, data, usage);
}

void APIENTRY glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data)
{
    _glBufferSubData(target, offset, size, data);
}

void APIENTRY glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data)
{
    _glGetBufferSubData(target, offset, size, data);
}

GLvoid* APIENTRY glMapBuffer(GLenum target, GLenum access)
{
    return _glMapBuffer(target, access);
}

GLboolean APIENTRY glUnmapBuffer(GLenum target)
{
    return _glUnmapBuffer(target);
}

void APIENTRY glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
    _glGetBufferParameteriv(target, pname, params);
}

void APIENTRY glGetBufferPointerv(GLenum target, GLenum pname, GLvoid* *params)
{
    _glGetBufferPointerv(target, pname, params);
}

#ifdef __cplusplus
}
#endif

void Init_GL_VERSION_1_5()
{
    LoadProc(_glGenQueries,           "glGenQueries");
    LoadProc(_glDeleteQueries,        "glDeleteQueries");
    LoadProc(_glIsQuery,              "glIsQuery");
    LoadProc(_glBeginQuery,           "glBeginQuery");
    LoadProc(_glEndQuery,             "glEndQuery");
    LoadProc(_glGetQueryiv,           "glGetQueryiv");
    LoadProc(_glGetQueryObjectiv,     "glGetQueryObjectiv");
    LoadProc(_glGetQueryObjectuiv,    "glGetQueryObjectuiv");
    LoadProc(_glBindBuffer,           "glBindBuffer");
    LoadProc(_glDeleteBuffers,        "glDeleteBuffers");
    LoadProc(_glGenBuffers,           "glGenBuffers");
    LoadProc(_glIsBuffer,             "glIsBuffer");
    LoadProc(_glBufferData,           "glBufferData");
    LoadProc(_glBufferSubData,        "glBufferSubData");
    LoadProc(_glGetBufferSubData,     "glGetBufferSubData");
    LoadProc(_glMapBuffer,            "glMapBuffer");
    LoadProc(_glUnmapBuffer,          "glUnmapBuffer");
    LoadProc(_glGetBufferParameteriv, "glGetBufferParameteriv");
    LoadProc(_glGetBufferPointerv,    "glGetBufferPointerv");
}
