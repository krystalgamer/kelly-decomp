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
