// trigger definitions extracted by generated one-function shims.


// 0x0028D610 new_box_trigger__15trigger_managerP6entity
#include "KS/SRC/trigger.h"

trigger* trigger_manager::new_box_trigger(entity* value) {
    return 0;
}

// 0x0028D618 add__15trigger_managerP7trigger
#include "KS/SRC/trigger.h"

void trigger_manager::add(trigger* value) {
    value->next = list;
    list = value;
}

// 0x0028D760 update_regions__15trigger_manager
#include "KS/SRC/trigger.h"
void trigger_manager::update_regions()
{
    for (trigger *current = list; current; current = current->next)
        current->update_region();
}

// 0x0028DD00 set_active__7triggerb
#include "KS/SRC/trigger.h"
void trigger::set_active(bool enabled)
{
    active = enabled;
    if (!active && occupied)
    {
        raise_signal(LEAVE);
        occupied = false;
    }
}

// 0x0028DEE0 get_abs_position__C13point_trigger
#include "KS/SRC/trigger.h"

const vector3d& point_trigger::get_abs_position() const {
    return position;
}

// 0x0028E948 update_region__14region_trigger
#include "KS/SRC/trigger.h"

void region_trigger::update_region() {
}

// 0x0028EB18 get_abs_position__C14entity_trigger
#include "KS/SRC/entity.h"
#include "KS/SRC/trigger.h"

const vector3d& entity_trigger::get_abs_position() const {
    return ent->get_abs_position();
}

// 0x0028EB28 update_region__14entity_trigger
#include "KS/SRC/trigger.h"

void entity_trigger::update_region() {
}

// 0x0028DD50 __13point_triggerRC7stringx
#include "KS/SRC/trigger.h"

__asm__(".equ __7triggerRC7stringx, 0x0028D838");

point_trigger::point_trigger(const stringx &id) : trigger(id) {}

// 0x0028E7C0 __14region_triggerRC7stringx
#include "KS/SRC/trigger.h"

__asm__(".equ __7triggerRC7stringx, 0x0028D838");

region_trigger::region_trigger(const stringx &id) : trigger(id) {}

// 0x0028E950 __14entity_triggerRC7stringx
#include "KS/SRC/trigger.h"

extern const float maximum_float __asm__("maximum_float");
asm(".equ _vt$14entity_trigger, 0x004FAFE0"); asm(".equ maximum_float, 0x004E7980");
asm(".equ __7triggerRC7stringx, 0x0028D838");
entity_trigger::entity_trigger(const stringx &id)
    : trigger(id),
      last_compute_sector_position_hash(maximum_float)
{}

// 0x0028E8F0 triggered__14region_triggerP6entity
#include "KS/SRC/entity.h"
#include "KS/SRC/path.h"
#include "KS/SRC/trigger.h"

extern "C" void *FindRegion(
    trig_region_pset *tree, region *const &value
) __asm__(
    "find__Ct8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6region"
    "Zt4less1ZP6regionZt12my_allocator1ZP6regionRCP6region"
);
__asm__(
    ".equ find__Ct8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6region"
    "Zt4less1ZP6regionZt12my_allocator1ZP6regionRCP6region, "
    "0x002B0910"
);
bool region_trigger::triggered(entity *value) {
    region_node *node=value->get_region();
    bool result;
    if (!node)
        goto not_found;
    result=FindRegion(&in_regions,node->get_data())!=
           in_regions.end_node();
    goto done;
not_found:
    result=false;
done:
    return result;
}

// 0x0028E990 __14entity_triggerRC7stringxP6entityf
#include "KS/SRC/trigger.h"

extern float float_max;
__asm__(".equ __7triggerRC7stringx, 0x0028D838");
__asm__(".equ float_max, 0x004E7984");
entity_trigger::entity_trigger(
    const stringx &id,
    entity *target,
    float trigger_radius)
  : trigger(id),
    ent(target),
    radius(trigger_radius),
    last_compute_sector_position_hash(float_max)
{
}

// 0x0028DD88 __13point_triggerRC7stringxRC8vector3df
struct stringx;extern "C" void trigger_ctor(void*,const stringx&) __asm__("__7triggerRC7stringx");__asm__(".equ __7triggerRC7stringx,0x0028D838");extern const char point_vtable[];__asm__(".equ point_vtable,0x004FB0A0");struct vector3d{float x,y,z;vector3d(){}vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return *this;}};class point_trigger{char p0[8];const void*vtable;char p1[44];vector3d position;float radius;public:point_trigger(const stringx&,const vector3d&,float);};point_trigger::point_trigger(const stringx&id,const vector3d&p,float r){trigger_ctor(this,id);vtable=point_vtable;position=p;radius=r;}

