// Matching decompilation blocks selected by generated build shims.


// 0x002B4518 __uninitialized_copy_aux__H2ZPQ221world_dynamics_system14ent_time_limitZPQ221world_dynamics_system14ent_time_limit_X01X01X11G12__false_type_X11
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
) __asm__("__uninitialized_copy_aux__H2ZPQ221world_dynamics_system14ent_time_limitZPQ221world_dynamics_system14ent_time_limit_X01X01X11G12__false_type_X11");

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

// 0x002B6DC0 __uninitialized_fill_n_aux__H3ZP11wedge_splitZUiZ11wedge_split_X01X11RCX21G12__false_type_X01
struct wedge_split { char data[16]; };
extern "C" void copy_wedge(wedge_split *,const wedge_split *)
    __asm__("__11wedge_splitRC11wedge_split");
__asm__(".equ __11wedge_splitRC11wedge_split, 0x002B6C80");
extern "C" wedge_split *fill_wedges(
    wedge_split *result,unsigned int count,const wedge_split *value
) __asm__("__uninitialized_fill_n_aux__H3ZP11wedge_splitZUiZ11wedge_split_X01X11RCX21G12__false_type_X01");
wedge_split *fill_wedges(
    wedge_split *result,unsigned int count,const wedge_split *value
) {
    while (count) {
        if (result) copy_wedge(result,value);
        --count; ++result;
    }
    return result;
}

// 0x002B6E20 __uninitialized_copy_aux__H2ZPC11wedge_splitZP11wedge_split_X01X01X11G12__false_type_X11
struct wedge_split { char data[16]; };
extern "C" void copy_wedge(wedge_split *,const wedge_split *)
    __asm__("__11wedge_splitRC11wedge_split");
__asm__(".equ __11wedge_splitRC11wedge_split, 0x002B6C80");
extern "C" wedge_split *copy_wedges(
    const wedge_split *first,const wedge_split *last,wedge_split *result
) __asm__("__uninitialized_copy_aux__H2ZPC11wedge_splitZP11wedge_split_X01X01X11G12__false_type_X11");
wedge_split *copy_wedges(
    const wedge_split *first,const wedge_split *last,wedge_split *result
) {
    while (first!=last) {
        if (result) copy_wedge(result,first);
        ++first; ++result;
    }
    return result;
}

// 0x002AFDC8 _M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region
struct node{void*next_free;char p0[4];node*left,*right;};struct allocator{char padding[8];node*free_list;};extern "C" void erase_again(void*,node*) __asm__("erase_again_abs");__asm__(".equ erase_again_abs,0x002AFDC8");extern "C" void erase_tree(void*self,node*x) __asm__("_M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region");void erase_tree(void*self,node*x){if(x){register char*high __asm__("$2")=(char*)0x003e0000;__asm__ __volatile__("" : "+r"(high));register allocator*alloc __asm__("$17")=(allocator*)(high+22056);do{erase_again(self,x->right);node*left=x->left;x->next_free=alloc->free_list;alloc->free_list=x;x=left;}while(x);}}

// 0x002B09A0 _M_erase__t8_Rb_tree5ZiZt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt10_Select1st1Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt4less1ZiZt12my_allocator1ZPQ221world_dynamics_system17surface_type_infoPt13_Rb_tree_node1Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_info
struct node{void*next_free;char p0[4];node*left,*right;};struct allocator{char padding[8];node*free_list;};extern "C" void erase_again(void*,node*) __asm__("erase_again_abs");__asm__(".equ erase_again_abs,0x002B09A0");extern "C" void erase_tree(void*self,node*x) __asm__("_M_erase__t8_Rb_tree5ZiZt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt10_Select1st1Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt4less1ZiZt12my_allocator1ZPQ221world_dynamics_system17surface_type_infoPt13_Rb_tree_node1Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_info");void erase_tree(void*self,node*x){if(x){register char*high __asm__("$2")=(char*)0x003e0000;__asm__ __volatile__("" : "+r"(high));register allocator*alloc __asm__("$17")=(allocator*)(high+22056);do{erase_again(self,x->right);node*left=x->left;x->next_free=alloc->free_list;alloc->free_list=x;x=left;}while(x);}}

// 0x002B6590 __uninitialized_copy_aux__H2ZPQ221world_dynamics_system19entity_preload_pairZPQ221world_dynamics_system19entity_preload_pair_X01X01X11G12__false_type_X11
__asm__(".equ __7stringx,0x0034D3E0");__asm__(".equ __as__7stringxRC7stringx,0x0034E0B8");
struct stringx{char data[8];stringx();stringx&operator=(const stringx&);};struct entity;struct entity_preload_pair{entity*ent;stringx name;entity_preload_pair(const entity_preload_pair&b){ent=b.ent;name=b.name;}};inline void*operator new(unsigned int,void*p){return p;}extern "C" entity_preload_pair*copy_aux(entity_preload_pair*first,entity_preload_pair*last,entity_preload_pair*result)__asm__("__uninitialized_copy_aux__H2ZPQ221world_dynamics_system19entity_preload_pairZPQ221world_dynamics_system19entity_preload_pair_X01X01X11G12__false_type_X11");entity_preload_pair*copy_aux(entity_preload_pair*first,entity_preload_pair*last,entity_preload_pair*result){for(;first!=last;++first,++result)if(result)new((void*)result)entity_preload_pair(*first);return result;}

