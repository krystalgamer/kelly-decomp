// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00388338)
// 0x00388338 nvlMPEGSetMemoryAllocCallback__FPFii_Pv
typedef void* (*nvlAllocCallback)(int alignment, int size);
extern nvlAllocCallback nvlMPEGAllocFunc;
__asm__(".equ nvlMPEGAllocFunc, 0x00596F84");
void nvlMPEGSetMemoryAllocCallback(nvlAllocCallback callback) { nvlMPEGAllocFunc = callback; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388348)
// 0x00388348 nvlMPEGSetMemoryFreeCallback__FPFPv_v
typedef void (*nvlFreeCallback)(void* pointer);
extern nvlFreeCallback nvlMPEGFreeFunc;
__asm__(".equ nvlMPEGFreeFunc, 0x00596F88");
void nvlMPEGSetMemoryFreeCallback(nvlFreeCallback callback) { nvlMPEGFreeFunc = callback; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388968)
// 0x00388968 endDisplay__Fv
extern int display_file;
extern int display_flag;
__asm__(".equ display_file, 0x0049AFFC");
__asm__(".equ display_flag, 0x00596F9C");
static void endDisplay() { display_file = 0; display_flag = 0; }
__asm__(".globl endDisplay__Fv");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388980)
// 0x00388980 readBufCreate__FP7ReadBuf
struct ReadBuf { char data[0x50000]; int put; int count; int size; };
static void readBufCreate(ReadBuf* buffer) { buffer->put = buffer->count = 0; buffer->size = 0x50000; }
__asm__(".globl readBufCreate__FP7ReadBuf");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388998)
// 0x00388998 readBufDelete__FP7ReadBuf
struct ReadBuf;

static void readBufDelete(ReadBuf* buffer) {
}

__asm__(".globl readBufDelete__FP7ReadBuf");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388BE8)
// 0x00388BE8 videoDecReset__FP8VideoDec
struct VideoDec {
    char padding[0xA8];
    unsigned int state;
};

static void videoDecReset(VideoDec* decoder) {
    decoder->state = 0;
}

__asm__(".globl videoDecReset__FP8VideoDec");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388C28)
// 0x00388C28 videoDecGetState__FP8VideoDec
struct VideoDec {
    char padding[0xA8];
    unsigned int state;
};

static unsigned int videoDecGetState(VideoDec* decoder) {
    return decoder->state;
}

__asm__(".globl videoDecGetState__FP8VideoDec");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388C30)
// 0x00388C30 videoDecSetState__FP8VideoDecUi
struct VideoDec { char padding[0xA8]; unsigned int state; };
static unsigned int videoDecSetState(VideoDec* decoder, unsigned int state) { unsigned int old = decoder->state; decoder->state = state; return old; }
__asm__(".globl videoDecSetState__FP8VideoDecUi");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389020)
// 0x00389020 voBufDelete__FP5VoBuf
struct VoBuf;

static void voBufDelete(VoBuf* buffer) {
}

__asm__(".globl voBufDelete__FP5VoBuf");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389028)
// 0x00389028 voBufReset__FP5VoBuf
struct VoBuf { char padding[0x8]; volatile int write; volatile int count; };
static void voBufReset(VoBuf* buffer) { buffer->count = 0; buffer->write = 0; }
__asm__(".globl voBufReset__FP5VoBuf");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389038)
// 0x00389038 voBufIsFull__FP5VoBuf
struct VoBuf { char padding[0xC]; int count; int size; };
static int voBufIsFull(VoBuf* buffer) { return buffer->count == buffer->size; }
__asm__(".globl voBufIsFull__FP5VoBuf");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389110)
// 0x00389110 voBufIsEmpty__FP5VoBuf
struct VoBuf { char padding[0xC]; int count; };
static int voBufIsEmpty(VoBuf* buffer) { return buffer->count == 0; }
__asm__(".globl voBufIsEmpty__FP5VoBuf");
#endif

#if defined(KELLY_DECOMP_FUNCTION_003898C8)
// 0x003898C8 audioDecIsPreset__FP8AudioDec
struct AudioDec { char padding_to_limit[0x48]; int limit; char padding_to_value[0x8]; int value; };
static int audioDecIsPreset(AudioDec* decoder) { return decoder->value >= decoder->limit; }
__asm__(".globl audioDecIsPreset__FP8AudioDec");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388BA8)
// 0x00388BA8 videoDecBeginPut__FP8VideoDecPPUcPiT1T2
struct ViBuf { char data[1]; };
struct VideoDec { char padding[0x48]; ViBuf vibuf; };
void viBufBeginPut(ViBuf *buffer, unsigned char **ptr0, int *len0, unsigned char **ptr1, int *len1);
__asm__(".equ viBufBeginPut__FP5ViBufPPUcPiT1T2, 0x0038A0D8");
void videoDecBeginPut(VideoDec *decoder, unsigned char **ptr0, int *len0, unsigned char **ptr1, int *len1) { viBufBeginPut(&decoder->vibuf, ptr0, len0, ptr1, len1); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388BC8)
// 0x00388BC8 videoDecEndPut__FP8VideoDeci
struct ViBuf { char data[1]; };
struct VideoDec { char padding[0x48]; ViBuf vibuf; };
void viBufEndPut(ViBuf *buffer, int size);
__asm__(".equ viBufEndPut__FP5ViBufi, 0x0038A1D0");
void videoDecEndPut(VideoDec *decoder, int size) { viBufEndPut(&decoder->vibuf, size); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389730)
// 0x00389730 audioDecStart__FP8AudioDec
struct AudioDec;
void audioDecResume(AudioDec *decoder);
__asm__(".equ audioDecResume__FP8AudioDec, 0x003896C0");
void audioDecStart(AudioDec *decoder) { audioDecResume(decoder); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
