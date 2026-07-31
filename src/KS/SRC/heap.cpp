// Matching decompilation blocks selected by generated build shims.


// 0x002AB2F8 SetHeapMessagers__4HeapPFPCc_vT1
#include "KS/SRC/heap.h"
void Heap::SetHeapMessagers(HeapMessager* warning, HeapMessager* error) { HeapWarning = warning; HeapError = error; }

// 0x002AB310 __4Heap
#include "KS/SRC/heap.h"

Heap::Heap() {
}

// 0x002AB360 SetGranularity__4HeapUiUi
#include "KS/SRC/heap.h"

void Heap::SetGranularity(unsigned int allocation, unsigned int alignment) {
    minalloc = allocation;
    minalign = alignment;
}

// 0x002AB370 HeaderSize__C4Heap
#include "KS/SRC/heap.h"
unsigned int Heap::HeaderSize() const { return (28 + minalloc - 1) & -minalloc; }

// 0x002AB388 FooterSize__C4Heap
#include "KS/SRC/heap.h"

unsigned int Heap::FooterSize() const {
    return 0;
}

// 0x002AB670 CheckLoHi__C4HeapPvT1
#include "KS/SRC/heap.h"

void Heap::CheckLoHi(void* lo, void* hi) const {
}

// 0x002AB678 SetBlockSentry__4HeapP12MemBlockInfo
#include "KS/SRC/heap.h"

void Heap::SetBlockSentry(MemBlockInfo* block) {
}

// 0x002AB748 IsThisMine__C4HeapPC12MemBlockInfo
#include "KS/SRC/heap.h"
bool Heap::IsThisMine(const MemBlockInfo *block) const { return block->flags.heapid == heapid && block->flags.magic == 0x7e07; }

// 0x002AB7F8 CheckStackCollision__C4Heap
#include "KS/SRC/heap.h"
__asm__(".equ CheckLoHi__C4HeapPvT1, 0x002AB670");
void Heap::CheckStackCollision() const { if (heapstart) { CheckLoHi(loblock, hiblock); KELLY_DECOMP_COMPILER_BARRIER(); } }

// 0x002AB6F0 DoYouContain__C4HeapPv
#include "KS/SRC/heap.h"
__asm__(".equ HeaderSize__C4Heap, 0x002AB370");
bool Heap::DoYouContain(void *pointer) const {
    unsigned int low=(unsigned int)heapstart;
    unsigned int high=low+heapsize;
    unsigned int check=(unsigned int)pointer;
    check-=HeaderSize();
    return check>=low && check<high;
}

// 0x002AB4D0 FreeHeapMemory__4Heap
#include "KS/SRC/heap.h"
void Heap::FreeHeapMemory() {
    largestfree=0; heapstart=0; heapsize=0;
    fullhead=0; fulltail=0; loblock=0; hiblock=0;
    usedhead=0; freehead=0; usedtail=0; freetail=0;
    allocatedblocks=0; locked=0; statsuptodate=0; numblocks=0;
    numfree=0; numused=0; memblocks=0; memfree=0;
    memused=0; ovrblocks=0; ovrfree=0;
    __asm__ __volatile__("" : : : "memory");
    ovrused=0;
}

// 0x002AB280 CanHold__12MemBlockInfoUiUiUiUi
#include "KS/SRC/heap.h"
bool MemBlockInfo::CanHold(
    MemSize requested_size,
    MemSize alignment,
    MemFlags allocation_flags,
    MemSize header_size)
{
    if (size > requested_size + header_size) {
        if (allocation_flags & mafHigh) {
            PointerMath block = (PointerMath)this;
            PointerMath requested = block;
            requested += size - requested_size;
            PointerMath data = (PointerMath)(
                (unsigned int)requested & -alignment);
            data -= header_size;
            MemSizeDiff difference = data - block;
            return difference >= 0;
        }
        PointerMath this_pointer = (PointerMath)this;
        this_pointer += header_size;
        PointerMath data_pointer = (PointerMath)(
            ((unsigned int)this_pointer + (alignment - 1)) &
            -alignment);
        if (size - (data_pointer - this_pointer) >
            header_size + requested_size)
            return true;
    }
    return false;
}

