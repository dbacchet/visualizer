#pragma once
/*
    #version:1# (machine generated, don't edit!)

    Generated by sokol-shdc (https://github.com/floooh/sokol-tools)

    Overview:

        Shader program 'offscreen_pbr':
            Get shader desc: offscreen_pbr_shader_desc()
            Vertex shader: vs_pbr
                Attribute slots:
                    ATTR_vs_pbr_a_Position = 0
                    ATTR_vs_pbr_a_Color = 1
                    ATTR_vs_pbr_a_Normal = 2
                    ATTR_vs_pbr_a_UV1 = 3
                Uniform block 'vs_params':
                    C struct: vs_params_t
                    Bind slot: SLOT_vs_params = 0
            Fragment shader: fs_pbr
                Image 'u_BaseColorSampler':
                    Type: SG_IMAGETYPE_2D
                    Component Type: SG_SAMPLERTYPE_FLOAT
                    Bind slot: SLOT_u_BaseColorSampler = 0


    Shader descriptor structs:

        sg_shader offscreen_pbr = sg_make_shader(offscreen_pbr_shader_desc());

    Vertex attribute locations for vertex shader 'vs_pbr':

        sg_pipeline pip = sg_make_pipeline(&(sg_pipeline_desc){
            .layout = {
                .attrs = {
                    [ATTR_vs_pbr_a_Position] = { ... },
                    [ATTR_vs_pbr_a_Color] = { ... },
                    [ATTR_vs_pbr_a_Normal] = { ... },
                    [ATTR_vs_pbr_a_UV1] = { ... },
                },
            },
            ...});

    Image bind slots, use as index in sg_bindings.vs_images[] or .fs_images[]

        SLOT_u_BaseColorSampler = 0;

    Bind slot and C-struct for uniform block 'vs_params':

        vs_params_t vs_params = {
            .model = ...;
            .view = ...;
            .projection = ...;
        };
        sg_apply_uniforms(SG_SHADERSTAGE_[VS|FS], SLOT_vs_params, &vs_params, sizeof(vs_params));

*/
#include <stdint.h>
#include <stdbool.h>
#if !defined(SOKOL_SHDC_ALIGN)
  #if defined(_MSC_VER)
    #define SOKOL_SHDC_ALIGN(a) __declspec(align(a))
  #else
    #define SOKOL_SHDC_ALIGN(a) __attribute__((aligned(a)))
  #endif
