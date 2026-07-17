class Font {
public:
    enum HORIZJUST {
        HORIZJUST_PLACEHOLDER
    };
};

class TextString {
    char padding[0x18];
    Font::HORIZJUST hJustify;

public:
    void setHJustify(Font::HORIZJUST justify);
};

void TextString::setHJustify(Font::HORIZJUST justify) {
    hJustify = justify;
}
