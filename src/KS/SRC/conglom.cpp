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
