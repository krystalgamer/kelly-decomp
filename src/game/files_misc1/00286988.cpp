class game_process {
    char padding[0x8];
    int index;
public:
    void reset_index();
};

void game_process::reset_index() {
    index = 0;
}
