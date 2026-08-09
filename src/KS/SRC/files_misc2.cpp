// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/iri.h"

// 0x002FD088 __uninitialized_copy_aux__H2ZP6sectorZP6sector_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct sector {
    int value;
};

extern "C" sector *UninitializedCopy(
    sector *first,
    sector *last,
    sector *result
) __asm__("__uninitialized_copy_aux__H2ZP6sectorZP6sector_X01X01X11G12__false_type_X11");

sector *UninitializedCopy(
    sector *first,
    sector *last,
    sector *result
) {
    while (first != last) {
        if (result) {
            new (result) sector(*first);
        }
        ++first;
        ++result;
    }
    return result;
}

// 0x002F43F8 __uninitialized_fill_n_aux__H3ZPQ218scan_light_context9light_recZUiZQ218scan_light_context9light_rec_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct value8 {
    int first;
    int second;
};

extern "C" value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) __asm__("__uninitialized_fill_n_aux__H3ZPQ218scan_light_context9light_recZUiZQ218scan_light_context9light_rec_X01X11RCX21G12__false_type_X01");

value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) {
    while (count) {
        if (first) {
            new (first) value8(value);
        }
        --count;
        ++first;
    }
    return first;
}

// 0x002F9BB0 __uninitialized_fill_n_aux__H3ZP5wedgeZUiZ5wedge_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct __attribute__((packed)) wedge {
    int value;
};

extern "C" wedge *UninitializedFill(
    wedge *first,
    unsigned int count,
    const wedge &value
) __asm__("__uninitialized_fill_n_aux__H3ZP5wedgeZUiZ5wedge_X01X11RCX21G12__false_type_X01");

wedge *UninitializedFill(
    wedge *first,
    unsigned int count,
    const wedge &value
) {
    while (count) {
        if (first) {
            new (first) wedge(value);
        }
        --count;
        ++first;
    }
    return first;
}

// 0x002F9F80 __uninitialized_fill_n_aux__H3ZP4faceZUiZ4face_X01X11RCX21G12__false_type_X01
#include "KS/SRC/pmesh.h"
inline void *operator new(unsigned int, void *place) {
    return place;
}

extern "C" face *UninitializedFillFaces(
    face *first,
    unsigned int count,
    const face &value
) __asm__("__uninitialized_fill_n_aux__H3ZP4faceZUiZ4face_X01X11RCX21G12__false_type_X01");

face *UninitializedFillFaces(
    face *first,
    unsigned int count,
    const face &value
) {
    while (count != 0) {
        if (first) {
            new (first) face(value);
        }
        --count;
        ++first;
    }
    return first;
}

// 0x002F4390 __uninitialized_copy_aux__H2ZPQ218scan_light_context9light_recZPQ218scan_light_context9light_rec_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct value8 {
    int first;
    int second;
};

extern "C" value8 *UninitializedCopy(
    value8 *first,
    value8 *last,
    value8 *result
) __asm__("__uninitialized_copy_aux__H2ZPQ218scan_light_context9light_recZPQ218scan_light_context9light_rec_X01X01X11G12__false_type_X11");

value8 *UninitializedCopy(
    value8 *first,
    value8 *last,
    value8 *result
) {
    while (first != last) {
        if (result) {
            new (result) value8(*first);
        }
        ++first;
        ++result;
    }
    return result;
}

// 0x002FA750 __uninitialized_copy_aux__H2ZPC5wedgeZP5wedge_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct wedge {
    char bytes[4];
};

extern "C" wedge *UninitializedCopy(
    const wedge *first,
    const wedge *last,
    wedge *result
) __asm__("__uninitialized_copy_aux__H2ZPC5wedgeZP5wedge_X01X01X11G12__false_type_X11");

wedge *UninitializedCopy(
    const wedge *first,
    const wedge *last,
    wedge *result
) {
    while (first != last) {
        if (result)
            new (result) wedge(*first);
        ++first;
        ++result;
    }
    return result;
}

// 0x002FBE88 __uninitialized_copy_aux__H2ZPQ2t7bp_tree2Z10partition3Z8vector3d6branchZPQ2t7bp_tree2Z10partition3Z8vector3d6branch_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct branch {
    int omitted;
    int left;
    int right;

    branch(const branch &other)
        : left(other.left), right(other.right) {}
};

extern "C" branch *UninitializedCopy(
    branch *first,
    branch *last,
    branch *result
) __asm__("__uninitialized_copy_aux__H2ZPQ2t7bp_tree2Z10partition3Z8vector3d6branchZPQ2t7bp_tree2Z10partition3Z8vector3d6branch_X01X01X11G12__false_type_X11");

