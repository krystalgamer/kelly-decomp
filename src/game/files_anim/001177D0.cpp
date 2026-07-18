class anim_control {
    char padding[0x18];
    float timescale;
    char trailing_padding[0x20];

public:
    void set_timescale_factor(float value) {
        timescale = value;
    }
};

class entity_anim_tree {
    char padding[0x3C];
    anim_control control;
    anim_control control_b;

public:
    void set_timescale_factor(float value);
};

void entity_anim_tree::set_timescale_factor(float value) {
    control.set_timescale_factor(value);
    control_b.set_timescale_factor(value);
}
