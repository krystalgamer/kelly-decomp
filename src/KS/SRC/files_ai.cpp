// Matching decompilation blocks selected by generated build shims.


// 0x0010F060 __uninitialized_fill_n_aux__H3ZPQ211render_data11entity_infoZUiZQ211render_data11entity_info_X01X11RCX21G12__false_type_X01
#include "KS/SRC/render_data.h"

extern "C" render_data::entity_info *UninitializedFill(
    render_data::entity_info *first,
    unsigned int count,
    const render_data::entity_info &value
) __asm__("__uninitialized_fill_n_aux__H3ZPQ211render_data11entity_infoZUiZQ211render_data11entity_info_X01X11RCX21G12__false_type_X01");

render_data::entity_info *UninitializedFill(
    render_data::entity_info *first,
    unsigned int count,
    const render_data::entity_info &value
) {
    while (count) {
        if (first) {
            new (first) render_data::entity_info(value);
        }
        --count;
        ++first;
    }
    return first;
}

// 0x0010FA88 __uninitialized_fill_n_aux__H3ZP16ai_polypath_nodeZUiZ16ai_polypath_node_X01X11RCX21G12__false_type_X01
#include "KS/SRC/ai_polypath_cell.h"

extern "C" ai_polypath_node *UninitializedFill(
    ai_polypath_node *first,
    unsigned int count,
    const ai_polypath_node &value
) __asm__("__uninitialized_fill_n_aux__H3ZP16ai_polypath_nodeZUiZ16ai_polypath_node_X01X11RCX21G12__false_type_X01");

ai_polypath_node *UninitializedFill(
    ai_polypath_node *first,
    unsigned int count,
    const ai_polypath_node &value
) {
    while (count) {
        if (first) {
            new (first) ai_polypath_node(value);
        }
        --count;
        ++first;
    }
    return first;
}

// 0x0010EBB8 __uninitialized_copy_aux__H2ZPQ211render_data11entity_infoZPQ211render_data11entity_info_X01X01X11G12__false_type_X11
#include "KS/SRC/render_data.h"

extern "C" render_data::entity_info *UninitializedCopy(
    render_data::entity_info *first,
    render_data::entity_info *last,
    render_data::entity_info *result
) __asm__("__uninitialized_copy_aux__H2ZPQ211render_data11entity_infoZPQ211render_data11entity_info_X01X01X11G12__false_type_X11");

render_data::entity_info *UninitializedCopy(
    render_data::entity_info *first,
    render_data::entity_info *last,
    render_data::entity_info *result
) {
    while (first != last) {
        if (result) {
            new (result) render_data::entity_info(*first);
        }
        ++first;
        ++result;
    }
    return result;
}

// 0x0010FA20 __uninitialized_copy_aux__H2ZP16ai_polypath_nodeZP16ai_polypath_node_X01X01X11G12__false_type_X11
#include "KS/SRC/ai_polypath_cell.h"

extern "C" ai_polypath_node *UninitializedCopy(
    ai_polypath_node *first,
    ai_polypath_node *last,
    ai_polypath_node *result
) __asm__("__uninitialized_copy_aux__H2ZP16ai_polypath_nodeZP16ai_polypath_node_X01X01X11G12__false_type_X11");

ai_polypath_node *UninitializedCopy(
    ai_polypath_node *first,
    ai_polypath_node *last,
    ai_polypath_node *result
) {
    while (first != last) {
        if (result) {
            new (result) ai_polypath_node(*first);
        }
        ++first;
        ++result;
    }
    return result;
}

// 0x001107F0 __uninitialized_copy_aux__H2ZPQ210partition37facerefZPQ210partition37faceref_X01X01X11G12__false_type_X11
#include "KS/SRC/archalloc.h"
#include "KS/SRC/terrain.h"

