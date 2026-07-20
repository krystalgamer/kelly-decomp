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

#if defined(KELLY_DECOMP_FUNCTION_00388B88)
// 0x00388B88 videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv
struct sceMpeg { char data[1]; };
struct sceMpegCbData;
typedef int (*sceMpegCallback)(sceMpeg *, sceMpegCbData *, void *);
struct VideoDec { sceMpeg mpeg; };
extern "C" int sceMpegAddStrCallback(sceMpeg *mpeg, int type, int channel, sceMpegCallback callback, void *data);
__asm__(".equ sceMpegAddStrCallback, 0x003BE530");
__asm__(".globl videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv");
static int videoDecSetStream(VideoDec *decoder, int type, int channel, sceMpegCallback callback, void *data) { sceMpegAddStrCallback(&decoder->mpeg, type, channel, callback, data); return 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389188)
// 0x00389188 voBufDecCount__FP5VoBuf
struct VoBuf { char padding[0xc]; volatile int count; };
__asm__(".globl voBufDecCount__FP5VoBuf");
static void voBufDecCount(VoBuf *buffer) { if (buffer->count > 0) buffer->count--; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00387818)
// 0x00387818 defMain__FPv
extern "C" void RotateThreadReadyQueue(int count);
__asm__(".equ RotateThreadReadyQueue, 0x003DB5B0");
void defMain(void *argument) { for (;;) { RotateThreadReadyQueue(1); __asm__ volatile("nop\n\tnop\n\tnop\n\tnop"); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388A60)
// 0x00388A60 readBufEndGet__FP7ReadBufi
struct ReadBuf { char padding[0x50004]; int count; };
int readBufEndGet(ReadBuf *buffer, int size) { register int selected __asm__("$2") = buffer->count; register int remaining __asm__("$6") = selected; register int use_size __asm__("$3") = size < selected; if (use_size) selected = size; remaining -= selected; buffer->count = remaining; return selected; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388F38)
// 0x00388F38 mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
struct ViBuf;
struct sceMpeg;
struct sceMpegCbData;
extern ViBuf global_vi_buffer;
void viBufStopDMA(ViBuf *buffer);
__asm__(".equ global_vi_buffer, 0x00597020");
__asm__(".equ viBufStopDMA__FP5ViBuf, 0x0038A430");
int mpegStopDMA(sceMpeg *mpeg, sceMpegCbData *data, void *user) { viBufStopDMA(&global_vi_buffer); KELLY_DECOMP_COMPILER_BARRIER(); return 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388F60)
// 0x00388F60 mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
struct ViBuf;
struct sceMpeg;
struct sceMpegCbData;
extern ViBuf global_vi_buffer;
void viBufRestartDMA(ViBuf *buffer);
__asm__(".equ global_vi_buffer, 0x00597020");
__asm__(".equ viBufRestartDMA__FP5ViBuf, 0x0038A540");
int mpegRestartDMA(sceMpeg *mpeg, sceMpegCbData *data, void *user) { viBufRestartDMA(&global_vi_buffer); KELLY_DECOMP_COMPILER_BARRIER(); return 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389ED8)
// 0x00389ED8 scTag2__FP5QWORDPvUiUi
struct QWORD { unsigned long long value; };
void scTag2(QWORD *tag, void *address, unsigned int qwc, unsigned int id) { tag->value = ((unsigned long long)(unsigned int)address << 32) | ((unsigned long long)qwc << 28) | (unsigned int)id; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388EE0)
// 0x00388EE0 mpegError__FP7sceMpegP18sceMpegCbDataErrorPv
struct sceMpeg;
struct sceMpegCbDataError { int field0; const char *errMessage; };
int nvlPrintf(const char *format, ...);
extern const char mpeg_error_format[];
__asm__(".equ nvlPrintf__FPCce, 0x0038AD50");
__asm__(".equ mpeg_error_format, 0x0051B718");
int mpegError(sceMpeg *mpeg, sceMpegCbDataError *error, void *data) { nvlPrintf(mpeg_error_format, error->errMessage); return 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388F08)
// 0x00388F08 mpegNodata__FP7sceMpegP13sceMpegCbDataPv
struct sceMpeg;
struct sceMpegCbData;
struct ViBuf;

extern "C" void RotateThreadReadyQueue(int priority);
__asm__(".equ RotateThreadReadyQueue, 0x003DB5B0");

void viBufAddDMA(ViBuf *buffer);
__asm__(".equ viBufAddDMA__FP5ViBuf, 0x0038A228");

extern ViBuf videoDec_vibuf;
__asm__(".equ videoDec_vibuf, 0x00597020");

int mpegNodata(
    sceMpeg *mpeg,
    sceMpegCbData *callback_data,
    void *user_data
) {
    RotateThreadReadyQueue(1);
    viBufAddDMA(&videoDec_vibuf);
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003889A0)
// 0x003889A0 readBufBeginPut__FP7ReadBufPPUc
struct ReadBuf {
    unsigned char data[0x50000];
    int put;
    int count;
    int size;
};

static int readBufBeginPut(ReadBuf *buffer, unsigned char **pointer)
{
    int size = buffer->size - buffer->count;
    if (size)
        *pointer = buffer->data + buffer->put;
    return size;
}

__asm__(".globl readBufBeginPut__FP7ReadBufPPUc");
#endif
