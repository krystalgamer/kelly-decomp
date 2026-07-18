class Career {
public:
    class Location {
        char padding[0x8];
        bool movie_shown;
    public:
        void SetMovieShown();
    };
};

void Career::Location::SetMovieShown() {
    movie_shown = true;
}
