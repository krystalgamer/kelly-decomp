// Matching decompilation blocks selected by generated build shims.


// 0x003073D8 get_light_set__C12conglomerate
#include "KS/SRC/conglom.h"
extern "C" light_manager *base_light_set(const entity *self)
    __asm__("get_light_set__C6entity");
__asm__(".equ get_light_set__C6entity, 0x00130E48");
light_manager *conglomerate::get_light_set() const { if (lightmgr) return lightmgr; light_manager *result = base_light_set(this); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x00306088 compute_sector__12conglomerateR7terrainb
#include "KS/SRC/conglom.h"
extern "C" void compute_entity_sector(void *, terrain &, bool) __asm__("compute_sector__6entityR7terrainb");
extern "C" void update_region(entity *, bool) __asm__("update_region__6entityb");
__asm__(".equ compute_sector__6entityR7terrainb,0x0012FB40");
__asm__(".equ update_region__6entityb,0x00134E20");
void conglomerate::compute_sector(terrain &ter, bool high_res)
{
    compute_entity_sector(this, ter, high_res);
    pentity_vector::iterator i = members.begin();
    pentity_vector::iterator end = members.end();
    for (; i != end; ++i) {
        entity *member = *i;
        if (member->get_bone_idx() < 0)
            ::update_region(member, true);
    }
}

// 0x00305DC8 force_current_region__12conglomerate
struct entity_vtable{char data[2000];};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate_members_layout{char p0[512];entity_layout**begin;entity_layout**end;};extern "C" void base_call(void*) __asm__("force_current_region__6entity");__asm__(".equ force_current_region__6entity,0x00131DE0");extern "C" void run(conglomerate_members_layout*self) __asm__("force_current_region__12conglomerate");void run(conglomerate_members_layout*self){base_call(self);entity_layout**it=self->begin;entity_layout**end=self->end;for(;it!=end;++it){entity_layout*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1072);void(*fn)(void*)=*(void(**)(void*))((char*)t+1076);fn((char*)e+adjustment);}}}

// 0x00305E38 unforce_regions__12conglomerate
struct entity_vtable{char data[2000];};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate_members_layout{char p0[512];entity_layout**begin;entity_layout**end;};extern "C" void base_call(void*) __asm__("unforce_regions__6entity");__asm__(".equ unforce_regions__6entity,0x00131E20");extern "C" void run(conglomerate_members_layout*self) __asm__("unforce_regions__12conglomerate");void run(conglomerate_members_layout*self){base_call(self);entity_layout**it=self->begin;entity_layout**end=self->end;for(;it!=end;++it){entity_layout*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1080);void(*fn)(void*)=*(void(**)(void*))((char*)t+1084);fn((char*)e+adjustment);}}}

// 0x00306240 ifl_play__12conglomerate
struct entity_vtable{char data[2000];};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate_members_layout{char p0[512];entity_layout**begin;entity_layout**end;};extern "C" void base_call(void*) __asm__("ifl_play__6entity");__asm__(".equ ifl_play__6entity,0x00131070");extern "C" void run(conglomerate_members_layout*self) __asm__("ifl_play__12conglomerate");void run(conglomerate_members_layout*self){base_call(self);entity_layout**it=self->begin;entity_layout**end=self->end;for(;it!=end;++it){entity_layout*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1536);void(*fn)(void*)=*(void(**)(void*))((char*)t+1540);fn((char*)e+adjustment);}}}

// 0x003062B0 ifl_pause__12conglomerate
struct entity_vtable{char data[2000];};struct entity_layout{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate_members_layout{char p0[512];entity_layout**begin;entity_layout**end;};extern "C" void base_call(void*) __asm__("ifl_pause__6entity");__asm__(".equ ifl_pause__6entity,0x00130FD8");extern "C" void run(conglomerate_members_layout*self) __asm__("ifl_pause__12conglomerate");void run(conglomerate_members_layout*self){base_call(self);entity_layout**it=self->begin;entity_layout**end=self->end;for(;it!=end;++it){entity_layout*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1552);void(*fn)(void*)=*(void(**)(void*))((char*)t+1556);fn((char*)e+adjustment);}}}

