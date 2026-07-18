struct nglScene { char padding[0x49C]; float AnimTime; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetAnimTime(float value) { nglCurScene->AnimTime = value; }
