class PanelQuad {
    char padding[0x80];
    bool drawOn;
public:
    void TurnOn(bool on);
};

void PanelQuad::TurnOn(bool on) {
    drawOn = on;
}
