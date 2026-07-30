#ifndef RTTI_H
#define RTTI_H

extern "C" void __rtti_si(void **type, const char *name, void **base);

__asm__(".equ __rtti_si, 0x003CE2D8");

#endif
