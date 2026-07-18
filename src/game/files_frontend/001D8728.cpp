class TextString {
    char padding[0x30];
    float scale;
public:
    float GetScale() const;
};

float TextString::GetScale() const {
    return scale;
}