#endif
#define ATTR_vs_pbr_a_Position (0)
#define ATTR_vs_pbr_a_Color (1)
#define ATTR_vs_pbr_a_Normal (2)
#define ATTR_vs_pbr_a_UV1 (3)
#define SLOT_u_BaseColorSampler (0)
#define SLOT_vs_params (0)
#pragma pack(push,1)
SOKOL_SHDC_ALIGN(16) typedef struct vs_params_t {
    math::Matrix4f model;
    math::Matrix4f view;
    math::Matrix4f projection;
} vs_params_t;
#pragma pack(pop)
/*
    #version 330
    
    uniform vec4 vs_params[12];
    layout(location = 0) in vec4 a_Position;
    layout(location = 2) in vec3 a_Normal;
    out vec3 v_Position;
    out vec3 v_Normal;
    out vec2 v_UVCoord1;
    out vec2 v_UVCoord2;
    layout(location = 3) in vec2 a_UV1;
    out vec4 v_Color;
    layout(location = 1) in vec4 a_Color;
    
    vec4 getPosition()
    {
        return vec4(a_Position.xyz, 1.0);
    }
    
    vec3 getNormal()
    {
        return normalize(a_Normal);
    }
    
    void main()
    {
        mat4 _48 = mat4(vs_params[0], vs_params[1], vs_params[2], vs_params[3]);
        vec4 _50 = _48 * getPosition();
        v_Position = vec3(_50.xyz) / vec3(_50.w);
        v_Normal = normalize(vec3((_48 * vec4(getNormal(), 0.0)).xyz));
        v_UVCoord1 = vec2(0.0);
        v_UVCoord2 = vec2(0.0);
        v_UVCoord1 = a_UV1;
        v_Color = a_Color;
        gl_Position = (mat4(vs_params[8], vs_params[9], vs_params[10], vs_params[11]) * mat4(vs_params[4], vs_params[5], vs_params[6], vs_params[7])) * _50;
    }
    
*/
static const char vs_pbr_source_glsl330[914] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x76,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x31,0x32,0x5d,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,
    0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x69,
    0x6e,0x20,0x76,0x65,0x63,0x34,0x20,0x61,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,
    0x6e,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,
    0x6f,0x6e,0x20,0x3d,0x20,0x32,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,0x63,0x33,0x20,
    0x61,0x5f,0x4e,0x6f,0x72,0x6d,0x61,0x6c,0x3b,0x0a,0x6f,0x75,0x74,0x20,0x76,0x65,
    0x63,0x33,0x20,0x76,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x6f,
    0x75,0x74,0x20,0x76,0x65,0x63,0x33,0x20,0x76,0x5f,0x4e,0x6f,0x72,0x6d,0x61,0x6c,
    0x3b,0x0a,0x6f,0x75,0x74,0x20,0x76,0x65,0x63,0x32,0x20,0x76,0x5f,0x55,0x56,0x43,
    0x6f,0x6f,0x72,0x64,0x31,0x3b,0x0a,0x6f,0x75,0x74,0x20,0x76,0x65,0x63,0x32,0x20,
    0x76,0x5f,0x55,0x56,0x43,0x6f,0x6f,0x72,0x64,0x32,0x3b,0x0a,0x6c,0x61,0x79,0x6f,
    0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x33,0x29,
    0x20,0x69,0x6e,0x20,0x76,0x65,0x63,0x32,0x20,0x61,0x5f,0x55,0x56,0x31,0x3b,0x0a,
    0x6f,0x75,0x74,0x20,0x76,0x65,0x63,0x34,0x20,0x76,0x5f,0x43,0x6f,0x6c,0x6f,0x72,
    0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,
    0x6e,0x20,0x3d,0x20,0x31,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,0x63,0x34,0x20,0x61,
    0x5f,0x43,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x0a,0x76,0x65,0x63,0x34,0x20,0x67,0x65,
    0x74,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,
    0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x76,0x65,0x63,0x34,0x28,0x61,0x5f,
    0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2e,0x78,0x79,0x7a,0x2c,0x20,0x31,0x2e,
    0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x76,0x65,0x63,0x33,0x20,0x67,0x65,0x74,0x4e,
    0x6f,0x72,0x6d,0x61,0x6c,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,
    0x74,0x75,0x72,0x6e,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x69,0x7a,0x65,0x28,0x61,
    0x5f,0x4e,0x6f,0x72,0x6d,0x61,0x6c,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x6d,
    0x61,0x74,0x34,0x20,0x5f,0x34,0x38,0x20,0x3d,0x20,0x6d,0x61,0x74,0x34,0x28,0x76,
    0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x2c,0x20,0x76,0x73,0x5f,
    0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x32,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,
    0x6d,0x73,0x5b,0x33,0x5d,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x34,
    0x20,0x5f,0x35,0x30,0x20,0x3d,0x20,0x5f,0x34,0x38,0x20,0x2a,0x20,0x67,0x65,0x74,
    0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x28,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,
    0x76,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x76,0x65,0x63,
    0x33,0x28,0x5f,0x35,0x30,0x2e,0x78,0x79,0x7a,0x29,0x20,0x2f,0x20,0x76,0x65,0x63,
    0x33,0x28,0x5f,0x35,0x30,0x2e,0x77,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x5f,
    0x4e,0x6f,0x72,0x6d,0x61,0x6c,0x20,0x3d,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,0x69,
    0x7a,0x65,0x28,0x76,0x65,0x63,0x33,0x28,0x28,0x5f,0x34,0x38,0x20,0x2a,0x20,0x76,
    0x65,0x63,0x34,0x28,0x67,0x65,0x74,0x4e,0x6f,0x72,0x6d,0x61,0x6c,0x28,0x29,0x2c,
    0x20,0x30,0x2e,0x30,0x29,0x29,0x2e,0x78,0x79,0x7a,0x29,0x29,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x76,0x5f,0x55,0x56,0x43,0x6f,0x6f,0x72,0x64,0x31,0x20,0x3d,0x20,0x76,
    0x65,0x63,0x32,0x28,0x30,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x5f,
    0x55,0x56,0x43,0x6f,0x6f,0x72,0x64,0x32,0x20,0x3d,0x20,0x76,0x65,0x63,0x32,0x28,
    0x30,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x5f,0x55,0x56,0x43,0x6f,
    0x6f,0x72,0x64,0x31,0x20,0x3d,0x20,0x61,0x5f,0x55,0x56,0x31,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x76,0x5f,0x43,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x61,0x5f,0x43,0x6f,
    0x6c,0x6f,0x72,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,
    0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x28,0x6d,0x61,0x74,0x34,0x28,0x76,0x73,0x5f,
    0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x38,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x39,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,
    0x6d,0x73,0x5b,0x31,0x30,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x5b,0x31,0x31,0x5d,0x29,0x20,0x2a,0x20,0x6d,0x61,0x74,0x34,0x28,0x76,0x73,
    0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x34,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,
    0x61,0x72,0x61,0x6d,0x73,0x5b,0x35,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,
    0x61,0x6d,0x73,0x5b,0x36,0x5d,0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x5b,0x37,0x5d,0x29,0x29,0x20,0x2a,0x20,0x5f,0x35,0x30,0x3b,0x0a,0x7d,0x0a,
    0x0a,0x00,
};
/*
    #version 330
    
    uniform int u_BaseColorUVSet;
    uniform vec4 u_BaseColorFactor;
    uniform sampler2D u_BaseColorSampler;
    
    in vec2 v_UVCoord1;
    in vec2 v_UVCoord2;
    in vec3 v_Position;
    in vec3 v_Normal;
    layout(location = 0) out vec4 g_finalColor;
    in vec4 v_Color;
    
    vec2 getBaseColorUV()
    {
        bvec2 _155 = bvec2(u_BaseColorUVSet < 1);
        return vec3(vec2(_155.x ? v_UVCoord1.x : v_UVCoord2.x, _155.y ? v_UVCoord1.y : v_UVCoord2.y), 1.0).xy;
    }
    
    vec3 sRGBToLinear(vec3 srgbIn)
    {
        return pow(srgbIn, vec3(2.2000000476837158203125));
    }
    
    vec4 sRGBToLinear(vec4 srgbIn)
    {
        vec3 param = srgbIn.xyz;
        return vec4(sRGBToLinear(param), srgbIn.w);
    }
    
    vec4 getVertexColor()
    {
        return vec4(1.0);
    }
    
    vec4 getBaseColor()
    {
        vec4 baseColor = u_BaseColorFactor;
        vec4 param = texture(u_BaseColorSampler, getBaseColorUV());
        baseColor = u_BaseColorFactor;
        vec4 param_1 = texture(u_BaseColorSampler, getBaseColorUV());
        vec4 _454 = baseColor;
        vec4 _455 = _454 * sRGBToLinear(param_1);
        baseColor = _455;
        return _455 * getVertexColor();
    }
    
    vec3 linearTosRGB(vec3 color)
    {
        return pow(color, vec3(0.4545454680919647216796875));
    }
    
    void main()
    {
        vec3 param = getBaseColor().xyz;
        g_finalColor = vec4(linearTosRGB(param), 1.0);
    }
    
*/
static const char fs_pbr_source_glsl330[1249] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x69,0x6e,0x74,0x20,0x75,0x5f,0x42,0x61,0x73,0x65,
    0x43,0x6f,0x6c,0x6f,0x72,0x55,0x56,0x53,0x65,0x74,0x3b,0x0a,0x75,0x6e,0x69,0x66,
    0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x75,0x5f,0x42,0x61,0x73,0x65,0x43,
    0x6f,0x6c,0x6f,0x72,0x46,0x61,0x63,0x74,0x6f,0x72,0x3b,0x0a,0x75,0x6e,0x69,0x66,
    0x6f,0x72,0x6d,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,0x72,0x32,0x44,0x20,0x75,0x5f,
    0x42,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x53,0x61,0x6d,0x70,0x6c,0x65,0x72,
    0x3b,0x0a,0x0a,0x69,0x6e,0x20,0x76,0x65,0x63,0x32,0x20,0x76,0x5f,0x55,0x56,0x43,
    0x6f,0x6f,0x72,0x64,0x31,0x3b,0x0a,0x69,0x6e,0x20,0x76,0x65,0x63,0x32,0x20,0x76,
    0x5f,0x55,0x56,0x43,0x6f,0x6f,0x72,0x64,0x32,0x3b,0x0a,0x69,0x6e,0x20,0x76,0x65,
    0x63,0x33,0x20,0x76,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x69,
    0x6e,0x20,0x76,0x65,0x63,0x33,0x20,0x76,0x5f,0x4e,0x6f,0x72,0x6d,0x61,0x6c,0x3b,
    0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,
    0x20,0x3d,0x20,0x30,0x29,0x20,0x6f,0x75,0x74,0x20,0x76,0x65,0x63,0x34,0x20,0x67,
    0x5f,0x66,0x69,0x6e,0x61,0x6c,0x43,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x69,0x6e,0x20,
    0x76,0x65,0x63,0x34,0x20,0x76,0x5f,0x43,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x0a,0x76,
    0x65,0x63,0x32,0x20,0x67,0x65,0x74,0x42,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,
    0x55,0x56,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x62,0x76,0x65,0x63,0x32,
    0x20,0x5f,0x31,0x35,0x35,0x20,0x3d,0x20,0x62,0x76,0x65,0x63,0x32,0x28,0x75,0x5f,
    0x42,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x55,0x56,0x53,0x65,0x74,0x20,0x3c,
    0x20,0x31,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,
    0x76,0x65,0x63,0x33,0x28,0x76,0x65,0x63,0x32,0x28,0x5f,0x31,0x35,0x35,0x2e,0x78,
    0x20,0x3f,0x20,0x76,0x5f,0x55,0x56,0x43,0x6f,0x6f,0x72,0x64,0x31,0x2e,0x78,0x20,
    0x3a,0x20,0x76,0x5f,0x55,0x56,0x43,0x6f,0x6f,0x72,0x64,0x32,0x2e,0x78,0x2c,0x20,
    0x5f,0x31,0x35,0x35,0x2e,0x79,0x20,0x3f,0x20,0x76,0x5f,0x55,0x56,0x43,0x6f,0x6f,
    0x72,0x64,0x31,0x2e,0x79,0x20,0x3a,0x20,0x76,0x5f,0x55,0x56,0x43,0x6f,0x6f,0x72,
    0x64,0x32,0x2e,0x79,0x29,0x2c,0x20,0x31,0x2e,0x30,0x29,0x2e,0x78,0x79,0x3b,0x0a,
    0x7d,0x0a,0x0a,0x76,0x65,0x63,0x33,0x20,0x73,0x52,0x47,0x42,0x54,0x6f,0x4c,0x69,
    0x6e,0x65,0x61,0x72,0x28,0x76,0x65,0x63,0x33,0x20,0x73,0x72,0x67,0x62,0x49,0x6e,
    0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x70,
    0x6f,0x77,0x28,0x73,0x72,0x67,0x62,0x49,0x6e,0x2c,0x20,0x76,0x65,0x63,0x33,0x28,
    0x32,0x2e,0x32,0x30,0x30,0x30,0x30,0x30,0x30,0x34,0x37,0x36,0x38,0x33,0x37,0x31,
    0x35,0x38,0x32,0x30,0x33,0x31,0x32,0x35,0x29,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x76,
    0x65,0x63,0x34,0x20,0x73,0x52,0x47,0x42,0x54,0x6f,0x4c,0x69,0x6e,0x65,0x61,0x72,
    0x28,0x76,0x65,0x63,0x34,0x20,0x73,0x72,0x67,0x62,0x49,0x6e,0x29,0x0a,0x7b,0x0a,
    0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x33,0x20,0x70,0x61,0x72,0x61,0x6d,0x20,0x3d,
    0x20,0x73,0x72,0x67,0x62,0x49,0x6e,0x2e,0x78,0x79,0x7a,0x3b,0x0a,0x20,0x20,0x20,
    0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x76,0x65,0x63,0x34,0x28,0x73,0x52,0x47,
    0x42,0x54,0x6f,0x4c,0x69,0x6e,0x65,0x61,0x72,0x28,0x70,0x61,0x72,0x61,0x6d,0x29,
    0x2c,0x20,0x73,0x72,0x67,0x62,0x49,0x6e,0x2e,0x77,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,
    0x76,0x65,0x63,0x34,0x20,0x67,0x65,0x74,0x56,0x65,0x72,0x74,0x65,0x78,0x43,0x6f,
    0x6c,0x6f,0x72,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,
    0x72,0x6e,0x20,0x76,0x65,0x63,0x34,0x28,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,
    0x0a,0x76,0x65,0x63,0x34,0x20,0x67,0x65,0x74,0x42,0x61,0x73,0x65,0x43,0x6f,0x6c,
    0x6f,0x72,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x34,0x20,
    0x62,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x75,0x5f,0x42,0x61,
    0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x46,0x61,0x63,0x74,0x6f,0x72,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x76,0x65,0x63,0x34,0x20,0x70,0x61,0x72,0x61,0x6d,0x20,0x3d,0x20,
    0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x28,0x75,0x5f,0x42,0x61,0x73,0x65,0x43,0x6f,
    0x6c,0x6f,0x72,0x53,0x61,0x6d,0x70,0x6c,0x65,0x72,0x2c,0x20,0x67,0x65,0x74,0x42,
    0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x55,0x56,0x28,0x29,0x29,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x62,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x75,
    0x5f,0x42,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x46,0x61,0x63,0x74,0x6f,0x72,
    0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x34,0x20,0x70,0x61,0x72,0x61,0x6d,
    0x5f,0x31,0x20,0x3d,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x28,0x75,0x5f,0x42,
    0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x53,0x61,0x6d,0x70,0x6c,0x65,0x72,0x2c,
    0x20,0x67,0x65,0x74,0x42,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x55,0x56,0x28,
    0x29,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x34,0x20,0x5f,0x34,0x35,
    0x34,0x20,0x3d,0x20,0x62,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x76,0x65,0x63,0x34,0x20,0x5f,0x34,0x35,0x35,0x20,0x3d,0x20,0x5f,
    0x34,0x35,0x34,0x20,0x2a,0x20,0x73,0x52,0x47,0x42,0x54,0x6f,0x4c,0x69,0x6e,0x65,
    0x61,0x72,0x28,0x70,0x61,0x72,0x61,0x6d,0x5f,0x31,0x29,0x3b,0x0a,0x20,0x20,0x20,
    0x20,0x62,0x61,0x73,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x5f,0x34,0x35,
    0x35,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x5f,0x34,
    0x35,0x35,0x20,0x2a,0x20,0x67,0x65,0x74,0x56,0x65,0x72,0x74,0x65,0x78,0x43,0x6f,
    0x6c,0x6f,0x72,0x28,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x76,0x65,0x63,0x33,0x20,0x6c,
    0x69,0x6e,0x65,0x61,0x72,0x54,0x6f,0x73,0x52,0x47,0x42,0x28,0x76,0x65,0x63,0x33,
    0x20,0x63,0x6f,0x6c,0x6f,0x72,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,
    0x74,0x75,0x72,0x6e,0x20,0x70,0x6f,0x77,0x28,0x63,0x6f,0x6c,0x6f,0x72,0x2c,0x20,
    0x76,0x65,0x63,0x33,0x28,0x30,0x2e,0x34,0x35,0x34,0x35,0x34,0x35,0x34,0x36,0x38,
    0x30,0x39,0x31,0x39,0x36,0x34,0x37,0x32,0x31,0x36,0x37,0x39,0x36,0x38,0x37,0x35,
    0x29,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,
    0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x33,0x20,0x70,0x61,
    0x72,0x61,0x6d,0x20,0x3d,0x20,0x67,0x65,0x74,0x42,0x61,0x73,0x65,0x43,0x6f,0x6c,
    0x6f,0x72,0x28,0x29,0x2e,0x78,0x79,0x7a,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x5f,
    0x66,0x69,0x6e,0x61,0x6c,0x43,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x76,0x65,0x63,
    0x34,0x28,0x6c,0x69,0x6e,0x65,0x61,0x72,0x54,0x6f,0x73,0x52,0x47,0x42,0x28,0x70,
    0x61,0x72,0x61,0x6d,0x29,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,
    0x00,
};
#if !defined(SOKOL_GFX_INCLUDED)
  #error "Please include sokol_gfx.h before pbr.glsl.h"
#endif
static inline const sg_shader_desc* offscreen_pbr_shader_desc(void) {
  if (sg_query_backend() == SG_BACKEND_GLCORE33) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "a_Position";
      desc.attrs[1].name = "a_Color";
      desc.attrs[2].name = "a_Normal";
      desc.attrs[3].name = "a_UV1";
      desc.vs.source = vs_pbr_source_glsl330;
      desc.vs.entry = "main";
      desc.vs.uniform_blocks[0].size = 192;
      desc.vs.uniform_blocks[0].uniforms[0].name = "vs_params";
      desc.vs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.vs.uniform_blocks[0].uniforms[0].array_count = 12;
      desc.fs.source = fs_pbr_source_glsl330;
      desc.fs.entry = "main";
      desc.fs.images[0].name = "u_BaseColorSampler";
      desc.fs.images[0].type = SG_IMAGETYPE_2D;
      desc.fs.images[0].sampler_type = SG_SAMPLERTYPE_FLOAT;
      desc.label = "offscreen_pbr_shader";
    };
    return &desc;
  }
  return 0;
}
