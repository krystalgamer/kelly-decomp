// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00389D68)
#include "NVL/PS2/nvlMPEG_ps2.h"

__asm__(".equ sceSdRemote, 0x0038BAE0");

// 0x00389D68 changeInputVolume__FUi
static void changeInputVolume(unsigned int val) {
    sceSdRemote(1, 0x8010, 0x0F80, val);
    sceSdRemote(1, 0x8010, 0x1080, val);
    KELLY_DECOMP_COMPILER_BARRIER();
}
__asm__(".globl changeInputVolume__FUi");
#endif

// 0x00388968 endDisplay__Fv
#include "NVL/PS2/nvlMPEG_ps2.h"

static void endDisplay() { isCountVblank = 0; frd = 0; }

// 0x00388980 readBufCreate__FP7ReadBuf
#include "NVL/PS2/nvlMPEG_ps2.h"

static void readBufCreate(ReadBuf* buffer) { buffer->put = buffer->count = 0; buffer->size = 0x50000; }

// 0x00389028 voBufReset__FP5VoBuf
#include "NVL/PS2/nvlMPEG_ps2.h"

static void voBufReset(VoBuf* buffer) {
    buffer->count = 0;
    buffer->write = 0;
}

// 0x00389038 voBufIsFull__FP5VoBuf
#include "NVL/PS2/nvlMPEG_ps2.h"

static int voBufIsFull(VoBuf* buffer) { return buffer->count == buffer->size; }

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

// 0x003898C8 audioDecIsPreset__FP8AudioDec
#include "NVL/PS2/nvlMPEG_ps2.h"

static int audioDecIsPreset(AudioDec* decoder) { return decoder->totalBytesSent >= PRESET_VALUE(decoder->iopBuffSize); }

#if defined(KELLY_DECOMP_FUNCTION_00389750)
#include "NVL/PS2/nvlMPEG_ps2.h"

// 0x00389750 audioDecReset__FP8AudioDec
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
#include "NVL/PS2/nvlMPEG_ps2.h"

extern "C" int sceMpegAddStrCallback(sceMpeg *mpeg, int type, int channel, sceMpegCallback callback, void *data);
__asm__(".equ sceMpegAddStrCallback, 0x003BE530");
static int videoDecSetStream(VideoDec *decoder, int type, int channel, sceMpegCallback callback, void *data) { sceMpegAddStrCallback(&decoder->mpeg, type, channel, callback, data); return 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389188)
// 0x00389188 voBufDecCount__FP5VoBuf
#include "NVL/PS2/nvlMPEG_ps2.h"

static void voBufDecCount(VoBuf *buffer) { if (buffer->count > 0) buffer->count--; }
#endif

// 0x00388A60 readBufEndGet__FP7ReadBufi
#include "NVL/PS2/nvlMPEG_ps2.h"

static int readBufEndGet(ReadBuf *buffer, int size) { int selected = buffer->count; if (size < selected) selected = size; buffer->count -= selected; return selected; }

// 0x00388F38 mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
#include "NVL/PS2/nvlMPEG_ps2.h"

void viBufStopDMA(ViBuf *buffer);
static int mpegStopDMA(sceMpeg *mpeg, sceMpegCbData *data, void *user) { viBufStopDMA(&video_dec_vibuf); return 1; }

// 0x00388F60 mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
#include "NVL/PS2/nvlMPEG_ps2.h"

void viBufRestartDMA(ViBuf *buffer);
static int mpegRestartDMA(sceMpeg *mpeg, sceMpegCbData *data, void *user) { viBufRestartDMA(&video_dec_vibuf); return 1; }

// 0x00389ED8 scTag2__FP5QWORDPvUiUi
#include "NVL/PS2/nvlMPEG_ps2.h"

static void scTag2(QWORD *tag, void *address, unsigned int id, unsigned int qwc) { tag->values[0] = ((unsigned long)(unsigned int)address << 32) | ((unsigned long)id << 28) | (unsigned long)qwc; }

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

// 0x00388EE0 mpegError__FP7sceMpegP18sceMpegCbDataErrorPv
#include "NVL/PS2/nvlMPEG_ps2.h"

int nvlPrintf(const char *format, ...);
extern const char mpeg_error_format[];
__asm__(".equ nvlPrintf__FPCce, 0x0038AD50");
__asm__(".equ mpeg_error_format, 0x0051B718");

