#include "pch.h"

// GL_VERSION_2_0
PFNGLBLENDEQUATIONSEPARATEPROC    _glBlendEquationSeparate;
PFNGLDRAWBUFFERSPROC              _glDrawBuffers;
PFNGLSTENCILOPSEPARATEPROC        _glStencilOpSeparate;
PFNGLSTENCILFUNCSEPARATEPROC      _glStencilFuncSeparate;
PFNGLSTENCILMASKSEPARATEPROC      _glStencilMaskSeparate;
PFNGLATTACHSHADERPROC             _glAttachShader;
PFNGLBINDATTRIBLOCATIONPROC       _glBindAttribLocation;
PFNGLCOMPILESHADERPROC            _glCompileShader;
PFNGLCREATEPROGRAMPROC            _glCreateProgram;
PFNGLCREATESHADERPROC             _glCreateShader;
PFNGLDELETEPROGRAMPROC            _glDeleteProgram;
PFNGLDELETESHADERPROC             _glDeleteShader;
PFNGLDETACHSHADERPROC             _glDetachShader;
PFNGLDISABLEVERTEXATTRIBARRAYPROC _glDisableVertexAttribArray;
PFNGLENABLEVERTEXATTRIBARRAYPROC  _glEnableVertexAttribArray;
PFNGLGETACTIVEATTRIBPROC          _glGetActiveAttrib;
PFNGLGETACTIVEUNIFORMPROC         _glGetActiveUniform;
PFNGLGETATTACHEDSHADERSPROC       _glGetAttachedShaders;
PFNGLGETATTRIBLOCATIONPROC        _glGetAttribLocation;
PFNGLGETPROGRAMIVPROC             _glGetProgramiv;
PFNGLGETPROGRAMINFOLOGPROC        _glGetProgramInfoLog;
PFNGLGETSHADERIVPROC              _glGetShaderiv;
PFNGLGETSHADERINFOLOGPROC         _glGetShaderInfoLog;
PFNGLGETSHADERSOURCEPROC          _glGetShaderSource;
PFNGLGETUNIFORMLOCATIONPROC       _glGetUniformLocation;
PFNGLGETUNIFORMFVPROC             _glGetUniformfv;
PFNGLGETUNIFORMIVPROC             _glGetUniformiv;
PFNGLGETVERTEXATTRIBDVPROC        _glGetVertexAttribdv;
PFNGLGETVERTEXATTRIBFVPROC        _glGetVertexAttribfv;
PFNGLGETVERTEXATTRIBIVPROC        _glGetVertexAttribiv;
PFNGLGETVERTEXATTRIBPOINTERVPROC  _glGetVertexAttribPointerv;
PFNGLISPROGRAMPROC                _glIsProgram;
PFNGLISSHADERPROC                 _glIsShader;
PFNGLLINKPROGRAMPROC              _glLinkProgram;
PFNGLSHADERSOURCEPROC             _glShaderSource;
PFNGLUSEPROGRAMPROC               _glUseProgram;
PFNGLUNIFORM1FPROC                _glUniform1f;
PFNGLUNIFORM2FPROC                _glUniform2f;
PFNGLUNIFORM3FPROC                _glUniform3f;
PFNGLUNIFORM4FPROC                _glUniform4f;
PFNGLUNIFORM1IPROC                _glUniform1i;
PFNGLUNIFORM2IPROC                _glUniform2i;
PFNGLUNIFORM3IPROC                _glUniform3i;
PFNGLUNIFORM4IPROC                _glUniform4i;
PFNGLUNIFORM1FVPROC               _glUniform1fv;
PFNGLUNIFORM2FVPROC               _glUniform2fv;
PFNGLUNIFORM3FVPROC               _glUniform3fv;
PFNGLUNIFORM4FVPROC               _glUniform4fv;
PFNGLUNIFORM1IVPROC               _glUniform1iv;
PFNGLUNIFORM2IVPROC               _glUniform2iv;
PFNGLUNIFORM3IVPROC               _glUniform3iv;
PFNGLUNIFORM4IVPROC               _glUniform4iv;
PFNGLUNIFORMMATRIX2FVPROC         _glUniformMatrix2fv;
PFNGLUNIFORMMATRIX3FVPROC         _glUniformMatrix3fv;
PFNGLUNIFORMMATRIX4FVPROC         _glUniformMatrix4fv;
PFNGLVALIDATEPROGRAMPROC          _glValidateProgram;
PFNGLVERTEXATTRIB1DPROC           _glVertexAttrib1d;
PFNGLVERTEXATTRIB1DVPROC          _glVertexAttrib1dv;
PFNGLVERTEXATTRIB1FPROC           _glVertexAttrib1f;
PFNGLVERTEXATTRIB1FVPROC          _glVertexAttrib1fv;
PFNGLVERTEXATTRIB1SPROC           _glVertexAttrib1s;
PFNGLVERTEXATTRIB1SVPROC          _glVertexAttrib1sv;
PFNGLVERTEXATTRIB2DPROC           _glVertexAttrib2d;
PFNGLVERTEXATTRIB2DVPROC          _glVertexAttrib2dv;
PFNGLVERTEXATTRIB2FPROC           _glVertexAttrib2f;
PFNGLVERTEXATTRIB2FVPROC          _glVertexAttrib2fv;
PFNGLVERTEXATTRIB2SPROC           _glVertexAttrib2s;
PFNGLVERTEXATTRIB2SVPROC          _glVertexAttrib2sv;
PFNGLVERTEXATTRIB3DPROC           _glVertexAttrib3d;
PFNGLVERTEXATTRIB3DVPROC          _glVertexAttrib3dv;
PFNGLVERTEXATTRIB3FPROC           _glVertexAttrib3f;
PFNGLVERTEXATTRIB3FVPROC          _glVertexAttrib3fv;
PFNGLVERTEXATTRIB3SPROC           _glVertexAttrib3s;
PFNGLVERTEXATTRIB3SVPROC          _glVertexAttrib3sv;
PFNGLVERTEXATTRIB4NBVPROC         _glVertexAttrib4Nbv;
PFNGLVERTEXATTRIB4NIVPROC         _glVertexAttrib4Niv;
PFNGLVERTEXATTRIB4NSVPROC         _glVertexAttrib4Nsv;
PFNGLVERTEXATTRIB4NUBPROC         _glVertexAttrib4Nub;
PFNGLVERTEXATTRIB4NUBVPROC        _glVertexAttrib4Nubv;
PFNGLVERTEXATTRIB4NUIVPROC        _glVertexAttrib4Nuiv;
PFNGLVERTEXATTRIB4NUSVPROC        _glVertexAttrib4Nusv;
PFNGLVERTEXATTRIB4BVPROC          _glVertexAttrib4bv;
PFNGLVERTEXATTRIB4DPROC           _glVertexAttrib4d;
PFNGLVERTEXATTRIB4DVPROC          _glVertexAttrib4dv;
PFNGLVERTEXATTRIB4FPROC           _glVertexAttrib4f;
PFNGLVERTEXATTRIB4FVPROC          _glVertexAttrib4fv;
PFNGLVERTEXATTRIB4IVPROC          _glVertexAttrib4iv;
PFNGLVERTEXATTRIB4SPROC           _glVertexAttrib4s;
PFNGLVERTEXATTRIB4SVPROC          _glVertexAttrib4sv;
PFNGLVERTEXATTRIB4UBVPROC         _glVertexAttrib4ubv;
PFNGLVERTEXATTRIB4UIVPROC         _glVertexAttrib4uiv;
PFNGLVERTEXATTRIB4USVPROC         _glVertexAttrib4usv;
PFNGLVERTEXATTRIBPOINTERPROC      _glVertexAttribPointer;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    _glBlendEquationSeparate(modeRGB, modeAlpha);
}

