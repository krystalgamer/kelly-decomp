// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00389D68)
#include "NVL/PS2/nvlMPEG_ps2_shared.h"

__asm__(".equ sceSdRemote, 0x0038BAE0");

// 0x00389D68 changeInputVolume__FUi
static void changeInputVolume(unsigned int val) {
    sceSdRemote(1, 0x8010, 0x0F80, val);
    sceSdRemote(1, 0x8010, 0x1080, val);
    KELLY_DECOMP_COMPILER_BARRIER();
}
__asm__(".globl changeInputVolume__FUi");
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_003890C8)
// 0x003890C8 voBufGetData__FP5VoBuf
struct VoData { unsigned char v[0x195000]; };
struct VoBuf { VoData* data; void* tag; volatile int write; volatile int count; int size; };
int voBufIsFull(VoBuf*);
__asm__(".equ voBufIsFull__FP5VoBuf, 0x00389038");
static VoData* voBufGetData(VoBuf* buffer)
{
    return voBufIsFull(buffer) ? (VoData*)0 : buffer->data + buffer->write;
}
__asm__(".globl voBufGetData__FP5VoBuf");
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

#if defined(KELLY_DECOMP_FUNCTION_00389750)
// 0x00389750 audioDecReset__FP8AudioDec
struct AudioDec {
    int state;
    char hdr[40];
    int hdrCount;
    unsigned char* data;
    int put;
    int count;
    int size;
    int totalBytes;
    int iopBuff;
    int iopBuffSize;
    int iopLastPos;
    int iopPausePos;
    int totalBytesSent;
    int iopZero;
};
void audioDecPause(AudioDec*);
__asm__(".equ audioDecPause__FP8AudioDec, 0x00389638");
static void audioDecReset(AudioDec* decoder)
{
    audioDecPause(decoder);
    decoder->state = 0;
    decoder->hdrCount = 0;
    decoder->put = 0;
    decoder->count = 0;
    decoder->totalBytes = 0;
    decoder->totalBytesSent = 0;
    decoder->iopLastPos = 0;
    decoder->iopPausePos = 0;
}
__asm__(".globl audioDecReset__FP8AudioDec");
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

#if defined(KELLY_DECOMP_FUNCTION_00389DB0)
// 0x00389DB0 getFIFOindex__FP5ViBufPv
typedef unsigned int u_int;
struct ViBuf { void* data; void* tag; int n; };
static inline void* DmaAddr(void* value) { return (void*)((u_int)value & 0x0fffffff); }
static int getFIFOindex(ViBuf* buffer, void* address)
{
    if (address != DmaAddr((char*)buffer->tag + (buffer->n + 1) * 16))
        return ((u_int)address - (u_int)buffer->data) / 2048;
    return 0;
}
__asm__(".globl getFIFOindex__FP5ViBufPv");
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

#if defined(KELLY_DECOMP_FUNCTION_003889D0)
// 0x003889D0 readBufEndPut__FP7ReadBufi
struct ReadBuf {
    unsigned char data[0x50000];
    int put;
    int count;
    int size;
};
inline int min(int a, int b) { if (b < a) a = b; return a; }
static int readBufEndPut(ReadBuf* buffer, int size)
{
    int size_ok = min(buffer->size - buffer->count, size);
    buffer->put = (buffer->put + size_ok) % buffer->size;
    buffer->count += size_ok;
    return size_ok;
}
__asm__(".globl readBufEndPut__FP7ReadBufi");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00388BF0)
// 0x00388BF0 videoDecDelete__FP8VideoDec
struct sceMpeg {
    char data[0x48];
};

struct ViBuf;

struct VideoDec {
    sceMpeg mpeg;
    ViBuf *vibuf_marker;
};

int viBufDelete(ViBuf *buffer);
extern "C" int sceMpegDelete(sceMpeg *mpeg);
__asm__(".equ viBufDelete__FP5ViBuf, 0x0038A870");
__asm__(".equ sceMpegDelete, 0x003BF040");