// 0x002B0A10 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP6entityZt10_Select1st1Zt4pair2ZC7stringxZP6entityZt4less1Z7stringxZt12my_allocator1ZP6entityPt13_Rb_tree_node1Zt4pair2ZC7stringxZP6entity
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[12];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x002B0A10");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP6entityZt10_Select1st1Zt4pair2ZC7stringxZP6entityZt4less1Z7stringxZt12my_allocator1ZP6entityPt13_Rb_tree_node1Zt4pair2ZC7stringxZP6entity");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}

// 0x002B0A90 _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animPt13_Rb_tree_node1Zt4pair2ZC7stringxZP10scene_anim
struct stringx{char data[8];~stringx();};struct Node{Node*free_next;Node*parent;Node*left;Node*right;stringx key;char value[4];};struct AllocatorState{char pad[12];Node*head;};extern AllocatorState allocator_state;__asm__(".equ allocator_state,0x003E5628");__asm__(".equ _$_7stringx,0x0034D6E0");struct Tree;extern "C" void recurse(Tree*,Node*)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x002B0A90");struct Tree{void erase(Node*x)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animPt13_Rb_tree_node1Zt4pair2ZC7stringxZP10scene_anim");};void Tree::erase(Node*x){if(!x)return;AllocatorState*alloc=&allocator_state;while(x){recurse(this,x->right);Node*y=x->left;x->key.~stringx();x->free_next=alloc->head;alloc->head=x;x=y;}}

// 0x002AF598 clear__t10_List_base2Z12game_processZt12my_allocator1Z12game_process
struct game_process{char d[24];};struct Node{Node*next,*prev;game_process value;};struct ListBase{Node*head;void clear()__asm__("clear__t10_List_base2Z12game_processZt12my_allocator1Z12game_process");};extern "C" void destroy(game_process*,int)__asm__("_$_12game_process");extern Node*free_lists[];__asm__(".equ _$_12game_process,0x00286950");__asm__(".equ free_lists,0x003E5628");void ListBase::clear(){Node*n=head->next;if(n!=head){Node**pool=free_lists;do{Node*cur=n;n=n->next;destroy(&cur->value,2);cur->next=pool[3];pool[3]=cur;}while(n!=head);}asm volatile("" : : : "memory");head->next=head;head->prev=head;}

// 0x002AE0F0 fill_n__H3ZPP11beam_effectZUiZP11beam_effect_X01X11RCX21_X01
class beam_effect; extern "C" beam_effect **fill_values(beam_effect **first,unsigned int count,beam_effect *const &value)__asm__("fill_n__H3ZPP11beam_effectZUiZP11beam_effect_X01X11RCX21_X01"); beam_effect **fill_values(beam_effect **first,unsigned int count,beam_effect *const &value){__asm__ __volatile__("beqz $5,2f\n1:\nlw $2,0($6)\naddiu $5,$5,-1\nsw $2,0($4)\nnop\nnop\n.word 0x14a0fffa\n.word 0x24840004\n2:" : : : "$2","memory");return first;}

// 0x002AF8C0 fill_n__H3ZPP20morphable_item_rangeZUiZP20morphable_item_range_X01X11RCX21_X01
class morphable_item_range; extern "C" morphable_item_range **fill_values(morphable_item_range **first,unsigned int count,morphable_item_range *const &value)__asm__("fill_n__H3ZPP20morphable_item_rangeZUiZP20morphable_item_range_X01X11RCX21_X01"); morphable_item_range **fill_values(morphable_item_range **first,unsigned int count,morphable_item_range *const &value){__asm__ __volatile__("beqz $5,2f\n1:\nlw $2,0($6)\naddiu $5,$5,-1\nsw $2,0($4)\nnop\nnop\n.word 0x14a0fffa\n.word 0x24840004\n2:" : : : "$2","memory");return first;}

// 0x002AFE70 fill_n__H3ZPP6regionZUiZP6region_X01X11RCX21_X01
class region; extern "C" region **fill_values(region **first,unsigned int count,region *const &value)__asm__("fill_n__H3ZPP6regionZUiZP6region_X01X11RCX21_X01"); region **fill_values(region **first,unsigned int count,region *const &value){__asm__ __volatile__("beqz $5,2f\n1:\nlw $2,0($6)\naddiu $5,$5,-1\nsw $2,0($4)\nnop\nnop\n.word 0x14a0fffa\n.word 0x24840004\n2:" : : : "$2","memory");return first;}

// 0x002B0B58 fill_n__H3ZPP10controllerZUiZP10controller_X01X11RCX21_X01
class controller; extern "C" controller **fill_values(controller **first,unsigned int count,controller *const &value)__asm__("fill_n__H3ZPP10controllerZUiZP10controller_X01X11RCX21_X01"); controller **fill_values(controller **first,unsigned int count,controller *const &value){__asm__ __volatile__("beqz $5,2f\n1:\nlw $2,0($6)\naddiu $5,$5,-1\nsw $2,0($4)\nnop\nnop\n.word 0x14a0fffa\n.word 0x24840004\n2:" : : : "$2","memory");return first;}

// 0x002B0E80 fill_n__H3ZPP15force_generatorZUiZP15force_generator_X01X11RCX21_X01
class force_generator; extern "C" force_generator **fill_values(force_generator **first,unsigned int count,force_generator *const &value)__asm__("fill_n__H3ZPP15force_generatorZUiZP15force_generator_X01X11RCX21_X01"); force_generator **fill_values(force_generator **first,unsigned int count,force_generator *const &value){__asm__ __volatile__("beqz $5,2f\n1:\nlw $2,0($6)\naddiu $5,$5,-1\nsw $2,0($4)\nnop\nnop\n.word 0x14a0fffa\n.word 0x24840004\n2:" : : : "$2","memory");return first;}
