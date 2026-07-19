// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0038CAF8)
// 0x0038CAF8 nslAddSound__FUi
unsigned int _nslAddSound(unsigned int source, int stream_offset, int stream_samples);
__asm__(".equ _nslAddSound__FUiii, 0x0038C7E8");
unsigned int nslAddSound(unsigned int source) { unsigned int result = _nslAddSound(source, 0, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
