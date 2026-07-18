struct nglTexture {};
extern nglTexture nglFrontBufferTex;
__asm__(".equ nglFrontBufferTex, 0x004BBD28");
nglTexture* nglGetFrontBufferTex() { return &nglFrontBufferTex; }
