// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E1058)
// 0x001E1058 host_fclose__FP7os_file
class os_file { public: void close(); };
__asm__(".equ close__7os_file, 0x001E03A0");
void host_fclose(os_file *file) { file->close(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E0350)
// 0x001E0350 set_root_dir__7os_fileRC7stringx
class stringx { public: const char *data; };
extern "C" char *strcpy(char *destination, const char *source);
__asm__(".equ strcpy, 0x003D3FCC");
class os_file { public: static void set_root_dir(const stringx &directory); };
void os_file::set_root_dir(const stringx &directory) { register const char *source __asm__("$5") = directory.data; register char *destination __asm__("$4") = (char *)0x005A0000; __asm__ volatile("" : "+r"(source), "+r"(destination)); destination += 0x2f88; strcpy(destination, source); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E0378)
// 0x001E0378 set_pre_root_dir__7os_fileRC7stringx
class stringx { public: const char *data; };
extern "C" char *strcpy(char *destination, const char *source);
__asm__(".equ strcpy, 0x003D3FCC");
class os_file { public: static void set_pre_root_dir(const stringx &directory); };
void os_file::set_pre_root_dir(const stringx &directory) { register const char *source __asm__("$5") = directory.data; register char *destination __asm__("$4") = (char *)0x005A0000; __asm__ volatile("" : "+r"(source), "+r"(destination)); destination += 0x3088; strcpy(destination, source); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DFC58)
// 0x001DFC58 __7os_file
__asm__(".equ __7stringx, 0x0034D3E0");
class stringx { public: stringx(); int data[2]; };
class os_file { public: os_file(); stringx name; int flags; bool opened; bool eof; bool from_cd; char data[0x24]; int curr_fp; };
os_file::os_file() { flags = 0; opened = false; eof = true; from_cd = false; curr_fp = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DFD10)
// 0x001DFD10 _$_7os_file
extern "C" void close_file(void *) __asm__("close__7os_file");
extern "C" void destroy_string(void *,int) __asm__("_$_7stringx");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
__asm__(".equ close__7os_file, 0x001E03A0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
struct os_file_layout { char padding[0xc]; int opened; };
extern "C" void destroy_file(
    os_file_layout *self,int flags
) __asm__("_$_7os_file");
void destroy_file(os_file_layout *self,int flags) {
    if (self->opened)
        close_file(self);
    destroy_string(self,2);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
