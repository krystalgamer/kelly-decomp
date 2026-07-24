// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B4518)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B6DC0)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B6E20)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AFDC8)
// 0x002AFDC8 _M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region
struct node{void*next_free;char p0[4];node*left,*right;};struct allocator{char padding[8];node*free_list;};extern "C" void erase_again(void*,node*) __asm__("erase_again_abs");__asm__(".equ erase_again_abs,0x002AFDC8");extern "C" void erase_tree(void*self,node*x) __asm__("_M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region");void erase_tree(void*self,node*x){if(x){register char*high __asm__("$2")=(char*)0x003e0000;__asm__ __volatile__("" : "+r"(high));register allocator*alloc __asm__("$17")=(allocator*)(high+22056);do{erase_again(self,x->right);node*left=x->left;x->next_free=alloc->free_list;alloc->free_list=x;x=left;}while(x);}}
#endif