extern "C" partition3::faceref *UninitializedCopy(
    partition3::faceref *first,
    partition3::faceref *last,
    partition3::faceref *result
) __asm__("__uninitialized_copy_aux__H2ZPQ210partition37facerefZPQ210partition37faceref_X01X01X11G12__false_type_X11");

partition3::faceref *UninitializedCopy(
    partition3::faceref *first,
    partition3::faceref *last,
    partition3::faceref *result
) {
    while (first != last) {
        if (result) {
            new (result) partition3::faceref(*first);
        }
        ++first;
        ++result;
    }
    return result;
}

// 0x00111358 fill__H2ZP8vector3dZ8vector3d_X01X01RCX11_v
#include "KS/SRC/algebra.h"

extern "C" void Fill(
    vector3d *first,
    vector3d *last,
    const vector3d &value
) __asm__("fill__H2ZP8vector3dZ8vector3d_X01X01RCX11_v");

void Fill(
    vector3d *first,
    vector3d *last,
    const vector3d &value
) {
    while (first != last) {
        *first = value;
        ++first;
    }
}

// 0x00111390 __uninitialized_fill_n_aux__H3ZP8vector3dZUiZ8vector3d_X01X11RCX21G12__false_type_X01
#include "KS/SRC/algebra.h"
#include "KS/SRC/archalloc.h"

extern "C" vector3d *UninitializedFill(
    vector3d *first,
    unsigned int count,
    const vector3d &value
) __asm__("__uninitialized_fill_n_aux__H3ZP8vector3dZUiZ8vector3d_X01X11RCX21G12__false_type_X01");

vector3d *UninitializedFill(
    vector3d *first,
    unsigned int count,
    const vector3d &value
) {
    while (count) {
        if (first)
            new (first) vector3d(value);
        --count;
        ++first;
    }
    return first;
}

// 0x00111010 __uninitialized_copy_aux__H2ZPC8vector3dZP8vector3d_X01X01X11G12__false_type_X11
#include "KS/SRC/algebra.h"
#include "KS/SRC/archalloc.h"

extern "C" vector3d *UninitializedCopy(
    const vector3d *first, const vector3d *last, vector3d *result
) __asm__("__uninitialized_copy_aux__H2ZPC8vector3dZP8vector3d_X01X01X11G12__false_type_X11");
vector3d *UninitializedCopy(
    const vector3d *first, const vector3d *last, vector3d *result
) {
    while (first != last) {
        if (result)
            new (result) vector3d(*first);
        ++first;
        ++result;
    }
    return result;
}

// 0x00111728 __uninitialized_copy_aux__H2ZP8vector3dZP8vector3d_X01X01X11G12__false_type_X11
#include "KS/SRC/algebra.h"
#include "KS/SRC/archalloc.h"

extern "C" vector3d *UninitializedCopy(
    vector3d *first, vector3d *last, vector3d *result
) __asm__("__uninitialized_copy_aux__H2ZP8vector3dZP8vector3d_X01X01X11G12__false_type_X11");
vector3d *UninitializedCopy(
    vector3d *first, vector3d *last, vector3d *result
) {
    while (first != last) {
        if (result)
            new (result) vector3d(*first);
        ++first;
        ++result;
    }
    return result;
}

// 0x00110468 __uninitialized_fill_n_aux__H3ZP5planeZUiZ5plane_X01X11RCX21G12__false_type_X01
#include "KS/SRC/plane.h"
template<class ForwardIterator, class Size, class T>
ForwardIterator __uninitialized_fill_n_aux(ForwardIterator first, Size n, const T &value, __false_type) {
    ForwardIterator result = first;
    for (; n > 0; --n, ++result)
        construct(result, value);
    return result;
}
template plane *__uninitialized_fill_n_aux(plane *, unsigned int, const plane &, __false_type);

// 0x0010DB80 __uninitialized_copy_aux__H2ZP7stringxZP7stringx_X01X01X11G12__false_type_X11
#include "KS/SRC/stringx.h"
#include "g++-2/stl_uninitialized.h"

