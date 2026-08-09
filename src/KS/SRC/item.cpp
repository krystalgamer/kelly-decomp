// Matching decompilation blocks selected by generated build shims.


// 0x0028A1E0 check_for_pickup__4item
#include "KS/SRC/item.h"

bool item::check_for_pickup() {
    return false;
}

// 0x0028A678 is_picked_up__4item
#include "KS/SRC/item.h"

bool item::is_picked_up() {
    return picked_up;
}

// 0x0028B1C8 render_passes_needed__C11visual_item
#include "KS/SRC/item.h"
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
render_flavor_t visual_item::render_passes_needed() const
{
    return entity::render_passes_needed();
}

// 0x0028A1B8 render__4itemP6camerafUif
#include "KS/SRC/item.h"

void render_entity(entity *value, camera *camera_link, float detail, render_flavor_t flavor, float translucency) __asm__("render__6entityP6camerafUif");
__asm__(".equ render__6entityP6camerafUif, 0x001324E0");
void item::render(camera *camera_link, float detail, render_flavor_t flavor, float translucency) { if (count > 0) { void (*render)(entity *, camera *, float, render_flavor_t, float) = render_entity; render(this, camera_link, detail, flavor, translucency); } }

// 0x0028A648 preload__4item
#include "KS/SRC/item.h"
__asm__(".equ preload__6entity, 0x00139180");
__asm__(".equ spawn_preload_script__4item, 0x0028A410");
void spawn_item_preload(item *self) __asm__("spawn_preload_script__4item");
void item::preload() {
    entity::preload();
    void (*spawn_script)(item *) = spawn_item_preload;
    spawn_script(this);
}

// 0x0028AA58 apply_effects__4itemP6entity
#include "KS/SRC/item.h"
void item::apply_effects(entity *target) { raise_signal(USE); }

// 0x0028BE88 frame_advance__14morphable_itemf
#include "KS/SRC/item.h"
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

// 0x0028AE78 get_signal_name__C4itemUs
#include "KS/SRC/item.h"
__asm__(".equ get_signal_name__C6entityUs, 0x0012F728"); __asm__(".equ item_signal_names, 0x00431A70");
extern const char *item_signal_names[];
const char *item::get_signal_name(unsigned short idx) const { if(idx > 26) return item_signal_names[idx-27]; return entity::get_signal_name(idx); }

// 0x0028B160 get_light_set__11visual_item
struct light_manager; struct entity_vtable { char p0[344]; short visible_adjust; short x0; bool(*is_visible)(void*); char p1[864]; short light_adjust; short x1; light_manager*(*get_light)(void*); }; struct entity_layout { char p0[8]; entity_vtable*vtable; }; struct visual_layout { char padding[512]; entity_layout*owner; };
extern "C" light_manager* get_lights(visual_layout*self) __asm__("get_light_set__11visual_item");
light_manager* get_lights(visual_layout*self)
{if(self->owner){register entity_layout*e __asm__("$5")=self->owner;register entity_vtable*t __asm__("$3")=e->vtable;register bool(*visible)(void*) __asm__("$2")=t->is_visible;if(visible((char*)e+t->visible_adjust)){e=self->owner;t=e->vtable;register light_manager*(*light)(void*) __asm__("$2")=t->get_light;return light((char*)e+t->light_adjust);}}return 0;}

// 0x00288B50 __4itemRC9entity_idUi
struct entity_id{char p[4];};extern "C" void entity_ctor(void*,const entity_id&,int,unsigned) __asm__("__6entityRC9entity_id15entity_flavor_tUi");extern "C" void string_ctor(void*) __asm__("__7stringx");extern const char item_vtable[];asm(".equ __6entityRC9entity_id15entity_flavor_tUi,0x00129778");asm(".equ __7stringx,0x0034D3E0");asm(".equ item_vtable,0x004FC1B0");struct ItemLayout{char p0[8];const void*vtable;char p1[132];float radius;char p2[364];bool preload_script_called,item_script_called,linked;int usage_type;char name[8];int count,default_count;bool picked_up;float pickup_timer;float icon_scale,interface_orientation;int max_num;};extern "C" ItemLayout*item_ctor(ItemLayout*,const entity_id&,unsigned) __asm__("__4itemRC9entity_idUi");ItemLayout*item_ctor(ItemLayout*self,const entity_id&id,unsigned flags){entity_ctor(self,id,7,flags);register const void*table asm("$3")=item_vtable;self->vtable=table;string_ctor(self->name);self->usage_type=-1;self->picked_up=false;self->pickup_timer=0;self->radius=.25f;self->count=self->default_count=1;self->max_num=10;self->icon_scale=1.0f;self->interface_orientation=225.0f;self->preload_script_called=false;self->item_script_called=false;self->linked=false;return self;}

