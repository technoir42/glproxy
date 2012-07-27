#include "pch.h"

PFNGLUSEPROGRAMSTAGESPROC          _glUseProgramStages;
PFNGLACTIVESHADERPROGRAMPROC       _glActiveShaderProgram;
PFNGLCREATESHADERPROGRAMVPROC      _glCreateShaderProgramv;
PFNGLBINDPROGRAMPIPELINEPROC       _glBindProgramPipeline;
PFNGLDELETEPROGRAMPIPELINESPROC    _glDeleteProgramPipelines;
PFNGLGENPROGRAMPIPELINESPROC       _glGenProgramPipelines;
PFNGLISPROGRAMPIPELINEPROC         _glIsProgramPipeline;
PFNGLGETPROGRAMPIPELINEIVPROC      _glGetProgramPipelineiv;
PFNGLPROGRAMUNIFORM1IPROC          _glProgramUniform1i;
PFNGLPROGRAMUNIFORM1IVPROC         _glProgramUniform1iv;
PFNGLPROGRAMUNIFORM1FPROC          _glProgramUniform1f;
PFNGLPROGRAMUNIFORM1FVPROC         _glProgramUniform1fv;
PFNGLPROGRAMUNIFORM1DPROC          _glProgramUniform1d;
PFNGLPROGRAMUNIFORM1DVPROC         _glProgramUniform1dv;
PFNGLPROGRAMUNIFORM1UIPROC         _glProgramUniform1ui;
PFNGLPROGRAMUNIFORM1UIVPROC        _glProgramUniform1uiv;
PFNGLPROGRAMUNIFORM2IPROC          _glProgramUniform2i;
PFNGLPROGRAMUNIFORM2IVPROC         _glProgramUniform2iv;
PFNGLPROGRAMUNIFORM2FPROC          _glProgramUniform2f;
PFNGLPROGRAMUNIFORM2FVPROC         _glProgramUniform2fv;
PFNGLPROGRAMUNIFORM2DPROC          _glProgramUniform2d;
PFNGLPROGRAMUNIFORM2DVPROC         _glProgramUniform2dv;
PFNGLPROGRAMUNIFORM2UIPROC         _glProgramUniform2ui;
PFNGLPROGRAMUNIFORM2UIVPROC        _glProgramUniform2uiv;
PFNGLPROGRAMUNIFORM3IPROC          _glProgramUniform3i;
PFNGLPROGRAMUNIFORM3IVPROC         _glProgramUniform3iv;
PFNGLPROGRAMUNIFORM3FPROC          _glProgramUniform3f;
PFNGLPROGRAMUNIFORM3FVPROC         _glProgramUniform3fv;
PFNGLPROGRAMUNIFORM3DPROC          _glProgramUniform3d;
PFNGLPROGRAMUNIFORM3DVPROC         _glProgramUniform3dv;
PFNGLPROGRAMUNIFORM3UIPROC         _glProgramUniform3ui;
PFNGLPROGRAMUNIFORM3UIVPROC        _glProgramUniform3uiv;
PFNGLPROGRAMUNIFORM4IPROC          _glProgramUniform4i;
PFNGLPROGRAMUNIFORM4IVPROC         _glProgramUniform4iv;
PFNGLPROGRAMUNIFORM4FPROC          _glProgramUniform4f;
PFNGLPROGRAMUNIFORM4FVPROC         _glProgramUniform4fv;
PFNGLPROGRAMUNIFORM4DPROC          _glProgramUniform4d;
PFNGLPROGRAMUNIFORM4DVPROC         _glProgramUniform4dv;
PFNGLPROGRAMUNIFORM4UIPROC         _glProgramUniform4ui;
PFNGLPROGRAMUNIFORM4UIVPROC        _glProgramUniform4uiv;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC   _glProgramUniformMatrix2fv;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC   _glProgramUniformMatrix3fv;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC   _glProgramUniformMatrix4fv;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC   _glProgramUniformMatrix2dv;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC   _glProgramUniformMatrix3dv;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC   _glProgramUniformMatrix4dv;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC _glProgramUniformMatrix2x3fv;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC _glProgramUniformMatrix3x2fv;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC _glProgramUniformMatrix2x4fv;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC _glProgramUniformMatrix4x2fv;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC _glProgramUniformMatrix3x4fv;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC _glProgramUniformMatrix4x3fv;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC _glProgramUniformMatrix2x3dv;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC _glProgramUniformMatrix3x2dv;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC _glProgramUniformMatrix2x4dv;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC _glProgramUniformMatrix4x2dv;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC _glProgramUniformMatrix3x4dv;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC _glProgramUniformMatrix4x3dv;
PFNGLVALIDATEPROGRAMPIPELINEPROC   _glValidateProgramPipeline;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC _glGetProgramPipelineInfoLog;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
    _glUseProgramStages(pipeline, stages, program);
}

