// Matching decompilation blocks selected by generated build shims.


// 0x0011FF88 _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZPQ2t13instance_bank1Z17entity_track_tree5ref_tZt9_Identity1ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZQ2t13instance_bank1Z17entity_track_tree13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z17entity_track_tree5ref_t
struct tree_node {
    char padding[8];
    tree_node *left;
    tree_node *right;
};
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_tree_label(
    void *tree,tree_node *node
) __asm__("_M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZPQ2t13instance_bank1Z17entity_track_tree5ref_tZt9_Identity1ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZQ2t13instance_bank1Z17entity_track_tree13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z17entity_track_tree5ref_t");
extern "C" void recurse_label(void *,tree_node *);
__asm__(".equ recurse_label, 0x0011FF88");
void erase_tree_label(void *tree,tree_node *node) {
    for (;node;) {
        recurse_label(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}

// 0x0011FFE8 _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZPQ2t13instance_bank1Z17entity_track_tree5ref_tZt9_Identity1ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZQ2t13instance_bank1Z17entity_track_tree11less_by_ptrZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z17entity_track_tree5ref_t
struct tree_node {
    char padding[8];
    tree_node *left;
    tree_node *right;
};
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_tree_ptr(
    void *tree,tree_node *node
) __asm__("_M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZPQ2t13instance_bank1Z17entity_track_tree5ref_tZt9_Identity1ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZQ2t13instance_bank1Z17entity_track_tree11less_by_ptrZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z17entity_track_tree5ref_t");
extern "C" void recurse_ptr(void *,tree_node *);
__asm__(".equ recurse_ptr, 0x0011FFE8");
void erase_tree_ptr(void *tree,tree_node *node) {
    for (;node;) {
        recurse_ptr(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}

// 0x0011E1E8 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZ8ett_nodeZt10_Select1st1Zt4pair2ZC7stringxZ8ett_nodeZt4less1Z7stringxZt12my_allocator1Z8ett_nodePt13_Rb_tree_node1Zt4pair2ZC7stringxZ8ett_node
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[20];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x0011E1E8");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZ8ett_nodeZt10_Select1st1Zt4pair2ZC7stringxZ8ett_nodeZt4less1Z7stringxZt12my_allocator1Z8ett_nodePt13_Rb_tree_node1Zt4pair2ZC7stringxZ8ett_node");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}

// 0x0011FAE0 __uninitialized_copy_aux__H2ZP16scene_anims_infoZP16scene_anims_info_X01X01X11G12__false_type_X11
inline void*operator new(unsigned int,void*p){return p;}struct vector3d{float x,y,z;vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}};class stringx{char data[8];public:stringx(const stringx&);};asm(".equ __7stringxRC7stringx,0x0034D4D0");class scene_anims_info{public:void*ent;vector3d entity_up_vec;unsigned int handle;stringx name;void*anim_tree;scene_anims_info(const scene_anims_info&v):ent(v.ent),entity_up_vec(v.entity_up_vec),handle(v.handle),name(v.name),anim_tree(v.anim_tree){}};extern "C" scene_anims_info*copy(scene_anims_info*first,scene_anims_info*last,scene_anims_info*result)__asm__("__uninitialized_copy_aux__H2ZP16scene_anims_infoZP16scene_anims_info_X01X01X11G12__false_type_X11");scene_anims_info*copy(scene_anims_info*first,scene_anims_info*last,scene_anims_info*result){for(;first!=last;++first,++result)if(result)new((void*)result)scene_anims_info(*first);return result;}

// Source implementation boundary.
// 0x00121B58 key_anim<quaternion> RTTI
#include "KS/SRC/linear_anim.h"

extern "C" void **key_quat_base_rtti() __asm__("__tft4anim1Z10quaternion");
extern "C" void *key_quat_base_type[] __asm__("__tit4anim1Z10quaternion");
extern "C" void *key_quat_type[]
    __asm__("__tit8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion");
extern "C" const char key_quat_name[];

__asm__(".equ __tft4anim1Z10quaternion, 0x00121C88");
__asm__(".equ __tit4anim1Z10quaternion, 0x00511FD8");
__asm__(".equ __tit8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion, 0x005A2728");
__asm__(".equ key_quat_name, 0x004CA538");

extern "C" void **key_quat_rtti()
    __asm__("__tft8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion");
void **key_quat_rtti()
{
    if (!key_quat_type[0]) {
        key_quat_base_rtti();
        __rtti_si(key_quat_type, key_quat_name, key_quat_base_type);
    }
    return key_quat_type;
}

// 0x00121BF8 key_anim<float> RTTI
#include "KS/SRC/linear_anim.h"

extern "C" void **key_float_base_rtti() __asm__("__tft4anim1Zf");
extern "C" void *key_float_base_type[] __asm__("__tit4anim1Zf");
extern "C" void *key_float_type[]
    __asm__("__tit8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zf");
extern "C" const char key_float_name[];

__asm__(".equ __tft4anim1Zf, 0x00121CC8");
__asm__(".equ __tit4anim1Zf, 0x00511FE8");
__asm__(".equ __tit8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zf, 0x005A2748");
__asm__(".equ key_float_name, 0x004CA5E0");

extern "C" void **key_float_rtti()
    __asm__("__tft8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zf");
void **key_float_rtti()
{
    if (!key_float_type[0]) {
        key_float_base_rtti();
        __rtti_si(key_float_type, key_float_name, key_float_base_type);
    }
    return key_float_type;
}

// 0x00121BA8 key_anim<vector3d> RTTI
#include "KS/SRC/linear_anim.h"

extern "C" void **key_vec_base_rtti() __asm__("__tft4anim1Z8vector3d");
extern "C" void *key_vec_base_type[] __asm__("__tit4anim1Z8vector3d");
extern "C" void *key_vec_type[]
    __asm__("__tit8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d");
extern "C" const char key_vec_name[];

__asm__(".equ __tft4anim1Z8vector3d, 0x00121C48");
__asm__(".equ __tit4anim1Z8vector3d, 0x00511FE0");
__asm__(".equ __tit8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d, 0x005A2738");
__asm__(".equ key_vec_name, 0x004CA590");

extern "C" void **key_vec_rtti()
    __asm__("__tft8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d");
void **key_vec_rtti()
{
    if (!key_vec_type[0]) {
        key_vec_base_rtti();
        __rtti_si(key_vec_type, key_vec_name, key_vec_base_type);
    }
    return key_vec_type;
}


// 0x00120A30 set_flag__t4anim1ZP6entity12anim_flags_t
#include "KS/SRC/anim.h"

class entity;
template void anim<entity*>::set_flag(anim_flags_t flag);

// 0x00120A70 clear_flag__t4anim1ZP6entity12anim_flags_t
#include "KS/SRC/anim.h"

class entity;
template void anim<entity*>::clear_flag(anim_flags_t flag);

// 0x00120BA8 set_flag__t4anim1Z2po12anim_flags_t
#include "KS/SRC/anim.h"

class po;
template void anim<po>::set_flag(anim_flags_t flag);

// 0x00120BB8 clear_flag__t4anim1Z2po12anim_flags_t
#include "KS/SRC/anim.h"

class po;
template void anim<po>::clear_flag(anim_flags_t flag);

// 0x00120C20 set_flag__t4anim1Z10signal_key12anim_flags_t
#include "KS/SRC/anim.h"

class signal_key;
template void anim<signal_key>::set_flag(anim_flags_t flag);

// 0x00120C30 clear_flag__t4anim1Z10signal_key12anim_flags_t
#include "KS/SRC/anim.h"

class signal_key;
template void anim<signal_key>::clear_flag(anim_flags_t flag);

// 0x00120D88 set_flag__t4anim1Z8vector3d12anim_flags_t
#include "KS/SRC/anim.h"

class vector3d;
template void anim<vector3d>::set_flag(anim_flags_t flag);

// 0x00120D98 clear_flag__t4anim1Z8vector3d12anim_flags_t
#include "KS/SRC/anim.h"

class vector3d;
template void anim<vector3d>::clear_flag(anim_flags_t flag);

// 0x00120E00 set_flag__t4anim1Z10quaternion12anim_flags_t
#include "KS/SRC/anim.h"

class quaternion;
template void anim<quaternion>::set_flag(anim_flags_t flag);

// 0x00120E10 clear_flag__t4anim1Z10quaternion12anim_flags_t
#include "KS/SRC/anim.h"

class quaternion;
template void anim<quaternion>::clear_flag(anim_flags_t flag);

// 0x00120E78 set_flag__t4anim1Zf12anim_flags_t
#include "KS/SRC/anim.h"

template void anim<float>::set_flag(anim_flags_t flag);

// 0x00120E88 clear_flag__t4anim1Zf12anim_flags_t
#include "KS/SRC/anim.h"

template void anim<float>::clear_flag(anim_flags_t flag);

// 0x00120EF0 frame_advance__t4anim1Z10signal_keyRC14anim_control_tP10signal_key
#include "KS/SRC/anim.h"
#include "KS/SRC/signal_anim.h"

template void anim<signal_key>::frame_advance(
    const anim_control_t &control,
    signal_key *destination);

// 0x00121A70 frame_advance__t4anim1ZP6entityRC14anim_control_tPP6entity
#include "KS/SRC/anim.h"
#include "KS/SRC/entity.h"

template void anim<entity *>::frame_advance(
    const anim_control_t &control,
    entity **destination);

// 0x00121A78 get_value__Ct4anim1ZP6entityRC14anim_control_tPP6entity
#include "KS/SRC/anim.h"
#include "KS/SRC/entity.h"

template void anim<entity *>::get_value(
    const anim_control_t &control,
    entity **destination) const;

// 0x00121A80 get_value__Ct4anim1ZP6entityfPP6entity
#include "KS/SRC/anim.h"
#include "KS/SRC/entity.h"

template void anim<entity *>::get_value(
    float time,
    entity **destination) const;

// 0x00121A88 get_value__Ct4anim1Z10signal_keyRC14anim_control_tP10signal_key
#include "KS/SRC/anim.h"
#include "KS/SRC/signal_anim.h"

template void anim<signal_key>::get_value(
    const anim_control_t &control,
    signal_key *destination) const;

// 0x00121A90 get_value__Ct4anim1Z10signal_keyfP10signal_key
#include "KS/SRC/anim.h"
#include "KS/SRC/signal_anim.h"

template void anim<signal_key>::get_value(
    float time,
    signal_key *destination) const;

// 0x00121A98 __tft4anim1Z2po
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FC0"); asm(".equ type_name, 0x004CA4F8");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z2po");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00121AD8 __tft4anim1Z10signal_key
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FC8"); asm(".equ type_name, 0x004CA508");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z10signal_key");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00121B18 __tft4anim1ZP6entity
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FD0"); asm(".equ type_name, 0x004CA520");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1ZP6entity");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00121C48 __tft4anim1Z8vector3d
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FE0"); asm(".equ type_name, 0x004CA618");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z8vector3d");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00121C88 __tft4anim1Z10quaternion
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FD8"); asm(".equ type_name, 0x004CA630");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z10quaternion");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00121CC8 __tft4anim1Zf
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FE8"); asm(".equ type_name, 0x004CA648");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Zf");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00120AC0 set_flag__t4anim1ZP6entity12anim_flags_tb
#include "KS/SRC/anim.h"
class entity;
template void anim<entity *>::set_flag(anim_flags_t flag, bool enabled);

