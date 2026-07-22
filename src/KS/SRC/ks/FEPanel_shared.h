#ifndef KELLY_DECOMP_FE_PANEL_SHARED_H
#define KELLY_DECOMP_FE_PANEL_SHARED_H

#include "KS/SRC/stringx.h"

class Font {
public:
    enum HORIZJUST {
        HORIZJUST_CENTER
    };

    enum VERTJUST {
        VERTJUST_CENTER
    };
};

class TextString {
protected:
    Font *font;
    stringx text;
    float x;
    float y;
    int z;
    Font::HORIZJUST hJustify;
    Font::VERTJUST vJustify;
    bool even_number_spacing;
    int fade;
    float fade_alpha;
    float fade_timer;
    float scale;
    float button_scale;
    bool override_alpha;

public:
    virtual void changeText(stringx value);
    static void MakeReplacements(stringx &value);
};

#endif
