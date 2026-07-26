// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003AB2A8)
// 0x003AB2A8 __unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X11X21_v
struct nglListNode;

struct nglNodePair {
    nglListNode *first;
    unsigned int second;
};

extern "C" void UnguardedLinearInsert(
    nglNodePair *last,
    const nglNodePair *value
) __asm__(
    "__unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUi"
    "Zt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X11X21_v"
);

void UnguardedLinearInsert(
    nglNodePair *last,
    const nglNodePair *value
)
{
    nglNodePair *previous = last - 1;
    while (value->second < previous->second)
    {
        *last = *previous;
        last = previous;
        --previous;
    }
    *last = *value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AB3E0)
// 0x003AB3E0 __unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01PX11X21_v
struct nglListNode;
struct node_pair { nglListNode *first; unsigned int second; };
struct nglOpaqueCompare {};
extern "C" void linear_insert(node_pair *, const node_pair *, int)
    __asm__("__unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X11X21_v");
__asm__(".equ __unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X11X21_v,0x003AB2A8");
extern "C" void insertion_sort_aux(node_pair *first, node_pair *last, node_pair *, nglOpaqueCompare)
    __asm__("__unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01PX11X21_v");
void insertion_sort_aux(node_pair *first, node_pair *last, node_pair *, nglOpaqueCompare)
{
    for (; first != last; ++first) {
        node_pair value = *first;
        linear_insert(first, &value, 0);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ABD80)
// 0x003ABD80 __unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01PX11X21_v
struct nglListNode;
struct node_pair { nglListNode *first; unsigned int second; };
struct nglTransCompare {};
extern "C" void linear_insert(node_pair *, const node_pair *, int)
    __asm__("__unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X11X21_v");
__asm__(".equ __unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X11X21_v,0x003ABC00");
extern "C" void insertion_sort_aux(node_pair *first, node_pair *last, node_pair *, nglTransCompare)
    __asm__("__unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01PX11X21_v");
void insertion_sort_aux(node_pair *first, node_pair *last, node_pair *, nglTransCompare)
{
    for (; first != last; ++first) {
        node_pair value = *first;
        linear_insert(first, &value, 0);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AB440)
// 0x003AB440 __final_insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01X11_v
struct pair8{void*first;unsigned second;};extern "C" void insertion(pair8*,pair8*,int) __asm__("__insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01X11_v");extern "C" void unguarded(pair8*,pair8*,int,int) __asm__("__unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01PX11X21_v");__asm__(".equ __insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01X11_v,0x003AB2F8");__asm__(".equ __unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01PX11X21_v,0x003AB3E0");extern "C" void final_sort(pair8*first,pair8*last,int) __asm__("__final_insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01X11_v");void final_sort(pair8*first,pair8*last,int){if(last-first>16){pair8*middle=first+16;insertion(first,middle,0);unguarded(middle,last,0,0);}else insertion(first,last,0);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ABC00)
// 0x003ABC00 __unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X11X21_v
struct pair8{void*first;unsigned second;};static inline bool before(const pair8&a,const pair8&b){float af=*(const float*)&a.second,bf=*(const float*)&b.second;if(af>bf)return true;else if(af<bf)return false;return (unsigned)a.first<(unsigned)b.first;}extern "C" void linear(pair8*last,const pair8&value,int) __asm__("__unguarded_linear_insert__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X11X21_v");void linear(pair8*last,const pair8&value,int){pair8*next=last;--next;while(before(value,*next)){*last=*next;last=next;--next;}*last=value;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ABDE0)
// 0x003ABDE0 __final_insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01X11_v
struct pair8{void*first;unsigned second;};extern "C" void insertion(pair8*,pair8*,int) __asm__("__insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01X11_v");extern "C" void unguarded(pair8*,pair8*,int,int) __asm__("__unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01PX11X21_v");__asm__(".equ __insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01X11_v,0x003ABC70");__asm__(".equ __unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01PX11X21_v,0x003ABD80");extern "C" void final_sort(pair8*first,pair8*last,int) __asm__("__final_insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01X11_v");void final_sort(pair8*first,pair8*last,int){if(last-first>16){pair8*middle=first+16;insertion(first,middle,0);unguarded(middle,last,0,0);}else insertion(first,last,0);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AAE40)
// 0x003AAE40 __make_heap__H4ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompareZt4pair2ZP11nglListNodeZUiZi_X01X01X11PX21PX31_v
struct nglListNode;struct Pair{nglListNode*first;unsigned second;};struct nglOpaqueCompare{};extern "C" void adjust(Pair*,int,int,const Pair&,nglOpaqueCompare) __asm__("adjust");asm(".equ adjust,0x003AAD60");extern "C" void make(Pair*,Pair*,nglOpaqueCompare,Pair*,int*) __asm__("__make_heap__H4ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompareZt4pair2ZP11nglListNodeZUiZi_X01X01X11PX21PX31_v");void make(Pair*first,Pair*last,nglOpaqueCompare comp,Pair*,int*){int len=last-first;if(len<2)return;int parent=(len-2)/2;while(1){Pair value=first[parent];adjust(first,parent,len,value,comp);if(parent==0)return;--parent;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AB680)
// 0x003AB680 __make_heap__H4ZPt4pair2ZP11nglListNodeZUiZ15nglTransCompareZt4pair2ZP11nglListNodeZUiZi_X01X01X11PX21PX31_v
struct nglListNode;struct Pair{nglListNode*first;unsigned second;};struct nglTransCompare{};extern "C" void adjust(Pair*,int,int,const Pair&,nglTransCompare) __asm__("adjust");asm(".equ adjust,0x003AB578");extern "C" void make(Pair*,Pair*,nglTransCompare,Pair*,int*) __asm__("__make_heap__H4ZPt4pair2ZP11nglListNodeZUiZ15nglTransCompareZt4pair2ZP11nglListNodeZUiZi_X01X01X11PX21PX31_v");void make(Pair*first,Pair*last,nglTransCompare comp,Pair*,int*){int len=last-first;if(len<2)return;int parent=(len-2)/2;while(1){Pair value=first[parent];adjust(first,parent,len,value,comp);if(parent==0)return;--parent;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AB908)
// 0x003AB908 __unguarded_partition__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01X11X21_X01
struct nglListNode;

struct node_pair {
    nglListNode *first;
    unsigned int second;
};

class nglTransCompare {
public:
    bool operator()(
        const node_pair &left,
        const node_pair &right
    ) const
    {
        if (reinterpret_cast<const float &>(left.second) >
            reinterpret_cast<const float &>(right.second))
            return true;
        if (reinterpret_cast<const float &>(left.second) <
            reinterpret_cast<const float &>(right.second))
            return false;
        return left.first < right.first;
    }
};

extern "C" node_pair *partition_nodes(
    node_pair *first,
    node_pair *last,
    const node_pair &pivot,
    nglTransCompare compare
) __asm__(
    "__unguarded_partition__H3ZPt4pair2ZP11nglListNodeZUi"
    "Zt4pair2ZP11nglListNodeZUiZ15nglTransCompare"
    "_X01X01X11X21_X01"
);

node_pair *partition_nodes(
    node_pair *first,
    node_pair *last,
    const node_pair &pivot,
    nglTransCompare compare
)
{
    while (true)
    {
        while (compare(*first, pivot))
            first++;
        last--;
        while (compare(pivot, *last))
            last--;
        if (!(first < last))
            return first;
        node_pair temporary = *first;
        *first = *last;
        *last = temporary;
        first++;
    }
}
#endif
