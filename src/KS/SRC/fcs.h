// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003003A0)
// 0x003003A0 frame_advance__20force_control_systemf
class force_control_system {
    char padding[0xC];
    bool locked;
public:
    void frame_advance(float time_inc);
};

void force_control_system::frame_advance(float time_inc) {
    locked = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003003A8)
// 0x003003A8 reset_targets__20force_control_system
class force_control_system {
public:
    void reset_targets();
};

void force_control_system::reset_targets() {
}
#endif
