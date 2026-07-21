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

#if defined(KELLY_DECOMP_FUNCTION_003566F0)
// 0x003566F0 shutdown_async__10zip_filter
struct z_stream { char padding[0x18]; unsigned long long total_out; };
extern z_stream zip_stream;
__asm__(".equ zip_stream, 0x007420C0");
extern "C" int inflateEnd(z_stream *stream);
__asm__(".equ inflateEnd, 0x00392DA0");
class zip_filter { public: static int shutdown_async(); };
int zip_filter::shutdown_async()
{
    inflateEnd(&zip_stream);
    return zip_stream.total_out;
}
#endif
