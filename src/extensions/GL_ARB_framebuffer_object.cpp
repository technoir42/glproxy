#include "pch.h"

PFNGLISRENDERBUFFERPROC                      _glIsRenderbuffer;
PFNGLBINDRENDERBUFFERPROC                    _glBindRenderbuffer;
PFNGLDELETERENDERBUFFERSPROC                 _glDeleteRenderbuffers;
PFNGLGENRENDERBUFFERSPROC                    _glGenRenderbuffers;
PFNGLRENDERBUFFERSTORAGEPROC                 _glRenderbufferStorage;
PFNGLGETRENDERBUFFERPARAMETERIVPROC          _glGetRenderbufferParameteriv;
PFNGLISFRAMEBUFFERPROC                       _glIsFramebuffer;
PFNGLBINDFRAMEBUFFERPROC                     _glBindFramebuffer;
PFNGLDELETEFRAMEBUFFERSPROC                  _glDeleteFramebuffers;
PFNGLGENFRAMEBUFFERSPROC                     _glGenFramebuffers;
PFNGLCHECKFRAMEBUFFERSTATUSPROC              _glCheckFramebufferStatus;
PFNGLFRAMEBUFFERTEXTURE1DPROC                _glFramebufferTexture1D;
PFNGLFRAMEBUFFERTEXTURE2DPROC                _glFramebufferTexture2D;
PFNGLFRAMEBUFFERTEXTURE3DPROC                _glFramebufferTexture3D;
PFNGLFRAMEBUFFERRENDERBUFFERPROC             _glFramebufferRenderbuffer;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC _glGetFramebufferAttachmentParameteriv;
PFNGLGENERATEMIPMAPPROC                      _glGenerateMipmap;
PFNGLBLITFRAMEBUFFERPROC                     _glBlitFramebuffer;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC      _glRenderbufferStorageMultisample;
PFNGLFRAMEBUFFERTEXTURELAYERPROC             _glFramebufferTextureLayer;

#ifdef __cplusplus
extern "C" {
#endif

GLboolean APIENTRY glIsRenderbuffer(GLuint renderbuffer)
{
    return _glIsRenderbuffer(renderbuffer);
}

void APIENTRY glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    _glBindRenderbuffer(target, renderbuffer);
}

void APIENTRY glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers)
{
    _glDeleteRenderbuffers(n, renderbuffers);
}

void APIENTRY glGenRenderbuffers(GLsizei n, GLuint *renderbuffers)
{
    _glGenRenderbuffers(n, renderbuffers);
}

void APIENTRY glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    _glRenderbufferStorage(target, internalformat, width, height);
}

void APIENTRY glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
    _glGetRenderbufferParameteriv(target, pname, params);
}

GLboolean APIENTRY glIsFramebuffer(GLuint framebuffer)
{
    return _glIsFramebuffer(framebuffer);
}

void APIENTRY glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    _glBindFramebuffer(target, framebuffer);
}

void APIENTRY glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers)
{
    _glDeleteFramebuffers(n, framebuffers);
}

void APIENTRY glGenFramebuffers(GLsizei n, GLuint *framebuffers)
{
    _glGenFramebuffers(n, framebuffers);
}

GLenum APIENTRY glCheckFramebufferStatus(GLenum target)
{
    return _glCheckFramebufferStatus(target);
}

void APIENTRY glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    _glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void APIENTRY glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    _glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void APIENTRY glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    _glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void APIENTRY glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    _glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void APIENTRY glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params)
{
    _glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void APIENTRY glGenerateMipmap(GLenum target)
{
    _glGenerateMipmap(target);
}

void APIENTRY glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    _glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void APIENTRY glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    _glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void APIENTRY glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    _glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

#ifdef __cplusplus
}
#endif

void Init_GL_ARB_framebuffer_object()
{
    LoadProc(_glIsRenderbuffer,                      "glIsRenderbuffer");
    LoadProc(_glBindRenderbuffer,                    "glBindRenderbuffer");
    LoadProc(_glDeleteRenderbuffers,                 "glDeleteRenderbuffers");
    LoadProc(_glGenRenderbuffers,                    "glGenRenderbuffers");
    LoadProc(_glRenderbufferStorage,                 "glRenderbufferStorage");
    LoadProc(_glGetRenderbufferParameteriv,          "glGetRenderbufferParameteriv");
    LoadProc(_glIsFramebuffer,                       "glIsFramebuffer");
    LoadProc(_glBindFramebuffer,                     "glBindFramebuffer");
    LoadProc(_glDeleteFramebuffers,                  "glDeleteFramebuffers");
    LoadProc(_glGenFramebuffers,                     "glGenFramebuffers");
    LoadProc(_glCheckFramebufferStatus,              "glCheckFramebufferStatus");
    LoadProc(_glFramebufferTexture1D,                "glFramebufferTexture1D");
    LoadProc(_glFramebufferTexture2D,                "glFramebufferTexture2D");
    LoadProc(_glFramebufferTexture3D,                "glFramebufferTexture3D");
    LoadProc(_glFramebufferRenderbuffer,             "glFramebufferRenderbuffer");
    LoadProc(_glGetFramebufferAttachmentParameteriv, "glGetFramebufferAttachmentParameteriv");
    LoadProc(_glGenerateMipmap,                      "glGenerateMipmap");
    LoadProc(_glBlitFramebuffer,                     "glBlitFramebuffer");
    LoadProc(_glRenderbufferStorageMultisample,      "glRenderbufferStorageMultisample");
    LoadProc(_glFramebufferTextureLayer,             "glFramebufferTextureLayer");
}
