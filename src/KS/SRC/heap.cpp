// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002AB2F8)
// 0x002AB2F8 SetHeapMessagers__4HeapPFPCc_vT1
typedef void HeapMessager(const char* message);
extern HeapMessager* HeapWarning;
extern HeapMessager* HeapError;
__asm__(".equ HeapWarning, 0x004322C4");
__asm__(".equ HeapError, 0x004322C8");
class Heap { public: static void SetHeapMessagers(HeapMessager* warning, HeapMessager* error); };
void Heap::SetHeapMessagers(HeapMessager* warning, HeapMessager* error) { HeapWarning = warning; HeapError = error; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB310)
// 0x002AB310 __4Heap
class Heap {
public:
    Heap();
};

Heap::Heap() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB360)
// 0x002AB360 SetGranularity__4HeapUiUi
class Heap {
    char padding[0x24];
    unsigned int minalloc;
    unsigned int minalign;
public:
    void SetGranularity(unsigned int allocation, unsigned int alignment);
};

void Heap::SetGranularity(unsigned int allocation, unsigned int alignment) {
    minalloc = allocation;
    minalign = alignment;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB370)
// 0x002AB370 HeaderSize__C4Heap
class Heap { char padding[0x24]; unsigned int minalloc; public: unsigned int HeaderSize() const; };
unsigned int Heap::HeaderSize() const { return (28 + minalloc - 1) & -minalloc; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB388)
// 0x002AB388 FooterSize__C4Heap
class Heap {
public:
    unsigned int FooterSize() const;
};

unsigned int Heap::FooterSize() const {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB670)
// 0x002AB670 CheckLoHi__C4HeapPvT1
class Heap {
public:
    void CheckLoHi(void* lo, void* hi) const;
};

void Heap::CheckLoHi(void* lo, void* hi) const {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB678)
// 0x002AB678 SetBlockSentry__4HeapP12MemBlockInfo
class MemBlockInfo;

class Heap {
public:
    void SetBlockSentry(MemBlockInfo* block);
};

void Heap::SetBlockSentry(MemBlockInfo* block) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB748)
// 0x002AB748 IsThisMine__C4HeapPC12MemBlockInfo
struct MemBlockInfo { char padding0[0x14]; unsigned short signature; unsigned char heap_id; };
class Heap { char padding[0x30]; int heap_id; public: bool IsThisMine(const MemBlockInfo *block) const; };
bool Heap::IsThisMine(const MemBlockInfo *block) const { return block->heap_id == heap_id && block->signature == 0x7e07; }
#endif
