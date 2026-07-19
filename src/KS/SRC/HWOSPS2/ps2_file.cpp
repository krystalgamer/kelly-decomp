// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E1058)
// 0x001E1058 host_fclose__FP7os_file
class os_file { public: void close(); };
__asm__(".equ close__7os_file, 0x001E03A0");
void host_fclose(os_file *file) { file->close(); __asm__ volatile(""); }
#endif