void APIENTRY glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    _glActiveShaderProgram(pipeline, program);
}

GLuint APIENTRY glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar* const *strings)
{
    return _glCreateShaderProgramv(type, count, strings);
}

void APIENTRY glBindProgramPipeline(GLuint pipeline)
{
    _glBindProgramPipeline(pipeline);
}

void APIENTRY glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines)
{
    _glDeleteProgramPipelines(n, pipelines);
}

void APIENTRY glGenProgramPipelines(GLsizei n, GLuint *pipelines)
{
    _glGenProgramPipelines(n, pipelines);
}

GLboolean APIENTRY glIsProgramPipeline(GLuint pipeline)
{
    return _glIsProgramPipeline(pipeline);
}

void APIENTRY glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params)
{
    _glGetProgramPipelineiv(pipeline, pname, params);
}

void APIENTRY glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    _glProgramUniform1i(program, location, v0);
}

void APIENTRY glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
    _glProgramUniform1iv(program, location, count, value);
}

void APIENTRY glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    _glProgramUniform1f(program, location, v0);
}

void APIENTRY glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
    _glProgramUniform1fv(program, location, count, value);
}

void APIENTRY glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    _glProgramUniform1d(program, location, v0);
}

void APIENTRY glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
    _glProgramUniform1dv(program, location, count, value);
}

void APIENTRY glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    _glProgramUniform1ui(program, location, v0);
}

void APIENTRY glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
    _glProgramUniform1uiv(program, location, count, value);
}

void APIENTRY glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    _glProgramUniform2i(program, location, v0, v1);
}

void APIENTRY glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
    _glProgramUniform2iv(program, location, count, value);
}

void APIENTRY glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    _glProgramUniform2f(program, location, v0, v1);
}

void APIENTRY glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
    _glProgramUniform2fv(program, location, count, value);
}

void APIENTRY glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    _glProgramUniform2d(program, location, v0, v1);
}

void APIENTRY glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
    _glProgramUniform2dv(program, location, count, value);
}

void APIENTRY glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    _glProgramUniform2ui(program, location, v0, v1);
}

void APIENTRY glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
    _glProgramUniform2uiv(program, location, count, value);
}

void APIENTRY glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    _glProgramUniform3i(program, location, v0, v1, v2);
}

void APIENTRY glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
    _glProgramUniform3iv(program, location, count, value);
}

void APIENTRY glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    _glProgramUniform3f(program, location, v0, v1, v2);
}

void APIENTRY glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
    _glProgramUniform3fv(program, location, count, value);
}

void APIENTRY glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    _glProgramUniform3d(program, location, v0, v1, v2);
}

void APIENTRY glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
    _glProgramUniform3dv(program, location, count, value);
}

void APIENTRY glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    _glProgramUniform3ui(program, location, v0, v1, v2);
}

void APIENTRY glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
    _glProgramUniform3uiv(program, location, count, value);
}

void APIENTRY glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    _glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void APIENTRY glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
    _glProgramUniform4iv(program, location, count, value);
}

void APIENTRY glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    _glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void APIENTRY glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
    _glProgramUniform4fv(program, location, count, value);
}

void APIENTRY glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    _glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void APIENTRY glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
    _glProgramUniform4dv(program, location, count, value);
}

void APIENTRY glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    _glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void APIENTRY glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
    _glProgramUniform4uiv(program, location, count, value);
}

void APIENTRY glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
    _glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void APIENTRY glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
    _glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void APIENTRY glValidateProgramPipeline(GLuint pipeline)
{
    _glValidateProgramPipeline(pipeline);
}

void APIENTRY glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
    _glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

#ifdef __cplusplus
}
#endif

