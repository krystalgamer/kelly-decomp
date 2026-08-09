// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00358148)
// 0x00358148 __uninitialized_fill_n_aux__H3ZPQ212typeface_def10inter_kernZUiZQ212typeface_def10inter_kern_X01X11RCX21G12__false_type_X01
#include "KS/SRC/archalloc.h"
#include "KS/SRC/text_font.h"

extern "C" typeface_def::inter_kern *UninitializedFill(
    typeface_def::inter_kern *first,
    unsigned int count,
    const typeface_def::inter_kern &value
)
    __asm__("__uninitialized_fill_n_aux__H3ZPQ212typeface_def10inter_kernZUiZQ212typeface_def10inter_kern_X01X11RCX21G12__false_type_X01");
typeface_def::inter_kern *UninitializedFill(
    typeface_def::inter_kern *first,
    unsigned int count,
    const typeface_def::inter_kern &value
)
{
    while (count) {
        if (first)
            new (first) typeface_def::inter_kern(value);
        --count;
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00356B78)
// 0x00356B78 __uninitialized_copy_aux__H2ZPCt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) { return place; }
struct hw_texture { int ref_count; };
class texture_refptr { hw_texture *value; public: texture_refptr(const texture_refptr &other) : value(other.value) { if (value) ++value->ref_count; } };
extern "C" texture_refptr *UninitializedCopy(const texture_refptr *first, const texture_refptr *last, texture_refptr *result) __asm__("__uninitialized_copy_aux__H2ZPCt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11");
texture_refptr *UninitializedCopy(const texture_refptr *first, const texture_refptr *last, texture_refptr *result)
{
    while (first != last) {
        if (result) new (result) texture_refptr(*first);
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00357358)
// 0x00357358 __uninitialized_copy_aux__H2ZPt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) { return place; }
struct hw_texture { int ref_count; };
class texture_refptr { hw_texture *value; public: texture_refptr(const texture_refptr &other) : value(other.value) { if (value) ++value->ref_count; } };
extern "C" texture_refptr *UninitializedCopy(texture_refptr *first, texture_refptr *last, texture_refptr *result) __asm__("__uninitialized_copy_aux__H2ZPt6refptr1Z10hw_textureZPt6refptr1Z10hw_texture_X01X01X11G12__false_type_X11");
texture_refptr *UninitializedCopy(texture_refptr *first, texture_refptr *last, texture_refptr *result)
{
    while (first != last) {
        if (result) new (result) texture_refptr(*first);
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00357438)
// 0x00357438 __uninitialized_fill_n_aux__H3ZPt6refptr1Z10hw_textureZUiZt6refptr1Z10hw_texture_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) { return place; }
struct hw_texture { int ref_count; };
class texture_refptr { hw_texture *value; public: texture_refptr(const texture_refptr &other) : value(other.value) { if (value) ++value->ref_count; } };
extern "C" texture_refptr *UninitializedFill(texture_refptr *first, unsigned int count, const texture_refptr &value) __asm__("__uninitialized_fill_n_aux__H3ZPt6refptr1Z10hw_textureZUiZt6refptr1Z10hw_texture_X01X11RCX21G12__false_type_X01");
texture_refptr *UninitializedFill(texture_refptr *first, unsigned int count, const texture_refptr &value)
{
    while (count) {
        if (first) new (first) texture_refptr(value);
        --count;
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00357E18)
// 0x00357E18 __uninitialized_copy_aux__H2ZPQ212typeface_def10inter_kernZPQ212typeface_def10inter_kern_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) { return place; }
struct inter_kern { int first; int second; int third; };
extern "C" inter_kern *UninitializedCopy(inter_kern *first, inter_kern *last, inter_kern *result) __asm__("__uninitialized_copy_aux__H2ZPQ212typeface_def10inter_kernZPQ212typeface_def10inter_kern_X01X01X11G12__false_type_X11");
inter_kern *UninitializedCopy(inter_kern *first, inter_kern *last, inter_kern *result)
{
    while (first != last) {
        if (result) new (result) inter_kern(*first);
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003589F0)
// 0x003589F0 lower_bound__t8_Rb_tree5ZiZt4pair2ZCiZ12game_controlZt10_Select1st1Zt4pair2ZCiZ12game_controlZt4less1ZiZt12my_allocator1Z12game_controlRCi
struct game_control {};
struct node {
    int color;
    node *parent;
    node *left;
    node *right;
    int key;
    game_control value;
};
struct iterator { node *current; };
class game_control_tree {
public:
    node *header;
};
extern "C" iterator *tree_lower_bound(
    iterator *result,
    game_control_tree *tree,
    const int *key
) __asm__("lower_bound__t8_Rb_tree5ZiZt4pair2ZCiZ12game_controlZt10_Select1st1Zt4pair2ZCiZ12game_controlZt4less1ZiZt12my_allocator1Z12game_controlRCi");
iterator *tree_lower_bound(iterator *result, game_control_tree *tree, const int *key)
{
    node *candidate = tree->header;
    node *current = tree->header->parent;
    while (current != 0) {
        if (!(current->key < *key)) {
            candidate = current;
            current = current->left;
        } else {
            current = current->right;
        }
    }
    result->current = candidate;
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035B198)
// 0x0035B198 _M_erase__t8_Rb_tree5ZP20script_library_classZP20script_library_classZt9_Identity1ZP20script_library_classZQ211slc_manager10class_lessZt12my_allocator1ZP20script_library_classPt13_Rb_tree_node1ZP20script_library_class
struct node{void*next_free;char p0[4];node*left,*right;};struct allocator{char padding[8];node*free_list;};extern "C" void erase_again(void*,node*) __asm__("erase_again_abs");__asm__(".equ erase_again_abs,0x0035B198");extern "C" void erase_tree(void*self,node*x) __asm__("_M_erase__t8_Rb_tree5ZP20script_library_classZP20script_library_classZt9_Identity1ZP20script_library_classZQ211slc_manager10class_lessZt12my_allocator1ZP20script_library_classPt13_Rb_tree_node1ZP20script_library_class");void erase_tree(void*self,node*x){if(x){register char*high __asm__("$2")=(char*)0x003e0000;__asm__ __volatile__("" : "+r"(high));register allocator*alloc __asm__("$17")=(allocator*)(high+22056);do{erase_again(self,x->right);node*left=x->left;x->next_free=alloc->free_list;alloc->free_list=x;x=left;}while(x);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00357948)
// 0x00357948 __uninitialized_fill_n_aux__H3ZP14vertex_contextZUiZ14vertex_context_X01X11RCX21G12__false_type_X01
struct __attribute__((aligned(4))) vertex_context{char data[44];};extern "C" vertex_context*fill(vertex_context*first,unsigned int n,const vertex_context&value)__asm__("__uninitialized_fill_n_aux__H3ZP14vertex_contextZUiZ14vertex_context_X01X11RCX21G12__false_type_X01");vertex_context*fill(vertex_context*first,unsigned int n,const vertex_context&value){for(;n>0;--n,++first)if(first)__builtin_memcpy(first,&value,44);return first;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00356F48)
// 0x00356F48 __uninitialized_copy_aux__H2ZPC14vertex_contextZP14vertex_context_X01X01X11G12__false_type_X11
struct __attribute__((aligned(4))) vertex_context{char data[44];};extern "C" vertex_context*copy(const vertex_context*first,const vertex_context*last,vertex_context*result)__asm__("__uninitialized_copy_aux__H2ZPC14vertex_contextZP14vertex_context_X01X01X11G12__false_type_X11");vertex_context*copy(const vertex_context*first,const vertex_context*last,vertex_context*result){for(;first!=last;++first,++result)if(result)__builtin_memcpy(result,first,44);return result;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00357850)
// 0x00357850 __uninitialized_copy_aux__H2ZP14vertex_contextZP14vertex_context_X01X01X11G12__false_type_X11
struct __attribute__((aligned(4))) vertex_context{char data[44];};extern "C" vertex_context*copy(vertex_context*first,vertex_context*last,vertex_context*result)__asm__("__uninitialized_copy_aux__H2ZP14vertex_contextZP14vertex_context_X01X01X11G12__false_type_X11");vertex_context*copy(vertex_context*first,vertex_context*last,vertex_context*result){for(;first!=last;++first,++result)if(result)__builtin_memcpy(result,first,44);return result;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035BEF0)
// 0x0035BEF0 _M_erase__t8_Rb_tree5Z7stringxZ7stringxZt9_Identity1Z7stringxZt4less1Z7stringxZt12my_allocator1Z7stringxPt13_Rb_tree_node1Z7stringx
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx value;};struct AllocatorState{char pad[8];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x0035BEF0");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZ7stringxZt9_Identity1Z7stringxZt4less1Z7stringxZt12my_allocator1Z7stringxPt13_Rb_tree_node1Z7stringx");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->value.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035CDA0)
// 0x0035CDA0 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP13script_objectZt10_Select1st1Zt4pair2ZC7stringxZP13script_objectZt4less1Z7stringxZt12my_allocator1ZP13script_objectPt13_Rb_tree_node1Zt4pair2ZC7stringxZP13script_object
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[12];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x0035CDA0");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP13script_objectZt10_Select1st1Zt4pair2ZC7stringxZP13script_objectZt4less1Z7stringxZt12my_allocator1ZP13script_objectPt13_Rb_tree_node1Zt4pair2ZC7stringxZP13script_object");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00357398)
// 0x00357398 fill__H2ZPt6refptr1Z10hw_textureZt6refptr1Z10hw_texture_X01X01RCX11_v
struct HWVTable{char p[8];short dtor_adj;short gap;void(*destroy)(void*,int);};struct hw_texture{int refs;char p[60];HWVTable*vt;};struct refptr{hw_texture*ptr;refptr&operator=(const refptr&o){if(ptr){if(--ptr->refs==0){hw_texture*x=ptr;if(x){HWVTable*v=x->vt;v->destroy((char*)x+v->dtor_adj,3);}}}ptr=o.ptr;if(ptr)++ptr->refs;return *this;}};extern "C" void fill_fn(refptr*,refptr*,const refptr&) __asm__("fill__H2ZPt6refptr1Z10hw_textureZt6refptr1Z10hw_texture_X01X01RCX11_v");void fill_fn(refptr*first,refptr*last,const refptr&value){for(;first!=last;++first)*first=value;}
#endif
