class vrep_widget {
    char padding[0x148];
    float screen_radius;
public:
    float get_width();
};

float vrep_widget::get_width() {
    return screen_radius;
}
