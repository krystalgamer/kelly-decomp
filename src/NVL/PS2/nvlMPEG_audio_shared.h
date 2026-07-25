#ifndef KELLY_DECOMP_NVLMPEG_AUDIO_SHARED_H
#define KELLY_DECOMP_NVLMPEG_AUDIO_SHARED_H

#include "NVL/PS2/nvlMPEG_ps2_shared.h"

#define ZERO_BUFF_SIZE 2048

extern char *_0_buf;
extern const char nvl_iop_alloc_error[];

extern "C" void *sceSifAllocIopHeap(int size);
extern "C" void *memset(void *destination, int value, unsigned int size);
int nvlPrintf(const char *format, ...);
int sendToIOP(int destination, unsigned char *source, int size);
void changeMasterVolume(unsigned int value);

__asm__(".equ _0_buf, 0x00596F8C");
__asm__(".equ nvl_iop_alloc_error, 0x0051B7E0");
__asm__(".equ sceSifAllocIopHeap, 0x003DF5D0");
__asm__(".equ memset, 0x003D18D0");
__asm__(".equ nvlPrintf__FPCce, 0x0038AD50");
__asm__(".equ sendToIOP__FiPUci, 0x00389C80");
__asm__(".equ changeMasterVolume__FUi, 0x00389D00");

#endif
