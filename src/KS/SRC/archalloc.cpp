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

#if defined(KELLY_DECOMP_FUNCTION_002ACCF0)
// 0x002ACCF0 mem_pop_current_heap__Fv
extern int heapstackptr;
extern int heapstack[];
extern int currentheap;
__asm__(".equ heapstackptr, 0x00432300");
__asm__(".equ heapstack, 0x00432688");
__asm__(".equ currentheap, 0x004322CC");

void mem_pop_current_heap() {
    --heapstackptr;
    currentheap = heapstack[heapstackptr];
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ACC10)
// 0x002ACC10 mem_check_heap__Fv
class Heap {
    char data[0x6C];

public:
    void CheckConsistency() const;
};

__asm__(".equ CheckConsistency__C4Heap, 0x002AB830");

extern Heap heaps[];
__asm__(".equ heaps, 0x00570528");

void mem_check_heap()
{
    heaps[0].CheckConsistency();
    heaps[1].CheckConsistency();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ACF80)
// 0x002ACF80 mem_return_largest_available_block__FPUi
unsigned int mem_tested_largest_avail();
extern "C" void *malloc(unsigned int size);
__asm__(
    ".equ mem_tested_largest_avail__Fv, 0x002ACF08"
);
__asm__(".equ malloc, 0x003D0BA0");

static void *mem_return_largest_available_block(unsigned int *size)
{
    *size = mem_tested_largest_avail();
    void *result = malloc(*size);
    if (result == 0)
        *size = 0;
    return result;
}

__asm__(
    ".globl mem_return_largest_available_block__FPUi"
);
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ACBB0)
// 0x002ACBB0 mem_raw_largest_avail__Fi
class Heap {
    char padding[104];
    int largest_free;
public:
    void CheckHeapStats();
    int GetLargestFree() { CheckHeapStats(); return largest_free; }
};
extern Heap heaps[];
asm(".equ heaps, 0x00570528");
asm(".equ CheckHeapStats__4Heap, 0x002AC0A8");
int mem_raw_largest_avail(int heapindex)
{
    return heaps[heapindex].GetLargestFree();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC530)
// 0x002AC530 mem_leak_test__Fb
#include "decomp_annotations.h"
extern int leak_checkpoint __asm__("leak_checkpoint");
extern void mem_check_heap();
extern void mem_check_leaks_since_checkpoint(int, unsigned int);
asm(".equ leak_checkpoint, 0x004322D8"); asm(".equ mem_check_heap__Fv, 0x002ACC10"); asm(".equ mem_check_leaks_since_checkpoint__FiUi, 0x002AC570");
void mem_leak_test(bool strict)
{
    mem_check_heap();
    if (leak_checkpoint > 0)
        mem_check_leaks_since_checkpoint(leak_checkpoint, strict ? 7u : 3u);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
