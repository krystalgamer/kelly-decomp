// Matching decompilation blocks selected by generated build shims.


// 0x002ACAC0 StlSmallAlloc__FUi
extern char* StlSmallAllocPtr;
void* StlSmallAlloc(unsigned int bytes) { char* result = StlSmallAllocPtr; StlSmallAllocPtr += bytes; return result; }

// 0x002AC578 __nw__FUiUiPCci
void *mem_malloc(unsigned int size, const char *file, int line, int flags);
__asm__(".equ mem_malloc__FUiPCcii, 0x002AC788");
void *operator new(unsigned int size, unsigned int alignment, const char *file, int line) { return mem_malloc(size, file, line, 0); }

// 0x002AC618 __builtin_new
#include "KS/SRC/archalloc.h"

extern const char operator_new_description[];
__asm__(".equ mem_malloc__FUiPCcii, 0x002AC788");
__asm__(".equ operator_new_description, 0x004F9498");

void *operator new(unsigned int size)
{
    void *allocation = mem_malloc(
        size,
        operator_new_description,
        0);
    return allocation;
}

// 0x002AC6F0 arch_malloc__FUiPCci
#include "KS/SRC/archalloc.h"

extern const char arch_malloc_description[];
__asm__(".equ mem_malloc__FUiPCcii, 0x002AC788");
__asm__(".equ arch_malloc_description, 0x004F94B8");

void *arch_malloc(
    unsigned int size,
    const char *description,
    int line)
{
    return mem_malloc(
        size,
        description ? description : arch_malloc_description,
        line);
}

// 0x002AC718 arch_mallochigh__FUi
#include "KS/SRC/archalloc.h"

extern const char arch_malloc_description[];
__asm__(".equ mem_malloc__FUiPCcii, 0x002AC788");
__asm__(".equ arch_malloc_description, 0x004F94B8");

void *arch_mallochigh(unsigned int size)
{
    return mem_malloc(
        size,
        arch_malloc_description,
        0,
        mafHigh);
}

// 0x002AC740 arch_memalign__FUiUiPCci
#include "KS/SRC/archalloc.h"

extern const char arch_memalign_description[];
__asm__(".equ mem_memalign__FUiUiPCcii, 0x002AC848");
__asm__(".equ arch_memalign_description, 0x004F94D8");

void *arch_memalign(
    unsigned int boundary,
    unsigned int size,
    const char *description,
    int line)
{
    return mem_memalign(
        boundary,
        size,
        description ? description : arch_memalign_description,
        line);
}


#if defined(KELLY_DECOMP_FUNCTION_002AC5A0)
// 0x002AC5A0 __vn__FUiUiPCci
extern "C" void*mem_malloc(unsigned,const char*,int,int) __asm__("mem_malloc__FUiPCcii");extern "C" void mem_error(unsigned,bool,const char*,int) __asm__("mem_error__FUibPCci");__asm__(".equ mem_malloc__FUiPCcii,0x002AC788");__asm__(".equ mem_error__FUibPCci,0x002AC308");extern "C" void*alloc_array(unsigned size,unsigned,const char*desc,int line) __asm__("__vn__FUiUiPCci");void*alloc_array(unsigned size,unsigned,const char*desc,int line){void*alloc=mem_malloc(size,desc,line,0);if(!alloc)mem_error(size,true,desc,line);return alloc;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC788)
// 0x002AC788 mem_malloc__FUiPCcii
#include "KS/SRC/archalloc.h"

void* mem_malloc(
    unsigned int size,
    const char *description,
    int line,
    int flags)
{
    // Preserve the released allocator prologue through the EE scheduling shim.
    register int allocation_flags __asm__("$17") = flags;
    mem_check_heap_init();
    mem_malloc_counter++;

    WaitSema(AllocMemorySema);
    void *allocation = currentheap->Allocate(
        size, 16, allocation_flags, description, line);
    SignalSema(AllocMemorySema);

    if (allocation == 0)
        mem_error(size, true, description, line);
    return allocation;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC900)
// 0x002AC900 mem_free__FPv
class Heap
{
    char data[108];

public:
    bool IsThisYours(void *allocation) const;
    void Deallocate(void *allocation);
};

extern Heap heaps[6];
extern int AllocMemorySema;

void mem_check_heap_init();
extern "C" int WaitSema(int semaphore);
extern "C" int SignalSema(int semaphore);
extern "C" void free(void *allocation);

__asm__(".equ heaps, 0x00570528");
__asm__(".equ AllocMemorySema, 0x0046ABD0");
__asm__(".equ mem_check_heap_init__Fv, 0x002ACFB8");
__asm__(".equ IsThisYours__C4HeapPv, 0x002AB770");
__asm__(".equ Deallocate__4HeapPv, 0x002AB680");
__asm__(".equ WaitSema, 0x003DB6A0");
__asm__(".equ SignalSema, 0x003DB680");
__asm__(".equ free, 0x003D0BC8");

void mem_free(void *allocation)
{
    mem_check_heap_init();
    if (allocation == 0)
        return;

    bool found = false;
    for (int i = 5; i >= 0; --i)
    {
        if (heaps[i].IsThisYours(allocation))
        {
            found = true;
            WaitSema(AllocMemorySema);
            heaps[i].Deallocate(allocation);
            SignalSema(AllocMemorySema);
            break;
        }
    }

    if (!found)
        free(allocation);
}
#endif