void APIENTRY glDrawBuffers(GLsizei n, const GLenum *bufs)
{
    _glDrawBuffers(n, bufs);
}

void APIENTRY glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    _glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void APIENTRY glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    _glStencilFuncSeparate(face, func, ref, mask);
}

void APIENTRY glStencilMaskSeparate(GLenum face, GLuint mask)
{
    _glStencilMaskSeparate(face, mask);
}

void APIENTRY glAttachShader(GLuint program, GLuint shader)
{
    _glAttachShader(program, shader);
}

void APIENTRY glBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
{
    _glBindAttribLocation(program, index, name);
}

void APIENTRY glCompileShader(GLuint shader)
{
    _glCompileShader(shader);
}

GLuint APIENTRY glCreateProgram(void)
{
    return _glCreateProgram();
}

GLuint APIENTRY glCreateShader(GLenum type)
{
    return _glCreateShader(type);
}

void APIENTRY glDeleteProgram(GLuint program)
{
    _glDeleteProgram(program);
}

void APIENTRY glDeleteShader(GLuint shader)
{
    _glDeleteShader(shader);
}

void APIENTRY glDetachShader(GLuint program, GLuint shader)
{
    _glDetachShader(program, shader);
}

void APIENTRY glDisableVertexAttribArray(GLuint index)
{
    _glDisableVertexAttribArray(index);
}

