// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0033BD68) || \
    defined(KELLY_DECOMP_FUNCTION_0033BDB0) || \
    defined(KELLY_DECOMP_FUNCTION_00339FD8)
#include "KS/SRC/text_font_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_00339FD8)
// 0x00339FD8 __4Font
Font::Font()
{
    clear_glyph_info();
    m_texwidth = 0;
    m_texheight = 0;
    m_refcount = 0;
    max_width = 0;
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_0033BDB0)
// 0x0033BDB0 getIndex__4Fontc
int Font::getIndex(char c)
{
    unsigned char c1 = (unsigned char)c;
    for (int i = 0; i < numGlyphs; i++)
        if (m_chars[i].ascii == c1)
            return i;
    return -1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033BD68)
// 0x0033BD68 getGlyph__4Fontc
__asm__(".equ getIndex__4Fontc, 0x0033BDB0");

Font::glyph_info *Font::getGlyph(char c) {
    int which = getIndex(c);
    glyph_info *result = 0;
    if (which >= 0)
        result = &m_chars[which];
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033D458)
// 0x0033D458 typeface_close__FP12typeface_def
__asm__(".equ typeface_list, 0x0058AA90"); __asm__(".equ remove__t4list2ZP12typeface_defZt12my_allocator1ZP12typeface_defRCP12typeface_def, 0x003584E0"); __asm__(".equ _$_12typeface_def, 0x0033C5D0");
class typeface_def{public:char p[5152];int usercount;~typeface_def();};template<class T>class my_allocator{};template<class T,class A>class list{public:void remove(const T&);};extern list<typeface_def*,my_allocator<typeface_def*> > typeface_list;void typeface_close(typeface_def*tdefptr){if(!tdefptr->usercount){typeface_list.remove(tdefptr);delete tdefptr;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033A028)
// 0x0033A028 _$_4Font
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void FontDtor(void *self, int deleting) __asm__("_$_4Font");
void FontDtor(void *self, int deleting) {
    StringDtor((char *)self+0x242c,2);
    StringDtor((char *)self+0x2408,2);
    if (deleting&1) {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
