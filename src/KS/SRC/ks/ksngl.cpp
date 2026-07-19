// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003819F8)
// 0x003819F8 KSNGL_ReInit__Fv
void KSNGL_ReInit() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003818F8)
// 0x003818F8 ksnglSetViewport__FUiUiUiUi
void nglSetViewport(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);
__asm__(".equ nglSetViewport__FUiUiUiUi, 0x00398558");
void ksnglSetViewport(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) { nglSetViewport(x1, y1, x2, y2); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
