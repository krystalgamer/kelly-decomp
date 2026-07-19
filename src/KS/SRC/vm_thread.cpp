// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00356640)
// 0x00356640 set_camera_priority__9vm_threadf
class vm_thread {
    char padding[0x38];
    float camera_priority;
public:
    void set_camera_priority(float value);
};

void vm_thread::set_camera_priority(float value) {
    camera_priority = value;
}
#endif
