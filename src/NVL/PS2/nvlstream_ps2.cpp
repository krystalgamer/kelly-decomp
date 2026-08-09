// Matching decompilation blocks selected by generated build shims.

// 0x003864D0 nvlStreamSetBitRate__FP9nvlStreami
#include "NVL/PS2/nvlstream_ps2.h"

void nvlStreamSetBitRate(nvlStream *stream, int bitrate)
{
    if (!stream)
        __assert(nvlstream_source_file, 786, nvlstream_assert_stream);
    stream->bitrate = bitrate;
}

// 0x003863E8 nvlStreamSystemCallback__Fi
#include "NVL/PS2/nvlstream_ps2.h"

enum {
    SCECdFuncRead = 1,
    SCECdFuncSeek = 4,
    SCECdFuncStandby = 5,
    SCECdFuncStop = 6,
    SCECdFuncPause = 7,
    SCECdFuncBreak = 8
};

extern const char callback_assert_expression[];
extern void *callback_jump_table[];

__asm__(".equ nvlCurrentIOStream, 0x0049AFF4");
__asm__(".equ callback_assert_expression, 0x0051B228");
__asm__(".equ callback_jump_table, 0x0051B250");

#define assert(condition) \
    ((condition) ? (void)0 : __assert( \
        nvlstream_source_file, 765, callback_assert_expression))

static void nvlStreamSystemCallback(int cause)
{
    nvlMsg msg = NVL_MSG_INVALID;
    unsigned int index = (unsigned int)(cause - 1);
    static void *const callback_labels[]
        __attribute__((section(".nvl_callback_labels"))) = {
            &&read_done,
            &&invalid_cause,
            &&invalid_cause,
            &&seek_done,
            &&standby_done,
            &&stop_done,
            &&pause_done,
            &&break_done
        };
    (void)callback_labels;
    if (index < 8)
        goto *callback_jump_table[index];
    goto invalid_cause;

read_done:
    msg = NVL_MSG_CDVD_READ;
    goto dispatch;
seek_done:
    msg = NVL_MSG_CDVD_SEEK;
    goto dispatch;
standby_done:
    msg = NVL_MSG_CDVD_STANDBY;
    goto dispatch;
stop_done:
    msg = NVL_MSG_CDVD_STOP;
    goto dispatch;
pause_done:
    msg = NVL_MSG_CDVD_PAUSE;
    goto dispatch;
break_done:
    msg = NVL_MSG_CDVD_BREAK;
    goto dispatch;
invalid_cause:
    assert(0 && "Crappy parameter.");

dispatch:
    if (nvlCurrentIOStream)
    {
        nvlSendMsg(
            &nvlStreamSystemData.cdvdMsgQueue,
            msg,
            (nvlStream *)nvlCurrentIOStream);
        nvlCurrentIOStream = 0;
    }
    else if (nvlStreamSystemData.prevCDVDCallback)
    {
        (*nvlStreamSystemData.prevCDVDCallback)(cause);
    }
}

__asm__(
    ".globl .L0038642C\n"
    ".equ .L0038642C, nvlStreamSystemCallback__Fi + 0x44\n"
    ".globl .L00386434\n"
    ".equ .L00386434, nvlStreamSystemCallback__Fi + 0x4C\n"
    ".globl .L0038643C\n"
    ".equ .L0038643C, nvlStreamSystemCallback__Fi + 0x54\n"
    ".globl .L00386444\n"
    ".equ .L00386444, nvlStreamSystemCallback__Fi + 0x5C\n"
    ".globl .L0038644C\n"
    ".equ .L0038644C, nvlStreamSystemCallback__Fi + 0x64\n"
    ".globl .L00386454\n"
    ".equ .L00386454, nvlStreamSystemCallback__Fi + 0x6C\n"
    ".globl .L0038645C\n"
    ".equ .L0038645C, nvlStreamSystemCallback__Fi + 0x74");

#undef assert


