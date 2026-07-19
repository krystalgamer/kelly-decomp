// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E9728)
// 0x001E9728 is_connected__C17ps2_joypad_device
class ps2_joypad_device {
    char padding[0x6C];
    int disconnected;
public:
    bool is_connected() const;
};

bool ps2_joypad_device::is_connected() const {
    return disconnected == 0;
}
#endif
