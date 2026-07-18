class FloatingPQ {
    char padding[0xB8];
    float width;
public:
    void SetWidth(float value);
};

void FloatingPQ::SetWidth(float value) {
    width = value;
}