static int videoDecDelete(VideoDec *decoder)
{
    viBufDelete((ViBuf *)((char *)decoder + 0x48));
    sceMpegDelete(&decoder->mpeg);
    return 1;
}

__asm__(".globl videoDecDelete__FP8VideoDec");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389500)
// 0x00389500 strFileRead__FP7StrFilePvi
typedef unsigned int u_int;
struct StrFile { int isOnCD; char padding[44]; int fd; };
extern "C" int sceCdStRead(unsigned int sectors, unsigned int *buffer, unsigned int mode, unsigned int *error);
extern "C" int sceRead(int fd, void *buffer, int size);
asm(".equ sceCdStRead, 0x003BDEB0");
asm(".equ sceRead, 0x003DEFB8");
int strFileRead(StrFile *file, void *buff, int size)
{
    int count;
    if (file->isOnCD) {
        u_int err;
        count = sceCdStRead(size >> 11, (u_int *)buff, 1, &err);
        count <<= 11;
    } else {
        count = sceRead(file->fd, buff, size);
    }
    return count;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003894B0)
// 0x003894B0 strFileClose__FP7StrFile
struct StrFile {
    int isOnCD;
    int size;
    char fp[0x24];
    unsigned char *iopBuf;
    int fd;
};

extern "C" int sceCdStStop();
extern "C" int sceSifFreeIopHeap(void *address);
extern "C" int sceClose(int fd);

__asm__(".equ sceCdStStop, 0x003BDE78");
__asm__(".equ sceSifFreeIopHeap, 0x003DF6B8");
__asm__(".equ sceClose, 0x003DEC00");

static int strFileClose(StrFile *file)
{
    if (file->isOnCD)
    {
        sceCdStStop();
        sceSifFreeIopHeap((void *)file->iopBuf);
    }
    else
    {
        sceClose(file->fd);
    }
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038A870)
// 0x0038A870 viBufDelete__FP5ViBuf
struct ViBuf { char padding[0x40]; int sema; };
void setD4_CHCR(unsigned int value);
extern "C" int DeleteSema(int semaphore);
__asm__(".equ setD4_CHCR__FUi, 0x00389E68");
__asm__(".equ DeleteSema, 0x003DB670");
volatile unsigned int *const D4_QWC=(unsigned int *)0x1000b420;
volatile unsigned int *const D4_MADR=(unsigned int *)0x1000b410;
volatile unsigned int *const D4_TADR=(unsigned int *)0x1000b430;
int viBufDelete(ViBuf *buffer) {
    setD4_CHCR(5);
    *D4_QWC=0;
    *D4_MADR=0;
    *D4_TADR=0;
    DeleteSema(buffer->sema);
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389D00)
// 0x00389D00 changeMasterVolume__FUi
extern "C" int sceSdRemote(int,int,int,unsigned) ;__asm__(".equ sceSdRemote,0x0038BAE0");extern "C" void change_volume(unsigned val) __asm__("changeMasterVolume__FUi");void change_volume(unsigned val){for(int i=0;i<2;i++){sceSdRemote(1,0x8010,i|0x980,val);sceSdRemote(1,0x8010,i|0xa80,val);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003896C0)
// 0x003896C0 audioDecResume__FP8AudioDec
extern "C" void change_input(unsigned) __asm__("changeInputVolume__FUi");extern "C" int remote(int,int,int,int,int,int,int) __asm__("sceSdRemote");__asm__(".equ changeInputVolume__FUi,0x00389D68");__asm__(".equ sceSdRemote,0x0038BAE0");struct AudioDec{int state;char p0[64];int iopBuff,iopBuffSize;char p1[4];int iopPausePos;};extern "C" void resume(AudioDec*ad) __asm__("audioDecResume__FP8AudioDec");void resume(AudioDec*ad){change_input(0x7fff);int rounded=(ad->iopBuffSize/1024)*1024;__asm__("" : "+r"(rounded));int start=ad->iopBuff+ad->iopPausePos;remote(1,0x80e0,0,19,ad->iopBuff,rounded,start);ad->state=2;}
#endif
