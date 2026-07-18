struct nglScene { char padding[0x448]; bool ZTestEnable; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetZTestEnable(bool value) { nglCurScene->ZTestEnable = value; }
