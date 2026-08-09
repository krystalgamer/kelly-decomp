// Matching decompilation blocks selected by generated build shims.


// 0x003AC1A8 SetAllocFunc__15nglInstanceBankPFUiUi_Pv
#include "NGL/PS2/ngl_ps2.h"

nglInstanceBank::InstanceAlloc nglInstanceBank::SetAllocFunc(
    InstanceAlloc value)
{
    InstanceAlloc old = AllocFunc;
    AllocFunc = value;
    return old;
}

// 0x003AC1B8 SetFreeFunc__15nglInstanceBankPFPv_v
#include "NGL/PS2/ngl_ps2.h"

nglInstanceBank::InstanceFree nglInstanceBank::SetFreeFunc(
    InstanceFree value)
{
    InstanceFree old = FreeFunc;
    FreeFunc = value;
    return old;
}

#if defined(KELLY_DECOMP_FUNCTION_003AC1C8)
// 0x003AC1C8 NewNodeOfLevel__15nglInstanceBanki
#include "NGL/PS2/ngl_ps2.h"

extern "C" void *malloc(unsigned size);
__asm__(".equ _15nglInstanceBank$AllocFunc, 0x00512220");
__asm__(".equ malloc, 0x003D0BA0");
nglInstanceBank::Instance* nglInstanceBank::NewNodeOfLevel(int l)
{
    unsigned n = sizeof(struct Instance) + l * sizeof(Instance *);
    if (!AllocFunc)
        return (Instance *)malloc(n);
    else
        return (Instance *)AllocFunc(n, 4);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AC208)
// 0x003AC208 RandomLevel__15nglInstanceBank
extern "C" int rand();class nglInstanceBank{public:void*NIL,*Head;int RandomsLeft,RandomBits,Level;int RandomLevel()__asm__("RandomLevel__15nglInstanceBank");};__asm__(".equ rand,0x003D3418");int nglInstanceBank::RandomLevel(){int b,level=0;do{b=RandomBits&3;if(!b)level++;RandomBits>>=2;if(--RandomsLeft==0){RandomBits=rand();RandomsLeft=7;}}while(!b);return level>15?15:level;}
#endif
