// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002AC4B8)
// 0x002AC4B8 mem_malloc_locked__Fv
extern bool malloc_locked;
__asm__(".equ malloc_locked, 0x004322D4");

bool mem_malloc_locked() {
    return malloc_locked;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC4F8)
// 0x002AC4F8 mem_set_checkpoint__Fv
extern int memory_checkpoint;
__asm__(".equ memory_checkpoint, 0x00570554");

int mem_set_checkpoint() {
    return memory_checkpoint;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC570)
// 0x002AC570 mem_check_leaks_since_checkpoint__FiUi
void mem_check_leaks_since_checkpoint(int checkpoint, unsigned int flags) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ACC50)
// 0x002ACC50 mem_dump_heap__Fi
void mem_dump_heap(int heapid) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ACC58)
// 0x002ACC58 mem_summarize_heap__Fi
void mem_summarize_heap(int heapid) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC4D8)
// 0x002AC4D8 mem_init_checkpoint__Fb
int mem_set_checkpoint();
__asm__(".equ mem_set_checkpoint__Fv, 0x002AC4F8");
int mem_init_checkpoint(bool enabled) { int result = mem_set_checkpoint(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
