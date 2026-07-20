// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0010F060)
// 0x0010F060 __uninitialized_fill_n_aux__H3ZPQ211render_data11entity_infoZUiZQ211render_data11entity_info_X01X11RCX21G12__false_type_X01
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
) __asm__("__uninitialized_fill_n_aux__H3ZPQ211render_data11entity_infoZUiZQ211render_data11entity_info_X01X11RCX21G12__false_type_X01");

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

#if defined(KELLY_DECOMP_FUNCTION_0010FA88)
// 0x0010FA88 __uninitialized_fill_n_aux__H3ZP16ai_polypath_nodeZUiZ16ai_polypath_node_X01X11RCX21G12__false_type_X01
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
) __asm__("__uninitialized_fill_n_aux__H3ZP16ai_polypath_nodeZUiZ16ai_polypath_node_X01X11RCX21G12__false_type_X01");

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

#if defined(KELLY_DECOMP_FUNCTION_0010EBB8)
// 0x0010EBB8 __uninitialized_copy_aux__H2ZPQ211render_data11entity_infoZPQ211render_data11entity_info_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct entity_info {
    int first;
    int second;
};

extern "C" entity_info *UninitializedCopy(
    entity_info *first,
    entity_info *last,
    entity_info *result
) __asm__("__uninitialized_copy_aux__H2ZPQ211render_data11entity_infoZPQ211render_data11entity_info_X01X01X11G12__false_type_X11");

entity_info *UninitializedCopy(
    entity_info *first,
    entity_info *last,
    entity_info *result
) {
    while (first != last) {
        if (result) {
            new (result) entity_info(*first);
        }
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0010FA20)
// 0x0010FA20 __uninitialized_copy_aux__H2ZP16ai_polypath_nodeZP16ai_polypath_node_X01X01X11G12__false_type_X11
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
) __asm__("__uninitialized_copy_aux__H2ZP16ai_polypath_nodeZP16ai_polypath_node_X01X01X11G12__false_type_X11");

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
