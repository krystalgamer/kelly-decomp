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

class PanelQuad {
    char panel_quad_data[0x1a0];

public:
    void SetPos(float x1, float y1, float x2, float y2);
};

class FloatingPQ : public PanelQuad {
    float location_3d[4];
    float location_2d[4];
    float scale;
    int h_just;
    float width_f;
    float height_f;
    float x1_const;
    float x2_const;
    float y1_const;
    float y2_const;

public:
    void SetPos(float x1, float y1, float x2, float y2);
};

#endif