void Init_GL_ARB_separate_shader_objects()
{
    LoadProc(_glUseProgramStages,          "glUseProgramStages");
    LoadProc(_glActiveShaderProgram,       "glActiveShaderProgram");
    LoadProc(_glCreateShaderProgramv,      "glCreateShaderProgramv");
    LoadProc(_glBindProgramPipeline,       "glBindProgramPipeline");
    LoadProc(_glDeleteProgramPipelines,    "glDeleteProgramPipelines");
    LoadProc(_glGenProgramPipelines,       "glGenProgramPipelines");
    LoadProc(_glIsProgramPipeline,         "glIsProgramPipeline");
    LoadProc(_glGetProgramPipelineiv,      "glGetProgramPipelineiv");
    LoadProc(_glProgramUniform1i,          "glProgramUniform1i");
    LoadProc(_glProgramUniform1iv,         "glProgramUniform1iv");
    LoadProc(_glProgramUniform1f,          "glProgramUniform1f");
    LoadProc(_glProgramUniform1fv,         "glProgramUniform1fv");
    LoadProc(_glProgramUniform1d,          "glProgramUniform1d");
    LoadProc(_glProgramUniform1dv,         "glProgramUniform1dv");
    LoadProc(_glProgramUniform1ui,         "glProgramUniform1ui");
    LoadProc(_glProgramUniform1uiv,        "glProgramUniform1uiv");
    LoadProc(_glProgramUniform2i,          "glProgramUniform2i");
    LoadProc(_glProgramUniform2iv,         "glProgramUniform2iv");
    LoadProc(_glProgramUniform2f,          "glProgramUniform2f");
    LoadProc(_glProgramUniform2fv,         "glProgramUniform2fv");
    LoadProc(_glProgramUniform2d,          "glProgramUniform2d");
    LoadProc(_glProgramUniform2dv,         "glProgramUniform2dv");
    LoadProc(_glProgramUniform2ui,         "glProgramUniform2ui");
    LoadProc(_glProgramUniform2uiv,        "glProgramUniform2uiv");
    LoadProc(_glProgramUniform3i,          "glProgramUniform3i");
    LoadProc(_glProgramUniform3iv,         "glProgramUniform3iv");
    LoadProc(_glProgramUniform3f,          "glProgramUniform3f");
    LoadProc(_glProgramUniform3fv,         "glProgramUniform3fv");
    LoadProc(_glProgramUniform3d,          "glProgramUniform3d");
    LoadProc(_glProgramUniform3dv,         "glProgramUniform3dv");
    LoadProc(_glProgramUniform3ui,         "glProgramUniform3ui");
    LoadProc(_glProgramUniform3uiv,        "glProgramUniform3uiv");
    LoadProc(_glProgramUniform4i,          "glProgramUniform4i");
    LoadProc(_glProgramUniform4iv,         "glProgramUniform4iv");
    LoadProc(_glProgramUniform4f,          "glProgramUniform4f");
    LoadProc(_glProgramUniform4fv,         "glProgramUniform4fv");
    LoadProc(_glProgramUniform4d,          "glProgramUniform4d");
    LoadProc(_glProgramUniform4dv,         "glProgramUniform4dv");
    LoadProc(_glProgramUniform4ui,         "glProgramUniform4ui");
    LoadProc(_glProgramUniform4uiv,        "glProgramUniform4uiv");
    LoadProc(_glProgramUniformMatrix2fv,   "glProgramUniformMatrix2fv");
    LoadProc(_glProgramUniformMatrix3fv,   "glProgramUniformMatrix3fv");
    LoadProc(_glProgramUniformMatrix4fv,   "glProgramUniformMatrix4fv");
    LoadProc(_glProgramUniformMatrix2dv,   "glProgramUniformMatrix2dv");
    LoadProc(_glProgramUniformMatrix3dv,   "glProgramUniformMatrix3dv");
    LoadProc(_glProgramUniformMatrix4dv,   "glProgramUniformMatrix4dv");
    LoadProc(_glProgramUniformMatrix2x3fv, "glProgramUniformMatrix2x3fv");
    LoadProc(_glProgramUniformMatrix3x2fv, "glProgramUniformMatrix3x2fv");
    LoadProc(_glProgramUniformMatrix2x4fv, "glProgramUniformMatrix2x4fv");
    LoadProc(_glProgramUniformMatrix4x2fv, "glProgramUniformMatrix4x2fv");
    LoadProc(_glProgramUniformMatrix3x4fv, "glProgramUniformMatrix3x4fv");
    LoadProc(_glProgramUniformMatrix4x3fv, "glProgramUniformMatrix4x3fv");
    LoadProc(_glProgramUniformMatrix2x3dv, "glProgramUniformMatrix2x3dv");
    LoadProc(_glProgramUniformMatrix3x2dv, "glProgramUniformMatrix3x2dv");
    LoadProc(_glProgramUniformMatrix2x4dv, "glProgramUniformMatrix2x4dv");
    LoadProc(_glProgramUniformMatrix4x2dv, "glProgramUniformMatrix4x2dv");
    LoadProc(_glProgramUniformMatrix3x4dv, "glProgramUniformMatrix3x4dv");
    LoadProc(_glProgramUniformMatrix4x3dv, "glProgramUniformMatrix4x3dv");
    LoadProc(_glValidateProgramPipeline,   "glValidateProgramPipeline");
    LoadProc(_glGetProgramPipelineInfoLog, "glGetProgramPipelineInfoLog");
}
