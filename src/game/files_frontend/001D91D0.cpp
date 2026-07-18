class FloatingText {
    char padding[0xD0];
    float real_scale;
public:
    void changeScale(float s);
};

void FloatingText::changeScale(float s) {
    real_scale = s;
}
