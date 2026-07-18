struct game_flags {
    unsigned long long padding : 44;
    unsigned long long game_paused : 1;
};

class game {
    char padding[0xC8];
    game_flags flag;

public:
    bool is_paused() const;
};

bool game::is_paused() const {
    return flag.game_paused;
}