// 0x0028A068 copy_instance_data__4itemRC4item
#include "KS/SRC/item.h"
struct EntityVTable{char p0[248];short active_adj;short g0;void(*set_active)(void*,bool);char p1[48];short stationary_adj;short g1;void(*set_stationary)(void*,bool);};struct item_dispatch_layout{char p0[8];EntityVTable*vt;};extern "C" void copy_entity(void*,const void*) __asm__("copy_instance_data__6entityRC6entity");asm(".equ copy_instance_data__6entityRC6entity,0x0012EB50");asm(".equ __as__7stringxRC7stringx,0x0034E0B8");void item::copy_instance_data(const item&b){copy_entity(this,&b);usage_type=b.usage_type;default_count=count=b.default_count;max_num=b.max_num;name=b.name;icon_scale=b.icon_scale;interface_orientation=b.interface_orientation;register EntityVTable*v asm("$3")=((item_dispatch_layout*)this)->vt;v->set_active((char*)this+v->active_adj,true);v=((item_dispatch_layout*)this)->vt;v->set_stationary((char*)this+v->stationary_adj,false);linked=b.linked;}

// 0x00288C38 __4itemR10chunk_fileRC9entity_id15entity_flavor_tUi
struct chunk_file{};struct entity_id{};enum entity_flavor_t{E0};struct stringx{char data[8];};struct item_layout{char padding0[8];void*vtable;char padding1[108];unsigned flags;char padding2[388];int preload_script_called,item_script_called,linked,usage_type;stringx name;int count,default_count,picked_up;float pickup_timer,icon_scale,interface_orientation;int max_num;};extern "C" void entity_ctor(item_layout*,chunk_file&,const entity_id&,entity_flavor_t,unsigned)__asm__("__6entityR10chunk_fileRC9entity_id15entity_flavor_tUi");extern "C" void string_ctor(stringx*)__asm__("__7stringx");extern "C" void set_active(item_layout*,bool)__asm__("set_active__6entityb");extern char target_vtable;asm(".equ __6entityR10chunk_fileRC9entity_id15entity_flavor_tUi,0x0012AB18");asm(".equ __7stringx,0x0034D3E0");asm(".equ set_active__6entityb,0x00138D90");asm(".equ target_vtable,0x004FC1B0");extern "C" item_layout*ctor(item_layout*,chunk_file&,const entity_id&,entity_flavor_t,unsigned)__asm__("__4itemR10chunk_fileRC9entity_id15entity_flavor_tUi");item_layout*ctor(item_layout*self,chunk_file&fs,const entity_id&id,entity_flavor_t flavor,unsigned flags){entity_ctor(self,fs,id,flavor,flags);register void*vt asm("$3")=&target_vtable;self->vtable=vt;string_ctor(&self->name);self->usage_type=-1;self->picked_up=0;self->pickup_timer=0;*(float*)((char*)self+144)=.25f;self->default_count=self->count=1;self->max_num=10;self->icon_scale=1.0f;self->interface_orientation=225.0f;set_active(self,true);self->flags|=4;self->preload_script_called=0;self->item_script_called=0;self->linked=0;return self;}

// 0x0028ADD0 get_signal_id__4itemPCc
#include "KS/SRC/item.h"
extern const char*item_signal_names[5];extern "C" unsigned strlen(const char*);extern "C" int strcmp(const char*,const char*);extern "C" unsigned short entity_get(const char*)__asm__("get_signal_id__6entityPCc");asm(".equ item_signal_names,0x00431A70");asm(".equ strlen,0x003D40E0");asm(".equ strcmp,0x003D3E88");asm(".equ get_signal_id__6entityPCc,0x0012F0E0");unsigned short item::get_signal_id(const char*name){int idx;for(idx=0;idx<5;++idx){int offset=strlen(item_signal_names[idx])-strlen(name);if(offset>(int)strlen(item_signal_names[idx]))continue;if(!strcmp(name,&item_signal_names[idx][offset]))return idx+27;}return entity_get(name);}

