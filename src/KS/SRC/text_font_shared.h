#ifndef KELLY_DECOMP_TEXT_FONT_SHARED_H
#define KELLY_DECOMP_TEXT_FONT_SHARED_H

class stringx {
    char *characters;
    void *buffer;

public:
    stringx();
};

class nglTexture;

class Font {
public:
    bool unset;
    int max_width;

protected:
    struct glyph_info {
        unsigned char ascii;
        unsigned int cell_x;
        unsigned int cell_y;
        unsigned int cell_width;
        unsigned int cell_height;
        unsigned int glyph_x;
        unsigned int glyph_y;
        unsigned int glyph_width;
        unsigned int glyph_height;
    };

    glyph_info m_chars[256];
    stringx m_texname;
    unsigned int m_texwidth;
    unsigned int m_texheight;
    nglTexture *texture;
    int numGlyphs;
    float m_ascent;
    float m_descent;
    float m_scale;
    stringx filename;
    int m_refcount;

public:
    Font();
    void clear_glyph_info();
    glyph_info *getGlyph(char c);
    int getIndex(char c);
};

__asm__(".equ __7stringx, 0x0034D3E0");
__asm__(".equ clear_glyph_info__4Font, 0x0033A0A8");

#endif
