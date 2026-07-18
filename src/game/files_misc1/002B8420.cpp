class beam_effect {
    char padding[0xA];
    signed char mode;
public:
    bool is_dead() const;
};

bool beam_effect::is_dead() const {
    return mode == 0;
}
