#include "NVL/PS2/nvlMPEG_ps2.h"

// 0x00388338 nvlMPEGSetMemoryAllocCallback__FPFii_Pv
void nvlMPEGSetMemoryAllocCallback(nvlAllocCallback callback)
{
    nvlMPEGAllocFunc = callback;
}

// 0x00388348 nvlMPEGSetMemoryFreeCallback__FPFPv_v
void nvlMPEGSetMemoryFreeCallback(nvlFreeCallback callback)
{
    nvlMPEGFreeFunc = callback;
}

// 0x00388998 readBufDelete__FP7ReadBuf
static void readBufDelete(ReadBuf *buffer)
{
}

// 0x00388BE8 videoDecReset__FP8VideoDec
static void videoDecReset(VideoDec *decoder)
{
    decoder->state = 0;
}

// 0x00388C28 videoDecGetState__FP8VideoDec
static unsigned int videoDecGetState(VideoDec *decoder)
{
    return decoder->state;
}

// 0x00388C30 videoDecSetState__FP8VideoDecUi
static unsigned int videoDecSetState(
    VideoDec *decoder,
    unsigned int state)
{
    unsigned int old_state = decoder->state;
    decoder->state = state;
    return old_state;
}

// 0x00389020 voBufDelete__FP5VoBuf
static void voBufDelete(VoBuf *buffer)
{
}

// 0x00389110 voBufIsEmpty__FP5VoBuf
static int voBufIsEmpty(VoBuf *buffer)
{
    return buffer->count == 0;
}
