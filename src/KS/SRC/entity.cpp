// Entity method definitions extracted by generated one-function shims.

// 0x00130B68 invalidate_frame_delta__6entity
#include "KS/SRC/entity.h"

extern const po po_identity_matrix;
__asm__(".equ po_identity_matrix, 0x00513890");

void entity::invalidate_frame_delta()
{
    if (movement_info_data)
    {
        movement_info_data->last_frame_delta_valid =
            movement_info_data->frame_delta_valid;
        movement_info_data->frame_delta_valid = false;
        movement_info_data->frame_delta = po_identity_matrix;
    }
}

// 0x001349E8 clear_anim__6entityP16entity_anim_tree
#include "KS/SRC/entity.h"
#include "KS/SRC/entity_anim.h"
__asm__(".equ deconstruct__16entity_anim_tree, 0x00117670");
__asm__(".equ detach__16entity_anim_tree, 0x00117640");
__asm__(".equ attach__16entity_anim_tree, 0x00117538");

void entity::clear_anim(entity_anim_tree *animation)
{
    int slot;
    for (slot = 0; slot < 10; ++slot)
    {
        entity_anim_tree *local = get_anim_tree(slot);
        if (animation == local)
        {
            local->deconstruct();
            local->detach();
            int index;
            for (index = 0; index < slot; index++)
            {
                entity_anim_tree *lower = get_anim_tree(index);
                if (lower && lower->is_valid())
                    lower->attach();
            }
            return;
        }
    }
}

// 0x00134E20 update_region__6entityb
#include "KS/SRC/entity.h"
#include "KS/SRC/wds.h"

__asm__(".equ get_primary_region__C6entity, 0x00134DE0");

region_node *entity::update_region(bool parent_computed)
{
    set_needs_compute_sector(false);

    if (flags & EFLAG_REGION_FORCED)
    {
        return in_regions.empty() ? 0 : *in_regions.begin();
    }
    if (has_parent())
    {
        region_node *parents_region;
        parents_region = parent_computed
            ? ((entity *)link_ifc()->get_parent())->get_primary_region()
            : ((entity *)link_ifc()->get_parent())->update_region();
        if (get_primary_region() != parents_region)
            compute_sector(g_world_ptr->get_the_terrain());
    }
    return get_primary_region();
}

// 0x00131560 set_alternative_materials__6entityRC7stringx
#include "KS/SRC/entity.h"
#include "KS/SRC/wds.h"
extern const char no_alternative_material[];
__asm__(".equ no_alternative_material, 0x004CC728");
__asm__(
    ".equ set_alternative_materials__6entityP12material_set, "
    "0x001311B0");
__asm__(
    ".equ get_material_set__21world_dynamics_systemRC7stringx, "
    "0x002A5200");

void entity::set_alternative_materials(
    const stringx &name)
{
    if (name.size() == 0 ||
        name == no_alternative_material)
    {
        set_alternative_materials(0);
        __asm__ volatile("");
    }
    else
    {
        set_alternative_materials(
            g_world_ptr->get_material_set(name));
        __asm__ volatile("");
    }
}

// 0x00130EA8 create_light_set__6entity
#include "KS/SRC/lightmgr.h"

extern const char entity_light_source_file[];
__asm__(".equ entity_light_source_file, 0x004CCA78");

struct entity_light_layout {
    // my_light_mgr is still represented by padding in the canonical entity.
    char state_before_light_manager[0xe4];
    light_manager *light_manager_data;
};

void *operator new(
    unsigned int size,
    unsigned int alignment,
    const char *source_file,
    int line);
__asm__(".equ __nw__FUiUiPCci, 0x002AC578");

extern "C" void create_entity_light_set(
    entity_light_layout *self)
    __asm__("create_light_set__6entity");

void create_entity_light_set(entity_light_layout *self)
{
    volatile char frame_padding[16];
    if (!self->light_manager_data)
        self->light_manager_data =
            new (0, entity_light_source_file, 0) light_manager();
}

// 0x00139180 preload__6entity
#include "KS/SRC/entity.h"

void entity::preload()
{
    if (!was_preloaded()) {
        set_preloaded(true);
        if (destroy_info != 0)
            destroy_info->preload();
    }
}

// 0x001396B0 set_ifc_num__6entityRC7pstringf
#include "KS/SRC/entity.h"

