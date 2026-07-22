#ifndef KELLY_DECOMP_IGO_WIDGET_SHARED_H
#define KELLY_DECOMP_IGO_WIDGET_SHARED_H

typedef float time_value_t;

class PanelQuad {
    char data[0x194];

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