void APIENTRY glEnableVertexAttribArray(GLuint index)
{
    _glEnableVertexAttribArray(index);
}

void APIENTRY glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
    _glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void APIENTRY glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
    _glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

void APIENTRY glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj)
{
    _glGetAttachedShaders(program, maxCount, count, obj);
}

GLint APIENTRY glGetAttribLocation(GLuint program, const GLchar *name)
{
    return _glGetAttribLocation(program, name);
}

void APIENTRY glGetProgramiv(GLuint program, GLenum pname, GLint *params)
{
    _glGetProgramiv(program, pname, params);
}

void APIENTRY glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
    _glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void APIENTRY glGetShaderiv(GLuint shader, GLenum pname, GLint *params)
{
    _glGetShaderiv(shader, pname, params);
}

void APIENTRY glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
    _glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void APIENTRY glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
{
    _glGetShaderSource(shader, bufSize, length, source);
}

GLint APIENTRY glGetUniformLocation(GLuint program, const GLchar *name)
{
    return _glGetUniformLocation(program, name);
}

void APIENTRY glGetUniformfv(GLuint program, GLint location, GLfloat *params)
{
    _glGetUniformfv(program, location, params);
}

void APIENTRY glGetUniformiv(GLuint program, GLint location, GLint *params)
{
    _glGetUniformiv(program, location, params);
}

void APIENTRY glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params)
{
    _glGetVertexAttribdv(index, pname, params);
}

void APIENTRY glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
{
    _glGetVertexAttribfv(index, pname, params);
}

void APIENTRY glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
{
    _glGetVertexAttribiv(index, pname, params);
}

void APIENTRY glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid* *pointer)
{
    _glGetVertexAttribPointerv(index, pname, pointer);
}

GLboolean APIENTRY glIsProgram(GLuint program)
{
    return _glIsProgram(program);
}

GLboolean APIENTRY glIsShader(GLuint shader)
{
    return _glIsShader(shader);
}

void APIENTRY glLinkProgram(GLuint program)
{
    _glLinkProgram(program);
}

void APIENTRY glShaderSource(GLuint shader, GLsizei count, const GLchar* const *string, const GLint *length)
{
    _glShaderSource(shader, count, string, length);
}

void APIENTRY glUseProgram(GLuint program)
{
    _glUseProgram(program);
}

void APIENTRY glUniform1f(GLint location, GLfloat v0)
{
    _glUniform1f(location, v0);
}

void APIENTRY glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    _glUniform2f(location, v0, v1);
}

void APIENTRY glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    _glUniform3f(location, v0, v1, v2);
}

void APIENTRY glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    _glUniform4f(location, v0, v1, v2, v3);
}

void APIENTRY glUniform1i(GLint location, GLint v0)
{
    _glUniform1i(location, v0);
}

void APIENTRY glUniform2i(GLint location, GLint v0, GLint v1)
{
    _glUniform2i(location, v0, v1);
}

void APIENTRY glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    _glUniform3i(location, v0, v1, v2);
}

void APIENTRY glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    _glUniform4i(location, v0, v1, v2, v3);
}

void APIENTRY glUniform1fv(GLint location, GLsizei count, const GLfloat *value)
{
    _glUniform1fv(location, count, value);
}

void APIENTRY glUniform2fv(GLint location, GLsizei count, const GLfloat *value)
{
    _glUniform2fv(location, count, value);
}

void APIENTRY glUniform3fv(GLint location, GLsizei count, const GLfloat *value)
{
    _glUniform3fv(location, count, value);
}

void APIENTRY glUniform4fv(GLint location, GLsizei count, const GLfloat *value)
{
    _glUniform4fv(location, count, value);
}

void APIENTRY glUniform1iv(GLint location, GLsizei count, const GLint *value)
{
    _glUniform1iv(location, count, value);
}