// 0x0028B2A8 _$_14morphable_item
struct layout{char padding0[8];void*vtable;char padding1[564];void**start;void**finish;void**end;int old_count;};extern char target_vtable;extern void*free_list[];extern "C" void dump(layout*)__asm__("dump_ranges__14morphable_item");extern "C" void arch_free(void*)__asm__("arch_free__FPv");extern "C" void base_dtor(layout*,int)__asm__("_$_4item");asm(".equ target_vtable,0x004FB4C0");asm(".equ free_list,0x003E5628");asm(".equ dump_ranges__14morphable_item,0x0028BF98");asm(".equ arch_free__FPv,0x002AC768");asm(".equ _$_4item,0x00288BE8");extern "C" void dtor(layout*,int)__asm__("_$_14morphable_item");void dtor(layout*self,int deleting){self->vtable=&target_vtable;dump(self);self->old_count=-1;void**p=self->start;unsigned n=self->end-p;if(n){unsigned bytes=n*4;if(bytes>128)arch_free(p);else{unsigned index=(bytes+7)/8-1;*p=free_list[index];free_list[index]=p;}}base_dtor(self,deleting);asm volatile("");}

// Source implementation boundary.
// 0x002B85A0 is_an_item__C4item
#include "KS/SRC/item.h"
bool item::is_an_item() const { return true; }

// 0x002B85A8 get_count__C4item
#include "KS/SRC/item.h"
int item::get_count() const { return count; }

// 0x002B85B0 inc_count__4item
#include "KS/SRC/item.h"
void item::inc_count() { ++count; }

// 0x002B85C0 dec_count__4item
#include "KS/SRC/item.h"
void item::dec_count() { --count; }

// 0x002B85D0 set_count__4itemi
#include "KS/SRC/item.h"
void item::set_count(int value) { count = value; }

// 0x002B85D8 is_usable__C4item
struct item_usable_vtable {
    char padding[0x628];
    short adjustment;
    short padding2;
    int (*get_count)(void *self);
};
struct item_usable_layout {
    char padding[8];
    item_usable_vtable *vtable;
};
extern "C" bool item_is_usable(
    const item_usable_layout *self)
    __asm__("is_usable__C4item");
bool item_is_usable(const item_usable_layout *self) {
    item_usable_vtable *table = self->vtable;
    return table->get_count(
        (char *)self + table->adjustment) > 0;
}

// 0x002B8608 get_number__C4item
#include "KS/SRC/item.h"
int item::get_number() const { return count; }

// 0x002B8610 is_ammo__C4item
#include "KS/SRC/item.h"
bool item::is_ammo() const { return usage_type == AMMO; }

// 0x002B8620 is_health__C4item
#include "KS/SRC/item.h"
bool item::is_health() const { return usage_type == HEALTH; }

// 0x002B8630 is_armor__C4item
#include "KS/SRC/item.h"
bool item::is_armor() const { return usage_type == ARMOR; }

// 0x002B8640 is_brain_weapon__C4item
#include "KS/SRC/item.h"
bool item::is_brain_weapon() const { return false; }

// 0x002B8648 holster__4itemb
#include "KS/SRC/item.h"
void item::holster(bool make_visible) {}

// 0x002B8650 draw__4itemb
#include "KS/SRC/item.h"
void item::draw(bool make_visible) {}

// 0x002B8658 hide__4item
#include "KS/SRC/item.h"
void item::hide() {}

// 0x002B8660 show__4item
#include "KS/SRC/item.h"
void item::show() {}

// 0x002B8758 is_a_visual_item__C11visual_item
#include "KS/SRC/item.h"
bool visual_item::is_a_visual_item() const { return true; }

// 0x002B87E8 is_a_morphable_item__C14morphable_item
#include "KS/SRC/item.h"
bool morphable_item::is_a_morphable_item() const { return true; }

// 0x002B8550 __tf4item
#include "KS/SRC/rtti.h"
extern "C" void **item_base_rtti() __asm__("__tf6entity");
extern "C" void *item_type[] __asm__("__ti4item");
extern "C" const char item_name[];
extern "C" void *item_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti4item, 0x005A3DB0");
__asm__(".equ item_name, 0x004FE490");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **item_rtti() __asm__("__tf4item");
void **item_rtti(){if(!item_type[0]){item_base_rtti();__rtti_si(item_type,item_name,item_base_type);}return item_type;}

// 0x002B8708 __tf11visual_item
#include "KS/SRC/rtti.h"
extern "C" void **visual_item_base_rtti() __asm__("__tf6entity");
extern "C" void *visual_item_type[] __asm__("__ti11visual_item");
extern "C" const char visual_item_name[];
extern "C" void *visual_item_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti11visual_item, 0x005A3DC0");
__asm__(".equ visual_item_name, 0x004FE498");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **visual_item_rtti() __asm__("__tf11visual_item");
void **visual_item_rtti(){if(!visual_item_type[0]){visual_item_base_rtti();__rtti_si(visual_item_type,visual_item_name,visual_item_base_type);}return visual_item_type;}
