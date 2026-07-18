class marky_camera {
    char padding[0x2E0];
    bool do_collide_with_world;
public:
    void camera_set_collide_with_world(bool value);
};

void marky_camera::camera_set_collide_with_world(bool value) {
    do_collide_with_world = value;
}
