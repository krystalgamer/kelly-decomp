// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00356678)
// 0x00356678 zip_filter_free__FPvT0
void arch_free(void *pointer);
__asm__(".equ arch_free__FPv, 0x002AC768");
void zip_filter_free(void *unused, void *address) { arch_free(address); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00356648)
// 0x00356648 zip_filter_alloc__FPvUiUi
void *arch_malloc(unsigned int size, const char *file, int line);
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");

extern char zip_filter_source_file[];
__asm__(".equ zip_filter_source_file, 0x00503E50");

void *zip_filter_alloc(
    void *unused,
    unsigned int items,
    unsigned int size
) {
    void *result = arch_malloc(items * size, zip_filter_source_file, 0);
    KELLY_DECOMP_COMPILER_BARRIER();
    return result;
}
#endif
