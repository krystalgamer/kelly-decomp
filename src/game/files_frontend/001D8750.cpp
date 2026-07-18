class Font {
public:
    enum VERTJUST { VERTJUST_TOP };
};

class TextString {
    char padding[0x1C];
    Font::VERTJUST vJustify;
public:
    Font::VERTJUST GetVJustify() const;
};

Font::VERTJUST TextString::GetVJustify() const {
    return vJustify;
}
