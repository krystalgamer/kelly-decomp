class marky_camera {
    char padding[0x2DC];
    float roll;
public:
    void camera_set_roll(float angle);
};

void marky_camera::camera_set_roll(float angle) {
    roll = angle;
}
