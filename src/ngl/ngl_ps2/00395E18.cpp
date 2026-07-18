extern const char nglMeshPath[];
__asm__(".equ nglMeshPath, 0x004BF058");
const char* nglGetMeshPath() { return nglMeshPath; }