// 0x00307EA8 release__12conglomerate
struct maker;extern maker*g_entity_maker;extern "C" void base_release(void*) __asm__("release__6entity");extern "C" void release_entity(maker*,void*) __asm__("release_entity__12entity_makerP6entity");extern "C" void clear_parent(void*) __asm__("clear_parent__14link_interface");__asm__(".equ g_entity_maker,0x004318C8");__asm__(".equ release__6entity,0x0012AAB0");__asm__(".equ release_entity__12entity_makerP6entity,0x0030B0C8");__asm__(".equ clear_parent__14link_interface,0x001228B0");struct entity_layout{char p0[104];void*link;};struct conglomerate_members_layout{char p0[512];entity_layout**begin,**end;};extern "C" void release_all(conglomerate_members_layout*self) __asm__("release__12conglomerate");void release_all(conglomerate_members_layout*self){register conglomerate_members_layout*saved __asm__("$16")=self;base_release(saved);register entity_layout**end __asm__("$18")=saved->end;register entity_layout**i __asm__("$17")=saved->begin;for(;i!=end;++i){register entity_layout*e __asm__("$16")=*i;release_entity(g_entity_maker,e);clear_parent(e->link);}}

// 0x00305BA0 set_visible__12conglomerateb
struct EntityVtable{char data[1];};struct entity_layout{char pad0[8];EntityVtable*vtable;char pad1[392];short bone_idx;};struct conglomerate_members_layout{char pad[512];entity_layout**begin;entity_layout**end;};extern "C" void base_call(conglomerate_members_layout*,bool)__asm__("set_visible__6entityb");__asm__(".equ set_visible__6entityb,0x00138E00");struct CallVtable{char pad[352];short adjust;short z;void(*call)(void*,bool);};extern "C" void fn(conglomerate_members_layout*self,bool arg)__asm__("set_visible__12conglomerateb");void fn(conglomerate_members_layout*self,bool arg){base_call(self,arg);entity_layout**it=self->begin;entity_layout**last=self->end;for(;it!=last;++it){entity_layout*e=*it;if(e->bone_idx<0){CallVtable*v=(CallVtable*)e->vtable;v->call((char*)e+v->adjust,arg);}}}

// 0x00305D48 force_region__12conglomeratePQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node
struct EntityVtable{char data[1];};struct entity_layout{char pad0[8];EntityVtable*vtable;char pad1[392];short bone_idx;};struct conglomerate_members_layout{char pad[512];entity_layout**begin;entity_layout**end;};extern "C" void base_call(conglomerate_members_layout*,void*)__asm__("force_region__6entityPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node");__asm__(".equ force_region__6entityPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node,0x00130968");struct CallVtable{char pad[1064];short adjust;short z;void(*call)(void*,void*);};extern "C" void fn(conglomerate_members_layout*self,void*arg)__asm__("force_region__12conglomeratePQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node");void fn(conglomerate_members_layout*self,void*arg){base_call(self,arg);entity_layout**it=self->begin;entity_layout**last=self->end;for(;it!=last;++it){entity_layout*e=*it;if(e->bone_idx<0){CallVtable*v=(CallVtable*)e->vtable;v->call((char*)e+v->adjust,arg);}}}

// 0x003061C0 ifl_lock__12conglomeratei
struct EntityVtable{char data[1];};struct entity_layout{char pad0[8];EntityVtable*vtable;char pad1[392];short bone_idx;};struct conglomerate_members_layout{char pad[512];entity_layout**begin;entity_layout**end;};extern "C" void base_call(conglomerate_members_layout*,int)__asm__("ifl_lock__6entityi");__asm__(".equ ifl_lock__6entityi,0x00130F70");struct CallVtable{char pad[1544];short adjust;short z;void(*call)(void*,int);};extern "C" void fn(conglomerate_members_layout*self,int arg)__asm__("ifl_lock__12conglomeratei");void fn(conglomerate_members_layout*self,int arg){base_call(self,arg);entity_layout**it=self->begin;entity_layout**last=self->end;for(;it!=last;++it){entity_layout*e=*it;if(e->bone_idx<0){CallVtable*v=(CallVtable*)e->vtable;v->call((char*)e+v->adjust,arg);}}}

// 0x00305C20 is_still_visible__C12conglomerate
struct EntityVtable{char pad0[344];short visible_adjust;short z0;bool(*visible)(void*);char pad1[8];short still_adjust;short z1;bool(*still_visible)(void*);};struct entity_layout{char pad[8];EntityVtable*vtable;};struct conglomerate_visibility_layout{char pad[8];EntityVtable*vtable;char pad1[500];entity_layout**members_begin;entity_layout**members_end;};extern "C" bool still_visible(const conglomerate_visibility_layout*self)__asm__("is_still_visible__C12conglomerate");bool still_visible(const conglomerate_visibility_layout*self){EntityVtable*t=self->vtable;if(t->visible((char*)self+t->visible_adjust))return true;entity_layout**i=self->members_begin;entity_layout**end=self->members_end;for(;i!=end;++i){entity_layout*e=*i;EntityVtable*v=e->vtable;if(v->still_visible((char*)e+v->still_adjust))return true;}return false;}

