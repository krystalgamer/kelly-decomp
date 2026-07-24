// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002D1D70)
// 0x002D1D70 render_passes_needed__C18particle_generator
class particle_generator {
public:
    unsigned int render_passes_needed() const;
};

unsigned int particle_generator::render_passes_needed() const {
    return 2;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2DB8)
// 0x002D2DB8 get_visual_radius__C18particle_generator
class particle_generator {
    char padding[0x2B4];
    float visual_radius;
public:
    float get_visual_radius() const;
};

float particle_generator::get_visual_radius() const {
    return visual_radius * 2.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2E20)
// 0x002D2E20 destroy_particles__18particle_generator
class particle_generator {
public:
    void destroy_particles();
};

void particle_generator::destroy_particles() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2D48)
// 0x002D2D48 get_visual_center__C18particle_generator
struct vector3d { float x; float y; float z; vector3d(const vector3d &other) { x = other.x; y = other.y; z = other.z; } };
class particle_generator { char padding[0x29c]; vector3d abs_visual_center; public: vector3d get_visual_center() const; };
vector3d particle_generator::get_visual_center() const { return abs_visual_center; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2DC8)
// 0x002D2DC8 get_visual_xz_radius_rel_center__C18particle_generator
struct entity_vtable_layout { char padding[0x260]; short adjustment; short padding2; float (*get_visual_radius)(void *self); };
class particle_generator { char padding[8]; entity_vtable_layout *vtable; public: float get_visual_xz_radius_rel_center() const; };
float particle_generator::get_visual_xz_radius_rel_center() const { entity_vtable_layout *table = vtable; return table->get_visual_radius((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2DF0)
// 0x002D2DF0 set_created_entity_default_active_status__18particle_generator
struct entity_vtable { char padding[0xf8]; short adjustment; short padding2; void (*set_active)(void *self, bool value); };
class particle_generator { char padding[8]; entity_vtable *vtable; public: void set_created_entity_default_active_status(); };
void particle_generator::set_created_entity_default_active_status() { entity_vtable *table = vtable; table->set_active((char *)this + table->adjustment, false); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2D70)
// 0x002D2D70 get_base_visual_radius__C18particle_generator
typedef float rational_t;
class particle_generator { public: char p0[0x220]; rational_t particle_life_span; char p1[12]; rational_t base_speed; rational_t speed_variation; char p2[0x20]; rational_t generation_radius; rational_t generation_height; rational_t get_base_visual_radius() const; };
rational_t particle_generator::get_base_visual_radius() const { return(base_speed*(speed_variation+1)*particle_life_span+generation_radius+generation_height)*1.5f+1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D0828)
#include "KS/SRC/particle_shared.h"
// 0x002D0828 acquire__18particle_generatorUi
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D0878)
// 0x002D0878 po_changed__18particle_generator
struct vector3d {
    float x;
    float y;
    float z;

    vector3d &operator=(const vector3d &other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
};

class po {
public:
    vector3d slow_xform(const vector3d &) const;
};

extern "C" void BonePoChanged(void *self) __asm__("po_changed__4bone");
__asm__(".equ slow_xform__C2poRC8vector3d, 0x003482F8");
__asm__(".equ po_changed__4bone, 0x00126DD8");

class particle_generator {
    char data_to_abs_po[0x50];
    po *absolute_po;
    char data_to_abs_visual_center[0x248];
    vector3d abs_visual_center;
    vector3d visual_center;

public:
    void po_changed();
};

void particle_generator::po_changed()
{
    BonePoChanged(this);
    abs_visual_center = absolute_po->slow_xform(visual_center);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2C38)
// 0x002D2C38 is_on__C18particle_generator
extern "C" float fmodf(float, float);
__asm__(".equ fmodf, 0x003C68C8");

class entity {
public:
    float get_age() const;
};

__asm__(".equ get_age__C6entity, 0x00133618");

class particle_generator : public entity {
    char data[0x270 - sizeof(entity)];
    float on_for;
    float off_for;

public:
    bool is_on() const;
};

bool particle_generator::is_on() const
{
    float age = get_age();
    float slice = fmodf(age, on_for + off_for);
    return slice < on_for;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2C88)
// 0x002D2C88 set_visible__18particle_generatorb
extern "C" void entity_set_visible(void *,bool)
    __asm__("set_visible__6entityb");
extern "C" void update_active(void *)
    __asm__("region_update_poss_active__6entity");
__asm__(".equ set_visible__6entityb, 0x00138E00");
__asm__(".equ region_update_poss_active__6entity, 0x00138EB0");
class particle_generator {
    char padding[0x78];
    int flags;
    char padding2[0x200];
    float time_to_next_particle;
public:
    void set_visible(bool visible);
};
void particle_generator::set_visible(bool visible) {
    register int current __asm__("$2")=(flags>>9)&1;
    register bool changed __asm__("$17")=current!=visible;
    if (visible) time_to_next_particle=0.0f;
    entity_set_visible(this,visible);
    if (changed) {
        update_active(this);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2CE8)
// 0x002D2CE8 is_still_visible__C18particle_generator
struct visible_vtable {
    char padding[0x158]; short adjustment; short reserved;
    bool (*is_visible)(void *);
};
class particle_generator {
    char padding[8]; visible_vtable *vtable;
    char padding2[0x208]; int start_particle; int end_particle;
public:
    bool is_still_visible() const;
};
bool particle_generator::is_still_visible() const {
    visible_vtable *table=vtable;
    return table->is_visible(
        (char *)this+table->adjustment
    ) || start_particle!=end_particle;
}
#endif
