class PhotoChallenge {
public:
    class Photo {
        char padding[0x4];
        int score;
        bool isOfSpecialTrick;
    public:
        void Reset();
    };
};

void PhotoChallenge::Photo::Reset() {
    score = 0;
    isOfSpecialTrick = false;
}
