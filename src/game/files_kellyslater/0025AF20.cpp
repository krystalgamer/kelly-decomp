class Career {
public:
    class Location {
        char padding[0x4];
        bool movie_unlocked;
    public:
        void UnlockMovie();
    };
};

void Career::Location::UnlockMovie() {
    movie_unlocked = true;
}
