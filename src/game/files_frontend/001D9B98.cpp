class PanelQuad {
    char padding[0xB8];
    float width;
public:
    float GetWidth();
};

float PanelQuad::GetWidth() {
    return width;
}
