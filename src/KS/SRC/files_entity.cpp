// Matching decompilation blocks selected by generated build shims.


// 0x00142E38 lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZt10_Select1st1Zt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZQ219animation_interface9s_t_s_t_rZt12my_allocator1Zt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoRC7stringx
struct stringx{char*chars;};struct node{char p0[4];node*right,*left,*other;stringx key;};struct iterator{node*p;};extern "C" int strcmp(const char*,const char*);__asm__(".equ strcmp,0x003D3E88");extern "C" iterator*lower(iterator*result,node**root,const stringx&key) __asm__("lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZt10_Select1st1Zt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZQ219animation_interface9s_t_s_t_rZt12my_allocator1Zt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoRC7stringx");iterator*lower(iterator*result,node**root,const stringx&key){node*y=*root;node*x=y->right;while(x){if(strcmp(x->key.chars,key.chars)>=0){y=x;x=y->left;}else x=x->other;}result->p=y;return result;}

// 0x00142EB0 __uninitialized_copy_aux__H2ZPCQ219animation_interface9anim_infoZPQ219animation_interface9anim_info_X01X01X11G12__false_type_X11
inline void*operator new(unsigned int,void*p){return p;}struct stringx{char data[8];stringx(const stringx&);};__asm__(".equ __7stringxRC7stringx,0x0034D4D0");struct anim_info{float percent;stringx anim;int damage;float recover_time;float recover_var;int flags;anim_info(const anim_info&o):percent(o.percent),anim(o.anim),damage(o.damage),recover_time(o.recover_time),recover_var(o.recover_var),flags(o.flags){}};extern "C" anim_info*copy(const anim_info*first,const anim_info*last,anim_info*result)__asm__("__uninitialized_copy_aux__H2ZPCQ219animation_interface9anim_infoZPQ219animation_interface9anim_info_X01X01X11G12__false_type_X11");anim_info*copy(const anim_info*first,const anim_info*last,anim_info*result){for(;first!=last;++first,++result)if(result)new((void*)result)anim_info(*first);return result;}

// 0x001437C0 __uninitialized_copy_aux__H2ZPQ219animation_interface9anim_infoZPQ219animation_interface9anim_info_X01X01X11G12__false_type_X11
inline void*operator new(unsigned int,void*p){return p;}struct stringx{char data[8];stringx(const stringx&);};__asm__(".equ __7stringxRC7stringx,0x0034D4D0");struct anim_info{float percent;stringx anim;int damage;float recover_time;float recover_var;int flags;anim_info(const anim_info&o):percent(o.percent),anim(o.anim),damage(o.damage),recover_time(o.recover_time),recover_var(o.recover_var),flags(o.flags){}};extern "C" anim_info*copy(anim_info*first,anim_info*last,anim_info*result)__asm__("__uninitialized_copy_aux__H2ZPQ219animation_interface9anim_infoZPQ219animation_interface9anim_info_X01X01X11G12__false_type_X11");anim_info*copy(anim_info*first,anim_info*last,anim_info*result){for(;first!=last;++first,++result)if(result)new((void*)result)anim_info(*first);return result;}

// Source implementation boundary.
// 0x00146460 get_class_name__Ct15basic_attribute1Zi
#include "KS/SRC/attribute_template.h"
template const pstring &basic_attribute<int>::get_class_name() const;

// 0x00146470 get_class_name__Ct15basic_attribute1Z7pstring
#include "KS/SRC/attribute_template.h"
template const pstring &basic_attribute<pstring>::get_class_name() const;

// 0x00146480 get_class_name__Ct15basic_attribute1Zf
#include "KS/SRC/attribute_template.h"
template const pstring &basic_attribute<float>::get_class_name() const;

// 0x003141B8 get_class_name__Ct17bounded_attribute1Zi
#include "KS/SRC/attribute_template.h"
template const pstring &bounded_attribute<int>::get_class_name() const;