// 0x00120BD0 set_flag__t4anim1Z2po12anim_flags_tb
#include "KS/SRC/anim.h"
class po;
template void anim<po>::set_flag(anim_flags_t flag, bool enabled);

// 0x00120C48 set_flag__t4anim1Z10signal_key12anim_flags_tb
#include "KS/SRC/anim.h"
class signal_key;
template void anim<signal_key>::set_flag(anim_flags_t flag, bool enabled);

// 0x00120DB0 set_flag__t4anim1Z8vector3d12anim_flags_tb
#include "KS/SRC/anim.h"
class vector3d;
template void anim<vector3d>::set_flag(anim_flags_t flag, bool enabled);

// 0x00120E28 set_flag__t4anim1Z10quaternion12anim_flags_tb
#include "KS/SRC/anim.h"
class quaternion;
template void anim<quaternion>::set_flag(anim_flags_t flag, bool enabled);

// 0x00120EA0 set_flag__t4anim1Zf12anim_flags_tb
#include "KS/SRC/anim.h"
template void anim<float>::set_flag(anim_flags_t flag, bool enabled);

// 0x00120F38 set_time__t8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zff
#include "KS/SRC/linear_anim.h"

template void key_anim<
    float,
    linear_key<float>,
    linear_track<float>
>::set_time(float);

