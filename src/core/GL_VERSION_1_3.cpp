#include "pch.h"

// GL_VERSION_1_3
PFNGLACTIVETEXTUREPROC           _glActiveTexture;
PFNGLSAMPLECOVERAGEPROC          _glSampleCoverage;
PFNGLCOMPRESSEDTEXIMAGE3DPROC    _glCompressedTexImage3D;
PFNGLCOMPRESSEDTEXIMAGE2DPROC    _glCompressedTexImage2D;
PFNGLCOMPRESSEDTEXIMAGE1DPROC    _glCompressedTexImage1D;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC _glCompressedTexSubImage3D;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC _glCompressedTexSubImage2D;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC _glCompressedTexSubImage1D;
PFNGLGETCOMPRESSEDTEXIMAGEPROC   _glGetCompressedTexImage;

#ifdef __cplusplus
extern "C" {
#endif

void APIENTRY glActiveTexture(GLenum texture)
{
    _glActiveTexture(texture);
}

void APIENTRY glSampleCoverage(GLfloat value, GLboolean invert)
{
    _glSampleCoverage(value, invert);
}

void APIENTRY glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
{
    _glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void APIENTRY glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
    _glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void APIENTRY glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
{
    _glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void APIENTRY glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
{
    _glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void APIENTRY glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
    _glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void APIENTRY glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
{
    _glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void APIENTRY glGetCompressedTexImage(GLenum target, GLint level, GLvoid *img)
{
    _glGetCompressedTexImage(target, level, img);
}

#ifdef __cplusplus
}
#endif

void Init_GL_VERSION_1_3()
{
    LoadProc(_glActiveTexture,           "glActiveTexture");
    LoadProc(_glSampleCoverage,          "glSampleCoverage");
    LoadProc(_glCompressedTexImage3D,    "glCompressedTexImage3D");
    LoadProc(_glCompressedTexImage2D,    "glCompressedTexImage2D");
    LoadProc(_glCompressedTexImage1D,    "glCompressedTexImage1D");
    LoadProc(_glCompressedTexSubImage3D, "glCompressedTexSubImage3D");
    LoadProc(_glCompressedTexSubImage2D, "glCompressedTexSubImage2D");
    LoadProc(_glCompressedTexSubImage1D, "glCompressedTexSubImage1D");
    LoadProc(_glGetCompressedTexImage,   "glGetCompressedTexImage");
}
