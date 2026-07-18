class frame_info {
    char padding[0x8];
    int ifl_frame_locked;
public:
    int get_ifl_frame_locked() const;
};

int frame_info::get_ifl_frame_locked() const {
    return ifl_frame_locked;
}