#define IFC_DATA_SET_NUM(name) \
    if (has_##name##_ifc() && \
        name##_ifc()->set_ifc_num(attribute, value)) \
        return true

bool entity::set_ifc_num(
    const pstring &attribute,
    rational_t value)
{
    IFC_DATA_SET_NUM(ai);
    IFC_DATA_SET_NUM(physical);
    IFC_DATA_SET_NUM(soft_attrib);
    IFC_DATA_SET_NUM(time);

    return false;
}

#undef IFC_DATA_SET_NUM

// 0x00139798 get_ifc_vec__6entityRC7pstringR8vector3d
#include "KS/SRC/entity.h"

#define IFC_DATA_GET_VEC(name) \
    if (has_##name##_ifc() && \
        name##_ifc()->get_ifc_vec(attribute, value)) \
        return true

bool entity::get_ifc_vec(
    const pstring &attribute,
    vector3d &value)
{
    IFC_DATA_GET_VEC(ai);
    IFC_DATA_GET_VEC(physical);
    IFC_DATA_GET_VEC(soft_attrib);
    IFC_DATA_GET_VEC(hard_attrib);

    return false;
}

#undef IFC_DATA_GET_VEC

// 0x00139940 get_ifc_str__6entityRC7pstringR7stringx
#include "KS/SRC/entity.h"

#define IFC_DATA_GET_STR(name) \
    if (has_##name##_ifc() && \
        name##_ifc()->get_ifc_str(attribute, value)) \
        return true

bool entity::get_ifc_str(
    const pstring &attribute,
    stringx &value)
{
    IFC_DATA_GET_STR(ai);
    IFC_DATA_GET_STR(physical);
    IFC_DATA_GET_STR(soft_attrib);
    IFC_DATA_GET_STR(hard_attrib);

    return false;
}

#undef IFC_DATA_GET_STR

// 0x00135FF8 _$_16motion_blur_info
#include "KS/SRC/mbi.h"

extern "C" void BuiltinVecDelete(void *memory) __asm__("__builtin_vec_delete");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern "C" void MotionBlurDtor(void *self, int deleting)
    __asm__("_$_16motion_blur_info");

void MotionBlurDtor(void *self, int deleting)
{
    motion_blur_info *info = static_cast<motion_blur_info *>(self);
    if (info->motion_trail_buffer)
        BuiltinVecDelete(info->motion_trail_buffer);
    if (deleting & 1) {
        void (*delete_info)(void *) = BuiltinDelete;
        delete_info(info);
    }
}

// 0x00131E20 unforce_regions__6entity
#include "KS/SRC/entity.h"

__asm__(".equ remove_from_regions__6entity, 0x0012FE18");

void entity::unforce_regions()
{
    if (flags & EFLAG_REGION_FORCED) {
        remove_from_regions();
        set_flag(EFLAG_REGION_FORCED, false);
    }
}

// 0x00127870 __nw__Q26entity13movement_infoUiUiPCci
#include "KS/SRC/entity.h"

void* entity::movement_info::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { return entity::movement_info::operator new(size); }

// 0x0012F728 get_signal_name__C6entityUs
#include "KS/SRC/entity.h"

extern const char entity_signal_name_literal[];

const char* entity::get_signal_name(unsigned short index) const {
    return entity_signal_name_literal;
}

// 0x00132F58 deactivate_motion_blur__6entity
#include "KS/SRC/entity.h"

void entity::deactivate_motion_blur() {
    set_flag(EFLAG_GRAPHICS_MOTION_BLUR, false);
}

// 0x001334C0 deactivate_motion_trail__6entity
#include "KS/SRC/entity.h"

void entity::deactivate_motion_trail() {
    set_flag(EFLAG_GRAPHICS_MOTION_TRAIL, false);
}

// 0x00133638 set_age__6entityf
#include "KS/SRC/entity.h"

void entity::set_age(float new_age) {
    frame_time_info.set_age(new_age);
}

// 0x00134B10 detach_anim__6entity
#include "KS/SRC/entity.h"

void entity::detach_anim() {
    current_anim = 0;
}

// 0x00137988 apply_damage__6entityiRC8vector3dT2iP6entityi
#include "KS/SRC/entity.h"

void entity::apply_damage(
    int damage,
    const vector3d &position,
    const vector3d &normal,
    int damage_type,
    entity *attacker,
    int damage_flags
) {
}

// 0x00137D90 allow_targeting__C6entity
#include "KS/SRC/entity.h"

bool entity::allow_targeting() const {
    return true;
}

// 0x00138B98 is_alive__C6entity
#include "KS/SRC/entity.h"

bool entity::is_alive() const {
    return true;
}

// 0x00138BA0 is_dying__C6entity
#include "KS/SRC/entity.h"

bool entity::is_dying() const {
    return false;
}

// 0x00139268 entity_signal_callback_footstep__FP9signallerPCc
#include "KS/SRC/signals.h"

static void entity_signal_callback_footstep(
    signaller *signal,
    const char *data
) {
}

// 0x00139270 entity_signal_callback_attack__FP9signallerPCc
#include "KS/SRC/signals.h"

static void entity_signal_callback_attack(
    signaller *signal,
    const char *data
) {
}

// 0x00130DD0 get_last_po__6entity
#include "KS/SRC/entity.h"

const po& entity::get_last_po() {
    if (!last_po)
        return get_abs_po();
    return *last_po;
}

// 0x00131E00 _set_region_forced_status__6entity
#include "KS/SRC/entity.h"

void entity::_set_region_forced_status() {
    flags |= 0x10000000u;
    my_sector = 0;
    center_region = 0;
}

// 0x00133618 get_age__C6entity
#include "KS/SRC/entity.h"

float entity::get_age() const { return frame_time_info.get_age(); }

// 0x001372F8 reset__16destroyable_info
#include "KS/SRC/entity.h"

void destroyable_info::reset() { flags &= 0xF008; destroy_lifetime = 1.0f; }

// 0x00139D90 set_mesh_texture__6entityP10nglTexture
#include "KS/SRC/entity.h"
#include "KS/SRC/matfac.h"
#include "NGL/PS2/ngl_ps2.h"

void entity::set_mesh_texture(nglTexture *texture) { if (my_mesh) my_mesh->Sections[0].Material->Map = texture; }

// 0x0012A1C8 get_hero_id__6entity
#include "KS/SRC/entity.h"
#include "KS/SRC/game.h"

extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");
int entity::get_hero_id() { if (which_hero == -1) return g_game_ptr->get_active_player(); return which_hero; }

// 0x001289E0 __9entity_idPCc
#include "KS/SRC/entity.h"

__asm__(".equ set_entity_id__9entity_idPCc, 0x00128A08");
entity_id::entity_id(const char *name) { set_entity_id(name); }

// 0x0012FB18 get_angular_velocity__C6entityP8vector3d
#include "KS/SRC/entity.h"

void entity::get_angular_velocity(vector3d *target) const {
    *target = vector3d(0.0f, 0.0f, 0.0f);
}

// 0x00137D98 test_combat_target__C6entityRC8vector3dT1P8vector3dT3fb
#include "KS/SRC/entity.h"

bool collide_segment_entity(const vector3d &start, const vector3d &end, const entity *target, vector3d *impact_position, vector3d *impact_normal, float radius, bool rear_cull);
__asm__(".equ collide_segment_entity__FRC8vector3dT0PC6entityP8vector3dT3fb, 0x002DC680");
bool entity::test_combat_target(const vector3d &start, const vector3d &end, vector3d *impact_position, vector3d *impact_normal, float radius, bool rear_cull) const { return collide_segment_entity(start, end, this, impact_position, impact_normal, radius, rear_cull); }

// 0x0012FF48 remove_from_terrain__6entity
#include "KS/SRC/entity.h"

__asm__(".equ remove_from_regions__6entity, 0x0012FE18");
void entity::remove_from_terrain() { remove_from_regions(); my_sector = 0; center_region = 0; }

// 0x00139AF8 has_mesh__6entity
#include "KS/SRC/entity.h"

bool entity::has_mesh() { return get_mesh() != 0; }

// 0x00134918 kill_anim__6entityi
#include "KS/SRC/entity.h"
#include "KS/SRC/wds.h"

__asm__(".equ kill_anim__21world_dynamics_systemP16entity_anim_tree, 0x002A3710");
void kill_world_anim(
    world_dynamics_system *world,
    entity_anim_tree *animation)
    __asm__("kill_anim__21world_dynamics_systemP16entity_anim_tree");

__asm__(".equ get_anim_tree__C6entityi, 0x001348D8");

void entity::kill_anim(int slot) {
    entity_anim_tree *animation = get_anim_tree(slot);
    if (animation) {
        void (*kill_animation)(
            world_dynamics_system *,
            entity_anim_tree *) = kill_world_anim;
        kill_animation(g_world_ptr, animation);
    }
}

// 0x001379F0 is_destroyable__C6entity
#include "KS/SRC/entity.h"

bool entity::is_destroyable() const {
    return destroy_info != 0
        && (!destroy_info->has_hit_points()
            || destroy_info->get_hit_points() > 0);
}

// 0x0012B5C0 optimize__6entity
#include "KS/SRC/entity.h"
#include "KS/SRC/pmesh.h"

__asm__(".equ shrink_memory_footprint__8vr_pmesh, 0x002D6528");
void shrink_mesh(vr_pmesh *mesh)
    __asm__("shrink_memory_footprint__8vr_pmesh");

void entity::optimize()
{
    if (my_visrep) {
        if (my_visrep->get_type() == VISREP_PMESH) {
            vr_pmesh *mesh = static_cast<vr_pmesh *>(my_visrep);
            void (*shrink)(vr_pmesh *) = shrink_mesh;
            shrink(mesh);
        }
    }
}

// 0x00134590 make_animateable__6entityb
#include "KS/SRC/entity.h"

extern "C" void *memset(void *destination, int value, unsigned int size);
__asm__(".equ memset, 0x003D18D0");

void entity::make_animateable(bool on)
{
    if (on && anim_trees == 0) {
        void *(*clear)(void *, int, unsigned int) = memset;
        clear(anim_trees, 0, sizeof(anim_trees));
    }
}

// 0x00132370 delete_visrep__6entity
#include "KS/SRC/entity.h"

void unload_visual_rep(visual_rep *representation);
__asm__(".equ unload_visual_rep__FP10visual_rep, 0x002D74C0");

void entity::delete_visrep()
{
    if (my_visrep) {
        unload_visual_rep(my_visrep);
        my_visrep = 0;
    }
}

// 0x00134D48 get_random_ifl_frame_boost__C6entity
#include "KS/SRC/entity.h"

extern int g_iflrand_counter;
extern int random_ifl_frame_boost_table[256];
__asm__(".equ g_iflrand_counter, 0x003E5B70");
__asm__(".equ random_ifl_frame_boost_table, 0x003E5C50");

int entity::get_random_ifl_frame_boost() const
{
    ++g_iflrand_counter;
    return random_ifl_frame_boost_table[
        0xFF & (id.get_numerical_val() * 3)];
}

// 0x001375B0 preload__16destroyable_info
#include "decomp_annotations.h"
#include "KS/SRC/entity.h"

__asm__(".equ exec_preload_function__6entityRC7stringx, 0x00137880");

void destroyable_info::preload()
{
    short current_flags = flags;
    if (!(current_flags & 0x200)) {
        unsigned short updated_flags =
            (unsigned short)flags | 0x200;
        flags = (short)updated_flags;
        void (*execute)(const stringx &) =
            entity::exec_preload_function;
        execute(preload_script);
    }
}

// 0x00139278 entity_signal_callback_raiser__FP9signallerPCc
#include "KS/SRC/entity.h"

void entity_signal_callback_raiser(
    signaller *signal,
    const char *signal_id
) {
    unsigned short id =
        (unsigned short)(unsigned int)signal_id;
    entity *target = (entity *)signal;
    target->signals_raised[(id < 32 ? 1 : 0)] |=
        (0x80000000u >> (id < 32 ? id : (id - 32)));
}

// 0x0012A3E8 set_mesh__6entityP7nglMesh
#include "KS/SRC/entity.h"

void FixupEntityMesh(nglMesh *mesh, int lit = 0);
asm(".equ FixupEntityMesh__FP7nglMeshi, 0x0012A1F0");
void entity::set_mesh(nglMesh *mesh)
{
    FixupEntityMesh(mesh);
    my_mesh = mesh;
}

// 0x0012A428 set_lores_mesh__6entityP7nglMesh
#include "KS/SRC/entity.h"

void FixupEntityMesh(nglMesh *mesh, int lit = 0);
asm(".equ FixupEntityMesh__FP7nglMeshi, 0x0012A1F0");
void entity::set_lores_mesh(nglMesh *mesh)
{
    FixupEntityMesh(mesh);
    lores_mesh = mesh;
}

// 0x00134DE0 get_primary_region__C6entity
#include "KS/SRC/entity.h"

region_node *entity::get_primary_region() const
{
    if (flags & 0x10000000)
        return in_regions.empty() ? 0 : *in_regions.begin();
    return center_region;
}

// 0x001348D8 get_anim_tree__C6entityi
#include "KS/SRC/entity_anim.h"
#include "KS/SRC/entity.h"

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


// 0x00126F20 destroy_ai_ifc__6entity
#include "KS/SRC/ai_interface.h"
#include "KS/SRC/entity.h"

void entity::destroy_ai_ifc()
{
    delete my_ai_interface;
    my_ai_interface = 0;
}


// 0x00126FB0 destroy_animation_ifc__6entity
#include "KS/SRC/entity.h"

void entity::destroy_animation_ifc()
{
    delete my_animation_interface;
    my_animation_interface = 0;
}


// 0x00127378 destroy_hard_attrib_ifc__6entity
#include "KS/SRC/entity.h"

void entity::destroy_hard_attrib_ifc()
{
    delete my_hard_attrib_interface;
    my_hard_attrib_interface = 0;
}


// 0x001273C8 destroy_owner_ifc__6entity
#include "KS/SRC/owner_interface.h"
#include "KS/SRC/entity.h"

void entity::destroy_owner_ifc()
{
    delete my_owner_interface;
    my_owner_interface = 0;
}


// 0x00127458 destroy_physical_ifc__6entity
#include "KS/SRC/entity.h"

void entity::destroy_physical_ifc()
{
    delete my_physical_interface;
    my_physical_interface = 0;
}


// 0x001274A0 destroy_render_ifc__6entity
#include "KS/SRC/entity.h"

void entity::destroy_render_ifc()
{
    delete my_render_interface;
    my_render_interface = 0;
}


// 0x00127548 destroy_skeleton_ifc__6entity
#include "KS/SRC/entity.h"

void entity::destroy_skeleton_ifc()
{
    delete my_skeleton_interface;
    my_skeleton_interface = 0;
}


// 0x00127590 destroy_slave_ifc__6entity
#include "KS/SRC/slave_interface.h"
#include "KS/SRC/entity.h"

void entity::destroy_slave_ifc()
{
    delete my_slave_interface;
    my_slave_interface = 0;
}


// 0x001275E0 destroy_soft_attrib_ifc__6entity
#include "KS/SRC/entity.h"

void entity::destroy_soft_attrib_ifc()
{
    delete my_soft_attrib_interface;
    my_soft_attrib_interface = 0;
}


// 0x00127688 destroy_time_ifc__6entity
#include "KS/SRC/entity.h"

void entity::destroy_time_ifc()
{
    delete my_time_interface;
    my_time_interface = 0;
}
// Matching decompilation blocks selected by generated build shims.

// 0x00139B28 num_mesh_bones__6entity
#include "KS/SRC/entity.h"
#include "NGL/PS2/ngl_ps2.h"

__asm__(".equ has_mesh__6entity, 0x00139AF8");
int entity::num_mesh_bones()
{
    if (!has_mesh())
        return 0;
    return get_mesh()->NBones;
}

// 0x001310F0 set_door__6entityb
#include "KS/SRC/entity.h"
__asm__(".equ set_door_closed__6entityb, 0x00131140");
extern "C" void close_entity_door(entity *value, bool closed)
    __asm__("set_door_closed__6entityb");

void entity::set_door(bool d) {
    if (d) {
        ext_flags |= EFLAG_EXT_IS_DOOR;
        void (*close_door)(entity *, bool) = close_entity_door;
        close_door(this, true);
    } else
        ext_flags &= ~EFLAG_EXT_IS_DOOR;
}

// 0x00132CD0 get_max_polys__C6entity
#include "KS/SRC/entity.h"
__asm__(".equ get_age__C6entity, 0x00133618");
int entity::get_max_polys() const {
    return my_visrep->get_max_faces(get_age());
}

// 0x00138E60 set_collisions_active__6entitybT1
#include "KS/SRC/entity.h"
__asm__(".equ region_update_poss_collide__6entity, 0x00139090");
extern "C" void update_possible_collisions(entity *value)
    __asm__("region_update_poss_collide__6entity");

void entity::set_collisions_active(bool a, bool update_reg) {
    if (((flags & EFLAG_PHYSICS_COLLISIONS_ACTIVE) != 0) != a) {
        if (a)
            flags |= EFLAG_PHYSICS_COLLISIONS_ACTIVE;
        else
            flags &= ~EFLAG_PHYSICS_COLLISIONS_ACTIVE;
        if (update_reg) {
            void (*update)(entity *) = update_possible_collisions;
            update(this);
        }
    }
}

// 0x001335C0 invalidate_colgeom__6entity
#include "KS/SRC/capsule.h"
#include "KS/SRC/entity.h"

void entity::invalidate_colgeom()
{
    if (get_colgeom())
        get_colgeom()->invalidate();
}

// 0x00138930 create_destroy_info__6entity
#include "KS/SRC/entity.h"

extern "C" void *KellyNew(
    unsigned int size,
    unsigned int alignment,
    const char *file,
    int line
) __asm__("__nw__FUiUiPCci");
extern "C" destroyable_info *DestroyableInfoCtor(
    void *memory,
    entity *owner
) __asm__("__16destroyable_infoP6entity");
extern const char entity_source_file[];

__asm__(".equ __nw__FUiUiPCci, 0x002AC578");
__asm__(".equ __16destroyable_infoP6entity, 0x00136148");
__asm__(".equ entity_source_file, 0x004CD0E8");

void entity::create_destroy_info()
{
    if (destroy_info == 0)
    {
        void *memory = KellyNew(56, 0, entity_source_file, 0);
        destroy_info = DestroyableInfoCtor(memory, this);
    }
}

// 0x00139C48 SetEntityMeshFlags__FP7nglMeshi
#include "NGL/PS2/ngl_ps2.h"

void SetEntityMeshFlags(nglMesh *mesh, int flag)
{
    if (mesh)
    {
        for (u_int i = 0; i < mesh->NSections; i++)
        {
            nglMeshSection *section = &mesh->Sections[i];
            nglMaterial *material = section->Material;
            material->Flags |= flag;
        }
    }
}

// 0x00139CA0 ClearEntityMeshFlags__FP7nglMeshi
#include "NGL/PS2/ngl_ps2.h"

void ClearEntityMeshFlags(nglMesh *mesh, int flag)
{
    if (mesh)
    {
        for (u_int i = 0; i < mesh->NSections; i++)
        {
            nglMeshSection *section = &mesh->Sections[i];
            nglMaterial *material = section->Material;
            material->Flags &= ~flag;
        }
    }
}

// 0x00130968 force_region__6entityPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node
#include "KS/SRC/entity.h"

extern "C" bool add_entity_region(
    entity *self, region_node *region)
    __asm__(
        "add_region__6entityPQ2t5graph4Z7stringxZP6region"
        "ZP6portalZt4less1Z7stringx4node"
    );

__asm__(".equ remove_from_regions__6entity, 0x0012FE18");
__asm__(".equ _set_region_forced_status__6entity, 0x00131E00");
__asm__(
    ".equ add_region__6entityPQ2t5graph4Z7stringxZP6region"
    "ZP6portalZt4less1Z7stringx4node, 0x0012FD50"
);

void entity::force_region(region_node *region)
{
    if (!(flags & EFLAG_REGION_FORCED))
        remove_from_regions();
    _set_region_forced_status();
    bool (*add)(entity *, region_node *) = add_entity_region;
    add(this, region);
}

// 0x00127788 mem_cleanup__Q26entity13movement_info
#include "KS/SRC/entity.h"

void arch_free(void *memory);
__asm__(".equ arch_free__FPv, 0x002AC768");
__asm__(".equ _Q26entity13movement_info$meminit, 0x003E5A6C");
__asm__(".equ _Q26entity13movement_info$allocated, 0x003E5A70");
__asm__(".equ _Q26entity13movement_info$membuffer, 0x003E5A74");
__asm__(".equ _Q26entity13movement_info$mem_free_func, 0x003E5A7C");

void entity::movement_info::mem_cleanup()
{
    if (meminit)
    {
        arch_free(membuffer);
        arch_free(allocated);
        meminit = false;
        if (mem_free_func)
            ((void (*)())mem_free_func)();
    }
}

// 0x00134D80 init_random_ifl_frame_boost_table__Fv
#include "KS/SRC/random.h"

extern int random_ifl_frame_boost_table[256];
__asm__(".equ g_random_ptr, 0x00432360");
__asm__(".equ random_ifl_frame_boost_table, 0x003E5C50");
__asm__(".equ NextRand__6Random, 0x00112C68");
void init_random_ifl_frame_boost_table() {
    for (int i=0;i<64;++i)
        random_ifl_frame_boost_table[i]=g_random_ptr->NextRand()&63;
}

// 0x00137990 apply_destruction_fx__6entity
#include "KS/SRC/entity.h"

__asm__(".equ apply_destruction_fx__16destroyable_info, 0x00137318");
__asm__(".equ disgorge_items__6entityP6entity, 0x00137C78");
extern "C" void disgorge_entity_items(
    entity *self,
    entity *target
) __asm__("disgorge_items__6entityP6entity");
void entity::apply_destruction_fx() {
    if (destroy_info) {
        destroy_info->apply_destruction_fx();
        void (*disgorge)(entity *, entity *) =
            disgorge_entity_items;
        disgorge(this,0);
    } else {
        set_active(false);
    }
}

// 0x00137C98 use_item__6entityP4item
#include "KS/SRC/item.h"

void entity::use_item(item *value) {
    if (value) {
        last_item_used=value;
        value->apply_effects(this);
        raise_signal(4);
    }
}

// 0x00127628 create_time_ifc__6entity
#include "KS/SRC/archalloc.h"
#include "KS/SRC/entity.h"

extern const char entity_file[];
__asm__(".equ entity_file, 0x004CB640");

time_interface *entity::create_time_ifc()
{
    my_time_interface =
        new (0, entity_file, 0) time_interface(this);
    return my_time_interface;
}

// 0x00134AB0 attach_anim__6entityP11entity_anim
#include "KS/SRC/entity_anim.h"
#include "KS/SRC/entity.h"

__asm__(".equ detach__11entity_anim, 0x00113A50");
bool entity::attach_anim(entity_anim *animation) {
    if (!current_anim || animation->get_priority()>=current_anim->get_priority()) {
        if (current_anim && animation!=current_anim)
            current_anim->detach();
        current_anim=animation;
        return true;
    }
    return false;
}

// 0x00130F70 ifl_lock__6entityi
#include "KS/SRC/entity.h"

void entity::ifl_lock(int index)
{
    if (my_visrep) {
        if (index >= 0) {
            int length = my_visrep->get_anim_length();
            if (index < length)
                frame_time_info.set_ifl_frame_locked(index);
                __asm__ __volatile__("" : : : "memory");
        }
    }
}

// 0x00133458 activate_motion_trail__6entityiG7color32iiRC8vector3d
struct vector3d { float x,y,z; };
struct trail_info { int start,end,count; int length; char padding[8]; vector3d head; char padding2[12]; unsigned int color; int min_alpha; int max_alpha; };
struct entity_layout { char padding[120]; unsigned int flags; char padding2[208]; trail_info *trail; };
extern "C" void activate_trail(entity_layout *self, int length, unsigned int color, int min_alpha, int max_alpha, const vector3d *tip) __asm__("activate_motion_trail__6entityiG7color32iiRC8vector3d");
void activate_trail(entity_layout *self, int length, unsigned int color, int min_alpha, int max_alpha, const vector3d *tip)
{
    self->flags |= 0x800;
    self->trail->length = length;
    self->trail->color = color;
    self->trail->min_alpha = min_alpha;
    self->trail->max_alpha = max_alpha;
    self->trail->start=0;
    self->trail->end=0;
    self->trail->count=0;
    register trail_info *final_trail __asm__("$2")=self->trail;
    __asm__ __volatile__("" : "+r"(final_trail));
    register vector3d *head __asm__("$3")=&final_trail->head;
    head->x=tip->x;
    head->y=tip->y;
    head->z=tip->z;
}

// 0x00130CB0 set_created_entity_default_active_status__6entity
struct entity_vtable{char padding[248];short adjustment;short reserved;void(*set_active)(void*,bool);};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[112];int flavor;};extern "C" void set_default(entity_layout*self) __asm__("set_created_entity_default_active_status__6entity");void set_default(entity_layout*self){switch(self->flavor){case 1:case 2:case 3:case 4:case 10:{entity_vtable*t=self->vtable;t->set_active((char*)self+t->adjustment,false);break;}default:{entity_vtable*t=self->vtable;t->set_active((char*)self+t->adjustment,true);break;}}}

// 0x00132300 delete_colgeom__6entity
struct cg_vtable{char padding[8];short adjustment;short reserved;void(*destroy)(void*,int);};struct cg{char p0[8];cg_vtable*vtable;};struct entity_layout{char p0[120];unsigned flags;char p1[204];cg*colgeom;};extern "C" void bank_delete(void*,cg*) __asm__("delete_instance__t13instance_bank1Z7cg_meshP7cg_mesh");__asm__(".equ delete_instance__t13instance_bank1Z7cg_meshP7cg_mesh,0x0013F730");extern char cg_mesh_bank[];__asm__(".equ cg_mesh_bank,0x00434920");extern "C" void delete_colgeom(entity_layout*self) __asm__("delete_colgeom__6entity");void delete_colgeom(entity_layout*self){if(self->colgeom){if(self->flags&0x20000000)bank_delete(cg_mesh_bank,self->colgeom);else{cg*c=self->colgeom;cg_vtable*t=c->vtable;t->destroy((char*)c+t->adjustment,3);}self->colgeom=0;}}

// 0x00138B28 set_control_active__6entityb
struct controller_vtable{char p0[24];short off_adjust;short x0;void(*off)(void*);short on_adjust;short x1;void(*on)(void*);};struct controller{int active;char p0[4];controller_vtable*vtable;};struct entity_layout{char p0[392];controller*my_controller;};extern "C" void set_control(entity_layout*self,bool a) __asm__("set_control_active__6entityb");void set_control(entity_layout*self,bool a){controller*c=self->my_controller;if(c){if(c->active){if(!a){controller_vtable*t=c->vtable;t->off((char*)c+t->off_adjust);}}else if(a){controller_vtable*t=c->vtable;t->on((char*)c+t->on_adjust);}}}

// 0x00138D90 set_active__6entityb
struct entity_vtable{char p0[1496];short control_adjust;short x0;void(*set_control)(void*,bool);};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[108];unsigned flags;char p2[268];void*controller;};extern "C" void set_active(entity_layout*self,bool a) __asm__("set_active__6entityb");void set_active(entity_layout*self,bool a){bool old=((int)self->flags>>17)&1;if(old!=a){if(a)self->flags|=0x20000;else self->flags&=~0x20000;if(self->controller){entity_vtable*t=self->vtable;t->set_control((char*)self+t->control_adjust,a);}}}

// 0x00132068 has_entity_collision__C6entity
struct cg_vtable{char p0[136];short adjustment;short x0;bool(*test)(void*);};struct cg{char p0[8];cg_vtable*vtable;};struct entity_vtable{char p0[264];short adjustment;short x0;bool(*active)(void*);};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[316];cg*colgeom;};extern "C" bool pred(entity_layout*self) __asm__("has_entity_collision__C6entity");bool pred(entity_layout*self){register bool result __asm__("$17")=0;if(self->colgeom){entity_vtable*t=self->vtable;if(t->active((char*)self+t->adjustment)){cg*c=self->colgeom;cg_vtable*ct=c->vtable;int raw=ct->test((char*)c+ct->adjustment);result=raw!=0;}}return result;}