// 0x00387310 nvlStreamReqSize__FP9nvlStream
#include "NVL/PS2/nvlstream_ps2.h"
int nvlStreamReqSize(nvlStream* stream) { return stream->bufsize >> 2; }

// 0x00386DD8 nvlStreamSetLoopSkip__FP9nvlStreamii
#include "NVL/PS2/nvlstream_ps2.h"
void nvlStreamSetLoopSkip(nvlStream *stream, int loop_skip, int rewind_required) { if (loop_skip >= 0) stream->flags |= 4; stream->lp_skip = loop_skip; stream->requireRewind = rewind_required; }

// 0x00385650 nvlWaitForVB__Fv
#include "NVL/PS2/nvlstream_ps2.h"
asm(".equ nvlStreamSystemData, 0x00595E80");
extern "C" int SignalSema(int sema);
extern "C" int PollSema(int sema);
extern "C" int WaitSema(int sema);
asm(".equ SignalSema, 0x003DB680");
asm(".equ PollSema, 0x003DB6B0");
asm(".equ WaitSema, 0x003DB6A0");
void nvlWaitForVB()
{
  SignalSema(nvlStreamSystemData.vblankSema);
  PollSema(nvlStreamSystemData.vblankSema);
  int (*wait)(int) = WaitSema;
  wait(nvlStreamSystemData.vblankSema);
}

// 0x003853C8 nvlDestroyMsgQueue__FP11nvlMsgQueue
#include "NVL/PS2/nvlstream_ps2.h"
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ DeleteSema, 0x003DB670");
__asm__(".equ _nvl_file, 0x0051AD40");
__asm__(".equ _nvl_expr, 0x0051AD88");
extern "C" void __assert(const char*, int, const char*);
extern "C" int DeleteSema(int);
extern char _nvl_file, _nvl_expr;
void nvlDestroyMsgQueue(nvlMsgQueue* q)
{
  if (!q)
    __assert(&_nvl_file, 146, &_nvl_expr);
  int (*delete_semaphore)(int) = DeleteSema;
  delete_semaphore(q->sema);
}

// 0x003873A0 nvlDestroyMutex__FPi
#include "NVL/PS2/nvlstream_ps2.h"

__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ DeleteSema, 0x003DB670");
__asm__(".equ _nvl_file, 0x0051AD40");
__asm__(".equ _nvl_expr, 0x0051B5A8");
extern "C" void __assert(const char*, int, const char*);
extern "C" int DeleteSema(int);
extern char _nvl_file, _nvl_expr;
void nvlDestroyMutex(int* mtx)
{
  if (!mtx)
    __assert(&_nvl_file, 1516, &_nvl_expr);
  int (*delete_semaphore)(int) = DeleteSema;
  delete_semaphore(*mtx);
}

// 0x00387480 nvlUnlockMutex__FPi
#include "NVL/PS2/nvlstream_ps2.h"

__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ SignalSema, 0x003DB680");
__asm__(".equ _nvl_file, 0x0051AD40");
__asm__(".equ _nvl_expr, 0x0051B5A8");
extern "C" void __assert(const char*, int, const char*);
extern "C" int SignalSema(int);
extern char _nvl_file, _nvl_expr;
void nvlUnlockMutex(int* mtx)
{
  if (!mtx)
    __assert(&_nvl_file, 1549, &_nvl_expr);
  int (*signal_semaphore)(int) = SignalSema;
  signal_semaphore(*mtx);
}

// 0x00387330 nvlInitMutex__FPi
struct SemaParam{int attr,initCount,maxCount;char rest[20];};extern "C" int CreateSema(SemaParam*);extern "C" void do_assert(const char*,int,const char*) __asm__("__assert");__asm__(".equ CreateSema,0x003DB660");__asm__(".equ __assert,0x003CF6B0");extern const char file_text[],mutex_text[],result_text[];__asm__(".equ file_text,0x0051AD40");__asm__(".equ mutex_text,0x0051B5A8");__asm__(".equ result_text,0x0051B5B0");extern "C" void init_mutex(int*mtx) __asm__("nvlInitMutex__FPi");void init_mutex(int*mtx){if(!mtx)do_assert(file_text,1507,mutex_text);SemaParam p;p.maxCount=1;p.initCount=1;*mtx=CreateSema(&p);if(*mtx<0)do_assert(file_text,1511,result_text);}

