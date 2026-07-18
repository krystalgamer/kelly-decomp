struct nglScene { char padding[0x420]; unsigned int ClearFlags; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetClearFlags(unsigned int value) { nglCurScene->ClearFlags = value; }
