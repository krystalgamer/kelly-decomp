class Font;

class TextString {
    Font* font;
public:
    void setFont(Font* f);
};

void TextString::setFont(Font* f) {
    font = f;
}
