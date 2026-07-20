// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FBB48)
// 0x002FBB48 __uninitialized_fill_n_aux__H3ZP6sectorZUiZ6sector_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct sector {
    int value;
};

extern "C" sector *UninitializedFill(
    sector *first,
    unsigned int count,
    const sector &value
) __asm__("__uninitialized_fill_n_aux__H3ZP6sectorZUiZ6sector_X01X11RCX21G12__false_type_X01");

sector *UninitializedFill(
    sector *first,
    unsigned int count,
    const sector &value
) {
    while (count) {
        if (first) {
            new (first) sector(value);
        }
        --count;
        __asm__ volatile("nop");
        ++first;
    }
    return first;
}
#endif
