// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031E0D0)
// 0x0031E0D0 __cl__34slf_localize_thread_to_character_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_localize_thread_to_character_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_localize_thread_to_character_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 1; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031EB90)
// 0x0031EB90 __cl__16slf_wait_frame_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;

class script_library_class {
public:
    class function {
    public:
        enum entry_t {
            FIRST_ENTRY
        };
    };
};

class slf_wait_frame_t {
public:
    bool operator()(vm_stack& stack, script_library_class::function::entry_t entry);
};

bool slf_wait_frame_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) {
    return entry != script_library_class::function::FIRST_ENTRY;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F048)
// 0x0031F048 __cl__19slf_post_message2_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_post_message2_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_post_message2_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 8; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F0D0)
// 0x0031F0D0 __cl__18slf_post_message_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_post_message_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_post_message_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 8; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F710)
// 0x0031F710 __cl__22slf_add_debug_sphere_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_add_debug_sphere_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_add_debug_sphere_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 16; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F798)
// 0x0031F798 __cl__25slf_clear_debug_spheres_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_clear_debug_spheres_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_clear_debug_spheres_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 16; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003201B0)
// 0x003201B0 __cl__18slf_letterbox_on_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_letterbox_on_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_letterbox_on_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320228)
// 0x00320228 __cl__19slf_letterbox_off_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_letterbox_off_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_letterbox_off_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003202A0)
// 0x003202A0 __cl__20slf_letterbox_cout_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_letterbox_cout_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_letterbox_cout_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 4; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320328)
// 0x00320328 __cl__14slf_fade_out_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_fade_out_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_fade_out_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003203A0)
// 0x003203A0 __cl__13slf_fade_in_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_fade_in_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_fade_in_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003239C8)
// 0x003239C8 __cl__21slf_freeze_universe_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_freeze_universe_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_freeze_universe_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 4; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DB20)
// 0x0031DB20 _$_26slf_allow_suspend_thread_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031DB20(void *self) __asm__("_$_26slf_allow_suspend_thread_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031DB20(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DBE0)
// 0x0031DBE0 _$_25slf_set_camera_priority_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031DBE0(void *self) __asm__("_$_25slf_set_camera_priority_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031DBE0(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DC80)
// 0x0031DC80 _$_22slf_enable_marky_cam_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031DC80(void *self) __asm__("_$_22slf_enable_marky_cam_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031DC80(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DD50)
// 0x0031DD50 _$_23slf_disable_marky_cam_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031DD50(void *self) __asm__("_$_23slf_disable_marky_cam_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031DD50(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DE20)
// 0x0031DE20 _$_17slf_freeze_hero_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031DE20(void *self) __asm__("_$_17slf_freeze_hero_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031DE20(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DEE8)
// 0x0031DEE8 _$_14slf_set_zoom_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031DEE8(void *self) __asm__("_$_14slf_set_zoom_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031DEE8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031DF98)
// 0x0031DF98 _$_21slf_localize_thread_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031DF98(void *self) __asm__("_$_21slf_localize_thread_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031DF98(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E060)
// 0x0031E060 _$_34slf_localize_thread_to_character_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E060(void *self) __asm__("_$_34slf_localize_thread_to_character_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E060(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E0E8)
// 0x0031E0E8 _$_28slf_localize_thread_region_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E0E8(void *self) __asm__("_$_28slf_localize_thread_region_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E0E8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E1D0)
// 0x0031E1D0 _$_22slf_globalize_thread_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E1D0(void *self) __asm__("_$_22slf_globalize_thread_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E1D0(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E270)
// 0x0031E270 _$_20slf_suspend_all_ai_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E270(void *self) __asm__("_$_20slf_suspend_all_ai_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E270(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E300)
// 0x0031E300 _$_22slf_unsuspend_all_ai_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E300(void *self) __asm__("_$_22slf_unsuspend_all_ai_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E300(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E390)
// 0x0031E390 _$_18slf_enable_pause_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E390(void *self) __asm__("_$_18slf_enable_pause_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E390(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E480)
// 0x0031E480 _$_22slf_enable_interface_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E480(void *self) __asm__("_$_22slf_enable_interface_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E480(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E570)
// 0x0031E570 _$_28slf_wait_animate_fog_color_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E570(void *self) __asm__("_$_28slf_wait_animate_fog_color_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E570(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E800)
// 0x0031E800 _$_31slf_wait_animate_fog_distance_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E800(void *self) __asm__("_$_31slf_wait_animate_fog_distance_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E800(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031E980)
// 0x0031E980 _$_32slf_wait_animate_fog_distances_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031E980(void *self) __asm__("_$_32slf_wait_animate_fog_distances_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031E980(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031EB20)
// 0x0031EB20 _$_16slf_wait_frame_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031EB20(void *self) __asm__("_$_16slf_wait_frame_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031EB20(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031EB98)
// 0x0031EB98 _$_11slf_delay_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031EB98(void *self) __asm__("_$_11slf_delay_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031EB98(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031EC60)
// 0x0031EC60 _$_15slf_abs_delay_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031EC60(void *self) __asm__("_$_15slf_abs_delay_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031EC60(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031ED70)
// 0x0031ED70 _$_19slf_dilated_delay_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031ED70(void *self) __asm__("_$_19slf_dilated_delay_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031ED70(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031EE48)
// 0x0031EE48 _$_14slf_vo_delay_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031EE48(void *self) __asm__("_$_14slf_vo_delay_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031EE48(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031EF18)
// 0x0031EF18 _$_17slf_area_damage_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031EF18(void *self) __asm__("_$_17slf_area_damage_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031EF18(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031EFD8)
// 0x0031EFD8 _$_19slf_post_message2_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031EFD8(void *self) __asm__("_$_19slf_post_message2_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031EFD8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F060)
// 0x0031F060 _$_18slf_post_message_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F060(void *self) __asm__("_$_18slf_post_message_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F060(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F0E8)
// 0x0031F0E8 _$_12slf_strcmp_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F0E8(void *self) __asm__("_$_12slf_strcmp_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F0E8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F2C8)
// 0x0031F2C8 _$_12slf_random_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F2C8(void *self) __asm__("_$_12slf_random_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F2C8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F4C0)
// 0x0031F4C0 _$_19slf_get_elevation_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F4C0(void *self) __asm__("_$_19slf_get_elevation_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F4C0(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F6A0)
// 0x0031F6A0 _$_22slf_add_debug_sphere_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F6A0(void *self) __asm__("_$_22slf_add_debug_sphere_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F6A0(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F728)
// 0x0031F728 _$_25slf_clear_debug_spheres_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F728(void *self) __asm__("_$_25slf_clear_debug_spheres_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F728(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F7B0)
// 0x0031F7B0 _$_18slf_get_time_inc_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F7B0(void *self) __asm__("_$_18slf_get_time_inc_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F7B0(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031F970)
// 0x0031F970 _$_16slf_text_width_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031F970(void *self) __asm__("_$_16slf_text_width_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031F970(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031FB70)
// 0x0031FB70 _$_27slf_is_action_button_down_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031FB70(void *self) __asm__("_$_27slf_is_action_button_down_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031FB70(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031FDC8)
// 0x0031FDC8 _$_22slf_get_cur_time_inc_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031FDC8(void *self) __asm__("_$_22slf_get_cur_time_inc_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031FDC8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031FF88)
// 0x0031FF88 _$_15slf_TARGET_PC_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0031FF88(void *self) __asm__("_$_15slf_TARGET_PC_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0031FF88(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320140)
// 0x00320140 _$_18slf_letterbox_on_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320140(void *self) __asm__("_$_18slf_letterbox_on_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320140(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003201B8)
// 0x003201B8 _$_19slf_letterbox_off_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003201B8(void *self) __asm__("_$_19slf_letterbox_off_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003201B8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320230)
// 0x00320230 _$_20slf_letterbox_cout_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320230(void *self) __asm__("_$_20slf_letterbox_cout_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320230(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003202B8)
// 0x003202B8 _$_14slf_fade_out_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003202B8(void *self) __asm__("_$_14slf_fade_out_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003202B8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320330)
// 0x00320330 _$_13slf_fade_in_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320330(void *self) __asm__("_$_13slf_fade_in_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320330(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003203A8)
// 0x003203A8 _$_23slf_set_region_active_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003203A8(void *self) __asm__("_$_23slf_set_region_active_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003203A8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003205F0)
// 0x003205F0 _$_25slf_set_fog_table_gamma_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003205F0(void *self) __asm__("_$_25slf_set_fog_table_gamma_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003205F0(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320698)
// 0x00320698 _$_22slf_get_detail_level_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320698(void *self) __asm__("_$_22slf_get_detail_level_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320698(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320858)
// 0x00320858 _$_23slf_was_start_pressed_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320858(void *self) __asm__("_$_23slf_was_start_pressed_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320858(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320A50)
// 0x00320A50 _$_19slf_was_A_pressed_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320A50(void *self) __asm__("_$_19slf_was_A_pressed_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320A50(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320C48)
// 0x00320C48 _$_19slf_was_B_pressed_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320C48(void *self) __asm__("_$_19slf_was_B_pressed_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320C48(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00320E40)
// 0x00320E40 _$_25slf_get_control_trigger_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00320E40(void *self) __asm__("_$_25slf_get_control_trigger_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00320E40(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00321020)
// 0x00321020 _$_23slf_get_control_state_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00321020(void *self) __asm__("_$_23slf_get_control_state_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00321020(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00321200)
// 0x00321200 _$_19slf_wait_keypress_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00321200(void *self) __asm__("_$_19slf_wait_keypress_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00321200(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003212C8)
// 0x003212C8 _$_25slf_apply_radius_damage_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003212C8(void *self) __asm__("_$_25slf_apply_radius_damage_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003212C8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003213A8)
// 0x003213A8 _$_15slf_los_check_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003213A8(void *self) __asm__("_$_15slf_los_check_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003213A8(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003215C0)
// 0x003215C0 _$_16slf_str_append_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003215C0(void *self) __asm__("_$_16slf_str_append_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003215C0(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00321848)
// 0x00321848 _$_21slf_to_str_vector3d_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00321848(void *self) __asm__("_$_21slf_to_str_vector3d_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00321848(void *self) { ScriptFunctionDtor(self); __asm__ volatile(""); }
#endif
