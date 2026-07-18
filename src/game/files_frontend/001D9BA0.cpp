class PanelQuad {
    char padding[0xBC];
    float height;
public:
    float GetHeight();
};

float PanelQuad::GetHeight() {
    return height;
}
