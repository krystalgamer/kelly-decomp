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

#if defined(KELLY_DECOMP_FUNCTION_002FD088)
// 0x002FD088 __uninitialized_copy_aux__H2ZP6sectorZP6sector_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct sector {
    int value;
};

extern "C" sector *UninitializedCopy(
    sector *first,
    sector *last,
    sector *result
) __asm__("__uninitialized_copy_aux__H2ZP6sectorZP6sector_X01X01X11G12__false_type_X11");

sector *UninitializedCopy(
    sector *first,
    sector *last,
    sector *result
) {
    while (first != last) {
        if (result) {
            new (result) sector(*first);
        }
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F43F8)
// 0x002F43F8 __uninitialized_fill_n_aux__H3ZPQ218scan_light_context9light_recZUiZQ218scan_light_context9light_rec_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct value8 {
    int first;
    int second;
};

extern "C" value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) __asm__("__uninitialized_fill_n_aux__H3ZPQ218scan_light_context9light_recZUiZQ218scan_light_context9light_rec_X01X11RCX21G12__false_type_X01");

value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) {
    while (count) {
        if (first) {
            new (first) value8(value);
        }
        --count;
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F9BB0)
// 0x002F9BB0 __uninitialized_fill_n_aux__H3ZP5wedgeZUiZ5wedge_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct __attribute__((packed)) wedge {
    int value;
};

extern "C" wedge *UninitializedFill(
    wedge *first,
    unsigned int count,
    const wedge &value
) __asm__("__uninitialized_fill_n_aux__H3ZP5wedgeZUiZ5wedge_X01X11RCX21G12__false_type_X01");

wedge *UninitializedFill(
    wedge *first,
    unsigned int count,
    const wedge &value
) {
    while (count) {
        if (first) {
            new (first) wedge(value);
        }
        --count;
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F4390)
// 0x002F4390 __uninitialized_copy_aux__H2ZPQ218scan_light_context9light_recZPQ218scan_light_context9light_rec_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct value8 {
    int first;
    int second;
};

extern "C" value8 *UninitializedCopy(
    value8 *first,
    value8 *last,
    value8 *result
) __asm__("__uninitialized_copy_aux__H2ZPQ218scan_light_context9light_recZPQ218scan_light_context9light_rec_X01X01X11G12__false_type_X11");

value8 *UninitializedCopy(
    value8 *first,
    value8 *last,
    value8 *result
) {
    while (first != last) {
        if (result) {
            new (result) value8(*first);
        }
        ++first;
        ++result;
    }
    return result;
}
#endif