// 0x0028DE58 triggered__13point_triggerP6entity
struct vector3d{float x,y,z;vector3d(){}vector3d(float X,float Y,float Z):x(X),y(Y),z(Z){}vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return*this;}float length2()const{return x*x+y*y+z*z;}};inline vector3d operator-(const vector3d&a,const vector3d&b){return vector3d(a.x-b.x,a.y-b.y,a.z-b.z);}struct holder{char pad[48];vector3d position;};struct entity{char pad[80];holder*absolute;const vector3d&get_abs_position()const{return absolute->position;}};class point_trigger{char pad[56];vector3d position;float radius;public:bool triggered(entity*)__asm__("triggered__13point_triggerP6entity");};bool point_trigger::triggered(entity*e){vector3d v;v=e->get_abs_position()-position;return v.length2()<radius*radius;}

// Source implementation boundary.
// 0x00314300 __tf15trigger_manager
#include "KS/SRC/rtti.h"
extern "C" void **TriggerManagerBaseRtti() __asm__("__tf9singleton");
extern "C" void *trigger_manager_type[] __asm__("__ti15trigger_manager");
extern "C" const char trigger_manager_name[];
extern "C" void *trigger_manager_base_type[] __asm__("__ti9singleton");
__asm__(".equ __tf9singleton, 0x00144398");
__asm__(".equ __ti15trigger_manager, 0x005A4230");
__asm__(".equ trigger_manager_name, 0x00508BD8");
__asm__(".equ __ti9singleton, 0x00511FF8");
extern "C" void **TriggerManagerRtti() __asm__("__tf15trigger_manager");
void **TriggerManagerRtti()
{
    if (!trigger_manager_type[0]) {
        TriggerManagerBaseRtti();
        __rtti_si(trigger_manager_type, trigger_manager_name, trigger_manager_base_type);
    }
    return trigger_manager_type;
}


// 0x002B8D08 read__7triggerR10chunk_file
#include "KS/SRC/trigger.h"

void trigger::read(chunk_file& file) {
}

// 0x002B8D10 triggered__7triggerP6entity
#include "KS/SRC/trigger.h"

bool trigger::triggered(entity* value) {
    return false;
}

// 0x002B8D18 update_region__7trigger
#include "KS/SRC/trigger.h"

void trigger::update_region() {
}

// 0x002B8D20 is_a_trigger__C7trigger
#include "KS/SRC/trigger.h"

bool trigger::is_a_trigger() const {
    return true;
}

// 0x002B8D28 get_abs_position__C7trigger
#include "KS/SRC/trigger.h"

extern const vector3d ZEROVEC_00570198;

const vector3d& trigger::get_abs_position() const {
    return ZEROVEC_00570198;
}
// 0x002B8CB8 __tf7trigger
#include "KS/SRC/rtti.h"
#include "KS/SRC/trigger.h"

extern "C" void **trigger_base_rtti() __asm__("__tf9signaller");
extern "C" void *trigger_type[] __asm__("__ti7trigger");
extern "C" const char trigger_name[];
extern "C" void *trigger_base_type[] __asm__("__ti9signaller");

__asm__(".equ __tf9signaller, 0x0035FBA8");
__asm__(".equ __ti7trigger, 0x005A3E20");
__asm__(".equ trigger_name, 0x004FE568");
__asm__(".equ __ti9signaller, 0x00512028");

extern "C" void **trigger_rtti() __asm__("__tf7trigger");
void **trigger_rtti()
{
    if (!trigger_type[0]) {
        trigger_base_rtti();
        __rtti_si(trigger_type, trigger_name, trigger_base_type);
    }
    return trigger_type;
}

// 0x002B8C18 _$_7trigger
struct stringx{char*p;void*buf;};struct Node{Node*next;Node*parent;Node*left;Node*right;};struct Tree{Node*header;int count;};struct TriggerLayout{char p[16];stringx id;char gap[4];Tree regions;};struct AllocState{char p[8];Node*free_head;};extern AllocState alloc_state;extern "C" void erase_tree(Tree*,Node*) __asm__("_M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region");extern "C" void destroy_string(stringx*,int) __asm__("_$_7stringx");extern "C" void destroy_signaller(void*,int) __asm__("_$_9signaller");asm(".equ alloc_state,0x003E5628");asm(".equ _M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region,0x002AFDC8");asm(".equ _$_7stringx,0x0034D6E0");asm(".equ _$_9signaller,0x0034CC90");extern "C" void dtor(void*,int) __asm__("_$_7trigger");void dtor(void*self,int deleting){TriggerLayout*t=(TriggerLayout*)self;Tree*tree=&t->regions;if(tree->count){erase_tree(tree,tree->header->parent);tree->header->left=tree->header;tree->header->parent=0;tree->header->right=tree->header;tree->count=0;}Node*h=tree->header;h->next=alloc_state.free_head;alloc_state.free_head=h;destroy_string(&t->id,2);destroy_signaller(self,deleting);asm volatile("");}

