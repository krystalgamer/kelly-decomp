// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D6F48)
// 0x001D6F48 _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZPQ2t13instance_bank1Z8vr_pmesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZQ2t13instance_bank1Z8vr_pmesh13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z8vr_pmesh5ref_t
struct tree_node { char padding[8]; tree_node *left; tree_node *right; };
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_mesh_label(void *,tree_node *)
    __asm__("_M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZPQ2t13instance_bank1Z8vr_pmesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZQ2t13instance_bank1Z8vr_pmesh13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z8vr_pmesh5ref_t");
extern "C" void recurse_mesh_label(void *,tree_node *);
__asm__(".equ recurse_mesh_label, 0x001D6F48");
void erase_mesh_label(void *tree,tree_node *node) {
    while (node) {
        recurse_mesh_label(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D6FA8)
// 0x001D6FA8 _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZPQ2t13instance_bank1Z8vr_pmesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZQ2t13instance_bank1Z8vr_pmesh11less_by_ptrZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z8vr_pmesh5ref_t
struct tree_node { char padding[8]; tree_node *left; tree_node *right; };
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_mesh_ptr(void *,tree_node *)
    __asm__("_M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZPQ2t13instance_bank1Z8vr_pmesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZQ2t13instance_bank1Z8vr_pmesh11less_by_ptrZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z8vr_pmesh5ref_t");
extern "C" void recurse_mesh_ptr(void *,tree_node *);
__asm__(".equ recurse_mesh_ptr, 0x001D6FA8");
void erase_mesh_ptr(void *tree,tree_node *node) {
    while (node) {
        recurse_mesh_ptr(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}
#endif
