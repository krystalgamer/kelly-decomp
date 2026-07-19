// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00387310)
// 0x00387310 nvlStreamReqSize__FP9nvlStream
struct nvlStream { char padding[0x18]; int bufsize; };
int nvlStreamReqSize(nvlStream* stream) { return stream->bufsize >> 2; }
#endif
