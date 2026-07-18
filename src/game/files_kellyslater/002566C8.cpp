class RandomVO {
    char padding[0x18];
    int lastSource;
public:
    int getLastSourcePlayed();
};

int RandomVO::getLastSourcePlayed() {
    return lastSource;
}
