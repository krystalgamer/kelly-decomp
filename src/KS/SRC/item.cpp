// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028A1E0)
// 0x0028A1E0 check_for_pickup__4item
class item {
public:
    bool check_for_pickup();
};

bool item::check_for_pickup() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A678)
// 0x0028A678 is_picked_up__4item
class item {
    char padding[0x220];
    bool picked_up;
public:
    bool is_picked_up();
};

bool item::is_picked_up() {
    return picked_up;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A108)
// 0x0028A108 initialize__4item
class item { public: void spawn_item_script(); void initialize(); };
__asm__(".equ spawn_item_script__4item, 0x0028A520");
void item::initialize() { spawn_item_script(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028B1C8)
// 0x0028B1C8 render_passes_needed__C11visual_item
class entity { public: unsigned int render_passes_needed() const; };
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
class visual_item : public entity { public: unsigned int render_passes_needed() const; };
unsigned int visual_item::render_passes_needed() const { unsigned int result = entity::render_passes_needed(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028B1E8)
// 0x0028B1E8 render__11visual_itemP6camerafUif
class camera;
class entity { public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
__asm__(".equ render__6entityP6camerafUif, 0x001324E0");
class visual_item : public entity { public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
void visual_item::render(camera *camera_link, float detail, unsigned int flavor, float translucency) { entity::render(camera_link, detail, flavor, translucency); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A1B8)
// 0x0028A1B8 render__4itemP6camerafUif
class camera;
class entity { public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
__asm__(".equ render__6entityP6camerafUif, 0x001324E0");
class item : public entity { char padding[0x214]; int count; public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
void item::render(camera *camera_link, float detail, unsigned int flavor, float translucency) { if (count > 0) { entity::render(camera_link, detail, flavor, translucency); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028AEC0)
// 0x0028AEC0 _$_11visual_item
extern "C" void EntityDtor(void *self, int deleting) __asm__("_$_6entity");
extern const char visual_item_vtable[];
__asm__(".equ _$_6entity, 0x001298C8");
__asm__(".equ visual_item_vtable, 0x004EBB78");
struct visual_item_layout { char padding[8]; const void *vtable; };
extern "C" void VisualItemDtor(void *self, int deleting) __asm__("_$_11visual_item");
void VisualItemDtor(void *self, int deleting) { ((visual_item_layout *)self)->vtable = visual_item_vtable; EntityDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A648)
// 0x0028A648 preload__4item
class entity { public: void preload(); };
__asm__(".equ preload__6entity, 0x00139180");
class item : public entity { public: void preload(); void spawn_preload_script(); };
__asm__(".equ spawn_preload_script__4item, 0x0028A410");
void item::preload() { entity::preload(); spawn_preload_script(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028AA58)
// 0x0028AA58 apply_effects__4itemP6entity
struct item_vtable { char padding[0x20]; short adjustment; short padding2; void (*apply)(void *self, int effect); };
class entity;
class item { char padding[8]; item_vtable *vtable; public: void apply_effects(entity *target); };
void item::apply_effects(entity *target) { item_vtable *table = vtable; table->apply((char *)this + table->adjustment, 28); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028BE88)
// 0x0028BE88 frame_advance__14morphable_itemf
class item {
protected:
    char padding[0x218];
    int count;
public:
    void frame_advance(float time);
};
class morphable_item : public item {
    char padding2[0x30];
    int old_count;
public:
    void frame_advance(float time);
    void set_range_visrep(int count);
};
asm(".equ frame_advance__4itemf, 0x0028A680");
asm(".equ set_range_visrep__14morphable_itemi, 0x0028BEC8");
void morphable_item::frame_advance(float time)
{
    item::frame_advance(time);
    if (count != old_count) {
        set_range_visrep(count);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028AE78)
// 0x0028AE78 get_signal_name__C4itemUs
__asm__(".equ get_signal_name__C6entityUs, 0x0012F728"); __asm__(".equ item_signal_names, 0x00431A70");
extern const char *item_signal_names[];
class entity { public: const char *get_signal_name(unsigned short) const; };
class item : public entity { public: const char *get_signal_name(unsigned short) const; };
const char *item::get_signal_name(unsigned short idx) const { if(idx > 26) return item_signal_names[idx-27]; return entity::get_signal_name(idx); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028B160)
// 0x0028B160 get_light_set__11visual_item
struct light_manager; struct entity_vtable { char p0[344]; short visible_adjust; short x0; bool(*is_visible)(void*); char p1[864]; short light_adjust; short x1; light_manager*(*get_light)(void*); }; struct entity_layout { char p0[8]; entity_vtable*vtable; }; struct visual_layout { char padding[512]; entity_layout*owner; };
extern "C" light_manager* get_lights(visual_layout*self) __asm__("get_light_set__11visual_item");
light_manager* get_lights(visual_layout*self)
{if(self->owner){register entity_layout*e __asm__("$5")=self->owner;register entity_vtable*t __asm__("$3")=e->vtable;register bool(*visible)(void*) __asm__("$2")=t->is_visible;if(visible((char*)e+t->visible_adjust)){e=self->owner;t=e->vtable;register light_manager*(*light)(void*) __asm__("$2")=t->get_light;return light((char*)e+t->light_adjust);}}return 0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00288B50)
// 0x00288B50 __4itemRC9entity_idUi
struct entity_id{char p[4];};extern "C" void entity_ctor(void*,const entity_id&,int,unsigned) __asm__("__6entityRC9entity_id15entity_flavor_tUi");extern "C" void string_ctor(void*) __asm__("__7stringx");extern const char item_vtable[];asm(".equ __6entityRC9entity_id15entity_flavor_tUi,0x00129778");asm(".equ __7stringx,0x0034D3E0");asm(".equ item_vtable,0x004FC1B0");struct ItemLayout{char p0[8];const void*vtable;char p1[132];float radius;char p2[364];bool preload_script_called,item_script_called,linked;int usage_type;char name[8];int count,default_count;bool picked_up;float pickup_timer;float icon_scale,interface_orientation;int max_num;};extern "C" ItemLayout*item_ctor(ItemLayout*,const entity_id&,unsigned) __asm__("__4itemRC9entity_idUi");ItemLayout*item_ctor(ItemLayout*self,const entity_id&id,unsigned flags){entity_ctor(self,id,7,flags);register const void*table asm("$3")=item_vtable;self->vtable=table;string_ctor(self->name);self->usage_type=-1;self->picked_up=false;self->pickup_timer=0;self->radius=.25f;self->count=self->default_count=1;self->max_num=10;self->icon_scale=1.0f;self->interface_orientation=225.0f;self->preload_script_called=false;self->item_script_called=false;self->linked=false;return self;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A068)
// 0x0028A068 copy_instance_data__4itemRC4item
struct stringx{char*p;void*buf;stringx&operator=(const stringx&);};struct EntityVTable{char p0[248];short active_adj;short g0;void(*set_active)(void*,bool);char p1[48];short stationary_adj;short g1;void(*set_stationary)(void*,bool);};class item{char p0[8];EntityVTable*vt;char p1[508];int linked;int usage_type;stringx name;int count,default_count;char p2[8];float icon_scale,interface_orientation;int max_num;public:void copy_instance_data(const item&);};extern "C" void copy_entity(void*,const void*) __asm__("copy_instance_data__6entityRC6entity");asm(".equ copy_instance_data__6entityRC6entity,0x0012EB50");asm(".equ __as__7stringxRC7stringx,0x0034E0B8");void item::copy_instance_data(const item&b){copy_entity(this,&b);usage_type=b.usage_type;default_count=count=b.default_count;max_num=b.max_num;name=b.name;icon_scale=b.icon_scale;interface_orientation=b.interface_orientation;register EntityVTable*v asm("$3")=vt;v->set_active((char*)this+v->active_adj,true);v=vt;v->set_stationary((char*)this+v->stationary_adj,false);linked=b.linked;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00288C38)
// 0x00288C38 __4itemR10chunk_fileRC9entity_id15entity_flavor_tUi
struct chunk_file{};struct entity_id{};enum entity_flavor_t{E0};struct stringx{char data[8];};struct item_layout{char padding0[8];void*vtable;char padding1[108];unsigned flags;char padding2[388];int preload_script_called,item_script_called,linked,usage_type;stringx name;int count,default_count,picked_up;float pickup_timer,icon_scale,interface_orientation;int max_num;};extern "C" void entity_ctor(item_layout*,chunk_file&,const entity_id&,entity_flavor_t,unsigned)__asm__("__6entityR10chunk_fileRC9entity_id15entity_flavor_tUi");extern "C" void string_ctor(stringx*)__asm__("__7stringx");extern "C" void set_active(item_layout*,bool)__asm__("set_active__6entityb");extern char target_vtable;asm(".equ __6entityR10chunk_fileRC9entity_id15entity_flavor_tUi,0x0012AB18");asm(".equ __7stringx,0x0034D3E0");asm(".equ set_active__6entityb,0x00138D90");asm(".equ target_vtable,0x004FC1B0");extern "C" item_layout*ctor(item_layout*,chunk_file&,const entity_id&,entity_flavor_t,unsigned)__asm__("__4itemR10chunk_fileRC9entity_id15entity_flavor_tUi");item_layout*ctor(item_layout*self,chunk_file&fs,const entity_id&id,entity_flavor_t flavor,unsigned flags){entity_ctor(self,fs,id,flavor,flags);register void*vt asm("$3")=&target_vtable;self->vtable=vt;string_ctor(&self->name);self->usage_type=-1;self->picked_up=0;self->pickup_timer=0;*(float*)((char*)self+144)=.25f;self->default_count=self->count=1;self->max_num=10;self->icon_scale=1.0f;self->interface_orientation=225.0f;set_active(self,true);self->flags|=4;self->preload_script_called=0;self->item_script_called=0;self->linked=0;return self;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028ADD0)
// 0x0028ADD0 get_signal_id__4itemPCc
extern const char*item_signal_names[5];extern "C" unsigned strlen(const char*);extern "C" int strcmp(const char*,const char*);extern "C" unsigned short entity_get(const char*)__asm__("get_signal_id__6entityPCc");asm(".equ item_signal_names,0x00431A70");asm(".equ strlen,0x003D40E0");asm(".equ strcmp,0x003D3E88");asm(".equ get_signal_id__6entityPCc,0x0012F0E0");class item{public:static unsigned short get_signal_id(const char*);};unsigned short item::get_signal_id(const char*name){int idx;for(idx=0;idx<5;++idx){int offset=strlen(item_signal_names[idx])-strlen(name);if(offset>(int)strlen(item_signal_names[idx]))continue;if(!strcmp(name,&item_signal_names[idx][offset]))return idx+27;}return entity_get(name);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028B2A8)
// 0x0028B2A8 _$_14morphable_item
struct layout{char padding0[8];void*vtable;char padding1[564];void**start;void**finish;void**end;int old_count;};extern char target_vtable;extern void*free_list[];extern "C" void dump(layout*)__asm__("dump_ranges__14morphable_item");extern "C" void arch_free(void*)__asm__("arch_free__FPv");extern "C" void base_dtor(layout*,int)__asm__("_$_4item");asm(".equ target_vtable,0x004FB4C0");asm(".equ free_list,0x003E5628");asm(".equ dump_ranges__14morphable_item,0x0028BF98");asm(".equ arch_free__FPv,0x002AC768");asm(".equ _$_4item,0x00288BE8");extern "C" void dtor(layout*,int)__asm__("_$_14morphable_item");void dtor(layout*self,int deleting){self->vtable=&target_vtable;dump(self);self->old_count=-1;void**p=self->start;unsigned n=self->end-p;if(n){unsigned bytes=n*4;if(bytes>128)arch_free(p);else{unsigned index=(bytes+7)/8-1;*p=free_list[index];free_list[index]=p;}}base_dtor(self,deleting);asm volatile("");}
#endif
