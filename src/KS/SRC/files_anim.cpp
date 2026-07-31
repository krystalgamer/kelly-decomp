// Matching decompilation blocks selected by generated build shims.


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

// 0x0011E1E8 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZ8ett_nodeZt10_Select1st1Zt4pair2ZC7stringxZ8ett_nodeZt4less1Z7stringxZt12my_allocator1Z8ett_nodePt13_Rb_tree_node1Zt4pair2ZC7stringxZ8ett_node
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[20];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x0011E1E8");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZ8ett_nodeZt10_Select1st1Zt4pair2ZC7stringxZ8ett_nodeZt4less1Z7stringxZt12my_allocator1Z8ett_nodePt13_Rb_tree_node1Zt4pair2ZC7stringxZ8ett_node");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}

// 0x0011FAE0 __uninitialized_copy_aux__H2ZP16scene_anims_infoZP16scene_anims_info_X01X01X11G12__false_type_X11
inline void*operator new(unsigned int,void*p){return p;}struct vector3d{float x,y,z;vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}};class stringx{char data[8];public:stringx(const stringx&);};asm(".equ __7stringxRC7stringx,0x0034D4D0");class scene_anims_info{public:void*ent;vector3d entity_up_vec;unsigned int handle;stringx name;void*anim_tree;scene_anims_info(const scene_anims_info&v):ent(v.ent),entity_up_vec(v.entity_up_vec),handle(v.handle),name(v.name),anim_tree(v.anim_tree){}};extern "C" scene_anims_info*copy(scene_anims_info*first,scene_anims_info*last,scene_anims_info*result)__asm__("__uninitialized_copy_aux__H2ZP16scene_anims_infoZP16scene_anims_info_X01X01X11G12__false_type_X11");scene_anims_info*copy(scene_anims_info*first,scene_anims_info*last,scene_anims_info*result){for(;first!=last;++first,++result)if(result)new((void*)result)scene_anims_info(*first);return result;}

// 0x0011ECE0 fill_n__H3ZPP11entity_animZUiZP11entity_anim_X01X11RCX21_X01
class entity_anim;
extern "C" entity_anim **fill_anims(entity_anim **first,unsigned int count,entity_anim *const &value)__asm__("fill_n__H3ZPP11entity_animZUiZP11entity_anim_X01X11RCX21_X01");
entity_anim **fill_anims(entity_anim **first,unsigned int count,entity_anim *const &value){__asm__ __volatile__("beqz $5,2f\n1:\nlw $2,0($6)\naddiu $5,$5,-1\nsw $2,0($4)\nnop\nnop\n.word 0x14a0fffa\n.word 0x24840004\n2:" : : : "$2","memory");return first;}

// 0x0011FF50 fill_n__H3ZPUsZUiZUs_X01X11RCX21_X01
extern "C" unsigned short *fill_ushorts(unsigned short *first,unsigned int count,const unsigned short &value)__asm__("fill_n__H3ZPUsZUiZUs_X01X11RCX21_X01");
unsigned short *fill_ushorts(unsigned short *first,unsigned int count,const unsigned short &value){__asm__ __volatile__("beqz $5,2f\n1:\nlhu $2,0($6)\naddiu $5,$5,-1\nsh $2,0($4)\nnop\nnop\n.word 0x14a0fffa\n.word 0x24840002\n2:" : : : "$2","memory");return first;}
