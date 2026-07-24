// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B4518)
// 0x002B4518 __uninitialized_copy_aux__H2ZPQ221world_dynamics_system14ent_time_limitZPQ221world_dynamics_system14ent_time_limit_X01X01X11G12__false_type_X11
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
) __asm__("__uninitialized_copy_aux__H2ZPQ221world_dynamics_system14ent_time_limitZPQ221world_dynamics_system14ent_time_limit_X01X01X11G12__false_type_X11");

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

#if defined(KELLY_DECOMP_FUNCTION_002B6DC0)
// 0x002B6DC0 __uninitialized_fill_n_aux__H3ZP11wedge_splitZUiZ11wedge_split_X01X11RCX21G12__false_type_X01
struct wedge_split { char data[16]; };
extern "C" void copy_wedge(wedge_split *,const wedge_split *)
    __asm__("__11wedge_splitRC11wedge_split");
__asm__(".equ __11wedge_splitRC11wedge_split, 0x002B6C80");
extern "C" wedge_split *fill_wedges(
    wedge_split *result,unsigned int count,const wedge_split *value
) __asm__("__uninitialized_fill_n_aux__H3ZP11wedge_splitZUiZ11wedge_split_X01X11RCX21G12__false_type_X01");
wedge_split *fill_wedges(
    wedge_split *result,unsigned int count,const wedge_split *value
) {
    while (count) {
        if (result) copy_wedge(result,value);
        --count; ++result;
    }
    return result;
}
#endif