// 0x001320D8 has_camera_collision__C6entity
struct cg_vtable{char p0[144];short adjustment;short x0;bool(*test)(void*);};struct cg{char p0[8];cg_vtable*vtable;};struct entity_vtable{char p0[264];short adjustment;short x0;bool(*active)(void*);};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[316];cg*colgeom;};extern "C" bool pred(entity_layout*self) __asm__("has_camera_collision__C6entity");bool pred(entity_layout*self){register bool result __asm__("$17")=0;if(self->colgeom){entity_vtable*t=self->vtable;if(t->active((char*)self+t->adjustment)){cg*c=self->colgeom;cg_vtable*ct=c->vtable;int raw=ct->test((char*)c+ct->adjustment);result=raw!=0;}}return result;}

// 0x00131070 ifl_play__6entity
#include "KS/SRC/entity.h"

extern "C" void warning(const char*,...) __asm__("warning__FPCce");__asm__(".equ warning__FPCce,0x001DFB58");extern const char warning_text[];__asm__(".equ warning_text,0x004CCA98");void entity::ifl_play(){if(my_visrep){int period=my_visrep->get_anim_length();if(period<0)warning(warning_text);else{frame_time_info.compute_boost_for_play(period);frame_time_info.set_ifl_frame_locked(-1);}}int dead;__asm__("" : "=r"(dead));}

