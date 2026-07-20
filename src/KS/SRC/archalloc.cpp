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

#if defined(KELLY_DECOMP_FUNCTION_002ACBF0)
// 0x002ACBF0 mem_get_largest_avail__Fi
int mem_raw_largest_avail(int heap);
__asm__(".equ mem_raw_largest_avail__Fi, 0x002ACBB0");
int mem_get_largest_avail(int heap) { int result = mem_raw_largest_avail(heap); KELLY_DECOMP_COMPILER_BARRIER(); return result - 128; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ACCA0)
// 0x002ACCA0 mem_set_current_heap__Fi
struct mem_heap { char data[108]; };
extern mem_heap heaps[];
extern mem_heap *currentheap;
__asm__(".equ heaps, 0x00570528");
__asm__(".equ currentheap, 0x004322CC");
void mem_set_current_heap(int heap) { currentheap = &heaps[heap]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC508)
// 0x002AC508 mem_leak_prep__Fv
int mem_set_checkpoint();
extern int mem_leak_checkpoint;
__asm__(".equ mem_set_checkpoint__Fv, 0x002AC4F8");
__asm__(".equ mem_leak_checkpoint, 0x004322D8");
void mem_leak_prep() { int checkpoint = mem_set_checkpoint(); KELLY_DECOMP_COMPILER_BARRIER(); mem_leak_checkpoint = checkpoint; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ACCC8)
// 0x002ACCC8 mem_push_current_heap__Fi
extern int heapstackptr;
void mem_set_current_heap(int heap);
__asm__(".equ heapstackptr, 0x00432300");
__asm__(".equ mem_set_current_heap__Fi, 0x002ACCA0");
void mem_push_current_heap(int heap) { ++heapstackptr; mem_set_current_heap(heap); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
