// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003AC748)
// 0x003AC748 _nglDmaSetWaitGif__Fv
struct tD_PCR {
    unsigned int CPC0 : 1;
    unsigned int CPC1 : 1;
    unsigned int CPC2 : 1;
    unsigned int padding0 : 5;
    unsigned int CPC8 : 1;
    unsigned int CPC9 : 1;
    unsigned int padding1 : 22;
};

extern tD_PCR *_nglDmaPCR;
__asm__(".equ _nglDmaPCR, 0x004BF488");

void _nglDmaSetWaitGif()
{
    _nglDmaPCR->CPC1 = 0;
    _nglDmaPCR->CPC2 = 1;
    _nglDmaPCR->CPC8 = 0;
    _nglDmaPCR->CPC9 = 0;
}
#endif
