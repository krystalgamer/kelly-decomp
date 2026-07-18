class Font;

class TextString {
    Font* font;
public:
    Font* GetFont();
};

Font* TextString::GetFont() {
    return font;
}
