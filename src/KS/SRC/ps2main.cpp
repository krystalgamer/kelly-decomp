// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E3890)
// 0x001E3890 system_idle__Fv
void system_idle() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3898)
// 0x001E3898 register_exception_handlers__Fv
void register_exception_handlers() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3280)
// 0x001E3280 KSMemFree__FPv
void arch_free(void *pointer);
__asm__(".equ arch_free__FPv, 0x002AC768");
void KSMemFree(void *pointer) { arch_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3168)
// 0x001E3168 KSMemAllocate__FUiUiPCci
void *arch_memalign(unsigned int alignment, unsigned int size, const char *file, int line);
__asm__(".equ arch_memalign__FUiUiPCci, 0x002AC740");
void *KSMemAllocate(unsigned int size, unsigned int alignment, const char *file, int line) { void *result = arch_memalign(alignment, size, file, line); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3190)
// 0x001E3190 KSMemAlloc__FUiUi
void *KSMemAllocate(unsigned int size, unsigned int alignment, const char *file, int line);
__asm__(".equ KSMemAllocate__FUiUiPCci, 0x001E3168");
void *KSMemAlloc(unsigned int size, unsigned int alignment) { register const char *file __asm__("$6") = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x10e0; void *result = KSMemAllocate(size, alignment, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3228)
// 0x001E3228 KSMemAllocNSL__FUiUi
void *KSMemAllocate(unsigned int size, unsigned int alignment, const char *file, int line);
__asm__(".equ KSMemAllocate__FUiUiPCci, 0x001E3168");
void *KSMemAllocNSL(unsigned int size, unsigned int alignment) { register const char *file __asm__("$6") = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x1080; void *result = KSMemAllocate(size, alignment, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3340)
// 0x001E3340 fptoui
__asm__(".equ dptofp, 0x003CC8C8");

inline int FTOI(float input) {
    register float output;
    __asm__ volatile("cvt.w.s %0, %1" : "=f"(output) : "f"(input));
    return (int &)output;
}

extern "C" unsigned int fptoui(double value);

unsigned int fptoui(double value) {
    return FTOI(value);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3100)
// 0x001E3100 KSCriticalError__FPCc
void onscreenerror(const char *format, ...);
void error(const char *format, ...);
__asm__(".equ onscreenerror__FPCce, 0x001DFAD8");
__asm__(".equ error__FPCce, 0x001DFBD8");
void KSCriticalError(const char *text) { onscreenerror(text); error(text); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3300)
// 0x001E3300 KSReleaseFile__FP10nglFileBuf
struct nglFileBuf {
    unsigned char *Buf;
    unsigned int Size;
    unsigned int UserData;
};

class world_dynamics_system {
public:
    static void wds_releasefile(unsigned char **buffer);
};

__asm__(".equ wds_releasefile__21world_dynamics_systemPPUc, 0x00294CF0");

extern "C" void *memset(void *destination, int value, unsigned int size);
__asm__(".equ memset, 0x003D18D0");

void KSReleaseFile(nglFileBuf *file)
{
    world_dynamics_system::wds_releasefile(&file->Buf);
    memset(file, 0, sizeof(nglFileBuf));
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3130)
// 0x001E3130 KSDebugPrint__FPCc
extern int nglUsingProView;
__asm__(".equ nglUsingProView, 0x004BB794");

extern "C" void snputs(const char *text);
extern "C" int scePrintf(const char *text, ...);
__asm__(".equ snputs, 0x003C5E40");
__asm__(".equ scePrintf, 0x003DD0C8");

void KSDebugPrint(const char *text)
{
    if (nglUsingProView) {
        snputs(text);
        KELLY_DECOMP_COMPILER_BARRIER();
        return;
    }
    scePrintf(text);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E30C0)
// 0x001E30C0 KSHeapError__FPCc
void onscreenerror(const char *text, ...);
void error(const char *text, ...);
asm(".equ onscreenerror__FPCce, 0x001DFAD8");
asm(".equ error__FPCce, 0x001DFBD8");
void KSHeapError(const char *text)
{
    onscreenerror(text);
    error(text);
    for (;;) ;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E32A0)
// 0x001E32A0 KSReadFile__FPCcP10nglFileBufUi
struct nglFileBuf { unsigned char *Buf; unsigned int Size; };
extern int system_locked;
extern "C" bool read_world_file(
    const char *,unsigned char **,unsigned int *,unsigned int,int
) __asm__("wds_readfile__21world_dynamics_systemPCcPPUcPUiii");
__asm__(".equ system_locked, 0x0040E3A0");
__asm__(".equ wds_readfile__21world_dynamics_systemPCcPPUcPUiii, 0x00294AC8");
bool KSReadFile(const char *filename,nglFileBuf *file,unsigned int align) {
    bool was_locked=false;
    if (system_locked) {
        system_locked=false;
        was_locked=true;
    }
    bool result=read_world_file(
        filename,&file->Buf,&file->Size,align,1
    );
    if (was_locked) system_locked=true;
    return result;
}
#endif
