class Font;

class MultiLineString {
    Font* font;
    char padding[0x54];
    Font* fonts[1];
public:
    void setFont(Font* value);
};

void MultiLineString::setFont(Font* value) {
    fonts[0] = value;
    font = value;
}