void APIENTRY glUniform2iv(GLint location, GLsizei count, const GLint *value)
{
    _glUniform2iv(location, count, value);
}

void APIENTRY glUniform3iv(GLint location, GLsizei count, const GLint *value)
{
    _glUniform3iv(location, count, value);
}

void APIENTRY glUniform4iv(GLint location, GLsizei count, const GLint *value)
{
    _glUniform4iv(location, count, value);
}

void APIENTRY glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix2fv(location, count, transpose, value);
}

void APIENTRY glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix3fv(location, count, transpose, value);
}

void APIENTRY glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix4fv(location, count, transpose, value);
}

void APIENTRY glValidateProgram(GLuint program)
{
    _glValidateProgram(program);
}

void APIENTRY glVertexAttrib1d(GLuint index, GLdouble x)
{
    _glVertexAttrib1d(index, x);
}

void APIENTRY glVertexAttrib1dv(GLuint index, const GLdouble *v)
{
    _glVertexAttrib1dv(index, v);
}

void APIENTRY glVertexAttrib1f(GLuint index, GLfloat x)
{
    _glVertexAttrib1f(index, x);
}

void APIENTRY glVertexAttrib1fv(GLuint index, const GLfloat *v)
{
    _glVertexAttrib1fv(index, v);
}

void APIENTRY glVertexAttrib1s(GLuint index, GLshort x)
{
    _glVertexAttrib1s(index, x);
}

void APIENTRY glVertexAttrib1sv(GLuint index, const GLshort *v)
{
    _glVertexAttrib1sv(index, v);
}

void APIENTRY glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    _glVertexAttrib2d(index, x, y);
}

void APIENTRY glVertexAttrib2dv(GLuint index, const GLdouble *v)
{
    _glVertexAttrib2dv(index, v);
}

void APIENTRY glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    _glVertexAttrib2f(index, x, y);
}

void APIENTRY glVertexAttrib2fv(GLuint index, const GLfloat *v)
{
    _glVertexAttrib2fv(index, v);
}

void APIENTRY glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    _glVertexAttrib2s(index, x, y);
}

void APIENTRY glVertexAttrib2sv(GLuint index, const GLshort *v)
{
    _glVertexAttrib2sv(index, v);
}

void APIENTRY glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    _glVertexAttrib3d(index, x, y, z);
}

void APIENTRY glVertexAttrib3dv(GLuint index, const GLdouble *v)
{
    _glVertexAttrib3dv(index, v);
}

void APIENTRY glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    _glVertexAttrib3f(index, x, y, z);
}

void APIENTRY glVertexAttrib3fv(GLuint index, const GLfloat *v)
{
    _glVertexAttrib3fv(index, v);
}

void APIENTRY glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    _glVertexAttrib3s(index, x, y, z);
}

void APIENTRY glVertexAttrib3sv(GLuint index, const GLshort *v)
{
    _glVertexAttrib3sv(index, v);
}

void APIENTRY glVertexAttrib4Nbv(GLuint index, const GLbyte *v)
{
    _glVertexAttrib4Nbv(index, v);
}

void APIENTRY glVertexAttrib4Niv(GLuint index, const GLint *v)
{
    _glVertexAttrib4Niv(index, v);
}

void APIENTRY glVertexAttrib4Nsv(GLuint index, const GLshort *v)
{
    _glVertexAttrib4Nsv(index, v);
}

void APIENTRY glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    _glVertexAttrib4Nub(index, x, y, z, w);
}

void APIENTRY glVertexAttrib4Nubv(GLuint index, const GLubyte *v)
{
    _glVertexAttrib4Nubv(index, v);
}

void APIENTRY glVertexAttrib4Nuiv(GLuint index, const GLuint *v)
{
    _glVertexAttrib4Nuiv(index, v);
}

void APIENTRY glVertexAttrib4Nusv(GLuint index, const GLushort *v)
{
    _glVertexAttrib4Nusv(index, v);
}

void APIENTRY glVertexAttrib4bv(GLuint index, const GLbyte *v)
{
    _glVertexAttrib4bv(index, v);
}

void APIENTRY glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    _glVertexAttrib4d(index, x, y, z, w);
}

