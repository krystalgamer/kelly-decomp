// Matching decompilation blocks selected by generated build shims.


// 0x00310FF8 __uninitialized_copy_aux__H2ZPC7stringxZP7stringx_X01X01X11G12__false_type_X11
struct stringx { char data[8]; };
extern "C" void copy_string(stringx *,const stringx *)
    __asm__("__7stringxRC7stringx");
__asm__(".equ __7stringxRC7stringx,0x0034D4D0");
extern "C" stringx *copy_strings(
    const stringx *first,const stringx *last,stringx *result
) __asm__("__uninitialized_copy_aux__H2ZPC7stringxZP7stringx_X01X01X11G12__false_type_X11");
stringx *copy_strings(
    const stringx *first,const stringx *last,stringx *result
) {
    while(first!=last) {
        if(result) copy_string(result,first);
        ++first; ++result;
    }
    return result;
}

// 0x00311540 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP11entity_poolZt10_Select1st1Zt4pair2ZC7stringxZP11entity_poolZt4less1Z7stringxZt12my_allocator1ZP11entity_poolPt13_Rb_tree_node1Zt4pair2ZC7stringxZP11entity_pool
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[12];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x00311540");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP11entity_poolZt10_Select1st1Zt4pair2ZC7stringxZP11entity_poolZt4less1Z7stringxZt12my_allocator1ZP11entity_poolPt13_Rb_tree_node1Zt4pair2ZC7stringxZP11entity_pool");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}
