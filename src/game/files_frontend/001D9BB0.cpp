class PanelQuad {
    char padding[0xC4];
    float height_a;
public:
    float GetHeightA();
};

float PanelQuad::GetHeightA() {
    return height_a;
}
