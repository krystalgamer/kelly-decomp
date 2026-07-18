class beam {
    char padding[0x200];
    float thickness;
public:
    void set_thickness(float value);
};

void beam::set_thickness(float value) {
    thickness = value;
}
