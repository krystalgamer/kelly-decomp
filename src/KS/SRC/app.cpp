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

#if defined(KELLY_DECOMP_FUNCTION_0030C458)
// 0x0030C458 cleanup_stl_memory_dregs__3app
class anim_id_manager { public: void stl_dealloc(); };
extern anim_id_manager *anim_id_manager_instance;
__asm__(".equ anim_id_manager_instance, 0x003E5A58");
__asm__(".equ stl_dealloc__15anim_id_manager, 0x001281F8");
class app { public: static void cleanup_stl_memory_dregs(); };
void app::cleanup_stl_memory_dregs() { anim_id_manager_instance->stl_dealloc(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