// 0x00131850 compute_visual_xz_radius_rel_center__6entity
#include "KS/SRC/entity.h"

void entity::compute_visual_xz_radius_rel_center(){if(flags&EFLAG_MISC_NONSTATIC){vis_xz_rad_rel_center=get_visual_radius();}else if(my_visrep){vis_xz_rad_rel_center=my_visrep->compute_xz_radius_rel_center(get_abs_po());}}

// 0x00132408 frame_advance__6entityf
#include "KS/SRC/entity.h"

struct physical_vtable{char p0[64];short adjustment;short x0;void(*advance)(void*,float);};struct physical_layout{physical_vtable*vtable;char p0[4];unsigned flags;};extern "C" int hero_id(entity*) __asm__("get_hero_id__6entity");extern "C" void update_light(entity*,float,int) __asm__("updatelighting__6entityfi");__asm__(".equ get_hero_id__6entity,0x0012A1C8");__asm__(".equ updatelighting__6entityfi,0x00132480");void entity::frame_advance(float t){physical_layout*physical=(physical_layout*)my_physical_interface;if(physical&&(physical->flags&1)&&!(physical->flags&2)){physical_vtable*v=physical->vtable;v->advance((char*)physical+v->adjustment,t);}int id=hero_id(this);update_light(this,t,id);int dead;__asm__("" : "=r"(dead));}

