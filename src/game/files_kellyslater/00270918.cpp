class MenuEntryFunctionFloatEdit {
    char padding[0xC];
    float* tfloat;
public:
    void SetValue(float value);
};

void MenuEntryFunctionFloatEdit::SetValue(float value) {
    *tfloat = value;
}
