class TextString {
    char padding[0x30];
    float scale;
public:
    void changeScale(float s);
};

void TextString::changeScale(float s) {
    scale = s;
}
