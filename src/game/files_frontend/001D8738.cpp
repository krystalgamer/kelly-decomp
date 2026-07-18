class TextString {
    char padding[0x20];
    bool even_number_spacing;
public:
    bool GetNumberSpacing() const;
};

bool TextString::GetNumberSpacing() const {
    return even_number_spacing;
}
