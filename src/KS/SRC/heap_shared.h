#ifndef KELLY_DECOMP_HEAP_SHARED_H
#define KELLY_DECOMP_HEAP_SHARED_H

typedef void* Pointer;
typedef unsigned int MemSize;
typedef unsigned int MemFlags;

struct MemFlagDWord {
    MemFlags magic : 16;
    MemFlags heapid : 8;
    MemFlags flags : 8;
};

class MemBlockInfo {
public:
    MemBlockInfo* prev;
    MemBlockInfo* next;
    MemBlockInfo* prevoftype;
    MemBlockInfo* nextoftype;
    MemSize size;
    MemFlagDWord flags;
    MemFlags blockid;
};

class Heap {
protected:
    MemBlockInfo* fullhead;
    MemBlockInfo* fulltail;
    MemBlockInfo* usedhead;
    MemBlockInfo* usedtail;
    MemBlockInfo* freehead;
    MemBlockInfo* freetail;
    MemSize heapsize;
    Pointer heapstart;
    MemSize allocatedblocks;
    MemSize minalloc;
    MemSize minalign;
    MemSize lastalloc;
    MemFlags heapid;
    Pointer loblock;
    Pointer hiblock;
    bool locked;
    bool statsuptodate;

public:
    void InitLoHi(Pointer lo, Pointer hi);
    Pointer Allocate(MemSize size, MemSize align, MemFlags flags, const char* name, int line);
    MemFlags GetHeapID() const { return heapid; }

protected:
    MemBlockInfo* PtrToBlock(Pointer ptr) const;
    MemBlockInfo* FindFree(MemSize size, MemSize align, MemFlags flags);
    Pointer AllocateBlock(MemBlockInfo* block, MemSize size, MemSize align, MemFlags flags, const char* name, int line);
    MemSize HeaderSize() const;
    static void Warning(const char* Format, ...);
};

__asm__(".equ FindFree__4HeapUiUiUi, 0x002AB910");
__asm__(".equ AllocateBlock__4HeapP12MemBlockInfoUiUiUiPCci, 0x002AB9D8");
__asm__(".equ HeaderSize__C4Heap, 0x002AB370");
__asm__(".equ Warning__4HeapPCce, 0x002B9528");
extern const char allocation_warning[];
__asm__(".equ allocation_warning, 0x004F90D0");

inline MemSize RoundUp(MemSize size, MemSize align) {
    return (size + (align - 1)) & ~(align - 1);
}

inline MemBlockInfo* Heap::PtrToBlock(Pointer ptr) const {
    return (MemBlockInfo*)((unsigned char*)ptr - HeaderSize());
}

extern "C" void* memcpy(void* destination, const void* source, unsigned int size);
extern const char lo_block_magic[];
extern const char hi_block_magic[];
__asm__(".equ memcpy, 0x003D171C");
__asm__(".equ lo_block_magic, 0x004F90F0");
__asm__(".equ hi_block_magic, 0x004F90F8");

#endif
