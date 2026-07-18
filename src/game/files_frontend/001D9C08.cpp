class PanelQuad {
    char padding[0x88];
    float rotation;
public:
    float GetRotation() const;
};

float PanelQuad::GetRotation() const {
    return rotation;
}
