class ps2_joypad_device {
    int device_id;
public:
    int get_id() const;
};

int ps2_joypad_device::get_id() const {
    return device_id;
}
