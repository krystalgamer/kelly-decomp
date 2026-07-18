class game {
    char padding[0xB4];
    int num_ai_players;
public:
    void set_num_ai_players(int count);
};

void game::set_num_ai_players(int count) {
    num_ai_players = count;
}
