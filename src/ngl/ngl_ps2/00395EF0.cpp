extern unsigned int nglTVMode;
__asm__(".equ nglTVMode, 0x004BB81C");
unsigned int nglGetTVMode() { return nglTVMode; }
