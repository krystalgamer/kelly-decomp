// beam definitions extracted by generated one-function shims.

// 0x00271748 release__4beam
#include "KS/SRC/beam.h"
void beam::release()
{
    entity::release();
    purge_effects();

    if (my_material != 0) {
        material_bank.delete_instance(my_material);
        my_material = 0;
    }
}

// 0x002721F8 render_passes_needed__C4beam
#include "KS/SRC/beam.h"
render_flavor_t beam::render_passes_needed() const
{
    render_flavor_t passes = entity::render_passes_needed();
    if (my_color.c.a < 255 || additive)
        passes |= RENDER_TRANSLUCENT_PORTION;
    return passes;
}

// 0x00271790 set_thickness__4beamf
#include "KS/SRC/beam.h"

void beam::set_thickness(float value) {
    thickness = value;
}

// 0x00271798 set_max_length__4beamf
#include "KS/SRC/beam.h"

void beam::set_max_length(float value) {
    max_length = value;
}

// 0x002717A0 set_beam_color__4beamRC7color32
#include "KS/SRC/beam.h"

void beam::set_beam_color(const color32& value) {
    my_color = value;
}

// 0x002721E8 set_texture__4beamRC7stringx
#include "KS/SRC/beam.h"

void beam::set_texture(const stringx &file) {
}

// 0x002721F0 frame_advance__4beamf
#include "KS/SRC/beam.h"

void beam::frame_advance(float time) {
}

// 0x00272240 render__4beamP6camerafUif
#include "KS/SRC/beam.h"

void beam::render(camera* camera_link, float detail, render_flavor_t flavor, float entity_translucency_pct) {
}

// 0x00272670 set_visible__4beamb
#include "KS/SRC/beam.h"

void beam::set_visible(bool visible) {
}

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

// 0x00274768 compute_sector__4beamR7terrainb
#include "KS/SRC/beam.h"

void beam::compute_sector(terrain &value, bool use_high_res_intersect) {
}

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

// 0x00272888 dump__11beam_effect
class beam_effect_type { public: virtual ~beam_effect_type(); };
class beam_effect { public: char pad[4]; beam_effect_type *effect; void dump(); };
void beam_effect::dump() { if(effect != 0) { delete effect; effect = 0; } }
// 0x00272838 _$_11beam_effect
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

// 0x002711F0 _$_4beam
struct material;

struct beam_layout
{
    char data_to_vtable[8];
    const void *vtable;
    char data_to_effects[0x200];
    void **effects_begin;
    void **effects_end;
    void **effects_capacity;
    char data_to_material[0x94];
    material *my_material;
};

extern const char beam_vtable[];
extern char material_bank[];
extern void *beam_allocator_free_list[16];

extern "C" void purge_beam_effects(beam_layout *self)
    __asm__("purge_effects__4beam");
extern "C" void delete_material_instance(
    void *bank,
    material *value
) __asm__("delete_instance__t13instance_bank1Z8materialP8material");
extern "C" void arch_free(void *memory)
    __asm__("arch_free__FPv");
extern "C" void destroy_entity(beam_layout *self, int deleting)
    __asm__("_$_6entity");

__asm__(".equ beam_vtable, 0x004FD008");
__asm__(".equ material_bank, 0x0046B650");
__asm__(".equ beam_allocator_free_list, 0x003E5628");
__asm__(".equ purge_effects__4beam, 0x002712B0");
__asm__(
    ".equ delete_instance__t13instance_bank1Z8materialP8material, "
    "0x002AD570"
);
__asm__(".equ arch_free__FPv, 0x002AC768");
__asm__(".equ _$_6entity, 0x001298C8");

extern "C" void destroy_beam(beam_layout *self, int deleting)
    __asm__("_$_4beam");

void destroy_beam(beam_layout *self, int deleting)
{
    self->vtable = beam_vtable;
    purge_beam_effects(self);

    if (self->my_material)
    {
        delete_material_instance(material_bank, self->my_material);
        self->my_material = 0;
    }

    void **capacity = self->effects_capacity;
    register void **storage __asm__("$5") = self->effects_begin;
    unsigned int count = capacity - storage;
    if (count)
    {
        unsigned int bytes = count * sizeof(void *);
        if (bytes > 128)
            arch_free(storage);
        else
        {
            unsigned int index = (bytes + 7) / 8 - 1;
            *storage = beam_allocator_free_list[index];
            beam_allocator_free_list[index] = storage;
        }
    }

    destroy_entity(self, deleting);
    __asm__ volatile("" : : : "memory");
}

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

// 0x00272608 kill_all_effects__4beamb
struct effect_vtable { char padding[72]; short adjustment; short reserved; void(*kill)(void*,bool); }; struct beam_effect { char padding[24]; effect_vtable*vtable; }; struct beam_layout { char padding[524]; beam_effect**begin; beam_effect**end; };
extern "C" void kill_all(beam_layout*self,bool apply) __asm__("kill_all_effects__4beamb");
void kill_all(beam_layout*self,bool apply)
{beam_effect**i=self->begin;beam_effect**end=self->end;for(;i!=end;++i){beam_effect*effect=*i;if(effect){effect_vtable*t=effect->vtable;t->kill((char*)effect+t->adjustment,apply);}}}

// 0x00272708 get_signal_id__4beamPCc
extern const char*signal_names[2];extern "C" unsigned strlen(const char*);extern "C" int strcmp(const char*,const char*);extern "C" unsigned short entity_get(const char*)__asm__("get_signal_id__6entityPCc");asm(".equ signal_names,0x00431870");asm(".equ strlen,0x003D40E0");asm(".equ strcmp,0x003D3E88");asm(".equ get_signal_id__6entityPCc,0x0012F0E0");class beam{public:static unsigned short get_signal_id(const char*);};unsigned short beam::get_signal_id(const char*name){unsigned idx;for(idx=0;idx<2;idx++){int offset=strlen(signal_names[idx])-strlen(name);if(offset>(int)strlen(signal_names[idx]))continue;if(!strcmp(name,&signal_names[idx][offset]))return idx+27;}return entity_get(name);}

// 0x00272EA0 make_instance__11beam_effectP4beam
struct beam{};struct effect_vtable{char padding[48];short adjustment;short reserved;void*(*make_instance)(void*);};struct effect_type{effect_vtable*vtable;};struct beam_effect{beam*my_beam;effect_type*effect;unsigned short id;char mode;char pad;float timer,loop_delay,duration;beam_effect*make_instance(beam*);};extern "C" void*opnew(unsigned,unsigned,const char*,int)__asm__("__nw__FUiUiPCci");extern "C" beam_effect*construct(beam_effect*,beam*)__asm__("__11beam_effectP4beam");extern const char file_name[];asm(".equ __nw__FUiUiPCci,0x002AC578");asm(".equ __11beam_effectP4beam,0x002727F8");asm(".equ file_name,0x004E5E48");beam_effect*beam_effect::make_instance(beam*the_beam){beam_effect*eff=construct((beam_effect*)opnew(28,0,file_name,0),the_beam);if(effect){effect_vtable*v=effect->vtable;eff->effect=(effect_type*)v->make_instance((char*)effect+v->adjustment);}else eff->effect=0;eff->id=id;eff->mode=mode;eff->timer=timer;eff->loop_delay=loop_delay;eff->duration=duration;return eff;}
