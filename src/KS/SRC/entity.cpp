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

#if defined(KELLY_DECOMP_FUNCTION_0012FDF0)
// 0x0012FDF0 remove_me_from_region__6entityP6region
class entity;
class region { public: void remove(entity *value); };
__asm__(".equ remove__6regionP6entity, 0x002E7678");
class entity { public: void remove_me_from_region(region *value); };
void entity::remove_me_from_region(region *value) { value->remove(this); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00135770)
// 0x00135770 __tcf_0
extern "C" void EntityDtor(void *self, int deleting) __asm__("_$_6entity");
__asm__(".equ _$_6entity, 0x001298C8");
extern "C" void EntityCleanupThunk() __asm__("__tcf_0_00135770");
void EntityCleanupThunk() { register char *object __asm__("$4") = (char *)0x00510000; register int deleting __asm__("$5") = 2; __asm__ volatile("" : "+r"(object), "+r"(deleting)); object += 0x30a0; EntityDtor(object, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001289E0)
// 0x001289E0 __9entity_idPCc
class entity_id { public: entity_id(const char *name); void set_entity_id(const char *name); };
__asm__(".equ set_entity_id__9entity_idPCc, 0x00128A08");
entity_id::entity_id(const char *name) { set_entity_id(name); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012FB18)
// 0x0012FB18 get_angular_velocity__C6entityP8vector3d
struct vector3d { float x; float y; float z; vector3d(float px, float py, float pz) : x(px), y(py), z(pz) {} vector3d &operator=(const vector3d &other) { z = other.z; KELLY_DECOMP_COMPILER_BARRIER(); x = other.x; KELLY_DECOMP_COMPILER_BARRIER(); y = other.y; return *this; } };
class entity { public: void get_angular_velocity(vector3d *target) const; };
void entity::get_angular_velocity(vector3d *target) const { *target = vector3d(0.0f, 0.0f, 0.0f); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00137D98)
// 0x00137D98 test_combat_target__C6entityRC8vector3dT1P8vector3dT3fb
struct vector3d;
class entity;
bool collide_segment_entity(const vector3d &start, const vector3d &end, const entity *target, vector3d *impact_position, vector3d *impact_normal, float radius, bool rear_cull);
__asm__(".equ collide_segment_entity__FRC8vector3dT0PC6entityP8vector3dT3fb, 0x002DC680");
class entity { public: bool test_combat_target(const vector3d &start, const vector3d &end, vector3d *impact_position, vector3d *impact_normal, float radius, bool rear_cull) const; };
bool entity::test_combat_target(const vector3d &start, const vector3d &end, vector3d *impact_position, vector3d *impact_normal, float radius, bool rear_cull) const { bool result = collide_segment_entity(start, end, this, impact_position, impact_normal, radius, rear_cull); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012FF48)
// 0x0012FF48 remove_from_terrain__6entity
class entity { char padding[0x158]; void *my_sector; void *center_region; public: void remove_from_terrain(); void remove_from_regions(); };
__asm__(".equ remove_from_regions__6entity, 0x0012FE18");
void entity::remove_from_terrain() { remove_from_regions(); center_region = 0; KELLY_DECOMP_COMPILER_BARRIER(); my_sector = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00139AF8)
// 0x00139AF8 has_mesh__6entity
struct entity_vtable { char padding[0x278]; short adjustment; short padding2; void *(*get_mesh)(void *self); };
class entity { char padding[8]; entity_vtable *vtable; public: bool has_mesh(); };
bool entity::has_mesh() { entity_vtable *table = vtable; return table->get_mesh((char *)this + table->adjustment) != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00134918)
// 0x00134918 kill_anim__6entityi
class entity_anim_tree;

class world_dynamics_system {
public:
    void kill_anim(entity_anim_tree *animation);
};

__asm__(".equ kill_anim__21world_dynamics_systemP16entity_anim_tree, 0x002A3710");

extern world_dynamics_system *g_world_ptr;
__asm__(".equ g_world_ptr, 0x00431A8C");

class entity {
public:
    entity_anim_tree *get_anim_tree(int slot) const;
    void kill_anim(int slot);
};

__asm__(".equ get_anim_tree__C6entityi, 0x001348D8");

void entity::kill_anim(int slot) {
    entity_anim_tree *animation = get_anim_tree(slot);
    if (animation) {
        g_world_ptr->kill_anim(animation);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001379F0)
// 0x001379F0 is_destroyable__C6entity
struct destruction_info {
    short flags;
    char padding[0x2a];
    int hit_points;

    bool has_hit_points() const {
        short value = flags;
        __asm__ volatile("" : "+r"(value));
        return value & 1;
    }

    int get_hit_points() const {
        return hit_points;
    }
};

class entity {
    char padding[0x19c];
    destruction_info *destroy_info;

public:
    bool is_destroyable() const;
};

bool entity::is_destroyable() const {
    return destroy_info != 0
        && (!destroy_info->has_hit_points()
            || destroy_info->get_hit_points() > 0);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012B5C0)
// 0x0012B5C0 optimize__6entity
enum visual_rep_type {
    VISREP_PMESH = 0
};

class visual_rep {
    visual_rep_type type;

public:
    visual_rep_type get_type() const { return type; }
};

class vr_pmesh : public visual_rep {
public:
    void shrink_memory_footprint();
};

__asm__(".equ shrink_memory_footprint__8vr_pmesh, 0x002D6528");

class entity {
    char padding[0x128];
    visual_rep *my_visrep;

public:
    void optimize();
};

void entity::optimize()
{
    if (my_visrep) {
        if (my_visrep->get_type() == VISREP_PMESH) {
            vr_pmesh *mesh = static_cast<vr_pmesh *>(my_visrep);
            mesh->shrink_memory_footprint();
            KELLY_DECOMP_COMPILER_BARRIER();
        }
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00134590)
// 0x00134590 make_animateable__6entityb
class entity_anim_tree;

extern "C" void *memset(void *destination, int value, unsigned int size);
__asm__(".equ memset, 0x003D18D0");

class entity {
    char padding[0xE8];
    entity_anim_tree *anim_trees[10];

public:
    void make_animateable(bool on);
};

void entity::make_animateable(bool on)
{
    if (on && anim_trees == 0) {
        memset(anim_trees, 0, sizeof(anim_trees));
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00132370)
// 0x00132370 delete_visrep__6entity
class visual_rep;

void unload_visual_rep(visual_rep *representation);
__asm__(".equ unload_visual_rep__FP10visual_rep, 0x002D74C0");

class entity {
    char padding[0x128];
    visual_rep *my_visrep;

public:
    void delete_visrep();
};

void entity::delete_visrep()
{
    if (my_visrep) {
        unload_visual_rep(my_visrep);
        my_visrep = 0;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00133E28)
// 0x00133E28 unload_anim__C6entityRC7stringx
#include "decomp_annotations.h"

class stringx;

class ett_manager {
public:
    void unload(const stringx &filename);
};

class world_dynamics_system {
public:
    ett_manager *get_ett_manager();
};

__asm__(".equ get_ett_manager__21world_dynamics_system, 0x002A3770");
__asm__(".equ unload__11ett_managerRC7stringx, 0x001152A8");

extern world_dynamics_system *g_world_ptr;
__asm__(".equ g_world_ptr, 0x00431A8C");

class entity {
public:
    void unload_anim(const stringx &filename) const;
};

void entity::unload_anim(const stringx &filename) const
{
    g_world_ptr->get_ett_manager()->unload(filename);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00134D48)
// 0x00134D48 get_random_ifl_frame_boost__C6entity
extern int g_iflrand_counter;
extern int random_ifl_frame_boost_table[256];
__asm__(".equ g_iflrand_counter, 0x003E5B70");
__asm__(".equ random_ifl_frame_boost_table, 0x003E5C50");

class entity {
    char padding[0x80];
    unsigned int id;

public:
    int get_random_ifl_frame_boost() const;
};

int entity::get_random_ifl_frame_boost() const
{
    ++g_iflrand_counter;
    return random_ifl_frame_boost_table[0xFF & (id * 3)];
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001375B0)
// 0x001375B0 preload__16destroyable_info
#include "decomp_annotations.h"

class stringx;

class entity {
public:
    static void exec_preload_function(const stringx &script);
};

__asm__(".equ exec_preload_function__6entityRC7stringx, 0x00137880");

class destroyable_info {
    short flags;
    char padding[0x1E];
    stringx *preload_script_storage;

public:
    void preload();
};

void destroyable_info::preload()
{
    short current_flags = flags;
    if (!(current_flags & 0x200)) {
        unsigned short updated_flags =
            (unsigned short)flags | 0x200;
        flags = (short)updated_flags;
        entity::exec_preload_function(
            *(stringx *)((char *)this + 0x20)
        );
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00139278)
// 0x00139278 entity_signal_callback_raiser__FP9signallerPCc
class signaller;

struct entity_layout {
    char padding[0xD4];
    unsigned int signals_raised[2];
};

void entity_signal_callback_raiser(
    signaller *signal,
    const char *signal_id
) {
    unsigned short id =
        (unsigned short)(unsigned int)signal_id;
    entity_layout *entity = (entity_layout *)signal;
    entity->signals_raised[(id < 32 ? 1 : 0)] |=
        (0x80000000u >> (id < 32 ? id : (id - 32)));
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012A3E8)
// 0x0012A3E8 set_mesh__6entityP7nglMesh
struct nglMesh;
void FixupEntityMesh(nglMesh *mesh, int lit = 0);
asm(".equ FixupEntityMesh__FP7nglMeshi, 0x0012A1F0");
class entity {
    char padding[0x134];
    nglMesh *my_mesh;
public:
    void set_mesh(nglMesh *mesh);
};
void entity::set_mesh(nglMesh *mesh)
{
    FixupEntityMesh(mesh);
    my_mesh = mesh;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0012A428)
// 0x0012A428 set_lores_mesh__6entityP7nglMesh
struct nglMesh;
void FixupEntityMesh(nglMesh *mesh, int lit = 0);
asm(".equ FixupEntityMesh__FP7nglMeshi, 0x0012A1F0");
class entity {
    char padding[0x130];
    nglMesh *lores_mesh;
public:
    void set_lores_mesh(nglMesh *mesh);
};
void entity::set_lores_mesh(nglMesh *mesh)
{
    FixupEntityMesh(mesh);
    lores_mesh = mesh;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00134DE0)
// 0x00134DE0 get_primary_region__C6entity
class region_node;
struct region_tree_node {
    char padding_to_left[8];
    region_tree_node *left;
    char padding_to_value[4];
    region_node *value;
};
struct region_set {
    region_tree_node *header;
    unsigned int count;
    bool empty() const { return count == 0; }
    region_node *first() const { return header->left->value; }
};
class entity {
    char padding_to_flags[0x78];
    unsigned int flags;
    char padding_to_regions[0xE0];
    region_node *center_region;
    region_set in_regions;
public:
    region_node *get_primary_region() const;
};
region_node *entity::get_primary_region() const
{
    if (flags & 0x10000000)
        return in_regions.empty() ? 0 : in_regions.first();
    return center_region;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001348D8)
// 0x001348D8 get_anim_tree__C6entityi
class entity_anim_tree { unsigned short flags; public: unsigned short is_attached() const { return flags & 0x10; } };
class entity { char padding[0xe8]; entity_anim_tree *anim_trees[4]; public: entity_anim_tree *get_anim_tree(int slot) const; };
entity_anim_tree *entity::get_anim_tree(int slot) const
{
    if (anim_trees) {
        entity_anim_tree *a = anim_trees[slot];
        if (a && a->is_attached())
            return a;
        else
            return 0;
    } else
        return 0;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00126F20)
// 0x00126F20 destroy_ai_ifc__6entity
class ai_interface { public: virtual ~ai_interface(); };
class entity {
    char padding[0xac];
    ai_interface* my_ai_interface;
public:
    void destroy_ai_ifc();
};
void entity::destroy_ai_ifc()
{
    delete my_ai_interface;
    my_ai_interface = 0;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00126FB0)
// 0x00126FB0 destroy_animation_ifc__6entity
class animation_interface { public: virtual ~animation_interface(); };
class entity {
    char padding[0xb0];
    animation_interface* my_animation_interface;
public:
    void destroy_animation_ifc();
};
void entity::destroy_animation_ifc()
{
    delete my_animation_interface;
    my_animation_interface = 0;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00127378)
// 0x00127378 destroy_hard_attrib_ifc__6entity
class hard_attrib_interface { public: virtual ~hard_attrib_interface(); };
class entity {
    char padding[0xb4];
    hard_attrib_interface* my_hard_attrib_interface;
public:
    void destroy_hard_attrib_ifc();
};
void entity::destroy_hard_attrib_ifc()
{
    delete my_hard_attrib_interface;
    my_hard_attrib_interface = 0;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_001273C8)
// 0x001273C8 destroy_owner_ifc__6entity
class owner_interface { public: virtual ~owner_interface(); };
class entity {
    char padding[0xb8];
    owner_interface* my_owner_interface;
public:
    void destroy_owner_ifc();
};
void entity::destroy_owner_ifc()
{
    delete my_owner_interface;
    my_owner_interface = 0;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00127458)
// 0x00127458 destroy_physical_ifc__6entity
class physical_interface { public: virtual ~physical_interface(); };
class entity {
    char padding[0xbc];
    physical_interface* my_physical_interface;
public:
    void destroy_physical_ifc();
};
void entity::destroy_physical_ifc()
{
    delete my_physical_interface;
    my_physical_interface = 0;
}
#endif
