#ifndef ARCHALLOC_H
#define ARCHALLOC_H

#include "KS/SRC/heap.h"

void *operator new(unsigned int size);
void *operator new(
    unsigned int size,
    unsigned int alignment,
    const char *description,
    int line);
void *arch_malloc(
    unsigned int size,
    const char *description,
    int line = 0);
void *arch_mallochigh(unsigned int size);
void *arch_memalign(
    unsigned int boundary,
    unsigned int size,
    const char *description = 0,
    int line = 0);
void *mem_malloc(
    unsigned int size,
    const char *description,
    int line,
    int flags = mafNone);
void *mem_memalign(
    unsigned int boundary,
    unsigned int size,
    const char *description,
    int line,
    int flags = mafNone);
void mem_set_current_heap(int heap);
void mem_push_current_heap(int heap);

#ifndef PLACEMENT_NEW_DEFINED
#define PLACEMENT_NEW_DEFINED
inline void *operator new(unsigned int, void *memory)
{
    return memory;
}
#endif

__asm__(".equ __nw__FUiUiPCci, 0x002AC578");

#define NEW new(0, __PRETTY_FUNCTION__, 0)

enum KSHeapIDs {
    SYSTEM_HEAP,
    DEBUG_HEAP,
    COMMON_HEAP,
    BEACH_HEAP,
    SURFER_HEAP,
    SURFER_HEAP2,
    NUMBER_OF_HEAPS
};

extern int AllocMemorySema;
extern bool malloc_locked;
extern Heap heaps[NUMBER_OF_HEAPS];
extern Heap *currentheap;
extern unsigned long mem_malloc_counter;
extern int mem_leak_checkpoint;

int mem_set_checkpoint();
void mem_leak_prep();
void mem_check_heap_init();
void mem_summarize_heap(int heap);
void mem_summarize_all_heaps();
void mem_error(
    unsigned int size,
    bool array,
    const char *description,
    int line);
extern "C" int WaitSema(int semaphore);
extern "C" int SignalSema(int semaphore);

__asm__(".equ AllocMemorySema, 0x0046ABD0");
__asm__(".equ currentheap, 0x004322CC");
__asm__(".equ mem_malloc_counter, 0x004322E8");
__asm__(".equ mem_check_heap_init__Fv, 0x002ACFB8");
__asm__(".equ Allocate__4HeapUiUiUiPCci, 0x002AB530");
__asm__(".equ mem_error__FUibPCci, 0x002AC308");
__asm__(".equ WaitSema, 0x003DB6A0");
__asm__(".equ SignalSema, 0x003DB680");

#endif
