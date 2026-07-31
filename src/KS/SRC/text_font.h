#ifndef TEXT_FONT_H
#define TEXT_FONT_H

#include "KS/SRC/color.h"
#include "KS/SRC/stringx.h"

class nglTexture;

class Font {
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

public:
    enum HORIZJUST {
        HORIZJUST_LEFT,
        HORIZJUST_CENTER,
        HORIZJUST_RIGHT
    };
    enum VERTJUST {
        VERTJUST_TOP,
        VERTJUST_CENTER,
        VERTJUST_BOTTOM
    };

    bool unset;
    int max_width;

    Font();
    ~Font();
    bool load(const stringx &filename);
    void reload();
    void unload();
    bool is_loaded() const;
    void getColor(char value, color32 &color);
    float getScale(char value);
    glyph_info *getGlyph(char value);
    int getIndex(char value);
    float text_width(const stringx &text) const;
    float getWidth(
        stringx text,
        float scale = 1.0f,
        bool even_number_spacing = false,
        float art_button_scale = -1.0f);
    float text_height(const stringx &text) const;
    bool CheckArtButtonCodes(
        const char *text,
        int &length,
        int &button_index);
    float FindArtButtonRotation(int index);

protected:
    void clear_glyph_info();

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
    nglTexture *art_button_tex[20];
    int art_button_width[20];
    int art_button_height[20];
};

#endif
