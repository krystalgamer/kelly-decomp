class particle_generator {
    char padding[0x2B4];
    float visual_radius;
public:
    float get_visual_radius() const;
};

float particle_generator::get_visual_radius() const {
    return visual_radius * 2.0f;
}
