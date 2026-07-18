class TextString {
    char padding[0x20];
    bool even_number_spacing;
public:
    void numberSpacing(bool on);
};

void TextString::numberSpacing(bool on) {
    even_number_spacing = on;
}
