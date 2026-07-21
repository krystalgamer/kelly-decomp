// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00358148)
// 0x00358148 __uninitialized_fill_n_aux__H3ZPQ212typeface_def10inter_kernZUiZQ212typeface_def10inter_kern_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) { return place; }
struct inter_kern { int first_letter; int second_letter; int kern; };
extern "C" inter_kern *UninitializedFill(inter_kern *first, unsigned int count, const inter_kern &value)
    __asm__("__uninitialized_fill_n_aux__H3ZPQ212typeface_def10inter_kernZUiZQ212typeface_def10inter_kern_X01X11RCX21G12__false_type_X01");
inter_kern *UninitializedFill(inter_kern *first, unsigned int count, const inter_kern &value)
{
    while (count) {
        if (first)
            new (first) inter_kern(value);
        --count;
        ++first;
    }
    return first;
}
#endif