// 0x00121280 set_time__t8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3df
#include "KS/SRC/algebra.h"
#include "KS/SRC/linear_anim.h"

template void key_anim<
    vector3d,
    linear_key<vector3d>,
    linear_track<vector3d>
>::set_time(float);

// 0x00121628 set_time__t8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternionf
struct Key{float time;char p[16];};struct Track{int num_keys;Key*m_keys;};class KeyAnim{public:char p[8];Track*track;Key*current_key;void set_time(float)__asm__("set_time__t8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternionf");};void KeyAnim::set_time(float t){current_key=track->m_keys;Key*next_key=current_key;++next_key;while(next_key!=(track->m_keys+track->num_keys)&&t>=next_key->time){++current_key;++next_key;}}

// 0x00120F90 get_value__Ct8key_anim3ZfZt10linear_key1ZfZt12linear_track1ZfRC14anim_control_tPf
struct anim_control_t{float current_time;float time_delta;float duration;};struct linear_key_float{float timestamp;float key_value;};struct linear_track_float{int num_keys;linear_key_float*m_keys;};struct key_anim_float{char pad[8];linear_track_float*track;linear_key_float*current_key;};extern "C" float interpolate(const linear_key_float*,const linear_key_float&,float)__asm__("interpolate__Ct10linear_key1ZfRCt10linear_key1Zff");asm(".equ interpolate__Ct10linear_key1ZfRCt10linear_key1Zff,0x001132F8");extern "C" void get_value(const key_anim_float*self,const anim_control_t&ac,float*dest)__asm__("get_value__Ct8key_anim3ZfZt10linear_key1ZfZt12linear_track1ZfRC14anim_control_tPf");void get_value(const key_anim_float*self,const anim_control_t&ac,float*dest){linear_key_float*current=self->current_key;if(ac.current_time<current->timestamp||ac.current_time>ac.duration){*dest=current->key_value;}else{linear_key_float*next=current+1;if(next==self->track->m_keys+self->track->num_keys){*dest=current->key_value;}else{float len=next->timestamp-current->timestamp;float d=ac.current_time-current->timestamp;*dest=interpolate(current,*next,len>0.0001f?d/len:1.0f);}}}

