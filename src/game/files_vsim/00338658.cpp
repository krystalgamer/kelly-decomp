class frame_info {
    char padding[0x8];
    int ifl_frame_locked;
public:
    void set_ifl_frame_locked(int value);
};

void frame_info::set_ifl_frame_locked(int value) {
    ifl_frame_locked = value;
}