void APIENTRY glVertexAttrib4dv(GLuint index, const GLdouble *v)
{
    _glVertexAttrib4dv(index, v);
}

void APIENTRY glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    _glVertexAttrib4f(index, x, y, z, w);
}

void APIENTRY glVertexAttrib4fv(GLuint index, const GLfloat *v)
{
    _glVertexAttrib4fv(index, v);
}

void APIENTRY glVertexAttrib4iv(GLuint index, const GLint *v)
{
    _glVertexAttrib4iv(index, v);
}

void APIENTRY glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    _glVertexAttrib4s(index, x, y, z, w);
}

void APIENTRY glVertexAttrib4sv(GLuint index, const GLshort *v)
{
    _glVertexAttrib4sv(index, v);
}

void APIENTRY glVertexAttrib4ubv(GLuint index, const GLubyte *v)
{
    _glVertexAttrib4ubv(index, v);
}

void APIENTRY glVertexAttrib4uiv(GLuint index, const GLuint *v)
{
    _glVertexAttrib4uiv(index, v);
}

void APIENTRY glVertexAttrib4usv(GLuint index, const GLushort *v)
{
    _glVertexAttrib4usv(index, v);
}

void APIENTRY glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
    _glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

#ifdef __cplusplus
}
#endif