// 0x002B8DD8 _$_13point_trigger
struct stringx{char*p;void*buf;};struct Node{Node*next;Node*parent;Node*left;Node*right;};struct Tree{Node*header;int count;};struct TriggerLayout{char p[16];stringx id;char gap[4];Tree regions;};struct AllocState{char p[8];Node*free_head;};extern AllocState alloc_state;extern "C" void erase_tree(Tree*,Node*) __asm__("_M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region");extern "C" void destroy_string(stringx*,int) __asm__("_$_7stringx");extern "C" void destroy_signaller(void*,int) __asm__("_$_9signaller");asm(".equ alloc_state,0x003E5628");asm(".equ _M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region,0x002AFDC8");asm(".equ _$_7stringx,0x0034D6E0");asm(".equ _$_9signaller,0x0034CC90");extern "C" void dtor(void*,int) __asm__("_$_13point_trigger");void dtor(void*self,int deleting){TriggerLayout*t=(TriggerLayout*)self;Tree*tree=&t->regions;if(tree->count){erase_tree(tree,tree->header->parent);tree->header->left=tree->header;tree->header->parent=0;tree->header->right=tree->header;tree->count=0;}Node*h=tree->header;h->next=alloc_state.free_head;alloc_state.free_head=h;destroy_string(&t->id,2);destroy_signaller(self,deleting);asm volatile("");}

// 0x002B8F00 _$_14region_trigger
struct stringx{char*p;void*buf;};struct Node{Node*next;Node*parent;Node*left;Node*right;};struct Tree{Node*header;int count;};struct TriggerLayout{char p[16];stringx id;char gap[4];Tree regions;};struct AllocState{char p[8];Node*free_head;};extern AllocState alloc_state;extern "C" void erase_tree(Tree*,Node*) __asm__("_M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region");extern "C" void destroy_string(stringx*,int) __asm__("_$_7stringx");extern "C" void destroy_signaller(void*,int) __asm__("_$_9signaller");asm(".equ alloc_state,0x003E5628");asm(".equ _M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region,0x002AFDC8");asm(".equ _$_7stringx,0x0034D6E0");asm(".equ _$_9signaller,0x0034CC90");extern "C" void dtor(void*,int) __asm__("_$_14region_trigger");void dtor(void*self,int deleting){TriggerLayout*t=(TriggerLayout*)self;Tree*tree=&t->regions;if(tree->count){erase_tree(tree,tree->header->parent);tree->header->left=tree->header;tree->header->parent=0;tree->header->right=tree->header;tree->count=0;}Node*h=tree->header;h->next=alloc_state.free_head;alloc_state.free_head=h;destroy_string(&t->id,2);destroy_signaller(self,deleting);asm volatile("");}

// 0x002B9028 _$_14entity_trigger
struct stringx{char*p;void*buf;};struct Node{Node*next;Node*parent;Node*left;Node*right;};struct Tree{Node*header;int count;};struct TriggerLayout{char p[16];stringx id;char gap[4];Tree regions;};struct AllocState{char p[8];Node*free_head;};extern AllocState alloc_state;extern "C" void erase_tree(Tree*,Node*) __asm__("_M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region");extern "C" void destroy_string(stringx*,int) __asm__("_$_7stringx");extern "C" void destroy_signaller(void*,int) __asm__("_$_9signaller");asm(".equ alloc_state,0x003E5628");asm(".equ _M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region,0x002AFDC8");asm(".equ _$_7stringx,0x0034D6E0");asm(".equ _$_9signaller,0x0034CC90");extern "C" void dtor(void*,int) __asm__("_$_14entity_trigger");void dtor(void*self,int deleting){TriggerLayout*t=(TriggerLayout*)self;Tree*tree=&t->regions;if(tree->count){erase_tree(tree,tree->header->parent);tree->header->left=tree->header;tree->header->parent=0;tree->header->right=tree->header;tree->count=0;}Node*h=tree->header;h->next=alloc_state.free_head;alloc_state.free_head=h;destroy_string(&t->id,2);destroy_signaller(self,deleting);asm volatile("");}

// 0x00314260 _$_15trigger_manager
struct Alloc{void*free[16];};extern Alloc alloc_state;extern char vtable[];extern void arch_free(void*) __asm__("arch_free__FPv");extern "C" void do_delete(void*) __asm__("__builtin_delete");asm(".equ alloc_state,0x003E5628");asm(".equ vtable,0x004CE7A8");asm(".equ arch_free__FPv,0x002AC768");asm(".equ __builtin_delete,0x002AC6B0");extern "C" extern "C" void dtor(void*,int) __asm__("_$_15trigger_manager");void dtor(void*self,int deleting){char*x=(char*)self;void**start=*(void***)(x+4);void**end=*(void***)(x+12);int count=end-start;if(count){unsigned bytes=count*4;if(bytes>=129)arch_free(start);else{unsigned index=((bytes+7)>>3)-1;*(void**)start=alloc_state.free[index];alloc_state.free[index]=start;}}*(void**)self=vtable;if(deleting&1){do_delete(self);asm volatile("");}}
