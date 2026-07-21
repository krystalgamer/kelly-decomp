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

#if defined(KELLY_DECOMP_FUNCTION_00356B78)
// 0x00356B78 __uninitialized_copy_aux__H2ZPCt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) { return place; }
struct hw_texture { int ref_count; };
class texture_refptr { hw_texture *value; public: texture_refptr(const texture_refptr &other) : value(other.value) { if (value) ++value->ref_count; } };
extern "C" texture_refptr *UninitializedCopy(const texture_refptr *first, const texture_refptr *last, texture_refptr *result) __asm__("__uninitialized_copy_aux__H2ZPCt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11");
texture_refptr *UninitializedCopy(const texture_refptr *first, const texture_refptr *last, texture_refptr *result)
{
    while (first != last) {
        if (result) new (result) texture_refptr(*first);
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00357358)
// 0x00357358 __uninitialized_copy_aux__H2ZPt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) { return place; }
struct hw_texture { int ref_count; };
class texture_refptr { hw_texture *value; public: texture_refptr(const texture_refptr &other) : value(other.value) { if (value) ++value->ref_count; } };
extern "C" texture_refptr *UninitializedCopy(texture_refptr *first, texture_refptr *last, texture_refptr *result) __asm__("__uninitialized_copy_aux__H2ZPt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11");
texture_refptr *UninitializedCopy(texture_refptr *first, texture_refptr *last, texture_refptr *result)
{
    while (first != last) {
        if (result) new (result) texture_refptr(*first);
        ++first;
        ++result;
    }
    return result;
}
#endif
