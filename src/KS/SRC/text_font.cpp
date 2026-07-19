// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0033C1E8)
// 0x0033C1E8 get_char_info__C8font_defc
struct char_info { char data[24]; };
class font_def { char_info characters[256]; public: char_info* get_char_info(char value) const; };
char_info* font_def::get_char_info(char value) const { return (char_info*)&characters[(int)value]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033A080)
// 0x0033A080 unload__4Font
class Font { public: void clear_glyph_info(); void unload(); };
__asm__(".equ clear_glyph_info__4Font, 0x0033A0A8");
void Font::unload() { clear_glyph_info(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
