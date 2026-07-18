class TextString {
    char padding[0x34];
    float button_scale;
public:
    void setButtonScale(float bs);
};

void TextString::setButtonScale(float bs) {
    button_scale = bs;
}
