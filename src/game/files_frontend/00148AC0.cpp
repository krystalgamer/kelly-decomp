class Font;
class MultiLineString { char padding[0x58]; Font* fonts[20]; public: void addFont(int index, Font* font); };
void MultiLineString::addFont(int index, Font* font) { fonts[index] = font; }
