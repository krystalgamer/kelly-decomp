class ps2_joypad_device {
public:
    int get_axis_count() const;
};

int ps2_joypad_device::get_axis_count() const {
    return 23;
}
