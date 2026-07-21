// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00352A68)
// 0x00352A68 run__14script_managerfb
class script_manager {
public:
    void run(float time, bool ignore_suspended);
};

void script_manager::run(float time, bool ignore_suspended) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00352598)
// 0x00352598 clear__14script_manager
class script_manager { public: void _destroy(); void clear(); };
__asm__(".equ _destroy__14script_manager, 0x00352B40");
void script_manager::clear() { _destroy(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00352B08)
// 0x00352B08 add_string__14script_managerRC7stringx
class stringx {};
struct tree_iterator { char *node; };
struct set_iterator {
    char *node;
    set_iterator(const tree_iterator &other) : node(other.node) {}
    stringx &operator*() const { return *(stringx *)(node + 16); }
};
struct tree_result { tree_iterator first; bool second; tree_result() {} tree_result(const tree_result &other) : first(other.first), second(other.second) {} };
struct set_result { set_iterator first; bool second; set_result(const tree_iterator &iterator, bool inserted) : first(iterator), second(inserted) {} set_result(const set_result &other) : first(other.first), second(other.second) {} };
class string_tree { public: tree_result insert_unique(const stringx &value); };
__asm__(".equ insert_unique__11string_treeRC7stringx, 0x0035C8F8");
class string_set {
    string_tree tree;
public:
    set_result insert(const stringx &value) { tree_result result = tree.insert_unique(value); return set_result(result.first, result.second); }
};
class script_manager { char padding[0x10]; string_set strings; public: const stringx *add_string(const stringx &s); };
const stringx *script_manager::add_string(const stringx &s)
{
    return &(*(strings.insert(s).first));
}
#endif
