#ifndef ARCHALLOC_H
#define ARCHALLOC_H

void *operator new(
    unsigned int size,
    unsigned int alignment,
    const char *description,
    int line);

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

class Heap {
    void *fullhead;
    void *fulltail;
    void *usedhead;
    void *usedtail;
    void *freehead;
    void *freetail;
    unsigned int heapsize;
    void *heapstart;
    unsigned int allocatedblocks;
    unsigned int minalloc;
    unsigned int minalign;
    unsigned int lastalloc;
    unsigned int heapid;
    void *loblock;
    void *hiblock;
    bool locked;
    bool statsuptodate;
    unsigned int numblocks;
    unsigned int numfree;
    unsigned int numused;
    unsigned int memblocks;
    unsigned int memfree;
    unsigned int memused;
    unsigned int ovrblocks;
    unsigned int ovrfree;
    unsigned int ovrused;
    unsigned int largestfree;

public:
    void *Allocate(
        unsigned int size,
        unsigned int alignment,
        unsigned int flags,
        const char *description,
        int line);
    unsigned int GetCurrentMemMarker() { return lastalloc; }
};

extern int AllocMemorySema;
extern bool malloc_locked;
extern Heap heaps[NUMBER_OF_HEAPS];
extern Heap *currentheap;
extern unsigned long mem_malloc_counter;

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
