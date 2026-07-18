class force_control_system {
    char padding[0xC];
    bool locked;
public:
    void frame_advance(float time_inc);
};

void force_control_system::frame_advance(float time_inc) {
    locked = false;
}
