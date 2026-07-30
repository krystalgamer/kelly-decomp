#ifndef KELLY_DECOMP_IGO_WIDGET_SHARED_H
#define KELLY_DECOMP_IGO_WIDGET_SHARED_H

#include "KS/SRC/color.h"

typedef float time_value_t;

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
    char remaining_fields[0x178];

public:
    virtual ~PanelQuad();
    virtual void Init(
        float x1, float y1, float x2, float y2,
        float r, float g, float b, float a,
        float u1, float v1, float u2, float v2,
        float z, char *object_matrix
    );
    virtual void TurnOn(bool enabled);
    virtual void SetLayer(int layer);
    virtual void Rotate(float rotation);
    virtual void Rotate(float x, float y, float rotation);
    virtual void Update(time_value_t time_inc);
    virtual void Draw(int layer = 0, float alpha = -1.0f);
    void Mask(const float amount, const int type = 1) {
        mask = amount;
        maskType = type;
    }
    virtual void SetColor(
        const float red,
        const float green,
        const float blue,
        const float alpha
    );
    virtual void SetColor(const color value);
};

class IGOWidget {
protected:
    bool display;

public:
    virtual ~IGOWidget();
    virtual void SetDisplay(bool enabled = true);
    virtual void Update(float time_inc);
    virtual void Draw();
    virtual bool GetDisplay() const;
};

#endif
