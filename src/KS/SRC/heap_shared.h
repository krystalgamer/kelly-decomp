#ifndef KELLY_DECOMP_HEAP_SHARED_H
#define KELLY_DECOMP_HEAP_SHARED_H

typedef void* Pointer;

class Heap {
public:
    void InitLoHi(Pointer lo, Pointer hi);
};

extern "C" void* memcpy(void* destination, const void* source, unsigned int size);
extern const char lo_block_magic[];
extern const char hi_block_magic[];
__asm__(".equ memcpy, 0x003D171C");
__asm__(".equ lo_block_magic, 0x004F90F0");
__asm__(".equ hi_block_magic, 0x004F90F8");

#endif
