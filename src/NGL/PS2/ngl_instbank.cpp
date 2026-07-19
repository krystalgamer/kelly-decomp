// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003AC118)
// 0x003AC118 __15nglInstanceBank
class nglInstanceBank {
public:
    nglInstanceBank();
};

nglInstanceBank::nglInstanceBank() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AC1A8)
// 0x003AC1A8 SetAllocFunc__15nglInstanceBankPFUiUi_Pv
typedef void* (*InstanceAlloc)(unsigned int size, unsigned int alignment);
extern InstanceAlloc AllocFunc;
__asm__(".equ AllocFunc, 0x00512220");
class nglInstanceBank { public: static InstanceAlloc SetAllocFunc(InstanceAlloc value); };
InstanceAlloc nglInstanceBank::SetAllocFunc(InstanceAlloc value) { InstanceAlloc old = AllocFunc; AllocFunc = value; return old; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AC1B8)
// 0x003AC1B8 SetFreeFunc__15nglInstanceBankPFPv_v
typedef void (*InstanceFree)(void* pointer);
extern InstanceFree FreeFunc;
__asm__(".equ FreeFunc, 0x00512224");
class nglInstanceBank { public: static InstanceFree SetFreeFunc(InstanceFree value); };
InstanceFree nglInstanceBank::SetFreeFunc(InstanceFree value) { InstanceFree old = FreeFunc; FreeFunc = value; return old; }
#endif
