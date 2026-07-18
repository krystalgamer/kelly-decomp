class TextString {
    char padding[0x14];
    int z;
public:
    void changeZ(int value);
};

void TextString::changeZ(int value) {
    z = value;
}