void Init_GL_VERSION_2_0()
{
    LoadProc(_glBlendEquationSeparate,    "glBlendEquationSeparate");
    LoadProc(_glDrawBuffers,              "glDrawBuffers");
    LoadProc(_glStencilOpSeparate,        "glStencilOpSeparate");
    LoadProc(_glStencilFuncSeparate,      "glStencilFuncSeparate");
    LoadProc(_glStencilMaskSeparate,      "glStencilMaskSeparate");
    LoadProc(_glAttachShader,             "glAttachShader");
    LoadProc(_glBindAttribLocation,       "glBindAttribLocation");
    LoadProc(_glCompileShader,            "glCompileShader");
    LoadProc(_glCreateProgram,            "glCreateProgram");
    LoadProc(_glCreateShader,             "glCreateShader");
    LoadProc(_glDeleteProgram,            "glDeleteProgram");
    LoadProc(_glDeleteShader,             "glDeleteShader");
    LoadProc(_glDetachShader,             "glDetachShader");
    LoadProc(_glDisableVertexAttribArray, "glDisableVertexAttribArray");
    LoadProc(_glEnableVertexAttribArray,  "glEnableVertexAttribArray");
    LoadProc(_glGetActiveAttrib,          "glGetActiveAttrib");
    LoadProc(_glGetActiveUniform,         "glGetActiveUniform");
    LoadProc(_glGetAttachedShaders,       "glGetAttachedShaders");
    LoadProc(_glGetAttribLocation,        "glGetAttribLocation");
    LoadProc(_glGetProgramiv,             "glGetProgramiv");
    LoadProc(_glGetProgramInfoLog,        "glGetProgramInfoLog");
    LoadProc(_glGetShaderiv,              "glGetShaderiv");
    LoadProc(_glGetShaderInfoLog,         "glGetShaderInfoLog");
    LoadProc(_glGetShaderSource,          "glGetShaderSource");
    LoadProc(_glGetUniformLocation,       "glGetUniformLocation");
    LoadProc(_glGetUniformfv,             "glGetUniformfv");
    LoadProc(_glGetUniformiv,             "glGetUniformiv");
    LoadProc(_glGetVertexAttribdv,        "glGetVertexAttribdv");
    LoadProc(_glGetVertexAttribfv,        "glGetVertexAttribfv");
    LoadProc(_glGetVertexAttribiv,        "glGetVertexAttribiv");
    LoadProc(_glGetVertexAttribPointerv,  "glGetVertexAttribPointerv");
    LoadProc(_glIsProgram,                "glIsProgram");
    LoadProc(_glIsShader,                 "glIsShader");
    LoadProc(_glLinkProgram,              "glLinkProgram");
    LoadProc(_glShaderSource,             "glShaderSource");
    LoadProc(_glUseProgram,               "glUseProgram");
    LoadProc(_glUniform1f,                "glUniform1f");
    LoadProc(_glUniform2f,                "glUniform2f");
    LoadProc(_glUniform3f,                "glUniform3f");
    LoadProc(_glUniform4f,                "glUniform4f");
    LoadProc(_glUniform1i,                "glUniform1i");
    LoadProc(_glUniform2i,                "glUniform2i");
    LoadProc(_glUniform3i,                "glUniform3i");
    LoadProc(_glUniform4i,                "glUniform4i");
    LoadProc(_glUniform1fv,               "glUniform1fv");
    LoadProc(_glUniform2fv,               "glUniform2fv");
    LoadProc(_glUniform3fv,               "glUniform3fv");
    LoadProc(_glUniform4fv,               "glUniform4fv");
    LoadProc(_glUniform1iv,               "glUniform1iv");
    LoadProc(_glUniform2iv,               "glUniform2iv");
    LoadProc(_glUniform3iv,               "glUniform3iv");
    LoadProc(_glUniform4iv,               "glUniform4iv");
    LoadProc(_glUniformMatrix2fv,         "glUniformMatrix2fv");
    LoadProc(_glUniformMatrix3fv,         "glUniformMatrix3fv");
    LoadProc(_glUniformMatrix4fv,         "glUniformMatrix4fv");
    LoadProc(_glValidateProgram,          "glValidateProgram");
    LoadProc(_glVertexAttrib1d,           "glVertexAttrib1d");
    LoadProc(_glVertexAttrib1dv,          "glVertexAttrib1dv");
    LoadProc(_glVertexAttrib1f,           "glVertexAttrib1f");
    LoadProc(_glVertexAttrib1fv,          "glVertexAttrib1fv");
    LoadProc(_glVertexAttrib1s,           "glVertexAttrib1s");
    LoadProc(_glVertexAttrib1sv,          "glVertexAttrib1sv");
    LoadProc(_glVertexAttrib2d,           "glVertexAttrib2d");
    LoadProc(_glVertexAttrib2dv,          "glVertexAttrib2dv");
    LoadProc(_glVertexAttrib2f,           "glVertexAttrib2f");
    LoadProc(_glVertexAttrib2fv,          "glVertexAttrib2fv");
    LoadProc(_glVertexAttrib2s,           "glVertexAttrib2s");
    LoadProc(_glVertexAttrib2sv,          "glVertexAttrib2sv");
    LoadProc(_glVertexAttrib3d,           "glVertexAttrib3d");
    LoadProc(_glVertexAttrib3dv,          "glVertexAttrib3dv");
    LoadProc(_glVertexAttrib3f,           "glVertexAttrib3f");
    LoadProc(_glVertexAttrib3fv,          "glVertexAttrib3fv");
    LoadProc(_glVertexAttrib3s,           "glVertexAttrib3s");
    LoadProc(_glVertexAttrib3sv,          "glVertexAttrib3sv");
    LoadProc(_glVertexAttrib4Nbv,         "glVertexAttrib4Nbv");
    LoadProc(_glVertexAttrib4Niv,         "glVertexAttrib4Niv");
    LoadProc(_glVertexAttrib4Nsv,         "glVertexAttrib4Nsv");
    LoadProc(_glVertexAttrib4Nub,         "glVertexAttrib4Nub");
    LoadProc(_glVertexAttrib4Nubv,        "glVertexAttrib4Nubv");
    LoadProc(_glVertexAttrib4Nuiv,        "glVertexAttrib4Nuiv");
    LoadProc(_glVertexAttrib4Nusv,        "glVertexAttrib4Nusv");
    LoadProc(_glVertexAttrib4bv,          "glVertexAttrib4bv");
    LoadProc(_glVertexAttrib4d,           "glVertexAttrib4d");
    LoadProc(_glVertexAttrib4dv,          "glVertexAttrib4dv");
    LoadProc(_glVertexAttrib4f,           "glVertexAttrib4f");
    LoadProc(_glVertexAttrib4fv,          "glVertexAttrib4fv");
    LoadProc(_glVertexAttrib4iv,          "glVertexAttrib4iv");
    LoadProc(_glVertexAttrib4s,           "glVertexAttrib4s");
    LoadProc(_glVertexAttrib4sv,          "glVertexAttrib4sv");
    LoadProc(_glVertexAttrib4ubv,         "glVertexAttrib4ubv");
    LoadProc(_glVertexAttrib4uiv,         "glVertexAttrib4uiv");
    LoadProc(_glVertexAttrib4usv,         "glVertexAttrib4usv");
    LoadProc(_glVertexAttribPointer,      "glVertexAttribPointer");
}
