#ifndef HEAP_H
#define HEAP_H

#pragma interface

typedef unsigned char *PointerMath;
typedef void *Pointer;
typedef unsigned int MemSize;
typedef int MemSizeDiff;
typedef unsigned int MemFlags;
typedef void HeapMessager(const char *message);

enum MemoryBlockTypes {
    mbtFree = 0x00000000,
    mbtUsed = 0x00000001
};

enum MemoryAllocationFlags {
    mafNone = 0x00,
    mafHigh = 0x01
};

struct MemFlagDWord {
    MemFlags magic : 16;
    MemFlags heapid : 8;
    MemFlags flags : 8;
};

class MemBlockInfo {
public:
    MemBlockInfo *prev;
    MemBlockInfo *next;
    MemBlockInfo *prevoftype;
    MemBlockInfo *nextoftype;
    MemSize size;
    MemFlagDWord flags;
    MemFlags blockid;

    MemBlockInfo();
    ~MemBlockInfo();
    bool Contains(Pointer pointer, MemSize header_size);
    bool CanHold(
        MemSize size,
        MemSize alignment,
        MemFlags flags,
        MemSize header_size);
};

class Heap {
    static HeapMessager *HeapWarning;
    static HeapMessager *HeapError;

public:
    static void SetHeapMessagers(
        HeapMessager *warning,
        HeapMessager *error);

protected:
    static void Warning(const char *format, ...);
    static void Error(const char *format, ...);
    static void Dump(HeapMessager *target, const char *format, ...);

    MemBlockInfo *fullhead;
    MemBlockInfo *fulltail;
    MemBlockInfo *usedhead;
    MemBlockInfo *usedtail;
    MemBlockInfo *freehead;
    MemBlockInfo *freetail;
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
    MemSize numblocks;
    MemSize numfree;
    MemSize numused;
    MemSize memblocks;
    MemSize memfree;
    MemSize memused;
    MemSize ovrblocks;
    MemSize ovrfree;
    MemSize ovrused;
    MemSize largestfree;

public:
    Heap();
    ~Heap();
    void AddHeapMemory(Pointer pointer, MemSize size);
    void FreeHeapMemory();
    void SetGranularity(
        MemSize allocation,
        MemSize alignment);
    inline bool HasMemory() const {
        return heapsize > 0 && heapstart != 0;
    }
    inline MemFlags GetHeapID() const {
        return heapid;
    }
    inline void SetHeapID(MemFlags id) {
        heapid = id;
    }
    Pointer Allocate(
        MemSize size,
        MemSize alignment = 1,
        MemFlags flags = mafNone,
        const char *name = 0,
        int line = 0);
    void Deallocate(Pointer pointer);
    bool IsThisYours(Pointer pointer) const;
    void CheckConsistency() const;
    void CheckStackCollision() const;

protected:
    inline MemBlockInfo *PtrToBlock(Pointer pointer) const {
        return (MemBlockInfo *)(
            (PointerMath)pointer - HeaderSize());
    }
    MemBlockInfo *FindFree(
        MemSize size,
        MemSize alignment,
        MemFlags flags);
    Pointer AllocateBlock(
        MemBlockInfo *block,
        MemSize size,
        MemSize alignment,
        MemFlags flags,
        const char *name,
        int line);
    void FreeBlock(MemBlockInfo *block);
    void MoveFreeToUsed(MemBlockInfo *block);
    void MoveUsedToFree(MemBlockInfo *block);
    MemBlockInfo *ShiftBlock(
        MemBlockInfo *block,
        MemSizeDiff difference);
    MemBlockInfo *SplitBlock(
        MemBlockInfo *block,
        MemSize block_size);
    MemBlockInfo *AllocSplit(
        MemBlockInfo *block,
        MemSize size,
        MemSize alignment,
        MemFlags flags);
    void MergeBlock(MemBlockInfo *block);
    void CheckHeapStats();
    MemSize HeaderSize() const;
    MemSize FooterSize() const;
    void SetBlockSentry(MemBlockInfo *block);
    bool IsThisMine(const MemBlockInfo *block) const;
    bool DoYouContain(Pointer pointer) const;
    void InitLoHi(Pointer low, Pointer high);
    void CheckLoHi(Pointer low, Pointer high) const;
};

inline MemSize RoundUp(MemSize size, MemSize alignment) {
    return (size + (alignment - 1)) & ~(alignment - 1);
}

#endif
