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
