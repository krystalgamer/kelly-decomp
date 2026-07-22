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

extern const char ngl_scene_stack_underflow[];

__asm__(".equ nglCurScene, 0x004BBD04");
__asm__(".equ nglDefaultScene, 0x004BB850");
__asm__(".equ ngl_scene_stack_underflow, 0x0051D7F8");
__asm__(".equ nglFatal__FPCce, 0x003AC0C0");
__asm__(".equ nglFontBank, 0x004BC010");
__asm__(".equ Delete__15nglInstanceBankRC14nglFixedString, 0x003AC440");
__asm__(".equ nglMemFree__FPv, 0x00395D50");

#endif
