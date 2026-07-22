#ifndef KELLY_DECOMP_RTTI_SHARED_H
#define KELLY_DECOMP_RTTI_SHARED_H

extern "C" void __rtti_si(void **type, const char *name, void **base);

__asm__(".equ __rtti_si, 0x003CE2D8");

#endif
