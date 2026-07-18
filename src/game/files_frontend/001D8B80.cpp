class RandomText {
    char padding[0x50];
    bool isRand;
public:
    void unmakeRand();
};

void RandomText::unmakeRand() {
    isRand = false;
}
