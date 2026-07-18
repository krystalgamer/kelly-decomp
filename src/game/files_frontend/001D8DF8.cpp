class TrickBoxText {
    char padding[0x50];
    bool isRand;
public:
    void unmakeRand();
};

void TrickBoxText::unmakeRand() {
    isRand = false;
}
