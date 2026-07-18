class Font {
public:
    enum HORIZJUST { HORIZJUST_LEFT };
};

class TextString {
    char padding[0x18];
    Font::HORIZJUST hJustify;
public:
    Font::HORIZJUST GetHJustify() const;
};

Font::HORIZJUST TextString::GetHJustify() const {
    return hJustify;
}