// 0x00138988 suspend__6entity
#include "KS/SRC/entity.h"

struct controller_vtable{char p0[24];short adjustment;short x0;void(*deactivate)(void*);};struct controller{bool active;char p0[4];controller_vtable*vtable;};extern "C" void push_disable(ai_interface*) __asm__("push_disable__12ai_interface");__asm__(".equ push_disable__12ai_interface,0x00105528");void entity::suspend(){if(!suspended){suspended=true;if(my_ai_interface)push_disable(my_ai_interface);register controller*c __asm__("$5")=(controller*)my_controller;if(c){suspended_active_status=c->active;if(c->active){controller_vtable*t=c->vtable;t->deactivate((char*)c+t->adjustment);}}}}

// 0x00137BE0 find_like_item__C6entityP4item
#include "KS/SRC/entity.h"

extern "C" bool same(const item*,const item&)__asm__("is_same_item__C4itemRC4item");__asm__(".equ is_same_item__C4itemRC4item,0x0028A128");struct item_vector{item**begin;item**end;item**capacity;};struct container_info{item_vector items;};item*entity::find_like_item(item*target)const{if(coninfo){item**it=coninfo->items.begin;item**last=coninfo->items.end;for(;it!=last;++it){item*lit=*it;if(lit&&same(lit,*target))return lit;}}return 0;}

// 0x00138D10 possibly_aging__C6entity
#include "KS/SRC/entity.h"

bool entity::possibly_aging()const{return my_visrep!=0&&((my_visrep->get_anim_length()>1)||(my_visrep->is_uv_animated()));}

// 0x001277E8 __nw__Q26entity13movement_infoUi
extern "C" void check()__asm__("check_alias");extern "C" void nglPrintf(const char*,...)__asm__("nglPrintf__FPCce");extern const char format_text[];extern const char class_text[];__asm__(".equ check_alias,0x001276D0");__asm__(".equ nglPrintf__FPCce,0x003AC050");__asm__(".equ format_text,0x004CB6B0");__asm__(".equ class_text,0x004CB6D8");extern "C" void*allocate(unsigned)__asm__("__nw__Q26entity13movement_infoUi");void*allocate(unsigned){check();register char*allocated_high asm("$7")=(char*)0x003e0000;register char*current_high asm("$8")=(char*)0x003e0000;register int one asm("$9")=1;register char*memory_high asm("$10")=(char*)0x003e0000;int i=0,offset=0;for(;i<16;i++,offset+=96){asm volatile("" : : : "memory");int*slots=*(int**)(allocated_high+0x5a70);if(!slots[i]){*(int*)(current_high+0x5a80)=i;slots[i]=one;char*memory=*(char**)(memory_high+0x5a74);return memory+offset;}}nglPrintf(format_text,class_text);return(void*)-1;}

// 0x001360B8 copy_instance_data__16destroyable_infoP16destroyable_info
struct stringx{char data[8];stringx&operator=(const stringx&) __asm__("__as__7stringxRC7stringx");};struct visual_rep{};extern visual_rep*new_visrep_instance(visual_rep*) __asm__("new_visrep_instance__FP10visual_rep");
class destroyable_info{public:short flags;short pad;float destroy_lifetime;stringx destroy_fx;stringx destroy_script;stringx destroyed_visrep;stringx preload_script;visual_rep*destroyed_mesh;int hit_points;void copy_instance_data(destroyable_info*) __asm__("copy_instance_data__16destroyable_infoP16destroyable_info");};
__asm__(".equ __as__7stringxRC7stringx,0x0034E0B8");__asm__(".equ new_visrep_instance__FP10visual_rep,0x002D7388");
void destroyable_info::copy_instance_data(destroyable_info*data){flags=data->flags;destroy_lifetime=data->destroy_lifetime;destroy_fx=data->destroy_fx;destroy_script=data->destroy_script;preload_script=data->preload_script;destroyed_visrep=data->destroyed_visrep;hit_points=data->hit_points;if(data->destroyed_mesh)destroyed_mesh=new_visrep_instance(data->destroyed_mesh);else destroyed_mesh=0;}

// 0x00136230 _$_16destroyable_info
struct stringx{char d[8];};struct visual_rep{};struct destroyable_info{char p0[8];stringx a,b,c,d;visual_rep*mesh;char p1[8];void*vtable;};extern "C" void unload(visual_rep*)__asm__("unload_visual_rep__FP10visual_rep");extern "C" void strd(void*,int)__asm__("_$_7stringx");extern "C" void del(void*)__asm__("__builtin_delete");extern void*vt;__asm__(".equ unload_visual_rep__FP10visual_rep,0x002D74C0");__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ __builtin_delete,0x002AC6B0");__asm__(".equ vt,0x004CE000");extern "C" void destroy(destroyable_info*,int)__asm__("_$_16destroyable_info");void destroy(destroyable_info*self,int flag){self->vtable=&vt;if(self->mesh){unload(self->mesh);self->mesh=0;}strd((char*)self+32,2);strd((char*)self+24,2);strd((char*)self+16,2);strd((char*)self+8,2);if(flag&1){del(self);asm volatile("");}}

// 0x00138A98 set_controller__6entityP17entity_controller
#include "KS/SRC/entity.h"

struct ControllerVtable{char p0[24];short kill_adj;short z0;void(*kill)(void*);short resurrect_adj;short z1;void(*resurrect)(void*);};struct entity_controller{bool active;char p[4];ControllerVtable*vtable;void set_active(bool y){if(active){if(!y){ControllerVtable*v=vtable;v->kill((char*)this+v->kill_adj);}}else if(y){ControllerVtable*v=vtable;v->resurrect((char*)this+v->resurrect_adj);}}};struct EntityVtable{char p[240];short active_adj;short z;bool(*is_active)(void*);};struct EntityLayout{char p0[8];EntityVtable*vtable;};void entity::set_controller(entity_controller*c){my_controller=c;if(c){EntityVtable*v=((EntityLayout*)this)->vtable;c->set_active(v->is_active((char*)this+v->active_adj));}}

// 0x00130FD8 ifl_pause__6entity
#include "KS/SRC/entity.h"

struct EntityVtable{char p[1544];short adj;short z;void(*ifl_lock)(void*,int);};
struct EntityLayout{char p[8];EntityVtable*vtable;};
extern const char warning_text[];extern "C" void warning(const char*,...) __asm__("warning__FPCce");asm(".equ warning__FPCce,0x001DFB58");asm(".equ warning_text,0x004CCA98");void entity::ifl_pause(){if(my_visrep){int locked=frame_time_info.get_ifl_frame_locked();if(locked<0){int period=my_visrep->get_anim_length();if(period<0){warning(warning_text);asm("" : : : "memory");}else{int current=frame_time_info.time_to_frame(period);EntityVtable*t=((EntityLayout*)this)->vtable;t->ifl_lock((char*)this+t->adj,current);}}}}

// 0x00137CF8 copy_visrep__6entityP6entity
#include "KS/SRC/entity.h"

