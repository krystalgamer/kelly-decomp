// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0038C130)
// 0x0038C130 nslLoadSource__FPCc
struct nslStreamInfo;
unsigned int _nslLoadSource(const char *name, const char *stream_name, const nslStreamInfo *info);
__asm__(".equ _nslLoadSource__FPCcT0PC13nslStreamInfo, 0x0038BDC0");
unsigned int nslLoadSource(const char *name) { unsigned int result = _nslLoadSource(name, 0, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038C158)
// 0x0038C158 nslGetSourceByIndex__Fi
typedef unsigned int nslSourceId;
struct nslSource { bool used; char padding[0x38]; nslSourceId myId; char trailing[0x20]; };
struct nslSystem { char padding[0x40]; nslSource sourceSlots[512]; };
extern nslSystem nsl;
__asm__(".equ nsl, 0x0049B5F0");
nslSourceId nslGetSourceByIndex(int index)
{
    if (index < 512) {
        if (nsl.sourceSlots[index].used)
            return nsl.sourceSlots[index].myId;
    }
    return 0;
}
#endif
