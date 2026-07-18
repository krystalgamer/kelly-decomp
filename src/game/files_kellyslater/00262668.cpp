struct PhotoRecord {
    void* texture;
    int score;
    bool special;

    int* GetScore() {
        return &score;
    }
};
class PhotoChallenge { char padding[0x30]; PhotoRecord* photos; public: int* GetPhotoScore(int index) const; };
int* PhotoChallenge::GetPhotoScore(int index) const {
    return photos[index].GetScore();
}
