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

#if defined(KELLY_DECOMP_FUNCTION_001D7258)
// 0x001D7258 _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z7cg_mesh5ref_tZPQ2t13instance_bank1Z7cg_mesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z7cg_mesh5ref_tZQ2t13instance_bank1Z7cg_mesh13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z7cg_mesh5ref_t
struct tree_node { char padding[8]; tree_node *left; tree_node *right; };
void arch_free(void *);
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void erase_cg_label(void *,tree_node *)
    __asm__("_M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z7cg_mesh5ref_tZPQ2t13instance_bank1Z7cg_mesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z7cg_mesh5ref_tZQ2t13instance_bank1Z7cg_mesh13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z7cg_mesh5ref_t");
extern "C" void recurse_cg_label(void *,tree_node *);
__asm__(".equ recurse_cg_label, 0x001D7258");
void erase_cg_label(void *tree,tree_node *node) {
    while (node) {
        recurse_cg_label(tree,node->right);
        tree_node *left=node->left;
        arch_free(node);
        node=left;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D72B8)
// 0x001D72B8 _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z7cg_mesh5ref_tZPQ2t13instance_bank1Z7cg_mesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z7cg_mesh5ref_tZQ2t13instance_bank1Z7cg_mesh11less_by_ptrZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z7cg_mesh5ref_t
struct N{char p[8];N*l,*r;}; void arch_free(void*); __asm__(".equ arch_free__FPv,0x002AC768");
extern "C" void f(void*,N*) __asm__("_M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z7cg_mesh5ref_tZPQ2t13instance_bank1Z7cg_mesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z7cg_mesh5ref_tZQ2t13instance_bank1Z7cg_mesh11less_by_ptrZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z7cg_mesh5ref_t");
extern "C" void r(void*,N*); __asm__(".equ r,0x001D72B8");
void f(void*t,N*n){while(n){r(t,n->r);N*l=n->l;arch_free(n);n=l;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D74B0)
// 0x001D74B0 _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z12vr_billboard5ref_tZPQ2t13instance_bank1Z12vr_billboard5ref_tZt9_Identity1ZPQ2t13instance_bank1Z12vr_billboard5ref_tZQ2t13instance_bank1Z12vr_billboard13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z12vr_billboard5ref_t
struct N{char p[8];N*l,*r;}; void arch_free(void*); __asm__(".equ arch_free__FPv,0x002AC768");
extern "C" void f(void*,N*) __asm__("_M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z12vr_billboard5ref_tZPQ2t13instance_bank1Z12vr_billboard5ref_tZt9_Identity1ZPQ2t13instance_bank1Z12vr_billboard5ref_tZQ2t13instance_bank1Z12vr_billboard13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z12vr_billboard5ref_t");
extern "C" void r(void*,N*); __asm__(".equ r,0x001D74B0");
void f(void*t,N*n){while(n){r(t,n->r);N*l=n->l;arch_free(n);n=l;}}
#endif
