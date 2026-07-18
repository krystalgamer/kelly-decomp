class Track {
    char padding[0x8];
    bool paused;
public:
    Track();
};

Track::Track() {
    paused = false;
}
