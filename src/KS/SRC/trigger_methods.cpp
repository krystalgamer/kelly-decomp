// trigger inline definitions extracted by generated one-function shims.


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
