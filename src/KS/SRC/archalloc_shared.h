#ifndef KELLY_DECOMP_ARCHALLOC_SHARED_H
#define KELLY_DECOMP_ARCHALLOC_SHARED_H

void *operator new(
    unsigned int size,
    unsigned int alignment,
    const char *description,
    int line);

inline void *operator new(unsigned int, void *memory)
{
    return memory;
}

__asm__(".equ __nw__FUiUiPCci, 0x002AC578");

#define NEW new(0, __PRETTY_FUNCTION__, 0)

class Heap {
public:
    void *Allocate(
        unsigned int size,
        unsigned int alignment,
        unsigned int flags,
        const char *description,
        int line);
};

extern int AllocMemorySema;
extern Heap *currentheap;
extern unsigned long mem_malloc_counter;

void mem_check_heap_init();
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
