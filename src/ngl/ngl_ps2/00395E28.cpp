extern const char nglTexturePath[];
__asm__(".equ nglTexturePath, 0x004BF158");
const char* nglGetTexturePath() { return nglTexturePath; }
