class TextString {
    char padding[0x34];
    float button_scale;
public:
    float GetButtonScale() const;
};

float TextString::GetButtonScale() const {
    return button_scale;
}
