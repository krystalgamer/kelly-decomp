// Matching decompilation blocks selected by generated build shims.

// 0x00339FD8 __4Font
#include "KS/SRC/text_font.h"
Font::Font()
{
    clear_glyph_info();
    m_texwidth = 0;
    m_texheight = 0;
    m_refcount = 0;
    max_width = 0;
}

// 0x0033C1E8 get_char_info__C8font_defc
#include "KS/SRC/text_font.h"

char_info* font_def::get_char_info(char value) const { return (char_info*)&characters[(int)value]; }

// 0x0033A080 unload__4Font
#include "KS/SRC/text_font.h"
__asm__(".equ clear_glyph_info__4Font, 0x0033A0A8");
void Font::unload() { clear_glyph_info(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x0033C6C8 open__12typeface_defRC7stringx
class stringx { public: stringx &operator=(const stringx &other); };
__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
class typeface_def { char padding[0x1418]; stringx m_name; public: void open(const stringx &name); };
void typeface_def::open(const stringx &name) { m_name = name; KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x0033A0A8 clear_glyph_info__4Font
#include "KS/SRC/text_font.h"
extern "C" void *memset(void *destination, int value, unsigned int size);
__asm__(".equ memset, 0x003D18D0");
void Font::clear_glyph_info() { memset(m_chars, 0, sizeof(m_chars)); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x0033BDB0 getIndex__4Fontc
#include "KS/SRC/text_font.h"
int Font::getIndex(char c)
{
    unsigned char c1 = (unsigned char)c;
    for (int i = 0; i < numGlyphs; i++)
        if (m_chars[i].ascii == c1)
            return i;
    return -1;
}

// 0x0033BD68 getGlyph__4Fontc
#include "KS/SRC/text_font.h"
__asm__(".equ getIndex__4Fontc, 0x0033BDB0");

Font::glyph_info *Font::getGlyph(char c) {
    int which = getIndex(c);
    glyph_info *result = 0;
    if (which >= 0)
        result = &m_chars[which];
    return result;
}

// 0x0033D458 typeface_close__FP12typeface_def
__asm__(".equ typeface_list, 0x0058AA90"); __asm__(".equ remove__t4list2ZP12typeface_defZt12my_allocator1ZP12typeface_defRCP12typeface_def, 0x003584E0"); __asm__(".equ _$_12typeface_def, 0x0033C5D0");
class typeface_def{public:char p[5152];int usercount;~typeface_def();};template<class T>class my_allocator{};template<class T,class A>class list{public:void remove(const T&);};extern list<typeface_def*,my_allocator<typeface_def*> > typeface_list;void typeface_close(typeface_def*tdefptr){if(!tdefptr->usercount){typeface_list.remove(tdefptr);delete tdefptr;}}

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

// 0x0033BBE8 CheckArtButtonCodes__4FontPCcRiT2
struct font_string_buffer
{
    void *data;
    int ref_count;
    int length;
};

class stringx
{
    char *characters;
    font_string_buffer *buffer;

public:
    stringx(const stringx &other);
    ~stringx();

    inline const char *c_str() const
    {
        return characters;
    }

    inline int length() const
    {
        return buffer->length;
    }
};

class Font;

extern stringx ksGlobalButtonArray[20];
extern "C" int strncmp(
    const char *left,
    const char *right,
    unsigned int length
);

__asm__(".equ ksGlobalButtonArray, 0x003E74A0");
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ strncmp, 0x003D4350");

extern "C" bool FontCheckArtButtonCodes(
    Font *self,
    const char *text,
    int &length,
    int &button_index
) __asm__("CheckArtButtonCodes__4FontPCcRiT2");

bool FontCheckArtButtonCodes(
    Font *self,
    const char *text,
    int &length,
    int &button_index
)
{
    for (int i = 0; i < 20; i++)
    {
        stringx temporary = ksGlobalButtonArray[i];
        if (
            strncmp(
                text,
                temporary.c_str(),
                temporary.length()
            ) == 0
        )
        {
            length = temporary.length();
            button_index = i;
            return true;
        }
    }
    return false;
}
