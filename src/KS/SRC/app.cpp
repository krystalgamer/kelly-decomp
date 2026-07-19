// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0030BC50)
// 0x0030BC50 get_signal_name__C3appUi
extern const char app_signal_name[];
__asm__(".equ app_signal_name, 0x004F5030");
class app { public: const char* get_signal_name(unsigned int index) const; };
const char* app::get_signal_name(unsigned int index) const { return app_signal_name; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030C8D8)
// 0x0030C8D8 get_viri__3app
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030C8E0)
// 0x0030C8E0 set_viri__3appP20instance_render_info
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
#endif
