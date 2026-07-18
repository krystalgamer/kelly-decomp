class PanelQuad {
    char padding[0x94];
    int layer;
public:
    void SetLayer(int value);
};

void PanelQuad::SetLayer(int value) {
    layer = value;
}