struct EntityVtable{char p0[632];short mesh_adj;short z0;void*(*get_mesh)(void*);char p1[8];short lores_adj;short z1;void*(*get_lores)(void*);char p2[8];short shadow_adj;short z2;void*(*get_shadow)(void*);};struct EntityLayout{char p0[8];EntityVtable*vtable;};void entity::copy_visrep(entity*ent){register EntityVtable*v asm("$3")=((EntityLayout*)ent)->vtable;my_mesh=(nglMesh*)v->get_mesh((char*)ent+v->mesh_adj);v=((EntityLayout*)ent)->vtable;lores_mesh=(nglMesh*)v->get_lores((char*)ent+v->lores_adj);v=((EntityLayout*)ent)->vtable;shadow_mesh=(nglMesh*)v->get_shadow((char*)ent+v->shadow_adj);if(my_mesh)set_flag(EFLAG_GRAPHICS,true);else set_flag(EFLAG_GRAPHICS,false);}

// 0x00138A00 unsuspend__6entity
#include "KS/SRC/entity.h"

extern "C" void pop_disable(ai_interface*) __asm__("pop_disable__12ai_interface");asm(".equ pop_disable__12ai_interface,0x00105570");struct ControllerVtable{char p[24];short kill_adj;short z0;void(*kill)(void*);short resurrect_adj;short z1;void(*resurrect)(void*);};struct controller{bool active;bool deactivate;ControllerVtable*vtable;void set_active(bool yorn){if(active){if(!yorn){ControllerVtable*v=vtable;v->kill((char*)this+v->kill_adj);}}else if(yorn){ControllerVtable*v=vtable;v->resurrect((char*)this+v->resurrect_adj);}}};void entity::unsuspend(){if(suspended){suspended=false;if(my_ai_interface)pop_disable(my_ai_interface);if(my_controller)((controller*)my_controller)->set_active(suspended_active_status);}}

// 0x0012F0E0 get_signal_id__6entityPCc
#include "KS/SRC/entity.h"

extern const char*entity_signal_names[];extern "C" unsigned strlen(const char*);extern "C" int strcmp(const char*,const char*);asm(".equ entity_signal_names,0x003E5AF0");asm(".equ strlen,0x003D40E0");asm(".equ strcmp,0x003D3E88");unsigned short entity::get_signal_id(const char*name){unsigned idx;for(idx=0;idx<27;++idx){unsigned offset=strlen(entity_signal_names[idx])-strlen(name);if(offset>strlen(entity_signal_names[idx]))continue;if(!strcmp(name,&entity_signal_names[idx][offset]))return idx;}return 0xffff;}

// 0x00131688 copy_flags__6entityRC6entity
struct entity_layout;struct entity_vtable{char padding[320];short adjustment;short reserved;void(*set_walkable)(void*,bool);};struct entity_layout{char padding0[8];entity_vtable*vtable;char padding1[108];unsigned flags;char padding2[284];unsigned ext_flags;};extern "C" void copy_flags(entity_layout*,const entity_layout&)__asm__("copy_flags__6entityRC6entity");void copy_flags(entity_layout*self,const entity_layout&b){const unsigned COPY_MASK=0x20080300;const unsigned EXT_COPY_MASK=0xfff3f0ff;self->flags|=(b.flags&COPY_MASK);self->flags&=(b.flags|~COPY_MASK);self->ext_flags|=(b.ext_flags&EXT_COPY_MASK);self->ext_flags&=(b.ext_flags|~EXT_COPY_MASK);if(self->ext_flags&0x00100000){entity_vtable*v=self->vtable;v->set_walkable((char*)self+v->adjustment,true);}}

// 0x00130D20 set_last_po__6entityRC2po
#include "KS/SRC/entity.h"

void entity::set_last_po(const po&the_po){if(last_po)*last_po=the_po;}

// 0x00132EA8 activate_motion_blur__6entityiiif
#include "KS/SRC/entity.h"
#include "KS/SRC/mbi.h"

void entity::activate_motion_blur(int min_a,int max_a,int num,float spread){set_flag(EFLAG_GRAPHICS_MOTION_BLUR,true);if(is_motion_blurred()){mbi->motion_trail_start=0;mbi->motion_trail_end=0;mbi->motion_trail_count=0;mbi->blur_min_alpha=min_a;mbi->blur_max_alpha=max_a;mbi->num_blur_images=num;mbi->blur_spread=spread;}}

// 0x001276D0 check_mem_init__Q26entity13movement_info
#include "KS/SRC/entity.h"
#include "KS/SRC/staticmem.h"

extern const char movement_info_mem_description[];

__asm__(".equ _Q26entity13movement_info$meminit, 0x003E5A6C");
__asm__(".equ _Q26entity13movement_info$allocated, 0x003E5A70");
__asm__(".equ _Q26entity13movement_info$membuffer, 0x003E5A74");
__asm__(".equ _Q26entity13movement_info$mem_init_func, 0x003E5A78");
__asm__(".equ _Q26entity13movement_info$mem_free_func, 0x003E5A7C");
__asm__(".equ _Q26entity13movement_info$current_allocation, 0x003E5A80");
__asm__(".equ movement_info_mem_description, 0x004CB678");
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
__asm__(".equ memset, 0x003D18D0");

#define malloc(size) arch_malloc(size, movement_info_mem_description, 0)

void entity::movement_info::check_mem_init(void)
{
	if ( !meminit )
	{
		membuffer=malloc(16*sizeof(entity::movement_info));
		if ( membuffer==NULL ) return;
		memset(membuffer,0,16*sizeof(entity::movement_info));
		allocated=(bool *) malloc(16*sizeof(bool));
		if ( allocated==NULL ) return;
		memset(allocated,0,16*sizeof(bool));
		meminit=true;
		if (mem_init_func)
		{ void (*func) () = (void (*) ()) mem_init_func; (*func) (); }
	}
}

#undef malloc

// 0x00133640 render_passes_needed__C6entity
#include "KS/SRC/entity.h"
// Exact released implementation with the inherited virtual declaration order.

render_flavor_t entity::render_passes_needed() const
{
  if ( !my_visrep )
    return 0;

  render_flavor_t passes=my_visrep->render_passes_needed();
  if ( my_visrep->get_type() == VISREP_PMESH )
  {
    if ( render_color.get_alpha() < 0xFF )
      passes = RENDER_TRANSLUCENT_PORTION;
    else if ( is_motion_blurred() || is_motion_trailed() )
      passes |= RENDER_TRANSLUCENT_PORTION;
  }
  return passes;
}

// 0x00131730 get_visual_center__C6entity
#include "KS/SRC/entity.h"

__asm__(".equ get_age__C6entity, 0x00133618");
__asm__(".equ slow_xform__C2poRC8vector3d, 0x003482F8");

vector3d entity::get_visual_center() const
{
    if (!my_visrep)
        return get_abs_position();

    vector3d center = my_visrep->get_center(get_age());
    return get_abs_po().fast_8byte_xform(center);
}

// 0x00139880 set_ifc_vec__6entityRC7pstringRC8vector3d
#include "KS/SRC/ai_interface.h"
#include "KS/SRC/entity.h"
#include "KS/SRC/physical_interface.h"
#include "KS/SRC/soft_attrib_interface.h"

bool entity::set_ifc_vec(
    const pstring &attribute,
    const vector3d &value
)
{
    if (
        my_ai_interface &&
        my_ai_interface->set_ifc_vec(attribute, value)
    )
        return true;
    if (
        my_physical_interface &&
        my_physical_interface->set_ifc_vec(attribute, value)
    )
        return true;
    if (
        my_soft_attrib_interface &&
        my_soft_attrib_interface->set_ifc_vec(attribute, value)
    )
        return true;

    return false;
}

// 0x00139A28 set_ifc_str__6entityRC7pstringRC7stringx
#include "KS/SRC/ai_interface.h"
#include "KS/SRC/entity.h"
#include "KS/SRC/physical_interface.h"
#include "KS/SRC/soft_attrib_interface.h"

bool entity::set_ifc_str(
    const pstring &attribute,
    const stringx &value
)
{
    if (
        my_ai_interface &&
        my_ai_interface->set_ifc_str(attribute, value)
    )
        return true;
    if (
        my_physical_interface &&
        my_physical_interface->set_ifc_str(attribute, value)
    )
        return true;
    if (
        my_soft_attrib_interface &&
        my_soft_attrib_interface->set_ifc_str(attribute, value)
    )
        return true;

    return false;
}

// 0x00132148 get_updated_colgeom__6entityP2pof
#include "KS/SRC/capsule.h"
#include "KS/SRC/entity.h"