branch *UninitializedCopy(
    branch *first,
    branch *last,
    branch *result
) {
    while (first != last) {
        if (result)
            new (result) branch(*first);
        ++first;
        ++result;
    }
    return result;
}

// 0x002F9FD0 __uninitialized_copy_aux__H2ZPC4faceZP4face_X01X01X11G12__false_type_X11
typedef unsigned int size_t;
inline void *operator new(size_t, void *place) { return place; }

struct face
{
    unsigned short wedge_refs[3];
    unsigned short my_material;
    unsigned short level_of_detail;
    unsigned short flags;

    face(const face &other)
    {
        wedge_refs[0] = other.wedge_refs[0];
        wedge_refs[1] = other.wedge_refs[1];
        wedge_refs[2] = other.wedge_refs[2];
        my_material = other.my_material;
        level_of_detail = other.level_of_detail;
        flags = other.flags;
    }
};

struct __false_type {};

extern "C" face *uninitialized_copy_aux(
    const face *first, const face *last,
    face *result, __false_type
) __asm__(
    "__uninitialized_copy_aux__H2ZPC4faceZP4face_"
    "X01X01X11G12__false_type_X11"
);

face *uninitialized_copy_aux(
    const face *first, const face *last,
    face *result, __false_type
)
{
    for (; first != last; ++first, ++result)
    {
        if (result)
            new (result) face(*first);
    }
    return result;
}

// 0x002F5DB8 _M_erase__t8_Rb_tree5ZsZt4pair2ZCsZUiZt10_Select1st1Zt4pair2ZCsZUiZt4less1ZsZt12my_allocator1ZUiPt13_Rb_tree_node1Zt4pair2ZCsZUi
struct node{void*next_free;char p0[4];node*left,*right;};struct allocator{char padding[8];node*free_list;};extern "C" void erase_again(void*,node*) __asm__("erase_again_abs");__asm__(".equ erase_again_abs,0x002F5DB8");extern "C" void erase_tree(void*self,node*x) __asm__("_M_erase__t8_Rb_tree5ZsZt4pair2ZCsZUiZt10_Select1st1Zt4pair2ZCsZUiZt4less1ZsZt12my_allocator1ZUiPt13_Rb_tree_node1Zt4pair2ZCsZUi");void erase_tree(void*self,node*x){if(x){register char*high __asm__("$2")=(char*)0x003e0000;__asm__ __volatile__("" : "+r"(high));register allocator*alloc __asm__("$17")=(allocator*)(high+22056);do{erase_again(self,x->right);node*left=x->left;x->next_free=alloc->free_list;alloc->free_list=x;x=left;}while(x);}}

// 0x002F36D8 __final_insertion_sort__H1ZP20instance_render_info_X01X01_v
extern "C" void insertion(instance_render_info*,instance_render_info*) __asm__("__insertion_sort__H1ZP20instance_render_info_X01X01_v");extern "C" void unguarded(instance_render_info*,instance_render_info*,int) __asm__("__unguarded_insertion_sort_aux__H2ZP20instance_render_infoZ20instance_render_info_X01X01PX11_v");__asm__(".equ __insertion_sort__H1ZP20instance_render_info_X01X01_v,0x002F2FD8");__asm__(".equ __unguarded_insertion_sort_aux__H2ZP20instance_render_infoZ20instance_render_info_X01X01PX11_v,0x002F3548");extern "C" void final_sort(instance_render_info*first,instance_render_info*last) __asm__("__final_insertion_sort__H1ZP20instance_render_info_X01X01_v");void final_sort(instance_render_info*first,instance_render_info*last){if(last-first>16){instance_render_info*middle=first+16;insertion(first,middle);unguarded(middle,last,0);}else insertion(first,last);int dead;__asm__("" : "=r"(dead));}

// 0x002FD018 __uninitialized_copy_aux__H2ZPt16binary_tree_node1Z10partition3ZPt16binary_tree_node1Z10partition3_X01X01X11G12__false_type_X11
struct partition3{char p0[20];};struct node{void*a,*b;partition3 value;};extern "C" void partition_copy(partition3*,const partition3*) __asm__("__10partition3RC10partition3");__asm__(".equ __10partition3RC10partition3,0x002E81D8");extern "C" node*copy_nodes(node*first,node*last,node*result) __asm__("__uninitialized_copy_aux__H2ZPt16binary_tree_node1Z10partition3ZPt16binary_tree_node1Z10partition3_X01X01X11G12__false_type_X11");node*copy_nodes(node*first,node*last,node*result){for(;first!=last;++first,++result){if(result){result->a=first->a;result->b=first->b;partition_copy(&result->value,&first->value);}}return result;}

