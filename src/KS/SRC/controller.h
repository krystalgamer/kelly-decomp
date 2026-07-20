// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026E9A8)
// 0x0026E9A8 kill__10controller
class controller {
    bool active;
public:
    void kill();
};

void controller::kill() {
    active = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9B0)
// 0x0026E9B0 resurrect__10controller
class controller {
    bool active;
public:
    void resurrect();
};

void controller::resurrect() {
    active = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9C0)
// 0x0026E9C0 set_combat_mode__10controllerb
class controller {
public:
    void set_combat_mode(bool enabled);
};

void controller::set_combat_mode(bool enabled) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9C8)
// 0x0026E9C8 get_combat_mode__C10controller
class controller {
public:
    bool get_combat_mode() const;
};

bool controller::get_combat_mode() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9D0)
// 0x0026E9D0 is_controller__C10controller
class controller {
public:
    bool is_controller() const;
};

bool controller::is_controller() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9D8)
// 0x0026E9D8 is_mouselook_controller__C10controller
class controller {
public:
    bool is_mouselook_controller() const;
};

bool controller::is_mouselook_controller() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9E0)
// 0x0026E9E0 is_character_controller__C10controller
class controller {
public:
    bool is_character_controller() const;
};

bool controller::is_character_controller() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9E8)
// 0x0026E9E8 is_player_controller__C10controller
class controller {
public:
    bool is_player_controller() const;
};

bool controller::is_player_controller() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9F0)
// 0x0026E9F0 is_joystick_usercam_controller__C10controller
class controller {
public:
    bool is_joystick_usercam_controller() const;
};

bool controller::is_joystick_usercam_controller() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8868)
// 0x002B8868 is_entity_controller__C10controller
class controller {
public:
    bool is_entity_controller() const;
};

bool controller::is_entity_controller() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8918)
// 0x002B8918 is_mouselook_controller__C20mouselook_controller
class mouselook_controller {
public:
    bool is_mouselook_controller() const;
};

bool mouselook_controller::is_mouselook_controller() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B89C8)
// 0x002B89C8 is_joystick_usercam_controller__C25joypad_usercam_controller
class joypad_usercam_controller {
public:
    bool is_joystick_usercam_controller() const;
};

bool joypad_usercam_controller::is_joystick_usercam_controller() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A48)
// 0x002B8A48 frame_advance__17entity_controllerf
class entity_controller {
public:
    void frame_advance(float time_inc);
};

void entity_controller::frame_advance(float time_inc) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A50)
// 0x002B8A50 get_state__C17entity_controller
class entity_controller {
    char padding[0x10];
    int state;
public:
    int get_state() const;
};

int entity_controller::get_state() const {
    return state;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A58)
// 0x002B8A58 is_entity_controller__C17entity_controller
class entity_controller {
public:
    bool is_entity_controller() const;
};

bool entity_controller::is_entity_controller() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A60)
// 0x002B8A60 set_blocking__17entity_controllerb
class entity_controller {
public:
    void set_blocking(bool blocking);
};

void entity_controller::set_blocking(bool blocking) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A68)
// 0x002B8A68 is_blocking__C17entity_controller
class entity_controller {
public:
    bool is_blocking() const;
};

bool entity_controller::is_blocking() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A70)
// 0x002B8A70 is_in_cautious_mode__C17entity_controller
class entity_controller {
public:
    bool is_in_cautious_mode() const;
};

bool entity_controller::is_in_cautious_mode() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A78)
// 0x002B8A78 is_in_running_mode__C17entity_controller
class entity_controller {
public:
    bool is_in_running_mode() const;
};

bool entity_controller::is_in_running_mode() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8A80)
// 0x002B8A80 is_moving__C17entity_controller
class entity_controller { char padding[0x10]; int state; public: bool is_moving() const; };
bool entity_controller::is_moving() const { return state == 1 || state == 2 || state == 14; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8830)
// 0x002B8830 _$_10controller
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004FB450");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_10controller");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8870)
// 0x002B8870 _$_20mouselook_controller
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004FB450");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_20mouselook_controller");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8920)
// 0x002B8920 _$_25joypad_usercam_controller
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004FB450");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_25joypad_usercam_controller");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
