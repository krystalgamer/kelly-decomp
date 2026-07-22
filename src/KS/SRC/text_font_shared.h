#ifndef KELLY_DECOMP_TEXT_FONT_SHARED_H
#define KELLY_DECOMP_TEXT_FONT_SHARED_H

class Font {
protected:
    char font_state[8];

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
    char glyph_state[20];
    int numGlyphs;

public:
    glyph_info *getGlyph(char c);
    int getIndex(char c);
};

#endif
