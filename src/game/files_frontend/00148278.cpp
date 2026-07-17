class Font {
public:
    enum VERTJUST {
        VERTJUST_PLACEHOLDER
    };
};

class TextString {
    char padding[0x1C];
    Font::VERTJUST vJustify;

public:
    void setVJustify(Font::VERTJUST justify);
};

void TextString::setVJustify(Font::VERTJUST justify) {
    vJustify = justify;
}
