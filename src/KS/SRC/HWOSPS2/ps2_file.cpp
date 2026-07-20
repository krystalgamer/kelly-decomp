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
