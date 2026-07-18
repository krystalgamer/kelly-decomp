extern int nglDisplayWidth;
__asm__(".equ nglDisplayWidth, 0x004BB820");
int nglGetScreenWidth() { return nglDisplayWidth; }
