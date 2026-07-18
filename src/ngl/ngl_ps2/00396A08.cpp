struct nglTexture {};
extern nglTexture nglBackBufferTex;
__asm__(".equ nglBackBufferTex, 0x004BBE58");
nglTexture* nglGetBackBufferTex() { return &nglBackBufferTex; }
