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

#if defined(KELLY_DECOMP_FUNCTION_0033C6C8)
// 0x0033C6C8 open__12typeface_defRC7stringx
class stringx { public: stringx &operator=(const stringx &other); };
__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
class typeface_def { char padding[0x1418]; stringx m_name; public: void open(const stringx &name); };
void typeface_def::open(const stringx &name) { m_name = name; KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033A0A8)
// 0x0033A0A8 clear_glyph_info__4Font
extern "C" void *memset(void *destination, int value, unsigned int size);
__asm__(".equ memset, 0x003D18D0");
class Font { char padding[8]; char glyphs[9216]; public: void clear_glyph_info(); };
void Font::clear_glyph_info() { memset(glyphs, 0, 9216); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