int mpegError(
    sceMpeg *,
    sceMpegCbDataError *error,
    void *)
{
    nvlPrintf(mpeg_error_format, error->errMessage);
    return 1;
}

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
#include "NVL/PS2/nvlMPEG_ps2.h"
extern "C" void change_input(unsigned) __asm__("changeInputVolume__FUi");extern "C" int remote(int,int,int,int,int,int,int) __asm__("sceSdRemote");__asm__(".equ changeInputVolume__FUi,0x00389D68");__asm__(".equ sceSdRemote,0x0038BAE0");extern "C" void resume(AudioDec*ad) __asm__("audioDecResume__FP8AudioDec");void resume(AudioDec*ad){change_input(0x7fff);int rounded=(ad->iopBuffSize/1024)*1024;__asm__("" : "+r"(rounded));int start=ad->iopBuff+ad->iopPausePos;remote(1,0x80e0,0,19,ad->iopBuff,rounded,start);ad->state=2;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389050)
// 0x00389050 voBufIncCount__FP5VoBuf
extern "C" void disable_intr()__asm__("DIntr");extern "C" void enable_intr()__asm__("EIntr");__asm__(".equ DIntr,0x003DFD70");__asm__(".equ EIntr,0x003DFDB8");enum{VOBUF_STATUS_FULL=2};struct VoTag{int status;char data[314940];};struct VoBuf{void*data;VoTag*tag;volatile int write;volatile int count;int size;};extern "C" void inc(VoBuf*f)__asm__("voBufIncCount__FP5VoBuf");void inc(VoBuf*f){disable_intr();f->tag[f->write].status=VOBUF_STATUS_FULL;f->count++;f->write=(f->write+1)%f->size;enable_intr();KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389848)
// 0x00389848 audioDecEndPut__FP8AudioDeci
#include "NVL/PS2/nvlMPEG_ps2.h"
extern "C" void endput(AudioDec*ad,int size)__asm__("audioDecEndPut__FP8AudioDeci");void endput(AudioDec*ad,int size){if(ad->state==0){int remain=40-ad->hdrCount;int hdr_add=remain<size?remain:size;ad->hdrCount+=hdr_add;if(ad->hdrCount>=40)ad->state=1;size-=hdr_add;}ad->put=(ad->put+size)%ad->size;ad->count+=size;ad->totalBytes+=size;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389A90)
// 0x00389A90 iopGetArea__FPiN30P8AudioDeci
#include "NVL/PS2/nvlMPEG_ps2.h"
extern "C" void iopGetArea(int*,int*,int*,int*,AudioDec*,int)__asm__("iopGetArea__FPiN30P8AudioDeci");void iopGetArea(int*pd0,int*d0,int*pd1,int*d1,AudioDec*ad,int pos){int len=(pos+ad->iopBuffSize-ad->iopLastPos-1024)%ad->iopBuffSize;len=(len/1024)*1024;if(ad->iopBuffSize-ad->iopLastPos>=len){*pd0=ad->iopBuff+ad->iopLastPos;*d0=len;*pd1=0;*d1=0;}else{*pd0=ad->iopBuff+ad->iopLastPos;*d0=ad->iopBuffSize-ad->iopLastPos;*pd1=ad->iopBuff;*d1=len-(ad->iopBuffSize-ad->iopLastPos);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389798)
// 0x00389798 audioDecBeginPut__FP8AudioDecPPUcPiT1T2
#include "NVL/PS2/nvlMPEG_ps2.h"

static void audioDecBeginPut( AudioDec* ad, u_char** ptr0, int* len0, u_char** ptr1, int* len1 )
{
    int len;

    if( ad->state == AU_STATE_INIT )
    {
        *ptr0 = (u_char*)&ad->sshd + ad->hdrCount;
        *len0 = AU_HDR_SIZE - ad->hdrCount;
        *ptr1 = (u_char*)ad->data;
        *len1 = ad->size;
        return;
    }
    len = ad->size - ad->count;
    if( ad->size -  ad->put >= len )
    {
        *ptr0 = ad->data + ad->put;
        *len0 = len;
        *ptr1 = NULL;
        *len1 = 0;
    }
    else
    {
        *ptr0 = ad->data + ad->put;
        *len0 = ad->size - ad->put;
        *ptr1 = ad->data;
        *len1 = len - ( ad->size - ad->put );
    }
}

__asm__(".globl audioDecBeginPut__FP8AudioDecPPUcPiT1T2");
#endif

#if defined(KELLY_DECOMP_FUNCTION_00389540)
// 0x00389540 audioDecCreate__FP8AudioDecPUcii
#include "NVL/PS2/nvlMPEG_ps2.h"

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

static int audioDecCreate(
    AudioDec *ad,
    u_char *buff,
    int buffSize,
    int iopBuffSize
)
{
    ad->state = AU_STATE_INIT;
    ad->hdrCount = 0;
    ad->data = buff;
    ad->put = 0;
    ad->count = 0;
    ad->size = buffSize;
    ad->totalBytes = 0;
    ad->totalBytesSent = 0;
    ad->iopBuffSize = iopBuffSize;
    ad->iopLastPos = 0;
    ad->iopPausePos = 0;
    ad->iopBuff = (int)sceSifAllocIopHeap(iopBuffSize);
    if (ad->iopBuff != NULL)
    {
        ad->iopZero = (int)sceSifAllocIopHeap(ZERO_BUFF_SIZE);
        if (ad->iopZero != NULL)
        {
            memset(_0_buf, 0, ZERO_BUFF_SIZE);
            sendToIOP(
                ad->iopZero,
                (unsigned char *)_0_buf,
                ZERO_BUFF_SIZE
            );
            changeMasterVolume(0x3fff);
            return 1;
        }
    }

    nvlPrintf(nvl_iop_alloc_error);
    return 0;
}

__asm__(".globl audioDecCreate__FP8AudioDecPUcii");
#endif
