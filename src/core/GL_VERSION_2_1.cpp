#include "pch.h"

// GL_VERSION_2_1
PFNGLUNIFORMMATRIX2X3FVPROC _glUniformMatrix2x3fv;
PFNGLUNIFORMMATRIX3X2FVPROC _glUniformMatrix3x2fv;
PFNGLUNIFORMMATRIX2X4FVPROC _glUniformMatrix2x4fv;
PFNGLUNIFORMMATRIX4X2FVPROC _glUniformMatrix4x2fv;
PFNGLUNIFORMMATRIX3X4FVPROC _glUniformMatrix3x4fv;
PFNGLUNIFORMMATRIX4X3FVPROC _glUniformMatrix4x3fv;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix2x3fv(location, count, transpose, value);
}

void APIENTRY glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix3x2fv(location, count, transpose, value);
}

void APIENTRY glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix2x4fv(location, count, transpose, value);
}

void APIENTRY glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix4x2fv(location, count, transpose, value);
}

void APIENTRY glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix3x4fv(location, count, transpose, value);
}

void APIENTRY glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glUniformMatrix4x3fv(location, count, transpose, value);
}

#ifdef __cplusplus
}
#endif

void Init_GL_VERSION_2_1()
{
    LoadProc(_glUniformMatrix2x3fv, "glUniformMatrix2x3fv");
    LoadProc(_glUniformMatrix3x2fv, "glUniformMatrix3x2fv");
    LoadProc(_glUniformMatrix2x4fv, "glUniformMatrix2x4fv");
    LoadProc(_glUniformMatrix4x2fv, "glUniformMatrix4x2fv");
    LoadProc(_glUniformMatrix3x4fv, "glUniformMatrix3x4fv");
    LoadProc(_glUniformMatrix4x3fv, "glUniformMatrix4x3fv");
}