// 0x002AB680 Deallocate__4HeapPv
#include "KS/SRC/heap.h"
struct heap_deallocate_layout {
    char padding[64];
    int stats_uptodate;
};
extern "C" bool is_yours(const Heap*,void*) __asm__("IsThisYours__C4HeapPv");extern "C" unsigned header_size(const Heap*) __asm__("HeaderSize__C4Heap");extern "C" void free_block(Heap*,MemBlockInfo*) __asm__("FreeBlock__4HeapP12MemBlockInfo");extern "C" void warning(const char*,...) __asm__("Warning__4HeapPCce");__asm__(".equ IsThisYours__C4HeapPv,0x002AB770");__asm__(".equ HeaderSize__C4Heap,0x002AB370");__asm__(".equ FreeBlock__4HeapP12MemBlockInfo,0x002ABA30");__asm__(".equ Warning__4HeapPCce,0x002B9528");extern const char warning_text[];__asm__(".equ warning_text,0x004F9100");extern "C" void deallocate(heap_deallocate_layout*self,void*ptr) __asm__("Deallocate__4HeapPv");void deallocate(heap_deallocate_layout*self,void*ptr){Heap*heap=(Heap*)self;if(!ptr)return;if(!is_yours(heap,ptr))return;MemBlockInfo*killme=(MemBlockInfo*)((char*)ptr-header_size(heap));if(killme){self->stats_uptodate=false;free_block(heap,killme);}else warning(warning_text);}

// 0x002ABA30 FreeBlock__4HeapP12MemBlockInfo
#include "KS/SRC/heap.h"
extern "C" void move(Heap*,MemBlockInfo*) __asm__("MoveUsedToFree__4HeapP12MemBlockInfo");extern "C" void merge(Heap*,MemBlockInfo*) __asm__("MergeBlock__4HeapP12MemBlockInfo");__asm__(".equ MoveUsedToFree__4HeapP12MemBlockInfo,0x002ABFF0");__asm__(".equ MergeBlock__4HeapP12MemBlockInfo,0x002ABAA8");extern "C" void free_block(Heap*self,MemBlockInfo*b) __asm__("FreeBlock__4HeapP12MemBlockInfo");void free_block(Heap*self,MemBlockInfo*b){move(self,b);if(b->next&&b->nextoftype==b->next)merge(self,b);if(b->prev&&b->prevoftype==b->prev)merge(self,b->prev);int dead;__asm__("" : "=r"(dead));}

// 0x002AB770 IsThisYours__C4HeapPv
#include "KS/SRC/heap.h"
__asm__(".equ DoYouContain__C4HeapPv,0x002AB6F0");__asm__(".equ IsThisMine__C4HeapPC12MemBlockInfo,0x002AB748");__asm__(".equ HeaderSize__C4Heap,0x002AB370");
bool Heap::IsThisYours(Pointer pointer) const {
    return HasMemory() &&
        DoYouContain(pointer) &&
        IsThisMine(PtrToBlock(pointer));
}

// 0x002AB530 Allocate__4HeapUiUiUiPCci
#include "KS/SRC/heap.h"
__asm__(".equ FindFree__4HeapUiUiUi, 0x002AB910");
__asm__(
    ".equ AllocateBlock__4HeapP12MemBlockInfoUiUiUiPCci, "
    "0x002AB9D8");
__asm__(".equ Warning__4HeapPCce, 0x002B9528");
extern const char allocation_warning[];
__asm__(".equ allocation_warning, 0x004F90D0");

Pointer Heap::Allocate(MemSize size, MemSize align, MemFlags flags, const char* name, int line) {
    statsuptodate = false;
    size = RoundUp(size, minalloc);
    align = RoundUp(align, minalign);
    MemBlockInfo* splitme = FindFree(size, align, flags);
    if (splitme) {
        Pointer rv = AllocateBlock(splitme, size, align, flags, name, line);
        if (rv) {
            MemBlockInfo* mbi = PtrToBlock(rv);
            mbi->flags.magic = 0x7E07;
            mbi->flags.heapid = GetHeapID();
        }
        return rv;
    } else {
        Warning(allocation_warning, size);
        return 0;
    }
}
