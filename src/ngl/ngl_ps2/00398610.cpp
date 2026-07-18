struct nglScene { char padding[0x444]; bool ZWriteEnable; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetZWriteEnable(bool value) { nglCurScene->ZWriteEnable = value; }
