#ifndef KELLY_DECOMP_NGL_QUAD_ROTATE_SHARED_H
#define KELLY_DECOMP_NGL_QUAD_ROTATE_SHARED_H

#include "NGL/PS2/ngl_ps2.h"

extern "C" float cosf(float value);
extern "C" float sinf(float value);

__asm__(".equ cosf, 0x003C6340");
__asm__(".equ sinf, 0x003C6530");

#endif
