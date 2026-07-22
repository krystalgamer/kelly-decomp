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

#ifndef KELLY_DECOMP_COLOR32_DEFINED
#define KELLY_DECOMP_COLOR32_DEFINED
struct color32 {
    unsigned int value;
};
#endif

class vector3d {
public:
    float x;
    float y;
    float z;

    vector3d() {}
    vector3d(const vector3d &value) : x(value.x), y(value.y), z(value.z) {}
    vector3d(float x_value, float y_value, float z_value)
        : x(x_value), y(y_value), z(z_value) {}
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
    bool checkTime;
    float time;
    bool no_color;
    color32 color;

    virtual ~TextString() {}
    virtual void Update(float time_inc);
    virtual void Draw();
    virtual void setHJustify(Font::HORIZJUST hjust);
    virtual void setVJustify(Font::VERTJUST vjust);
    virtual void setFont(Font *value);
    virtual void setButtonScale(float value);
    virtual void numberSpacing(bool enabled);
    virtual void changeText(stringx value);
    virtual void changeScale(float value);
    virtual void changePos(float x, float y);
    virtual void changeX(float x);
    virtual void changeY(float y);
    virtual void changeZ(int z);
    virtual void ChangeFade(bool start, bool fade_in, float time = 2.0f);
    virtual void SetFade(float alpha);
    virtual float getX();
    virtual float getY();
    virtual int getZ();
    virtual stringx getText();
    virtual float GetScale() const;
    virtual float GetButtonScale() const;
    virtual bool GetNumberSpacing() const;
    virtual Font *GetFont();
    virtual Font::HORIZJUST GetHJustify() const;
    virtual Font::VERTJUST GetVJustify() const;
    virtual void setLineSpacing(int spacing);
    virtual void resetLineSpacing();
    virtual void UpdateInScene(bool ignore_scale = false);
    virtual void SetLocation3D(vector3d location);
    virtual vector3d GetLocation3D();
    virtual void SetBehaviorNF(float x, float y);
    virtual void SetBehavior(bool non_floating);
    static void MakeReplacements(stringx &value);
};

class MultiLineString : public TextString {
protected:
    int vSpacing;
    int line_num;
    Font *fonts[20];
};

class PanelAnim;

class PanelQuad {
protected:
    bool isAnim;
    int fade;
    float fade_alpha;
    float fade_timer;
    float mask;
    int maskType;
    PanelAnim *anim;
    char quad[0x64];
    bool drawOn;
    char panel_quad_tail[0x19c - 0x84];

public:
    virtual ~PanelQuad() {}
    virtual void Init(
        float x1, float y1, float x2, float y2,
        float r, float g, float b, float a,
        float u1, float v1, float u2, float v2,
        float z, char object_matrix[0x40]
    );
    virtual void TurnOn(bool enabled) { drawOn = enabled; }
    void ToggleOn() { drawOn = !drawOn; }
    void ChangeFade(bool start, bool fade_in, float time = 2.0f);
    void Mask(float amount, int type = 1) { mask = amount; maskType = type; }
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
