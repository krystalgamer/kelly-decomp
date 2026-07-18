extern unsigned int nglScratchStripVertIdx;
__asm__(".equ nglScratchStripVertIdx, 0x004BB7C0");
void nglMeshWriteStrip(unsigned int length) { nglScratchStripVertIdx = 0; }
