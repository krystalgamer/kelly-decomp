// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00127870)
// 0x00127870 __nw__Q26entity13movement_infoUiUiPCci
class entity { public: class movement_info { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); }; };
__asm__(".equ __nw__Q26entity13movement_infoUi, 0x001277E8");
void* entity::movement_info::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = entity::movement_info::operator new(size); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012F728)
// 0x0012F728 get_signal_name__C6entityUs
extern const char entity_signal_name_literal[];
__asm__(".equ entity_signal_name_literal, 0x004CA870");

class entity {
public:
    const char* get_signal_name(unsigned short index) const;
};

const char* entity::get_signal_name(unsigned short index) const {
    return entity_signal_name_literal;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00132F58)
// 0x00132F58 deactivate_motion_blur__6entity
class entity { char padding[0x78]; int flags; public: void deactivate_motion_blur(); };
void entity::deactivate_motion_blur() { flags &= -1025; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001334C0)
// 0x001334C0 deactivate_motion_trail__6entity
class entity { char padding[0x78]; int flags; public: void deactivate_motion_trail(); };
void entity::deactivate_motion_trail() { flags &= -2049; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00133638)
// 0x00133638 set_age__6entityf
class frame_time_info_t {
public:
    float age;

    void set_age(float new_age) {
        age = new_age;
    }
};

class entity {
    char padding[0x1CC];
    frame_time_info_t frame_time_info;

public:
    void set_age(float new_age);
};

void entity::set_age(float new_age) {
    frame_time_info.set_age(new_age);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00134B10)
// 0x00134B10 detach_anim__6entity
class entity_anim;

class entity {
    char padding[0x110];
    entity_anim *current_anim;

public:
    void detach_anim();
};

void entity::detach_anim() {
    current_anim = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00137988)
// 0x00137988 apply_damage__6entityiRC8vector3dT2iP6entityi
class vector3d;

class entity {
public:
    void apply_damage(
        int damage,
        const vector3d &position,
        const vector3d &normal,
        int damage_type,
        entity *attacker,
        int damage_flags
    );
};

void entity::apply_damage(
    int damage,
    const vector3d &position,
    const vector3d &normal,
    int damage_type,
    entity *attacker,
    int damage_flags
) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00137D90)
// 0x00137D90 allow_targeting__C6entity
class entity {
public:
    bool allow_targeting() const;
};

bool entity::allow_targeting() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00138B98)
// 0x00138B98 is_alive__C6entity
class entity {
public:
    bool is_alive() const;
};

bool entity::is_alive() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00138BA0)
// 0x00138BA0 is_dying__C6entity
class entity {
public:
    bool is_dying() const;
};

bool entity::is_dying() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00139268)
// 0x00139268 entity_signal_callback_footstep__FP9signallerPCc
class signaller;

static void entity_signal_callback_footstep(
    signaller *signal,
    const char *data
) {
}

__asm__(
    ".globl entity_signal_callback_footstep__FP9signallerPCc"
);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00139270)
// 0x00139270 entity_signal_callback_attack__FP9signallerPCc
class signaller;

static void entity_signal_callback_attack(
    signaller *signal,
    const char *data
) {
}

__asm__(
    ".globl entity_signal_callback_attack__FP9signallerPCc"
);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00130DD0)
// 0x00130DD0 get_last_po__6entity
class po {};
class entity {
    char padding_to_abs[0x50];
    po* absolute_po;
    char padding_to_last[0x118];
    po* last_po;
public:
    const po& get_abs_po() const {
        return *absolute_po;
    }
    const po& get_last_po();
};

const po& entity::get_last_po() {
    if (!last_po) {
        KELLY_DECOMP_COMPILER_BARRIER();
        return get_abs_po();
    } else {
        KELLY_DECOMP_COMPILER_BARRIER();
        return *last_po;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00131DE0)
// 0x00131DE0 force_current_region__6entity
class entity { public: void _set_region_forced_status(); void force_current_region(); };
__asm__(".equ _set_region_forced_status__6entity, 0x00131E00");
void entity::force_current_region() { _set_region_forced_status(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00131E00)
// 0x00131E00 _set_region_forced_status__6entity
class entity {
    char padding_to_flags[0x78];
    unsigned int flags;
    char padding_to_sector[0xDC];
    void* my_sector;
    void* center_region;
public:
    void _set_region_forced_status();
};

void entity::_set_region_forced_status() {
    flags |= 0x10000000u;
    my_sector = 0;
    center_region = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00133618)
// 0x00133618 get_age__C6entity
class frame_info { public: float get_age() const; };
__asm__(".equ get_age__C10frame_info, 0x00338660");
class entity { char padding[0x1CC]; frame_info frame_time_info; public: float get_age() const; };
float entity::get_age() const { float result = frame_time_info.get_age(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001372F8)
// 0x001372F8 reset__16destroyable_info
class destroyable_info { unsigned short flags; float destroy_lifetime; public: void reset(); };
void destroyable_info::reset() { flags &= 0xF008; destroy_lifetime = 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00137C78)
// 0x00137C78 disgorge_items__6entityP6entity
class entity;
extern const char disgorge_error[];
void error(const char *format, ...);
__asm__(".equ disgorge_error, 0x004CD020");
__asm__(".equ error__FPCce, 0x001DFBD8");
class entity { public: void disgorge_items(entity *target); };
void entity::disgorge_items(entity *target) { error(disgorge_error); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00139D90)
// 0x00139D90 set_mesh_texture__6entityP10nglTexture
struct nglTexture;
struct nglMaterial { char padding[4]; nglTexture *Map; };
struct nglMeshSection { nglMaterial *Material; };
struct nglMesh { char padding[0x58]; nglMeshSection *Sections; };
class entity { char padding[0x134]; nglMesh *my_mesh; public: void set_mesh_texture(nglTexture *texture); };
void entity::set_mesh_texture(nglTexture *texture) { if (my_mesh) my_mesh->Sections[0].Material->Map = texture; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00146520)
// 0x00146520 _GLOBAL_$I$g_time_dilation
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$g_time_dilation");
__asm__(".equ __static_initialization_and_destruction_0, 0x00143C08");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00146540)
// 0x00146540 _GLOBAL_$D$g_time_dilation
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$g_time_dilation");
__asm__(".equ __static_initialization_and_destruction_0, 0x00143C08");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012A1C8)
// 0x0012A1C8 get_hero_id__6entity
class game { public: char padding[0xbc]; int active_player; };
extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");
class entity { char padding[0x1f0]; int which_hero; public: int get_hero_id(); };
int entity::get_hero_id() { if (which_hero == -1) return g_game_ptr->active_player; return which_hero; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012FDC8)
// 0x0012FDC8 add_me_to_region__6entityP6region
class entity;
class region { public: void add(entity *value); };
__asm__(".equ add__6regionP6entity, 0x002E72F0");
class entity { public: void add_me_to_region(region *value); };
void entity::add_me_to_region(region *value) { value->add(this); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
