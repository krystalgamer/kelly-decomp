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
