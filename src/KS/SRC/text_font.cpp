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

#if defined(KELLY_DECOMP_FUNCTION_0033BDB0)
// 0x0033BDB0 getIndex__4Fontc
class Font {
    char prefix[8];
    struct glyph_info {
        unsigned char ascii;
        unsigned int cell_x, cell_y;
        unsigned int cell_width, cell_height;
        unsigned int glyph_x, glyph_y;
        unsigned int glyph_width, glyph_height;
    };
    glyph_info m_chars[256];
    char padding[20];
    int numGlyphs;
public:
    int getIndex(char c);
};
int Font::getIndex(char c)
{
    unsigned char c1 = (unsigned char)c;
    for (int i = 0; i < numGlyphs; i++)
        if (m_chars[i].ascii == c1)
            return i;
    return -1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033D458)
// 0x0033D458 typeface_close__FP12typeface_def
__asm__(".equ typeface_list, 0x0058AA90"); __asm__(".equ remove__t4list2ZP12typeface_defZt12my_allocator1ZP12typeface_defRCP12typeface_def, 0x003584E0"); __asm__(".equ _$_12typeface_def, 0x0033C5D0");
class typeface_def{public:char p[5152];int usercount;~typeface_def();};template<class T>class my_allocator{};template<class T,class A>class list{public:void remove(const T&);};extern list<typeface_def*,my_allocator<typeface_def*> > typeface_list;void typeface_close(typeface_def*tdefptr){if(!tdefptr->usercount){typeface_list.remove(tdefptr);delete tdefptr;}}
#endif
