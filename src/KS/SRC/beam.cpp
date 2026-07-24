// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00271748)
#include "KS/SRC/beam_shared.h"
// 0x00271748 release__4beam
void beam::release()
{
    entity::release();
    purge_effects();

    if (my_material != 0) {
        material_bank.delete_instance(my_material);
        my_material = 0;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002721F8)
#include "KS/SRC/beam_shared.h"
// 0x002721F8 render_passes_needed__C4beam
render_flavor_t beam::render_passes_needed() const
{
    render_flavor_t passes = entity::render_passes_needed();
    if (my_color.c.a < 255 || additive)
        passes |= RENDER_TRANSLUCENT_PORTION;
    return passes;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00271790)
// 0x00271790 set_thickness__4beamf
class beam {
    char padding[0x200];
    float thickness;
public:
    void set_thickness(float value);
};

void beam::set_thickness(float value) {
    thickness = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00271798)
// 0x00271798 set_max_length__4beamf
class beam {
    char padding[0x204];
    float max_length;
public:
    void set_max_length(float value);
};

void beam::set_max_length(float value) {
    max_length = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002717A0)
// 0x002717A0 set_beam_color__4beamRC7color32
class color32 {
public:
    unsigned int value;
};

class beam {
    char padding[0x208];
    color32 my_color;
public:
    void set_beam_color(const color32& value);
};

void beam::set_beam_color(const color32& value) {
    my_color = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002721E8)
// 0x002721E8 set_texture__4beamRC7stringx
class stringx;

class beam {
public:
    void set_texture(const stringx& file);
};

void beam::set_texture(const stringx& file) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002721F0)
// 0x002721F0 frame_advance__4beamf
class beam {
public:
    void frame_advance(float time);
};

void beam::frame_advance(float time) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272240)
// 0x00272240 render__4beamP6camerafUif
class camera;

class beam {
public:
    void render(camera* camera_link, float detail, unsigned int flavor, float entity_translucency_pct);
};

void beam::render(camera* camera_link, float detail, unsigned int flavor, float entity_translucency_pct) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272670)
// 0x00272670 set_visible__4beamb
class beam {
public:
    void set_visible(bool visible);
};

void beam::set_visible(bool visible) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002727B0)
// 0x002727B0 get_signal_name__C4beamUs
__asm__(".equ signal_names, 0x00431870");
__asm__(".equ get_signal_name__C6entityUs, 0x0012F728");

class entity
{
public:
  enum
  {
    N_SIGNALS = 27
  };

  const char* get_signal_name( unsigned short idx ) const;
};

class beam : public entity
{
public:
  enum signal_id_t
  {
    PARENT_SYNC_DUMMY = entity::N_SIGNALS - 1,
    ENTER,
    LEAVE,
    N_SIGNALS
  };

  const char* get_signal_name( unsigned short idx ) const;
};

extern const char* signal_names[];

const char* beam::get_signal_name( unsigned short idx ) const
{
  if ( idx > PARENT_SYNC_DUMMY )
    return signal_names[idx-PARENT_SYNC_DUMMY-1];
  else
    return entity::get_signal_name( idx );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00274768)
// 0x00274768 compute_sector__4beamR7terrainb
class terrain;

class beam {
public:
    void compute_sector(terrain& value, bool use_high_res_intersect);
};

void beam::compute_sector(terrain& value, bool use_high_res_intersect) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272DE8)
// 0x00272DE8 set_active__11beam_effect
class beam_effect {
    char padding[0xa];
    signed char mode;

public:
    void set_active();
};

void beam_effect::set_active() {
    if (mode == 1) {
        mode = 2;
    } else if (mode == -1) {
        mode = -2;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272E18)
// 0x00272E18 set_delaying__11beam_effect
class beam_effect {
    char padding[0xa];
    signed char mode;

public:
    void set_delaying();
};

void beam_effect::set_delaying() {
    if (mode == 2) {
        mode = 1;
    } else if (mode == -2) {
        mode = -1;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002727F8)
// 0x002727F8 __11beam_effectP4beam
class beam;
class beam_effect_type;
class beam_effect {
    beam *my_beam;
    beam_effect_type *effect;
    unsigned short id;
    char mode;
    float timer;
    float loop_delay;
    float duration;
    virtual void dump();
public:
    beam_effect(beam *the_beam);
    virtual ~beam_effect();
};
asm(".equ _vt$11beam_effect, 0x004FCE88");
beam_effect::beam_effect(beam *the_beam)
{
    my_beam = the_beam;
    effect = 0;
    mode = 0;
    timer = 0.0f;
    duration = 0.0f;
    loop_delay = -1.0f;
    effect = 0;
    id = (unsigned short)-1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272888)
// 0x00272888 dump__11beam_effect
class beam_effect_type { public: virtual ~beam_effect_type(); };
class beam_effect { public: char pad[4]; beam_effect_type *effect; void dump(); };
void beam_effect::dump() { if(effect != 0) { delete effect; effect = 0; } }
#endif
#if defined(KELLY_DECOMP_FUNCTION_00272838)
extern "C" void BeamEffectDump(void *self) __asm__("dump__11beam_effect");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char beam_effect_vtable[];

__asm__(".equ dump__11beam_effect, 0x00272888");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ beam_effect_vtable, 0x004FCE88");

struct BeamEffectLayout {
    char data[0x18];
    const void *vtable;
};

// 0x00272838 _$_11beam_effect
extern "C" void BeamEffectDtor(void *self, int deleting)
    __asm__("_$_11beam_effect");
void BeamEffectDtor(void *self, int deleting)
{
    ((BeamEffectLayout *)self)->vtable = beam_effect_vtable;
    BeamEffectDump(self);
    if (deleting & 1) {
        BuiltinDelete(self);
        // Prevent the demonstrated operator-delete tail call in this generated destructor.
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272E48)
// 0x00272E48 kill__11beam_effectb
class beam;

class beam_effect_type
{
protected:
    virtual ~beam_effect_type() {}
    virtual void apply_start_vals(beam *target) {}
    virtual void apply_target_vals(beam *target) {}
    virtual void apply_delta_vals(beam *target, float time) {}
    virtual void reverse() {}
    virtual beam_effect_type *make_instance() { return 0; }
    friend class beam_effect;
};

class beam_effect
{
    enum effect_mode
    {
        EFFECT_DEAD = 0
    };

    beam *my_beam;
    beam_effect_type *effect;
    unsigned short id;
    char mode;
    float timer;
    float loop_delay;
    float duration;

public:
    void kill(bool apply_target_vals);
};

void beam_effect::kill(bool apply_target_vals)
{
    if (apply_target_vals && my_beam && effect)
        effect->apply_target_vals(my_beam);
    mode = EFFECT_DEAD;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272608)
// 0x00272608 kill_all_effects__4beamb
struct effect_vtable { char padding[72]; short adjustment; short reserved; void(*kill)(void*,bool); }; struct beam_effect { char padding[24]; effect_vtable*vtable; }; struct beam_layout { char padding[524]; beam_effect**begin; beam_effect**end; };
extern "C" void kill_all(beam_layout*self,bool apply) __asm__("kill_all_effects__4beamb");
void kill_all(beam_layout*self,bool apply)
{beam_effect**i=self->begin;beam_effect**end=self->end;for(;i!=end;++i){beam_effect*effect=*i;if(effect){effect_vtable*t=effect->vtable;t->kill((char*)effect+t->adjustment,apply);}}}
#endif