// 0x002F0D38 __uninitialized_fill_n_aux__H3ZPQ212timer_widget10timer_funcZUiZQ212timer_widget10timer_func_X01X11RCX21G12__false_type_X01
__asm__(".equ __7stringx,0x0034D3E0");__asm__(".equ __as__7stringxRC7stringx,0x0034E0B8");struct stringx{char data[8];stringx();stringx&operator=(const stringx&);};struct timer_func{float time;stringx function;timer_func(const timer_func&b){time=b.time;function=b.function;}};inline void*operator new(unsigned int,void*p){return p;}extern "C" timer_func*fill(timer_func*first,unsigned int n,const timer_func&value)__asm__("__uninitialized_fill_n_aux__H3ZPQ212timer_widget10timer_funcZUiZQ212timer_widget10timer_func_X01X11RCX21G12__false_type_X01");timer_func*fill(timer_func*first,unsigned int n,const timer_func&value){for(;n>0;--n,++first)if(first)new((void*)first)timer_func(value);return first;}

// 0x002F1430 __uninitialized_copy_aux__H2ZPQ212timer_widget10timer_funcZPQ212timer_widget10timer_func_X01X01X11G12__false_type_X11
__asm__(".equ __7stringx,0x0034D3E0");__asm__(".equ __as__7stringxRC7stringx,0x0034E0B8");struct stringx{char data[8];stringx();stringx&operator=(const stringx&);};struct timer_func{float time;stringx function;timer_func(const timer_func&b){time=b.time;function=b.function;}};inline void*operator new(unsigned int,void*p){return p;}extern "C" timer_func*copy(timer_func*first,timer_func*last,timer_func*result)__asm__("__uninitialized_copy_aux__H2ZPQ212timer_widget10timer_funcZPQ212timer_widget10timer_func_X01X01X11G12__false_type_X11");timer_func*copy(timer_func*first,timer_func*last,timer_func*result){for(;first!=last;++first,++result)if(result)new((void*)result)timer_func(*first);return result;}

// Source implementation boundary.
// 0x002FFC10 __Q2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeRCQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node
struct EdgeNode{EdgeNode*next;EdgeNode*prev;char data[8];};struct Node{EdgeNode*sentinel;void*data;};struct AllocState{void*free8;EdgeNode*free16;};struct Iter{EdgeNode*node;};struct Locals{char p0[16];Iter first;char p1[12];Iter position;char p2[12];};extern AllocState alloc_state;extern "C" void*refill(unsigned) __asm__("_S_refill__t27__my_default_alloc_template2b0i0Ui");extern "C" void insert_dispatch(Node*,Iter*,EdgeNode*,EdgeNode*,int);asm(".equ alloc_state,0x003E5628");asm(".equ _S_refill__t27__my_default_alloc_template2b0i0Ui,0x0010DAE0");asm(".equ insert_dispatch,0x002FC8B8");extern "C" Node*copy_node(Node*,const Node*) __asm__("__Q2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeRCQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node");Node*copy_node(Node*self,const Node*src){Locals l;EdgeNode*n=alloc_state.free16;if(!n)n=(EdgeNode*)refill(16);else alloc_state.free16=n->next;self->sentinel=n;n->next=n;((volatile EdgeNode*)self->sentinel)->prev=self->sentinel;register EdgeNode*here asm("$9")=self->sentinel->next;register EdgeNode*source_end asm("$2")=src->sentinel;l.first.node=here;register EdgeNode*source_begin asm("$6")=source_end->next;asm("" : "+r"(source_begin) : : "memory");l.position.node=here;insert_dispatch(self,&l.position,source_begin,source_end,0);self->data=src->data;return self;}

// Source implementation boundary.
// 0x002FF0A8 is_active__C13motion_object
#include "KS/SRC/mobject.h"

bool motion_object::is_active() const {
    return active;
}

// 0x002FF0B0 set_active__13motion_objectb
#include "KS/SRC/mobject.h"

void motion_object::set_active(bool value) {
    active = value;
}

// 0x002FF078 _$_13motion_object
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_13motion_object");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002FF038 __tf13motion_object
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512168"); asm(".equ type_name, 0x004F4B30");
extern "C" void *GetTypeInfo() __asm__("__tf13motion_object");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
