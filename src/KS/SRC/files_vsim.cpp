// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00358148)
// 0x00358148 __uninitialized_fill_n_aux__H3ZPQ212typeface_def10inter_kernZUiZQ212typeface_def10inter_kern_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) { return place; }
struct inter_kern { int first_letter; int second_letter; int kern; };
extern "C" inter_kern *UninitializedFill(inter_kern *first, unsigned int count, const inter_kern &value)
    __asm__("__uninitialized_fill_n_aux__H3ZPQ212typeface_def10inter_kernZUiZQ212typeface_def10inter_kern_X01X11RCX21G12__false_type_X01");
inter_kern *UninitializedFill(inter_kern *first, unsigned int count, const inter_kern &value)
{
    while (count) {
        if (first)
            new (first) inter_kern(value);
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
