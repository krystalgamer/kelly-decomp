// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0038C130)
// 0x0038C130 nslLoadSource__FPCc
struct nslStreamInfo;
unsigned int _nslLoadSource(const char *name, const char *stream_name, const nslStreamInfo *info);
__asm__(".equ _nslLoadSource__FPCcT0PC13nslStreamInfo, 0x0038BDC0");
unsigned int nslLoadSource(const char *name) { unsigned int result = _nslLoadSource(name, 0, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
