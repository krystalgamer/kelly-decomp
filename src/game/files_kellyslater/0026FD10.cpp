class generic_anim_misc {
    char padding[0x34];
    int state;
public:
    void spawn();
};

void generic_anim_misc::spawn() {
    state = 5;
}
