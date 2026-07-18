class ps2_joypad_device {
public:
    int get_axis_id(int axis) const;
};

int ps2_joypad_device::get_axis_id(int axis) const {
    return axis;
}
