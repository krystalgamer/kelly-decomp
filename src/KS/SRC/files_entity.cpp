// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0013F4D8)
// 0x0013F4D8 _M_erase__t8_Rb_tree5ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt9_Identity1ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt4less1ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node
struct tree_node {
    char padding[8];
    tree_node *left;
    tree_node *right;
};
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_graph_tree(
    void *tree,tree_node *node
) __asm__("_M_erase__t8_Rb_tree5ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt9_Identity1ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt4less1ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node");
extern "C" void recurse_graph_tree(void *,tree_node *);
__asm__(".equ recurse_graph_tree, 0x0013F4D8");
void erase_graph_tree(void *tree,tree_node *node) {
    while (node) {
        recurse_graph_tree(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00141690)
// 0x00141690 _M_erase__t8_Rb_tree5Z9entity_idZt4pair2ZC9entity_idZP6entityZt10_Select1st1Zt4pair2ZC9entity_idZP6entityZt4less1Z9entity_idZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1Zt4pair2ZC9entity_idZP6entity
struct tree_node { char padding[8]; tree_node *left; tree_node *right; };
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_entity_tree(void *,tree_node *)
    __asm__("_M_erase__t8_Rb_tree5Z9entity_idZt4pair2ZC9entity_idZP6entityZt10_Select1st1Zt4pair2ZC9entity_idZP6entityZt4less1Z9entity_idZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1Zt4pair2ZC9entity_idZP6entity");
extern "C" void recurse_entity_tree(void *,tree_node *);
__asm__(".equ recurse_entity_tree, 0x00141690");
void erase_entity_tree(void *tree,tree_node *node) {
    while (node) {
        recurse_entity_tree(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001416F0)
// 0x001416F0 _M_erase__t8_Rb_tree5Z12charstarwrapZt4pair2ZC12charstarwrapZUiZt10_Select1st1Zt4pair2ZC12charstarwrapZUiZt4less1Z12charstarwrapZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1Zt4pair2ZC12charstarwrapZUi
struct tree_node { char padding[8]; tree_node *left; tree_node *right; };
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_char_tree(void *,tree_node *)
    __asm__("_M_erase__t8_Rb_tree5Z12charstarwrapZt4pair2ZC12charstarwrapZUiZt10_Select1st1Zt4pair2ZC12charstarwrapZUiZt4less1Z12charstarwrapZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1Zt4pair2ZC12charstarwrapZUi");
extern "C" void recurse_char_tree(void *,tree_node *);
__asm__(".equ recurse_char_tree, 0x001416F0");
void erase_char_tree(void *tree,tree_node *node) {
    while (node) {
        recurse_char_tree(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00142E38)
// 0x00142E38 lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZt10_Select1st1Zt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZQ219animation_interface9s_t_s_t_rZt12my_allocator1Zt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoRC7stringx
struct stringx{char*chars;};struct node{char p0[4];node*right,*left,*other;stringx key;};struct iterator{node*p;};extern "C" int strcmp(const char*,const char*);__asm__(".equ strcmp,0x003D3E88");extern "C" iterator*lower(iterator*result,node**root,const stringx&key) __asm__("lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZt10_Select1st1Zt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZQ219animation_interface9s_t_s_t_rZt12my_allocator1Zt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoRC7stringx");iterator*lower(iterator*result,node**root,const stringx&key){node*y=*root;node*x=y->right;while(x){if(strcmp(x->key.chars,key.chars)>=0){y=x;x=y->left;}else x=x->other;}result->p=y;return result;}
#endif
