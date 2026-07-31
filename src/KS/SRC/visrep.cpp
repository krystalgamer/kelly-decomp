// visual_rep definitions extracted by generated one-function shims.


// 0x002D7040 render_skin__10visual_repUiPC20instance_render_infoPC2poi
#include "KS/SRC/visrep.h"

void visual_rep::render_skin(render_flavor_t flavor, const instance_render_info* info, const po* bones, int count) {
}

// 0x002D70C0 compute_xz_radius_rel_center__10visual_repRC2po
#include "KS/SRC/visrep.h"

float visual_rep::compute_xz_radius_rel_center(const po& transform) {
    return 0.0f;
}

// 0x002D70D0 get_min_faces__C10visual_repf
#include "KS/SRC/visrep.h"

int visual_rep::get_min_faces(float delta_t) const {
    return 1;
}

// 0x002D70D8 get_max_faces__C10visual_repf
#include "KS/SRC/visrep.h"

int visual_rep::get_max_faces(float delta_t) const {
    return 1;
}

// 0x002D70E0 set_distance_fade_ok__10visual_repb
#include "KS/SRC/visrep.h"

void visual_rep::set_distance_fade_ok(bool value) {
}

// 0x002D70E8 get_distance_fade_ok__C10visual_rep
#include "KS/SRC/visrep.h"

bool visual_rep::get_distance_fade_ok() const {
    return true;
}

// 0x002D70F0 time_value_to_frame__10visual_repf
#include "KS/SRC/visrep.h"
float visual_rep::time_value_to_frame(float time) { return time * 30.0f; }

// 0x002D7100 kill_me__10visual_rep
#include "KS/SRC/visrep.h"

bool visual_rep::kill_me() {
    return false;
}

// 0x002D7108 set_light_method__10visual_rep14light_method_t
#include "KS/SRC/visrep.h"

void visual_rep::set_light_method(light_method_t method) {
}

// 0x002D7110 get_anim_length__C10visual_rep
#include "KS/SRC/visrep.h"

int visual_rep::get_anim_length() const {
    return 1;
}

// 0x002D7118 render_passes_needed__C10visual_rep
#include "KS/SRC/visrep.h"

render_flavor_t visual_rep::render_passes_needed() const {
    return 0;
}

// 0x002D7668 get_ending_time__C10visual_rep
#include "KS/SRC/visrep.h"
float visual_rep::get_ending_time() const { return 1.0e25f; }

// 0x002D7680 is_uv_animated__C10visual_rep
#include "KS/SRC/visrep.h"

bool visual_rep::is_uv_animated() const {
    return false;
}

// 0x002D7008 __10visual_rep8visrep_tb
enum visrep_t {
    VISREP_PMESH = 0
};

extern const char visual_rep_vtable[];
__asm__(".equ visual_rep_vtable, 0x004F4820");

class visual_rep {
    visrep_t type;
    float min_detail_dist;
    float max_detail_dist;
    bool instanced;
    const void *vtable;

public:
    visual_rep(visrep_t type, bool instanced);
};

visual_rep::visual_rep(visrep_t new_type, bool is_instanced)
{
    vtable = visual_rep_vtable;
    type = new_type;
    min_detail_dist = 12.0f;
    max_detail_dist = 1.0f;
    instanced = is_instanced;
}

// 0x002D7388 new_visrep_instance__FP10visual_rep
enum visrep_t
{
    VISREP_PMESH,
    VISREP_BILLBOARD
};

class visual_rep
{
    visrep_t type;

public:
    visrep_t get_type() const { return type; }
};

class vr_pmesh : public visual_rep {};
class vr_billboard : public visual_rep {};

struct pmesh_bank {};
struct billboard_bank {};

extern pmesh_bank vr_pmesh_bank;
extern billboard_bank vr_billboard_bank;

extern "C" vr_pmesh *new_pmesh(
    pmesh_bank *bank, vr_pmesh *instance
) __asm__("new_instance__t13instance_bank1Z8vr_pmeshP8vr_pmesh");
extern "C" vr_billboard *new_billboard(
    billboard_bank *bank, vr_billboard *instance
) __asm__(
    "new_instance__t13instance_bank1Z12vr_billboardP12vr_billboard"
);

__asm__(".equ vr_pmesh_bank, 0x00432908");
__asm__(".equ vr_billboard_bank, 0x00432708");
__asm__(
    ".equ new_instance__t13instance_bank1Z8vr_pmeshP8vr_pmesh, "
    "0x002AF2B0"
);
__asm__(
    ".equ new_instance__t13instance_bank1Z12vr_billboardP12vr_billboard, "
    "0x002F7EC0"
);

visual_rep *new_visrep_instance(visual_rep *vrep)
{
    switch (vrep->get_type())
    {
    case VISREP_PMESH:
        return new_pmesh(&vr_pmesh_bank, (vr_pmesh *)vrep);
    case VISREP_BILLBOARD:
        return new_billboard(
            &vr_billboard_bank, (vr_billboard *)vrep
        );
    default:
        break;
    }
    return 0;
}

// 0x002D7048 render_batch__10visual_repUiP20instance_render_infoi
struct instance_render_info{char data[144];};struct visual_vtable{char pad[16];short adjust;short reserved;void(*render_instance)(void*,unsigned int,const instance_render_info*,int);};struct visual_rep{char pad[16];visual_vtable*vtable;};extern "C" void render_batch(visual_rep*self,unsigned int flavor,instance_render_info*viri,int count)__asm__("render_batch__10visual_repUiP20instance_render_infoi");void render_batch(visual_rep*self,unsigned int flavor,instance_render_info*viri,int count){for(;--count>=0;++viri){visual_vtable*t=self->vtable;t->render_instance((char*)self+t->adjust,flavor,viri,0);}}

// 0x002D74C0 unload_visual_rep__FP10visual_rep
struct DtorVtable{char pad[8];short adjust;short z;void(*destroy)(void*,int);};struct visual_rep{int type;char pad[8];int instanced;DtorVtable*vtable;};struct Bank{char data[24];};extern Bank vr_pmesh_bank,vr_billboard_bank;extern "C" void del_pmesh(Bank*,visual_rep*)__asm__("delete_instance__t13instance_bank1Z8vr_pmeshP8vr_pmesh");extern "C" void del_billboard(Bank*,visual_rep*)__asm__("delete_instance__t13instance_bank1Z12vr_billboardP12vr_billboard");__asm__(".equ vr_pmesh_bank,0x00432908");__asm__(".equ vr_billboard_bank,0x00432708");__asm__(".equ delete_instance__t13instance_bank1Z8vr_pmeshP8vr_pmesh,0x002F7F30");__asm__(".equ delete_instance__t13instance_bank1Z12vr_billboardP12vr_billboard,0x002F8A80");extern "C" void unload(visual_rep*d)__asm__("unload_visual_rep__FP10visual_rep");void unload(visual_rep*d){if(d){if(!d->instanced){DtorVtable*v=d->vtable;v->destroy((char*)d+v->adjust,3);}else if(d->type==0){del_pmesh(&vr_pmesh_bank,d);KELLY_DECOMP_COMPILER_BARRIER();}else if(d->type==1){del_billboard(&vr_billboard_bank,d);KELLY_DECOMP_COMPILER_BARRIER();}}}
