// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003073D8)
// 0x003073D8 get_light_set__C12conglomerate
class light_manager;
class entity { public: light_manager *get_light_set() const; };
__asm__(".equ get_light_set__C6entity, 0x00130E48");
class conglomerate : public entity { char padding[0x220]; light_manager *lightmgr; public: light_manager *get_light_set() const; };
light_manager *conglomerate::get_light_set() const { if (lightmgr) return lightmgr; light_manager *result = entity::get_light_set(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00306088)
// 0x00306088 compute_sector__12conglomerateR7terrainb
class terrain;
struct entity;
extern "C" void compute_entity_sector(void *, terrain &, bool) __asm__("compute_sector__6entityR7terrainb");
extern "C" void update_region(entity *, bool) __asm__("update_region__6entityb");
__asm__(".equ compute_sector__6entityR7terrainb,0x0012FB40");
__asm__(".equ update_region__6entityb,0x00134E20");
struct entity { char padding[404]; short bone_index; };
class conglomerate {
    char padding[512];
    entity **members_start;
    entity **members_finish;
public:
    void compute_sector(terrain &ter, bool high_res);
};
void conglomerate::compute_sector(terrain &ter, bool high_res)
{
    compute_entity_sector(this, ter, high_res);
    entity **i = members_start;
    entity **end = members_finish;
    for (; i != end; ++i) {
        entity *member = *i;
        if (member->bone_index < 0)
            update_region(member, true);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00305DC8)
// 0x00305DC8 force_current_region__12conglomerate
struct entity_vtable{char data[2000];};struct entity{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate{char p0[512];entity**begin;entity**end;};extern "C" void base_call(void*) __asm__("force_current_region__6entity");__asm__(".equ force_current_region__6entity,0x00131DE0");extern "C" void run(conglomerate*self) __asm__("force_current_region__12conglomerate");void run(conglomerate*self){base_call(self);entity**it=self->begin;entity**end=self->end;for(;it!=end;++it){entity*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1072);void(*fn)(void*)=*(void(**)(void*))((char*)t+1076);fn((char*)e+adjustment);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00305E38)
// 0x00305E38 unforce_regions__12conglomerate
struct entity_vtable{char data[2000];};struct entity{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate{char p0[512];entity**begin;entity**end;};extern "C" void base_call(void*) __asm__("unforce_regions__6entity");__asm__(".equ unforce_regions__6entity,0x00131E20");extern "C" void run(conglomerate*self) __asm__("unforce_regions__12conglomerate");void run(conglomerate*self){base_call(self);entity**it=self->begin;entity**end=self->end;for(;it!=end;++it){entity*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1080);void(*fn)(void*)=*(void(**)(void*))((char*)t+1084);fn((char*)e+adjustment);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00306240)
// 0x00306240 ifl_play__12conglomerate
struct entity_vtable{char data[2000];};struct entity{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate{char p0[512];entity**begin;entity**end;};extern "C" void base_call(void*) __asm__("ifl_play__6entity");__asm__(".equ ifl_play__6entity,0x00131070");extern "C" void run(conglomerate*self) __asm__("ifl_play__12conglomerate");void run(conglomerate*self){base_call(self);entity**it=self->begin;entity**end=self->end;for(;it!=end;++it){entity*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1536);void(*fn)(void*)=*(void(**)(void*))((char*)t+1540);fn((char*)e+adjustment);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003062B0)
// 0x003062B0 ifl_pause__12conglomerate
struct entity_vtable{char data[2000];};struct entity{char p0[8];entity_vtable*vtable;char p1[392];short bone_idx;};struct conglomerate{char p0[512];entity**begin;entity**end;};extern "C" void base_call(void*) __asm__("ifl_pause__6entity");__asm__(".equ ifl_pause__6entity,0x00130FD8");extern "C" void run(conglomerate*self) __asm__("ifl_pause__12conglomerate");void run(conglomerate*self){base_call(self);entity**it=self->begin;entity**end=self->end;for(;it!=end;++it){entity*e=*it;if(e->bone_idx<0){entity_vtable*t=e->vtable;short adjustment=*(short*)((char*)t+1552);void(*fn)(void*)=*(void(**)(void*))((char*)t+1556);fn((char*)e+adjustment);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00307EA8)
// 0x00307EA8 release__12conglomerate
struct maker;extern maker*g_entity_maker;extern "C" void base_release(void*) __asm__("release__6entity");extern "C" void release_entity(maker*,void*) __asm__("release_entity__12entity_makerP6entity");extern "C" void clear_parent(void*) __asm__("clear_parent__14link_interface");__asm__(".equ g_entity_maker,0x004318C8");__asm__(".equ release__6entity,0x0012AAB0");__asm__(".equ release_entity__12entity_makerP6entity,0x0030B0C8");__asm__(".equ clear_parent__14link_interface,0x001228B0");struct entity{char p0[104];void*link;};struct conglomerate{char p0[512];entity**begin,**end;};extern "C" void release_all(conglomerate*self) __asm__("release__12conglomerate");void release_all(conglomerate*self){register conglomerate*saved __asm__("$16")=self;base_release(saved);register entity**end __asm__("$18")=saved->end;register entity**i __asm__("$17")=saved->begin;for(;i!=end;++i){register entity*e __asm__("$16")=*i;release_entity(g_entity_maker,e);clear_parent(e->link);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00305BA0)
// 0x00305BA0 set_visible__12conglomerateb
struct EntityVtable{char data[1];};struct entity{char pad0[8];EntityVtable*vtable;char pad1[392];short bone_idx;};struct conglomerate{char pad[512];entity**begin;entity**end;};extern "C" void base_call(conglomerate*,bool)__asm__("set_visible__6entityb");__asm__(".equ set_visible__6entityb,0x00138E00");struct CallVtable{char pad[352];short adjust;short z;void(*call)(void*,bool);};extern "C" void fn(conglomerate*self,bool arg)__asm__("set_visible__12conglomerateb");void fn(conglomerate*self,bool arg){base_call(self,arg);entity**it=self->begin;entity**last=self->end;for(;it!=last;++it){entity*e=*it;if(e->bone_idx<0){CallVtable*v=(CallVtable*)e->vtable;v->call((char*)e+v->adjust,arg);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00305D48)
// 0x00305D48 force_region__12conglomeratePQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node
struct EntityVtable{char data[1];};struct entity{char pad0[8];EntityVtable*vtable;char pad1[392];short bone_idx;};struct conglomerate{char pad[512];entity**begin;entity**end;};extern "C" void base_call(conglomerate*,void*)__asm__("force_region__6entityPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node");__asm__(".equ force_region__6entityPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node,0x00130968");struct CallVtable{char pad[1064];short adjust;short z;void(*call)(void*,void*);};extern "C" void fn(conglomerate*self,void*arg)__asm__("force_region__12conglomeratePQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node");void fn(conglomerate*self,void*arg){base_call(self,arg);entity**it=self->begin;entity**last=self->end;for(;it!=last;++it){entity*e=*it;if(e->bone_idx<0){CallVtable*v=(CallVtable*)e->vtable;v->call((char*)e+v->adjust,arg);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003061C0)
// 0x003061C0 ifl_lock__12conglomeratei
struct EntityVtable{char data[1];};struct entity{char pad0[8];EntityVtable*vtable;char pad1[392];short bone_idx;};struct conglomerate{char pad[512];entity**begin;entity**end;};extern "C" void base_call(conglomerate*,int)__asm__("ifl_lock__6entityi");__asm__(".equ ifl_lock__6entityi,0x00130F70");struct CallVtable{char pad[1544];short adjust;short z;void(*call)(void*,int);};extern "C" void fn(conglomerate*self,int arg)__asm__("ifl_lock__12conglomeratei");void fn(conglomerate*self,int arg){base_call(self,arg);entity**it=self->begin;entity**last=self->end;for(;it!=last;++it){entity*e=*it;if(e->bone_idx<0){CallVtable*v=(CallVtable*)e->vtable;v->call((char*)e+v->adjust,arg);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00305C20)
// 0x00305C20 is_still_visible__C12conglomerate
struct EntityVtable{char pad0[344];short visible_adjust;short z0;bool(*visible)(void*);char pad1[8];short still_adjust;short z1;bool(*still_visible)(void*);};struct entity{char pad[8];EntityVtable*vtable;};struct conglomerate{char pad[8];EntityVtable*vtable;char pad1[500];entity**members_begin;entity**members_end;};extern "C" bool still_visible(const conglomerate*self)__asm__("is_still_visible__C12conglomerate");bool still_visible(const conglomerate*self){EntityVtable*t=self->vtable;if(t->visible((char*)self+t->visible_adjust))return true;entity**i=self->members_begin;entity**end=self->members_end;for(;i!=end;++i){entity*e=*i;EntityVtable*v=e->vtable;if(v->still_visible((char*)e+v->still_adjust))return true;}return false;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00307D40)
// 0x00307D40 frame_done_including_members__12conglomerate
struct Vtable{char p0[776];short cong_adj;short z0;bool(*is_cong)(void*);char p1[200];short frame_adj;short z1;void(*frame)(void*);char p2[584];short rec_adj;short z2;void(*recursive)(void*);};struct entity{char p[8];Vtable*vtable;};class conglomerate{public:char p[512];entity**begin,**end;void frame_done_including_members()__asm__("frame_done_including_members__12conglomerate");};void conglomerate::frame_done_including_members(){entity**i=begin;entity**i_end=end;for(;i!=i_end;i++){entity*e=*i;{{register Vtable*v asm("$3")=e->vtable;short adj=v->cong_adj;bool(*fn)(void*)=v->is_cong;if(fn((char*)e+adj)){register Vtable*v2 asm("$2")=e->vtable;short a=v2->rec_adj;void(*f)(void*)=v2->recursive;f((char*)e+a);}else{register Vtable*v2 asm("$2")=e->vtable;short a=v2->frame_adj;void(*f)(void*)=v2->frame;f((char*)e+a);}}}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00305CA8)
// 0x00305CA8 terrain_radius__C12conglomerate
struct EntityVTable{char p0[216];short radius_adj;short g0;float(*radius)(void*);char p1[384];short visual_adj;short g1;float(*visual)(void*);};class conglomerate{char p[8];EntityVTable*vt;public:float get_visual_radius()const{EntityVTable*v=vt;return v->visual((char*)this+v->visual_adj);}float get_radius()const{EntityVTable*v=vt;return v->radius((char*)this+v->radius_adj);}float terrain_radius()const;};float conglomerate::terrain_radius()const{float r=get_visual_radius();if(r<0.1f&&get_radius()>r)r=get_radius();return r;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00307F20)
// 0x00307F20 set_ext_flag_recursive__12conglomerateUib
struct entity;struct EntityVTable{char p[184];short flag_adj;short gap;void(*setflag)(void*,unsigned,bool);};struct entity{char p0[8];EntityVTable*vt;void set_ext_flag_recursive(unsigned f,bool set){EntityVTable*v=vt;v->setflag((char*)this+v->flag_adj,f,set);}};class conglomerate{char p[408];unsigned ext_flags;char gap[100];entity**members_start;entity**members_finish;public:void set_ext_flag_recursive(unsigned,bool);};void conglomerate::set_ext_flag_recursive(register unsigned f,register bool set){if(set)ext_flags|=f;else ext_flags&=~f;entity**i=members_start;entity**i_end=members_finish;for(;i!=i_end;++i)(*i)->set_ext_flag_recursive(f,set);}
#endif
