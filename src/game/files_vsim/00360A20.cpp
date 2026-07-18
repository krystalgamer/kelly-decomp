class vrep_widget {
    char padding[0x148];
    float screen_radius;
public:
    float get_height();
};

float vrep_widget::get_height() {
    return screen_radius;
}
