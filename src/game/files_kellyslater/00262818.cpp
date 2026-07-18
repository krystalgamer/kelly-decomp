class PhotoChallenge {
public:
    class Cameraman {
        char padding[0xC];
        int state;
    public:
        void Reset();
    };
};

void PhotoChallenge::Cameraman::Reset() {
    state = 0;
}
