struct nglScene { char padding[0x440]; unsigned int FBWriteMask; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetFBWriteMask(unsigned int value) { nglCurScene->FBWriteMask = value; }
