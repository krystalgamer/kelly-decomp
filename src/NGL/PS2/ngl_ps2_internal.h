#ifndef NGL_PS2_INTERNAL_H
#define NGL_PS2_INTERNAL_H

#include "NGL/PS2/ngl_ps2.h"

extern char nglBaseAddr asm("_$nglBaseAddr");

inline void nglVif1AddCommandListProgram(
    u_int *&packet,
    u_int &data_pointer,
    char *address)
{
    packet[0] = 0x60010000 | data_pointer++;
    packet[1] = ((u_int)address - (u_int)&nglBaseAddr) / 8;
    packet += 2;
}

#endif