collision_geometry* entity::get_updated_colgeom(po * replacement_po, rational_t radius_scale)
{
  if (get_colgeom() && !get_colgeom()->is_valid() && !is_stationary())
  {
    update_colgeom(replacement_po);
  }
  if (get_colgeom())
    get_colgeom()->apply_radius_scale(radius_scale);
  return get_colgeom();
}

// 0x00139598 get_ifc_num__6entityRC7pstringRf
#include "KS/SRC/entity.h"

class ai_interface : public entity_interface {
};

bool entity::get_ifc_num(const pstring &att, rational_t &val)
{
  if (my_ai_interface && my_ai_interface->get_ifc_num(att, val))
    return true;
  if (my_physical_interface && my_physical_interface->get_ifc_num(att, val))
    return true;
  if (my_soft_attrib_interface && my_soft_attrib_interface->get_ifc_num(att, val))
    return true;
  if (my_hard_attrib_interface && my_hard_attrib_interface->get_ifc_num(att, val))
    return true;
  if (my_time_interface && my_time_interface->get_ifc_num(att, val))
    return true;

  return false;
}

// Source implementation boundary.
// 0x00144B98 set_radius__6entityf
#include "KS/SRC/entity.h"
void entity::set_radius(float value) {
    radius = value;
}

// 0x00144BA0 get_radius__C6entity
#include "KS/SRC/entity.h"
float entity::get_radius() const {
    return radius;
}

// 0x00144C30 is_time_limited__C6entity
#include "KS/SRC/entity.h"
bool entity::is_time_limited() const {
    return is_ext_flagged(EFLAG_EXT_TIME_LIMITED);
}

// 0x00144C78 is_active__C6entity
#include "KS/SRC/entity.h"
bool entity::is_active() const { return flags & EFLAG_ACTIVE; }

// 0x00144C88 get_forced_active__C6entity
#include "KS/SRC/entity.h"
entity::force_active_t entity::get_forced_active() const {
    return FORCE_ACTIVE_NONE;
}

// 0x00144C90 are_collisions_active__C6entity
#include "KS/SRC/entity.h"
bool entity::are_collisions_active() const { return flags & EFLAG_PHYSICS_COLLISIONS_ACTIVE; }

// 0x00144CA0 is_sticky__C6entity
#include "KS/SRC/entity.h"
bool entity::is_sticky() const { return flags & EFLAG_PHYSICS_STICKY; }

// 0x00144CE0 is_stationary__C6entity
#include "KS/SRC/entity.h"
bool entity::is_stationary() const { return !(flags & EFLAG_PHYSICS_MOVING); }

// 0x00144D28 is_walkable__C6entity
#include "KS/SRC/entity.h"
bool entity::is_walkable() const { return flags & EFLAG_PHYSICS_WALKABLE; }

// 0x00144D68 is_repulsion__C6entity
#include "KS/SRC/entity.h"
bool entity::is_repulsion() const { return flags & EFLAG_MISC_REPULSION; }

// 0x00144DA8 is_visible__C6entity
#include "KS/SRC/entity.h"
bool entity::is_visible() const { return flags & EFLAG_GRAPHICS_VISIBLE; }

// 0x00144DE0 is_motion_blurred__C6entity
#include "KS/SRC/entity.h"
bool entity::is_motion_blurred() const { return flags & EFLAG_GRAPHICS_MOTION_BLUR; }

// 0x00144DF0 is_motion_trailed__C6entity
#include "KS/SRC/entity.h"
bool entity::is_motion_trailed() const { return flags & EFLAG_GRAPHICS_MOTION_TRAIL; }

// 0x00144E00 get_externally_controlled__C6entity
#include "KS/SRC/entity.h"
bool entity::get_externally_controlled() const { return flags & EFLAG_PHYSENT_EXTERNALLY_CONTROLLED; }

// 0x00144E18 get_in_use__C6entity
#include "KS/SRC/entity.h"
bool entity::get_in_use() const {
    return flags & EFLAG_MISC_IN_USE;
}

// 0x00144E58 get_colgeom__C6entity
#include "KS/SRC/entity.h"
collision_geometry *entity::get_colgeom() const {
    return colgeom;
}

// 0x00144E60 get_damage_capsule__6entity
#include "KS/SRC/entity.h"
collision_capsule *entity::get_damage_capsule() {
    return 0;
}

// 0x00144E68 get_updated_damage_capsule__6entity
#include "KS/SRC/entity.h"
collision_capsule *entity::get_updated_damage_capsule() {
    return 0;
}

// 0x00144E70 get_inter_capsule_radius_scale__6entity
#include "KS/SRC/entity.h"
float entity::get_inter_capsule_radius_scale() { return 1.0f; }

// 0x00144E80 get_water_dist__C6entity
#include "KS/SRC/entity.h"
float entity::get_water_dist() const { return 1000.0f; }

// 0x00144E90 get_underwater_pct__C6entity
#include "KS/SRC/entity.h"
float entity::get_underwater_pct() const {
    return 0.0f;
}

// 0x00144EA0 get_water_normal__C6entity
#include "KS/SRC/entity.h"
extern const vector3d ZEROVEC_00513840;

const vector3d& entity::get_water_normal() const {
    return ZEROVEC_00513840;
}

// 0x00144EB0 get_underwater_time__C6entity
#include "KS/SRC/entity.h"
float entity::get_underwater_time() const {
    return 0.0f;
}

// 0x00144EE8 get_effective_collision_mass__C6entityRC8vector3dT1
#include "KS/SRC/entity.h"
float entity::get_effective_collision_mass(const vector3d& location, const vector3d& direction) const {
    return 0.0f;
}

// 0x00144EF8 is_picked_up__6entity
#include "KS/SRC/entity.h"
bool entity::is_picked_up() {
    return false;
}

// 0x00144F00 phys_render__6entityfb
#include "KS/SRC/entity.h"
void entity::phys_render(float time, bool shadow) {
}

// 0x00144F58 get_visual_xz_radius_rel_center__C6entity
#include "KS/SRC/entity.h"
float entity::get_visual_xz_radius_rel_center() const {
    return vis_xz_rad_rel_center;
}

// 0x00144F60 get_vrep__C6entity
#include "KS/SRC/entity.h"
visual_rep *entity::get_vrep() const {
    return my_visrep;
}

// 0x00144F68 get_mesh__C6entity
#include "KS/SRC/entity.h"
nglMesh *entity::get_mesh() const {
    return my_mesh;
}

// 0x00144F70 get_lores_mesh__C6entity
#include "KS/SRC/entity.h"
nglMesh *entity::get_lores_mesh() const {
    return lores_mesh;
}

// 0x00144F78 get_shadow_mesh__C6entity
#include "KS/SRC/entity.h"
nglMesh *entity::get_shadow_mesh() const {
    return shadow_mesh;
}

// 0x00144F80 set_fade_away__6entityb
#include "KS/SRC/entity.h"
void entity::set_fade_away(bool fade) {
}

// 0x00144F88 get_fade_away__C6entity
#include "KS/SRC/entity.h"
bool entity::get_fade_away() const {
    return false;
}

// 0x00144F90 get_filename__C6entity
#include "KS/SRC/entity.h"
const stringx& entity::get_filename() const {
    return sendl;
}

// 0x00144FA0 get_dirname__C6entity
#include "KS/SRC/entity.h"
const stringx& entity::get_dirname() const {
    return sendl;
}

// 0x00144FB0 has_dirname__C6entity
#include "KS/SRC/entity.h"
bool entity::has_dirname() const {
    return false;
}

// 0x00144FC0 get_flavor__C6entity
#include "KS/SRC/entity.h"
entity_flavor_t entity::get_flavor() const {
    return flavor;
}

// 0x00144FC8 is_an_entity__C6entity
#include "KS/SRC/entity.h"
bool entity::is_an_entity() const {
    return true;
}

// 0x00144FD0 is_a_beam__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_beam() const {
    return false;
}

// 0x00144FD8 is_a_camera__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_camera() const {
    return false;
}

// 0x00144FE0 is_a_station_camera__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_station_camera() const {
    return false;
}

// 0x00144FE8 is_a_game_camera__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_game_camera() const {
    return false;
}

// 0x00144FF0 is_a_marky_camera__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_marky_camera() const {
    return false;
}

// 0x00144FF8 is_a_mouselook_camera__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_mouselook_camera() const {
    return false;
}

// 0x00145000 is_a_sniper_camera__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_sniper_camera() const {
    return false;
}

// 0x00145008 is_a_conglomerate__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_conglomerate() const {
    return false;
}

// 0x00145010 is_a_turret__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_turret() const {
    return false;
}

// 0x00145018 is_a_ladder__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_ladder() const {
    return false;
}

