class PanelQuad {
    char padding[0x80];
    bool drawOn;
public:
    bool IsOn() const;
};

bool PanelQuad::IsOn() const {
    return drawOn;
}
