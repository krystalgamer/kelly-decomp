class entity {
    char padding[0x144];
    float visual_xz_radius;

public:
    float get_visual_xz_radius_rel_center() const;
};

float entity::get_visual_xz_radius_rel_center() const {
    return visual_xz_radius;
}
