class beam_effect {
    char padding[0xA];
    signed char mode;
public:
    bool is_alive() const;
};

bool beam_effect::is_alive() const {
    return mode != 0;
}
