typedef void (*InstanceFree)(void* pointer);
extern InstanceFree FreeFunc;
__asm__(".equ FreeFunc, 0x00512224");
class nglInstanceBank { public: static InstanceFree SetFreeFunc(InstanceFree value); };
InstanceFree nglInstanceBank::SetFreeFunc(InstanceFree value) { InstanceFree old = FreeFunc; FreeFunc = value; return old; }
