class ps2_joypad_device {
    char padding[0x6C];
    int disconnected;
public:
    bool is_connected() const;
};

bool ps2_joypad_device::is_connected() const {
    return disconnected == 0;
}
