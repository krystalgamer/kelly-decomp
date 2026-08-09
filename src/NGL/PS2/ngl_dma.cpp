// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003AC748)
// 0x003AC748 _nglDmaSetWaitGif__Fv
#include "NGL/PS2/ngl_dma.h"

__asm__(".equ _nglDmaPCR, 0x004BF488");

void _nglDmaSetWaitGif()
{
    _nglDmaPCR->CPC1 = 0;
    _nglDmaPCR->CPC2 = 1;
    _nglDmaPCR->CPC8 = 0;
    _nglDmaPCR->CPC9 = 0;
}
#endif
