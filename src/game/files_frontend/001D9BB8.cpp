class PanelQuad {
    char padding[0xA4];
    float a;
public:
    void SetAlpha(float alpha);
};

void PanelQuad::SetAlpha(float alpha) {
    a = alpha;
}