// 0x00145020 is_a_light_source__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_light_source() const {
    return false;
}

// 0x00145028 is_a_limb_body__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_limb_body() const {
    return false;
}

// 0x00145030 is_a_marker__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_marker() const {
    return false;
}

// 0x00145038 is_a_rectangle_marker__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_rectangle_marker() const {
    return false;
}

// 0x00145040 is_a_cube_marker__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_cube_marker() const {
    return false;
}

// 0x00145048 is_a_crawl_marker__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_crawl_marker() const {
    return false;
}

// 0x00145050 is_a_particle_generator__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_particle_generator() const {
    return false;
}

// 0x00145058 is_a_physical_entity__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_physical_entity() const {
    return false;
}

// 0x00145060 is_a_crate__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_crate() const {
    return false;
}

// 0x00145068 is_an_item__C6entity
#include "KS/SRC/entity.h"
bool entity::is_an_item() const {
    return false;
}

// 0x00145070 is_a_visual_item__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_visual_item() const {
    return false;
}

// 0x00145078 is_a_handheld_item__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_handheld_item() const {
    return false;
}

// 0x00145080 is_a_gun__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_gun() const {
    return false;
}

// 0x00145088 is_a_thrown_item__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_thrown_item() const {
    return false;
}

// 0x00145090 is_a_melee_item__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_melee_item() const {
    return false;
}

// 0x00145098 is_a_morphable_item__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_morphable_item() const {
    return false;
}

// 0x001450A0 is_a_projectile__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_projectile() const {
    return false;
}

// 0x001450A8 is_a_rigid_body__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_rigid_body() const {
    return false;
}

// 0x001450B0 is_a_grenade__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_grenade() const {
    return false;
}

// 0x001450B8 is_a_rocket__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_rocket() const {
    return false;
}

// 0x001450C0 is_a_scanner__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_scanner() const {
    return false;
}

// 0x001450C8 is_a_sky__C6entity
#include "KS/SRC/entity.h"
bool entity::is_a_sky() const {
    return false;
}

// 0x001450D0 frame_done__6entity
#include "KS/SRC/entity.h"
void entity::frame_done() {
}

// 0x001450D8 add_position_increment__6entityR8vector3d
#include "KS/SRC/entity.h"
bool entity::add_position_increment(vector3d &increment) {
    return false;
}

// 0x001450E0 terrain_position__C6entity
#include "KS/SRC/entity.h"
const vector3d& entity::terrain_position() const {
    return get_abs_position();
}

// 0x00145118 get_colgeom_root_po__C6entity
#include "KS/SRC/entity.h"
const po &entity::get_colgeom_root_po() const {
    return get_abs_po();
}

// 0x00145120 get_colgeom_root__C6entity
#include "KS/SRC/entity.h"
const entity *entity::get_colgeom_root() const {
    return this;
}

// 0x00145130 get_region__C6entity
#include "KS/SRC/entity.h"
region_node *entity::get_region() const {
    return center_region;
}

// 0x00145138 camera_set_target__6entityRC8vector3d
#include "KS/SRC/entity.h"
void entity::camera_set_target(const vector3d &position) {
}

// 0x00145140 camera_set_roll__6entityf
#include "KS/SRC/entity.h"
void entity::camera_set_roll(float angle) {
}

// 0x00145148 camera_set_collide_with_world__6entityb
#include "KS/SRC/entity.h"
void entity::camera_set_collide_with_world(bool collide) {
}

// 0x00145150 camera_slide_to__6entityRC8vector3dT1ff
#include "KS/SRC/entity.h"
bool entity::camera_slide_to(
    const vector3d &position,
    const vector3d &target,
    float roll,
    float speed
) {
    return false;
}

// 0x00145158 camera_slide_to_orbit__6entityRC8vector3dffff
#include "KS/SRC/entity.h"
bool entity::camera_slide_to_orbit(
    const vector3d &center,
    float range,
    float theta,
    float psi,
    float speed
) {
    return false;
}

// 0x00145160 camera_orbit__6entityRC8vector3dfff
#include "KS/SRC/entity.h"
void entity::camera_orbit(
    const vector3d &center,
    float range,
    float theta,
    float psi
) {
}

// 0x001451A8 get_frame_delta__C6entity
#include "KS/SRC/entity.h"
const po& entity::get_frame_delta() const {
    return get_movement_info()->frame_delta;
}

// 0x001451B8 get_programmed_cell_death__C6entity
#include "KS/SRC/entity.h"
float entity::get_programmed_cell_death() const {
    return programmed_cell_death;
}

// 0x001451C0 get_hit_points__C6entity
#include "KS/SRC/entity.h"
float entity::get_hit_points() const { return 1.0f; }

// 0x001451D0 get_full_hit_points__C6entity
#include "KS/SRC/entity.h"
float entity::get_full_hit_points() const { return 1.0f; }

// 0x00145208 has_destroy_info__C6entity
#include "KS/SRC/entity.h"
bool entity::has_destroy_info() const {
    return destroy_info != 0;
}

// 0x00145218 get_destroy_info__C6entity
#include "KS/SRC/entity.h"
destroyable_info *entity::get_destroy_info() const {
    return destroy_info;
}

// 0x00145168 is_frame_delta_valid__C6entity
#include "KS/SRC/entity.h"
bool entity::is_frame_delta_valid() const { return movement_info_data && movement_info_data->frame_delta_valid; }

// 0x00145188 is_last_frame_delta_valid__C6entity
#include "KS/SRC/entity.h"
bool entity::is_last_frame_delta_valid() const { return movement_info_data && movement_info_data->last_frame_delta_valid; }

// 0x00145258 set_render_scale__6entityRC8vector3d
#include "KS/SRC/entity.h"
void entity::set_render_scale(const vector3d &value) { render_scale = value; }

// 0x00144AC0 set_ext_flag_recursive__6entityUib
#include "KS/SRC/entity.h"
void entity::set_ext_flag_recursive(unsigned int flag, bool enabled) { if (enabled) ext_flags |= flag; else ext_flags &= ~flag; }

// 0x00144EC0 get_effective_collision_velocity__C6entityP8vector3dRC8vector3d
#include "KS/SRC/entity.h"
extern const vector3d global_ZEROVEC;
__asm__(".equ global_ZEROVEC, 0x00513840");
void entity::get_effective_collision_velocity(vector3d *target, const vector3d &location) const { *target = global_ZEROVEC; }

// 0x00144DB8 is_still_visible__C6entity
#include "KS/SRC/entity.h"
bool entity::is_still_visible() const { return is_visible(); }

// 0x001450F0 terrain_radius__C6entity
#include "KS/SRC/entity.h"
float entity::terrain_radius() const { return get_visual_radius(); }

// 0x00145228 get_detonate_position__C6entity
#include "KS/SRC/entity.h"
vector3d entity::get_detonate_position() const { return get_abs_position(); }

// 0x00144CB0 set_sticky__6entityb
#include "KS/SRC/entity.h"
void entity::set_sticky(bool value) { if (value) flags |= 0x40; else flags &= ~0x40; }

// 0x00144CF8 set_stationary__6entityb
#include "KS/SRC/entity.h"
void entity::set_stationary(bool value) { if (!value) flags |= 0x04; else flags &= ~0x04; }

// 0x00144D38 set_walkable__6entityb
#include "KS/SRC/entity.h"
void entity::set_walkable(bool value) { if (value) flags |= 0x08; else flags &= ~0x08; }

// 0x00144D78 set_repulsion__6entityb
#include "KS/SRC/entity.h"
void entity::set_repulsion(bool value) { if (value) flags |= 0x1000; else flags &= ~0x1000; }

// 0x00144F28 get_visrep_ending_time__C6entity
#include "KS/SRC/entity.h"
float entity::get_visrep_ending_time() const { return my_visrep->get_ending_time(); }

// 0x00144C48 set_time_limited__6entityb
#include "KS/SRC/entity.h"
void entity::set_time_limited(bool enabled) {
    if (enabled) {
        ext_flags |= 0x10000;
    } else {
        ext_flags &= ~0x10000;
    }
}

// 0x00144E28 set_in_use__6entityb
#include "KS/SRC/entity.h"
void entity::set_in_use(bool enabled) {
    if (enabled) {
        flags |= 0x10000;
    } else {
        flags &= ~0x10000;
    }
}

// 0x00145280 __tf16destroyable_info
#include "KS/SRC/entity.h"
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512008"); asm(".equ type_name, 0x004CEA58");
extern "C" void *GetTypeInfo() __asm__("__tf16destroyable_info");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