// 0x00386D48 nvlStreamUnlock__FP9nvlStream
#include "NVL/PS2/nvlstream_ps2.h"
extern int initialized;extern "C" void assert_fn(const char*,int,const char*)__asm__("__assert");extern "C" int lock(int*,int)__asm__("nvlLockMutex__FPi12nvlMutexMode");extern "C" void unlock(int*)__asm__("nvlUnlockMutex__FPi");extern const char file_text[];extern const char init_expr[];extern const char stream_expr[];__asm__(".equ initialized,0x0049AFE0");__asm__(".equ __assert,0x003CF6B0");__asm__(".equ nvlLockMutex__FPi12nvlMutexMode,0x003873E8");__asm__(".equ nvlUnlockMutex__FPi,0x00387480");__asm__(".equ file_text,0x0051AD40");__asm__(".equ init_expr,0x0051B338");__asm__(".equ stream_expr,0x0051B120");void nvlStreamUnlock(nvlStream*s){if(!initialized)assert_fn(file_text,1105,init_expr);if(!s)assert_fn(file_text,1106,stream_expr);lock(&s->mtx,0);s->pLock=0;unlock(&s->mtx);asm volatile("");}

// 0x003873E8 nvlLockMutex__FPi12nvlMutexMode
#include "NVL/PS2/nvlstream_ps2.h"
extern "C" int WaitSema(int);extern "C" int PollSema(int);extern "C" void do_assert(const char*,int,const char*) __asm__("__assert");extern const char source_file[],assert_mtx[],assert_res[];asm(".equ WaitSema,0x003DB6A0");asm(".equ PollSema,0x003DB6B0");asm(".equ __assert,0x003CF6B0");asm(".equ source_file,0x0051AD40");asm(".equ assert_mtx,0x0051B5A8");asm(".equ assert_res,0x0051B5C0");int nvlLockMutex(int*mtx,nvlMutexMode mode){int res;if(!mtx)do_assert(source_file,1530,assert_mtx);if(mode==NVL_MUTEX_BLOCK)res=WaitSema(*mtx);else{res=PollSema(*mtx);if(res!=*mtx)return 0;}if(res!=*mtx)do_assert(source_file,1543,assert_res);return 1;}

// 0x003855A0 nvlSendMsg__FP11nvlMsgQueueiP9nvlStream
#include "NVL/PS2/nvlstream_ps2.h"
struct SemaParam{int currentCount;char padding[28];};extern "C" void DIntr();extern "C" void EIntr();extern "C" int ReferSemaStatus(int,SemaParam*);extern "C" int SignalSema(int);extern "C" void assert_fn(const char*,int,const char*)__asm__("__assert");extern const char file_name[],expr[];asm(".equ DIntr,0x003DFD70");asm(".equ EIntr,0x003DFDB8");asm(".equ ReferSemaStatus,0x003DB6D0");asm(".equ SignalSema,0x003DB680");asm(".equ __assert,0x003CF6B0");asm(".equ file_name,0x0051AD40");asm(".equ expr,0x0051ADC8");void nvlSendMsg(nvlMsgQueue*q,int msg,nvlStream*s){SemaParam semaParam;int res;msg=((s?s->idx:-1)<<16)|msg;DIntr();res=ReferSemaStatus(q->sema,&semaParam);if(!(res==q->sema&&semaParam.currentCount>=0))assert_fn(file_name,237,expr);q->array[semaParam.currentCount]=msg;SignalSema(q->sema);EIntr();}
