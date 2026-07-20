// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00338110)
// 0x00338110 peek_char__9text_file
class text_file { public: char padding0[0x7c]; char *buffer; int index; char padding1[8]; int pushed_char; int peek_char(); };
int text_file::peek_char() { if (pushed_char >= 0) return (signed char)pushed_char; register int saved_index __asm__("$3") = index; __asm__ volatile("" : "+r"(saved_index)); register char *saved_buffer __asm__("$2") = buffer; return (signed char)saved_buffer[saved_index]; }
#endif
