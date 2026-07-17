class PanelQuad {
    char padding[0x114];
    bool clip;

public:
    void SetClip(bool enabled);
};

void PanelQuad::SetClip(bool enabled) {
    clip = enabled;
}
