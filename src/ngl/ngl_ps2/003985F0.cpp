struct nglScene { char padding[0x424]; float ClearZ; };
extern nglScene* nglCurScene;
__asm__(".equ nglCurScene, 0x004BBD04");
void nglSetClearZ(float value) { nglCurScene->ClearZ = value; }
