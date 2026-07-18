class look_back_camera {
    char padding[0x30C];
    bool first_time;
public:
    void init();
};

void look_back_camera::init() {
    first_time = true;
}
