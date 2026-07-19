// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E14D8)
// 0x001E14D8 get_id__C17ps2_joypad_device
class ps2_joypad_device {
    int device_id;
public:
    int get_id() const;
};

int ps2_joypad_device::get_id() const {
    return device_id;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E16C0)
// 0x001E16C0 get_axis_count__C17ps2_joypad_device
class ps2_joypad_device {
public:
    int get_axis_count() const;
};

int ps2_joypad_device::get_axis_count() const {
    return 23;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E16C8)
// 0x001E16C8 get_axis_id__C17ps2_joypad_devicei
class ps2_joypad_device {
public:
    int get_axis_id(int axis) const;
};

int ps2_joypad_device::get_axis_id(int axis) const {
    return axis;
}
#endif
