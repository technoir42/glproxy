// Core
extern void Init_GL_VERSION_1_2();
extern void Init_GL_VERSION_1_3();
extern void Init_GL_VERSION_1_4();
extern void Init_GL_VERSION_1_5();
extern void Init_GL_VERSION_2_0();
extern void Init_GL_VERSION_2_1();

// Extensions
extern void Init_GL_ARB_vertex_buffer_object();
extern void Init_GL_ARB_framebuffer_object();
extern void Init_GL_ARB_separate_shader_objects();
extern void Init_GL_ARB_vertex_array_object();

extern "C" void InitExtensions()
{
    // Core
    Init_GL_VERSION_1_2();
    Init_GL_VERSION_1_3();
    Init_GL_VERSION_1_4();
    Init_GL_VERSION_1_5();
    Init_GL_VERSION_2_0();
    Init_GL_VERSION_2_1();

    // Extensions
    Init_GL_ARB_vertex_buffer_object();
    Init_GL_ARB_framebuffer_object();
    Init_GL_ARB_separate_shader_objects();
    Init_GL_ARB_vertex_array_object();
}
