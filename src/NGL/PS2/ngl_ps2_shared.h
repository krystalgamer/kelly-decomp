#ifndef KELLY_DECOMP_NGL_PS2_SHARED_H
#define KELLY_DECOMP_NGL_PS2_SHARED_H

typedef unsigned int u_int;

struct nglScene {
    nglScene *Parent;
};

struct nglFixedString {
    char data[1];
};

struct nglTexture {
    char padding[0x40];
    nglFixedString FileName;
};

enum {
    NGLMAP_BILINEAR_FILTER = 0x00000002,
    NGLMAP_CLAMP_U = 0x00000010,
    NGLMAP_CLAMP_V = 0x00000020
};

struct nglQuadVertex {
    float X;
    float Y;
    float U;
    float V;
    u_int Color;
};

struct nglQuad {
    nglQuadVertex Verts[4];
    float Z;
    u_int MapFlags;
    u_int BlendMode;
    u_int BlendModeConstant;
    nglTexture *Tex;
};

struct nglFont {
    nglTexture *Tex;
    void *GlyphInfo;
};

struct nglInstanceBank {
    bool Delete(const nglFixedString &name);
};

extern nglScene *nglCurScene;
extern nglScene nglDefaultScene;
extern nglInstanceBank nglFontBank;

void nglFatal(const char *format, ...);
void nglMemFree(void *memory);
void nglSetQuadMapFlags(nglQuad *quad, u_int flags);
void nglSetQuadTex(nglQuad *quad, nglTexture *texture);

extern const char ngl_scene_stack_underflow[];

__asm__(".equ nglCurScene, 0x004BBD04");
__asm__(".equ nglDefaultScene, 0x004BB850");
__asm__(".equ ngl_scene_stack_underflow, 0x0051D7F8");
__asm__(".equ nglFatal__FPCce, 0x003AC0C0");
__asm__(".equ nglFontBank, 0x004BC010");
__asm__(".equ Delete__15nglInstanceBankRC14nglFixedString, 0x003AC440");
__asm__(".equ nglMemFree__FPv, 0x00395D50");

#endif
