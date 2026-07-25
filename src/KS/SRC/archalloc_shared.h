#ifndef KELLY_DECOMP_ARCHALLOC_SHARED_H
#define KELLY_DECOMP_ARCHALLOC_SHARED_H

void *operator new(
    unsigned int size,
    unsigned int alignment,
    const char *description,
    int line);

inline void *operator new(unsigned int, void *memory)
{
    return memory;
}

__asm__(".equ __nw__FUiUiPCci, 0x002AC578");

#define NEW new(0, __PRETTY_FUNCTION__, 0)

#endif