// 0x001211C8 get_value__Ct8key_anim3ZfZt10linear_key1ZfZt12linear_track1ZffPf
#include "KS/SRC/linear_anim.h"

__asm__(
    ".equ interpolate__Ct10linear_key1ZfRCt10linear_key1Zff, "
    "0x001132F8"
);

template void key_anim<
    float,
    linear_key<float>,
    linear_track<float>
>::get_value(float, float *) const;

// 0x001212D8 get_value__Ct8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3dRC14anim_control_tP8vector3d
#include "KS/SRC/linear_anim.h"
#include "KS/SRC/algebra.h"

__asm__(
    ".equ interpolate__Ct10linear_key1Z8vector3d"
    "RCt10linear_key1Z8vector3df, 0x00113320"
);

template void key_anim<
    vector3d,
    linear_key<vector3d>,
    linear_track<vector3d>
>::get_value(const anim_control_t &, vector3d *) const;

// 0x001216B8 get_value__Ct8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternionRC14anim_control_tP10quaternion
#include "KS/SRC/linear_anim.h"

__asm__(
    ".equ interpolate__Ct10linear_key1Z10quaternion"
    "RCt10linear_key1Z10quaternionf, 0x001133A8"
);

template void key_anim<
    quaternion,
    linear_key<quaternion>,
    linear_track<quaternion>
>::get_value(const anim_control_t &, quaternion *) const;

// 0x00121540 get_value__Ct8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3dfP8vector3d
#include "KS/SRC/linear_anim.h"
#include "KS/SRC/algebra.h"

__asm__(
    ".equ interpolate__Ct10linear_key1Z8vector3d"
    "RCt10linear_key1Z8vector3df, 0x00113320"
);

template void key_anim<
    vector3d,
    linear_key<vector3d>,
    linear_track<vector3d>
>::get_value(float, vector3d *) const;
