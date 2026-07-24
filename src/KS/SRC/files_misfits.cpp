// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00310FF8)
// 0x00310FF8 __uninitialized_copy_aux__H2ZPC7stringxZP7stringx_X01X01X11G12__false_type_X11
struct stringx { char data[8]; };
extern "C" void copy_string(stringx *,const stringx *)
    __asm__("__7stringxRC7stringx");
__asm__(".equ __7stringxRC7stringx,0x0034D4D0");
extern "C" stringx *copy_strings(
    const stringx *first,const stringx *last,stringx *result
) __asm__("__uninitialized_copy_aux__H2ZPC7stringxZP7stringx_X01X01X11G12__false_type_X11");
stringx *copy_strings(
    const stringx *first,const stringx *last,stringx *result
) {
    while(first!=last) {
        if(result) copy_string(result,first);
        ++first; ++result;
    }
    return result;
}
#endif
