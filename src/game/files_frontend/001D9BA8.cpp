class PanelQuad {
    char padding[0xC0];
    float width_a;
public:
    float GetWidthA();
};

float PanelQuad::GetWidthA() {
    return width_a;
}
