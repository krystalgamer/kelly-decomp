// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034D358)
// 0x0034D358 clear__10string_buf
extern "C" void *memset(void *destination, int value, unsigned int size);
__asm__(".equ memset, 0x003D18D0");
class string_buf { void *data; char padding[12]; unsigned int max_blocks; public: void clear(); };
void string_buf::clear() { memset(data, 0, max_blocks * 8); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
