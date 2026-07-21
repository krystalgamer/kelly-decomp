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

#if defined(KELLY_DECOMP_FUNCTION_003AC1C8)
// 0x003AC1C8 NewNodeOfLevel__15nglInstanceBanki
typedef unsigned int u_int;
struct nglFixedString { char text[32]; };
class nglInstanceBank {
public:
    struct Instance {
        nglFixedString Key;
        void *Value;
        int RefCount;
        Instance *Forward[1];
    };
    typedef void *(*InstanceAlloc)(u_int n, u_int align);
private:
    static InstanceAlloc AllocFunc;
    Instance *NewNodeOfLevel(int l);
};
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
