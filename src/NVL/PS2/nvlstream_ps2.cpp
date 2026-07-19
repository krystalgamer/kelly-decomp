// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00387310)
// 0x00387310 nvlStreamReqSize__FP9nvlStream
struct nvlStream { char padding[0x18]; int bufsize; };
int nvlStreamReqSize(nvlStream* stream) { return stream->bufsize >> 2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00386DD8)
// 0x00386DD8 nvlStreamSetLoopSkip__FP9nvlStreamii
struct nvlStream { char padding0[0x40]; int flags; char padding1[8]; int loop_skip; int rewind_required; };
void nvlStreamSetLoopSkip(nvlStream *stream, int loop_skip, int rewind_required) { if (loop_skip >= 0) stream->flags |= 4; stream->rewind_required = rewind_required; KELLY_DECOMP_COMPILER_BARRIER(); stream->loop_skip = loop_skip; }
#endif