__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");

template stringx *__uninitialized_copy_aux(
    stringx *,
    stringx *,
    stringx *,
    __false_type);

// 0x0010DC40 __uninitialized_fill_n_aux__H3ZP7stringxZUiZ7stringx_X01X11RCX21G12__false_type_X01
#include "KS/SRC/stringx.h"
#include "g++-2/stl_uninitialized.h"

__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");

template stringx *__uninitialized_fill_n_aux(
    stringx *,
    unsigned int,
    const stringx &,
    __false_type);

// 0x0010E8B0 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZUsZt10_Select1st1Zt4pair2ZC7stringxZUsZt4less1Z7stringxZt12my_allocator1ZUsPt13_Rb_tree_node1Zt4pair2ZC7stringxZUs
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[12];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x0010E8B0");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZUsZt10_Select1st1Zt4pair2ZC7stringxZUsZt4less1Z7stringxZt12my_allocator1ZUsPt13_Rb_tree_node1Zt4pair2ZC7stringxZUs");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}

// 0x0010E930 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZsZt10_Select1st1Zt4pair2ZC7stringxZsZt4less1Z7stringxZt12my_allocator1ZsPt13_Rb_tree_node1Zt4pair2ZC7stringxZs
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[12];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x0010E930");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZsZt10_Select1st1Zt4pair2ZC7stringxZsZt4less1Z7stringxZt12my_allocator1ZsPt13_Rb_tree_node1Zt4pair2ZC7stringxZs");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}

// 0x0010EAD8 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP17entity_track_treeZt10_Select1st1Zt4pair2ZC7stringxZP17entity_track_treeZt4less1Z7stringxZt12my_allocator1ZP17entity_track_treePt13_Rb_tree_node1Zt4pair2ZC7stringxZP17entity_track_tree
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[12];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x0010EAD8");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP17entity_track_treeZt10_Select1st1Zt4pair2ZC7stringxZP17entity_track_treeZt4less1Z7stringxZt12my_allocator1ZP17entity_track_treePt13_Rb_tree_node1Zt4pair2ZC7stringxZP17entity_track_tree");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}

// 0x0010E278 _M_erase__t8_Rb_tree5ZiZt4pair2ZCiZ12game_controlZt10_Select1st1Zt4pair2ZCiZ12game_controlZt4less1ZiZt12my_allocator1Z12game_controlPt13_Rb_tree_node1Zt4pair2ZCiZ12game_control
struct list_node{list_node*next;};struct game_control{char pad[8];list_node*axes;};struct node{node*next_free;node*parent;node*left;node*right;int key;game_control value;};struct allocator{char pad[8];list_node*list_free;node*tree_free;};extern allocator pool;extern "C" void clear_axes(void*)__asm__("clear__t10_List_base2Z11device_axisZt12my_allocator1Z11device_axis");extern "C" void recurse(void*,node*)__asm__("recurse_alias");__asm__(".equ pool,0x003E5628");__asm__(".equ clear__t10_List_base2Z11device_axisZt12my_allocator1Z11device_axis,0x0010E230");__asm__(".equ recurse_alias,0x0010E278");extern "C" void erase_tree(void*self,node*x)__asm__("_M_erase__t8_Rb_tree5ZiZt4pair2ZCiZ12game_controlZt10_Select1st1Zt4pair2ZCiZ12game_controlZt4less1ZiZt12my_allocator1Z12game_controlPt13_Rb_tree_node1Zt4pair2ZCiZ12game_control");void erase_tree(void*self,node*x){if(x){allocator*a=&pool;do{recurse(self,x->right);node*left=x->left;clear_axes(&x->value.axes);list_node*l=x->value.axes;l->next=a->list_free;a->list_free=l;x->next_free=a->tree_free;a->tree_free=x;x=left;}while(x);}}
