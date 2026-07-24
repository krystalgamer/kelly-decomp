// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FBB48)
// 0x002FBB48 __uninitialized_fill_n_aux__H3ZP6sectorZUiZ6sector_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct sector {
    int value;
};

extern "C" sector *UninitializedFill(
    sector *first,
    unsigned int count,
    const sector &value
) __asm__("__uninitialized_fill_n_aux__H3ZP6sectorZUiZ6sector_X01X11RCX21G12__false_type_X01");

sector *UninitializedFill(
    sector *first,
    unsigned int count,
    const sector &value
) {
    while (count) {
        if (first) {
            new (first) sector(value);
        }
        --count;
        __asm__ volatile("nop");
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FD088)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F43F8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F9BB0)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F9F80)
// 0x002F9F80 __uninitialized_fill_n_aux__H3ZP4faceZUiZ4face_X01X11RCX21G12__false_type_X01
#include "KS/SRC/pmesh_shared.h"
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F4390)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FA750)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FBE88)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F9FD0)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F5DB8)
// 0x002F5DB8 _M_erase__t8_Rb_tree5ZsZt4pair2ZCsZUiZt10_Select1st1Zt4pair2ZCsZUiZt4less1ZsZt12my_allocator1ZUiPt13_Rb_tree_node1Zt4pair2ZCsZUi
struct node{void*next_free;char p0[4];node*left,*right;};struct allocator{char padding[8];node*free_list;};extern "C" void erase_again(void*,node*) __asm__("erase_again_abs");__asm__(".equ erase_again_abs,0x002F5DB8");extern "C" void erase_tree(void*self,node*x) __asm__("_M_erase__t8_Rb_tree5ZsZt4pair2ZCsZUiZt10_Select1st1Zt4pair2ZCsZUiZt4less1ZsZt12my_allocator1ZUiPt13_Rb_tree_node1Zt4pair2ZCsZUi");void erase_tree(void*self,node*x){if(x){register char*high __asm__("$2")=(char*)0x003e0000;__asm__ __volatile__("" : "+r"(high));register allocator*alloc __asm__("$17")=(allocator*)(high+22056);do{erase_again(self,x->right);node*left=x->left;x->next_free=alloc->free_list;alloc->free_list=x;x=left;}while(x);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F36D8)
// 0x002F36D8 __final_insertion_sort__H1ZP20instance_render_info_X01X01_v
struct instance_render_info{char data[144];};extern "C" void insertion(instance_render_info*,instance_render_info*) __asm__("__insertion_sort__H1ZP20instance_render_info_X01X01_v");extern "C" void unguarded(instance_render_info*,instance_render_info*,int) __asm__("__unguarded_insertion_sort_aux__H2ZP20instance_render_infoZ20instance_render_info_X01X01PX11_v");__asm__(".equ __insertion_sort__H1ZP20instance_render_info_X01X01_v,0x002F2FD8");__asm__(".equ __unguarded_insertion_sort_aux__H2ZP20instance_render_infoZ20instance_render_info_X01X01PX11_v,0x002F3548");extern "C" void final_sort(instance_render_info*first,instance_render_info*last) __asm__("__final_insertion_sort__H1ZP20instance_render_info_X01X01_v");void final_sort(instance_render_info*first,instance_render_info*last){if(last-first>16){instance_render_info*middle=first+16;insertion(first,middle);unguarded(middle,last,0);}else insertion(first,last);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FD018)
// 0x002FD018 __uninitialized_copy_aux__H2ZPt16binary_tree_node1Z10partition3ZPt16binary_tree_node1Z10partition3_X01X01X11G12__false_type_X11
struct partition3{char p0[20];};struct node{void*a,*b;partition3 value;};extern "C" void partition_copy(partition3*,const partition3*) __asm__("__10partition3RC10partition3");__asm__(".equ __10partition3RC10partition3,0x002E81D8");extern "C" node*copy_nodes(node*first,node*last,node*result) __asm__("__uninitialized_copy_aux__H2ZPt16binary_tree_node1Z10partition3ZPt16binary_tree_node1Z10partition3_X01X01X11G12__false_type_X11");node*copy_nodes(node*first,node*last,node*result){for(;first!=last;++first,++result){if(result){result->a=first->a;result->b=first->b;partition_copy(&result->value,&first->value);}}return result;}
#endif
