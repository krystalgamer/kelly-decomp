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
