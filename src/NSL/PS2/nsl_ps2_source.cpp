// Matching decompilation blocks selected by generated build shims.


// 0x0038C130 nslLoadSource__FPCc
struct nslStreamInfo;
unsigned int _nslLoadSource(const char *name, const char *stream_name, const nslStreamInfo *info);
__asm__(".equ _nslLoadSource__FPCcT0PC13nslStreamInfo, 0x0038BDC0");
unsigned int nslLoadSource(const char *name) { unsigned int result = _nslLoadSource(name, 0, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x0038C158 nslGetSourceByIndex__Fi
#include "NSL/PS2/nsl_ps2.h"
__asm__(".equ nsl, 0x0049B5F0");
nslSourceId nslGetSourceByIndex(int index)
{
    if (index < 512) {
        if (nsl.sourceSlots[index].used)
            return nsl.sourceSlots[index].myId;
    }
    return 0;
}

// 0x0038C3A8 _nslReleaseAllSources__Fv
#include "NSL/PS2/nsl_ps2.h"

void _nslReleaseAllSources()
{
    if (!nsl.on)
        return;

    if (!(nsl.initialized == 1))
        nslFatal(nsl_not_initialized);

    nslReleaseAllSounds();
    for (int i = 0; i < NSL_NUM_EMITTERS; i++)
        _nslClearEmitterSlot(i, false, NSL_CLEAR_RESET);

    for (int i = 0; i < NSL_NUM_SOURCES; i++)
        nslPs2GasRpc(
            GAS_RPC_REMOVE_SOURCE,
            nsl_empty_string,
            0,
            0,
            0,
            0
        );
}
