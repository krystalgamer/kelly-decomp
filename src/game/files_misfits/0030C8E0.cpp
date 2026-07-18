class instance_render_info;

class app {
    char padding[0x14];
    instance_render_info* viri;
public:
    void set_viri(instance_render_info* value);
};

void app::set_viri(instance_render_info* value) {
    viri = value;
}
