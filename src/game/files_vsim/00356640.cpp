class vm_thread {
    char padding[0x38];
    float camera_priority;
public:
    void set_camera_priority(float value);
};

void vm_thread::set_camera_priority(float value) {
    camera_priority = value;
}
