// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EDB80)
// 0x002EDB80 load_locales__Fv
void load_locales() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EDB88)
// 0x002EDB88 localize_text_safe__FG7stringx
struct stringx{char*data;};extern "C" void lock(stringx*) __asm__("lock__7stringx");extern "C" void copy(stringx*,const stringx*) __asm__("__7stringxRC7stringx");extern "C" void destroy(stringx*,int) __asm__("_$_7stringx");__asm__(".equ lock__7stringx,0x001D84D0");__asm__(".equ __7stringxRC7stringx,0x0034D4D0");__asm__(".equ _$_7stringx,0x0034D6E0");extern "C" stringx*localize(stringx*result,stringx*src) __asm__("localize_text_safe__FG7stringx");stringx*localize(stringx*result,stringx*src){lock(src);if(src->data[0]!='$'){copy(result,src);__asm__ __volatile__("" : : : "memory");}else copy(result,src);destroy(src,2);return result;}
#endif
