class BoxText {
    char padding[0x74];
    bool non_floating_behavior;
public:
    void SetBehavior(bool nfb);
};

void BoxText::SetBehavior(bool nfb) {
    non_floating_behavior = nfb;
}
