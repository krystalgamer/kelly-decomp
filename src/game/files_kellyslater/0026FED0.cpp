class generic_anim_ice {
    char padding[0x2C];
    int state;
public:
    void spawn();
};

void generic_anim_ice::spawn() {
    state = 3;
}
