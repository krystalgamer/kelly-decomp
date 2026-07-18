class instance_render_info;

class app {
    char padding[0x14];
    instance_render_info* viri;
public:
    instance_render_info* get_viri();
};

instance_render_info* app::get_viri() {
    return viri;
}
