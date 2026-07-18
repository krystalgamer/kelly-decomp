extern int nglDisplayHeight;
__asm__(".equ nglDisplayHeight, 0x004BB824");
int nglGetScreenHeight() { return nglDisplayHeight; }
