// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00387310)
// 0x00387310 nvlStreamReqSize__FP9nvlStream
struct nvlStream { char padding[0x18]; int bufsize; };
int nvlStreamReqSize(nvlStream* stream) { return stream->bufsize >> 2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00386DD8)
// 0x00386DD8 nvlStreamSetLoopSkip__FP9nvlStreamii
struct nvlStream { char padding0[0x40]; int flags; char padding1[8]; int loop_skip; int rewind_required; };
void nvlStreamSetLoopSkip(nvlStream *stream, int loop_skip, int rewind_required) { if (loop_skip >= 0) stream->flags |= 4; stream->rewind_required = rewind_required; KELLY_DECOMP_COMPILER_BARRIER(); stream->loop_skip = loop_skip; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00385650)
// 0x00385650 nvlWaitForVB__Fv
struct nvl_system_data { char padding[0x78]; int vblankSema; };
extern nvl_system_data nvlStreamSystemData __asm__("nvlStreamSystemData");
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
  WaitSema(nvlStreamSystemData.vblankSema);
  KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003853C8)
// 0x003853C8 nvlDestroyMsgQueue__FP11nvlMsgQueue
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ DeleteSema, 0x003DB670");
__asm__(".equ _nvl_file, 0x0051AD40");
__asm__(".equ _nvl_expr, 0x0051AD88");
extern "C" void __assert(const char*, int, const char*);
extern "C" int DeleteSema(int);
extern char _nvl_file, _nvl_expr;
struct nvlMsgQueue { int sema; void* array; };
void nvlDestroyMsgQueue(nvlMsgQueue* q)
{
  if (!q)
    __assert(&_nvl_file, 146, &_nvl_expr);
  int res = DeleteSema(q->sema);
  KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003873A0)
// 0x003873A0 nvlDestroyMutex__FPi
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
  int res = DeleteSema(*mtx);
  KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00387480)
// 0x00387480 nvlUnlockMutex__FPi
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
  int res = SignalSema(*mtx);
  KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