// 0x00307D40 frame_done_including_members__12conglomerate
struct Vtable{char p0[776];short cong_adj;short z0;bool(*is_cong)(void*);char p1[200];short frame_adj;short z1;void(*frame)(void*);char p2[584];short rec_adj;short z2;void(*recursive)(void*);};struct entity_layout{char p[8];Vtable*vtable;};struct conglomerate_members_layout{char p[512];entity_layout**begin,**end;};extern "C" void frame_done_members(conglomerate_members_layout*self)__asm__("frame_done_including_members__12conglomerate");void frame_done_members(conglomerate_members_layout*self){entity_layout**i=self->begin;entity_layout**i_end=self->end;for(;i!=i_end;i++){entity_layout*e=*i;{{register Vtable*v asm("$3")=e->vtable;short adj=v->cong_adj;bool(*fn)(void*)=v->is_cong;if(fn((char*)e+adj)){register Vtable*v2 asm("$2")=e->vtable;short a=v2->rec_adj;void(*f)(void*)=v2->recursive;f((char*)e+a);}else{register Vtable*v2 asm("$2")=e->vtable;short a=v2->frame_adj;void(*f)(void*)=v2->frame;f((char*)e+a);}}}}}

// 0x00305CA8 terrain_radius__C12conglomerate
struct EntityVTable{char p0[216];short radius_adj;short g0;float(*radius)(void*);char p1[384];short visual_adj;short g1;float(*visual)(void*);};struct conglomerate_radius_layout{char p[8];EntityVTable*vt;};inline float conglomerate_visual_radius(const conglomerate_radius_layout*self){EntityVTable*v=self->vt;return v->visual((char*)self+v->visual_adj);}inline float conglomerate_base_radius(const conglomerate_radius_layout*self){EntityVTable*v=self->vt;return v->radius((char*)self+v->radius_adj);}extern "C" float conglomerate_terrain_radius(const conglomerate_radius_layout*self)__asm__("terrain_radius__C12conglomerate");float conglomerate_terrain_radius(const conglomerate_radius_layout*self){float r=conglomerate_visual_radius(self);if(r<0.1f&&conglomerate_base_radius(self)>r)r=conglomerate_base_radius(self);return r;}

// 0x00307F20 set_ext_flag_recursive__12conglomerateUib
struct EntityVTable{char p[184];short flag_adj;short gap;void(*setflag)(void*,unsigned,bool);};struct entity_layout{char p0[8];EntityVTable*vt;};struct conglomerate_flag_layout{char p[408];unsigned ext_flags;char gap[100];entity_layout**members_start;entity_layout**members_finish;};extern "C" void set_conglomerate_flags(conglomerate_flag_layout*self,register unsigned f,register bool set)__asm__("set_ext_flag_recursive__12conglomerateUib");void set_conglomerate_flags(conglomerate_flag_layout*self,register unsigned f,register bool set){if(set)self->ext_flags|=f;else self->ext_flags&=~f;entity_layout**i=self->members_start;entity_layout**i_end=self->members_finish;for(;i!=i_end;++i){EntityVTable*v=(*i)->vt;v->setflag((char*)(*i)+v->flag_adj,f,set);}}

// Source implementation boundary.
// 0x00312F90 is_a_conglomerate__C12conglomerate
#include "KS/SRC/conglom.h"
bool conglomerate::is_a_conglomerate() const {
    return true;
}

// 0x00312F40 __tf12conglomerate
#include "KS/SRC/rtti.h"
extern "C" void **ConglomerateBaseRtti() __asm__("__tf6entity");
extern "C" void *conglomerate_type[] __asm__("__ti12conglomerate");
extern "C" const char conglomerate_name[];
extern "C" void *conglomerate_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti12conglomerate, 0x005A4140");
__asm__(".equ conglomerate_name, 0x00508848");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **ConglomerateRtti() __asm__("__tf12conglomerate");
void **ConglomerateRtti()
{
    if (!conglomerate_type[0]) {
        ConglomerateBaseRtti();
        __rtti_si(
            conglomerate_type,
            conglomerate_name,
            conglomerate_base_type);
    }
    return conglomerate_type;
}
