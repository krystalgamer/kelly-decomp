// Matching decompilation blocks selected by generated build shims.


// 0x002D1D70 render_passes_needed__C18particle_generator
#include "KS/SRC/particle.h"

render_flavor_t particle_generator::render_passes_needed() const {
    return RENDER_TRANSLUCENT_PORTION;
}

// 0x002D2DB8 get_visual_radius__C18particle_generator
#include "KS/SRC/particle.h"

rational_t particle_generator::get_visual_radius() const {
    return visual_radius * 2.0f;
}

// 0x002D2E20 destroy_particles__18particle_generator
#include "KS/SRC/particle.h"

void particle_generator::destroy_particles() {
}

// 0x002D2D48 get_visual_center__C18particle_generator
#include "KS/SRC/particle.h"
vector3d particle_generator::get_visual_center() const { return abs_visual_center; }

// 0x002D2DC8 get_visual_xz_radius_rel_center__C18particle_generator
#include "KS/SRC/particle.h"
rational_t particle_generator::get_visual_xz_radius_rel_center() const { return get_visual_radius(); }

// 0x002D2DF0 set_created_entity_default_active_status__18particle_generator
#include "KS/SRC/particle.h"
void particle_generator::set_created_entity_default_active_status() { set_active(false); }

// 0x002D2D70 get_base_visual_radius__C18particle_generator
#include "KS/SRC/particle.h"
rational_t particle_generator::get_base_visual_radius() const { return(base_speed*(speed_variation+1)*particle_life_span+generation_radius+generation_height)*1.5f+1.0f; }

// 0x002D0828 acquire__18particle_generatorUi
#include "KS/SRC/particle.h"
__asm__(".equ acquire__6entityUi, 0x0012A820");
void particle_generator::acquire(unsigned int flags)
{
    flags |= EFLAG_MISC_NONSTATIC | EFLAG_GRAPHICS_VISIBLE;
    entity::acquire(flags);
    time_to_next_particle = 0.0f;
    start_particle = end_particle = 0;
    set_flag(EFLAG_GRAPHICS, true);
    last_position_valid = false;
}

// 0x002D0878 po_changed__18particle_generator
#include "KS/SRC/particle.h"
__asm__(".equ slow_xform__C2poRC8vector3d, 0x003482F8");
__asm__(".equ po_changed__4bone, 0x00126DD8");

void particle_generator::po_changed()
{
    entity::po_changed();
    abs_visual_center = get_abs_po().slow_xform(visual_center);
}

// 0x002D2C38 is_on__C18particle_generator
#include "KS/SRC/particle.h"
extern "C" float fmodf(float, float);
__asm__(".equ fmodf, 0x003C68C8");
__asm__(".equ get_age__C6entity, 0x00133618");

bool particle_generator::is_on() const
{
    float age = get_age();
    float slice = fmodf(age, on_for + off_for);
    return slice < on_for;
}

// 0x002D2C88 set_visible__18particle_generatorb
extern "C" void entity_set_visible(void *,bool)
    __asm__("set_visible__6entityb");
extern "C" void update_active(void *)
    __asm__("region_update_poss_active__6entity");
__asm__(".equ set_visible__6entityb, 0x00138E00");
__asm__(".equ region_update_poss_active__6entity, 0x00138EB0");
struct particle_visibility_layout {
    char padding[0x78];
    int flags;
    char padding2[0x200];
    float time_to_next_particle;
};
extern "C" void particle_set_visible(
    particle_visibility_layout *self,
    bool visible
) __asm__("set_visible__18particle_generatorb");
void particle_set_visible(particle_visibility_layout *self, bool visible) {
    register int current __asm__("$2")=(self->flags>>9)&1;
    register bool changed __asm__("$17")=current!=visible;
    if (visible) self->time_to_next_particle=0.0f;
    entity_set_visible(self,visible);
    if (changed) {
        update_active(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x002D2CE8 is_still_visible__C18particle_generator
#include "KS/SRC/particle.h"
bool particle_generator::is_still_visible() const {
    return is_visible() || start_particle != end_particle;
}

// 0x002D05F8 make_instance__C18particle_generatorRC9entity_idUi
#include "KS/SRC/particle.h"
extern "C" void *allocate(unsigned, unsigned, const char *, int)
    __asm__("__nw__FUiUiPCci");
extern "C" particle_generator *construct(
    particle_generator *,
    const entity_id &,
    unsigned
) __asm__("__18particle_generatorRC9entity_idUi");
extern "C" void copy(
    particle_generator *,
    const particle_generator &
) __asm__("copy_instance_data__18particle_generatorRC18particle_generator");
extern const char source_name[];
__asm__(".equ __nw__FUiUiPCci,0x002AC578");
__asm__(".equ __18particle_generatorRC9entity_idUi,0x002CF058");
__asm__(".equ copy_instance_data__18particle_generatorRC18particle_generator,0x002D0678");
__asm__(".equ source_name,0x004F0378");
extern "C" entity *make(
    const particle_generator *self,
    const entity_id &id,
    unsigned flags
) __asm__("make_instance__C18particle_generatorRC9entity_idUi");
entity *make(
    const particle_generator *self,
    const entity_id &id,
    unsigned flags)
{
    flags |= EFLAG_MISC_NONSTATIC | EFLAG_GRAPHICS_VISIBLE;
    particle_generator *newpg = construct(
        (particle_generator *)allocate(
            sizeof(particle_generator),
            0,
            source_name,
            0),
        id,
        flags);
    if (newpg)
        copy(newpg, *self);
    return newpg;
}
