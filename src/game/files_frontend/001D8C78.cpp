class BoxText {
    char padding[0xA0];
    float real_scale;
public:
    void changeScale(float s);
};

void BoxText::changeScale(float s) {
    real_scale = s;
}
