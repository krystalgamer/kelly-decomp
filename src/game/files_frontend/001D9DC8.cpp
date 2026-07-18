class FloatingPQ {
    char padding[0xBC];
    float height;
public:
    void SetHeight(float value);
};

void FloatingPQ::SetHeight(float value) {
    height = value;
}
