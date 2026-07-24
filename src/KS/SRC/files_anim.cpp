// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0011FF88)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011FFE8)
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
#endif
