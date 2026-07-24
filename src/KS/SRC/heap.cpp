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

#if defined(KELLY_DECOMP_FUNCTION_002AB7F8)
// 0x002AB7F8 CheckStackCollision__C4Heap
class Heap { char padding0[0x1c]; int stack_collision; char padding1[0x14]; void *low; void *high; public: void CheckStackCollision() const; void CheckLoHi(void *low, void *high) const; };
__asm__(".equ CheckLoHi__C4HeapPvT1, 0x002AB670");
void Heap::CheckStackCollision() const { if (stack_collision) { CheckLoHi(low, high); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB6F0)
// 0x002AB6F0 DoYouContain__C4HeapPv
class Heap {
    char padding[0x18];
    unsigned int heap_size;
    void *heap_start;
public:
    unsigned int HeaderSize() const;
    bool DoYouContain(void *pointer) const;
};
__asm__(".equ HeaderSize__C4Heap, 0x002AB370");
bool Heap::DoYouContain(void *pointer) const {
    unsigned int low=(unsigned int)heap_start;
    unsigned int high=low+heap_size;
    unsigned int check=(unsigned int)pointer;
    check-=HeaderSize();
    return check>=low && check<high;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB4D0)
// 0x002AB4D0 FreeHeapMemory__4Heap
class Heap {
    int fields[27];
public:
    void FreeHeapMemory();
};
void Heap::FreeHeapMemory() {
    fields[26]=0; fields[7]=0; fields[6]=0;
    fields[0]=0; fields[1]=0; fields[13]=0; fields[14]=0;
    fields[2]=0; fields[4]=0; fields[3]=0; fields[5]=0;
    fields[8]=0; fields[15]=0; fields[16]=0; fields[17]=0;
    fields[18]=0; fields[19]=0; fields[20]=0; fields[21]=0;
    fields[22]=0; fields[23]=0; fields[24]=0;
    __asm__ __volatile__("" : : : "memory");
    fields[25]=0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB280)
// 0x002AB280 CanHold__12MemBlockInfoUiUiUiUi
typedef unsigned int MemSize;typedef unsigned int MemFlags;struct MemBlockInfo{char p0[16];MemSize size;};extern "C" bool can_hold(MemBlockInfo*self,MemSize msize,MemSize align,MemFlags flags,MemSize headersize) __asm__("CanHold__12MemBlockInfoUiUiUiUi");bool can_hold(MemBlockInfo*self,MemSize msize,MemSize align,MemFlags flags,MemSize headersize){if(self->size>msize+headersize){if(flags&1){unsigned char*bblock=(unsigned char*)self;unsigned char*rblock=bblock;rblock+=self->size-msize;unsigned char*dblock=(unsigned char*)((unsigned int)rblock&-align);dblock-=headersize;int diff=dblock-bblock;return diff>=0;}unsigned char*thisptr=(unsigned char*)self;thisptr+=headersize;unsigned char*thatptr=(unsigned char*)(((unsigned int)thisptr+(align-1))&-align);if(self->size-(thatptr-thisptr)>headersize+msize)return true;}return false;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AB680)
// 0x002AB680 Deallocate__4HeapPv
struct block;struct Heap{char p0[64];int statsuptodate;};extern "C" bool is_yours(const Heap*,void*) __asm__("IsThisYours__C4HeapPv");extern "C" unsigned header_size(const Heap*) __asm__("HeaderSize__C4Heap");extern "C" void free_block(Heap*,block*) __asm__("FreeBlock__4HeapP12MemBlockInfo");extern "C" void warning(const char*,...) __asm__("Warning__4HeapPCce");__asm__(".equ IsThisYours__C4HeapPv,0x002AB770");__asm__(".equ HeaderSize__C4Heap,0x002AB370");__asm__(".equ FreeBlock__4HeapP12MemBlockInfo,0x002ABA30");__asm__(".equ Warning__4HeapPCce,0x002B9528");extern const char warning_text[];__asm__(".equ warning_text,0x004F9100");extern "C" void deallocate(Heap*self,void*ptr) __asm__("Deallocate__4HeapPv");void deallocate(Heap*self,void*ptr){if(!ptr)return;if(!is_yours(self,ptr))return;block*killme=(block*)((char*)ptr-header_size(self));if(killme){self->statsuptodate=false;free_block(self,killme);}else warning(warning_text);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002ABA30)
// 0x002ABA30 FreeBlock__4HeapP12MemBlockInfo
struct block{block*prev,*next,*prevoftype,*nextoftype;};struct Heap;extern "C" void move(Heap*,block*) __asm__("MoveUsedToFree__4HeapP12MemBlockInfo");extern "C" void merge(Heap*,block*) __asm__("MergeBlock__4HeapP12MemBlockInfo");__asm__(".equ MoveUsedToFree__4HeapP12MemBlockInfo,0x002ABFF0");__asm__(".equ MergeBlock__4HeapP12MemBlockInfo,0x002ABAA8");extern "C" void free_block(Heap*self,block*b) __asm__("FreeBlock__4HeapP12MemBlockInfo");void free_block(Heap*self,block*b){move(self,b);if(b->next&&b->nextoftype==b->next)merge(self,b);if(b->prev&&b->prevoftype==b->prev)merge(self,b->prev);int dead;__asm__("" : "=r"(dead));}
#endif
