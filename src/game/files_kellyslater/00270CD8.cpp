class MenuEntryFloatEdit {
    char padding[0xC];
    float* tfloat;
public:
    void SetValue(float value);
};

void MenuEntryFloatEdit::SetValue(float value) {
    *tfloat = value;
}
