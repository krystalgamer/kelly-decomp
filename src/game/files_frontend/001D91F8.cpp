class FloatingText {
    char padding[0xDC];
    bool non_floating_behavior;
public:
    void SetBehavior(bool nfb);
};

void FloatingText::SetBehavior(bool nfb) {
    non_floating_behavior = nfb;
}
