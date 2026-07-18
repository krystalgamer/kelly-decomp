class generic_anim_animal {
    char padding[0x28];
    int state;
public:
    void spawn();
};

void generic_anim_animal::spawn() {
    state = 2;
}
