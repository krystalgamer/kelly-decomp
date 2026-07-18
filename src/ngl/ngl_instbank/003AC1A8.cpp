typedef void* (*InstanceAlloc)(unsigned int size, unsigned int alignment);
extern InstanceAlloc AllocFunc;
__asm__(".equ AllocFunc, 0x00512220");
class nglInstanceBank { public: static InstanceAlloc SetAllocFunc(InstanceAlloc value); };
InstanceAlloc nglInstanceBank::SetAllocFunc(InstanceAlloc value) { InstanceAlloc old = AllocFunc; AllocFunc = value; return old; }
