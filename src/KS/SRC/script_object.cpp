// Matching decompilation blocks selected by generated build shims.


// 0x00352A68 run__14script_managerfb
#include "KS/SRC/script_object.h"

void script_manager::run(float time, bool ignore_suspended) {
}

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

// 0x003525B8 find_object__C14script_managerRC7stringx
class stringx { char data[8]; };
class script_object;
struct map_value { const stringx first; script_object *second; };
struct map_node { char padding[16]; map_value value; };
struct map_iterator {
    map_node *node;
    bool operator==(const map_iterator &other) const { return node == other.node; }
    const map_value &operator*() const { return node->value; }
};
class name_sobj_map {
    map_node *header;
public:
    map_iterator find(const stringx &name) const __asm__("find__Ct8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP13script_objectZt10_Select1st1Zt4pair2ZC7stringxZP13script_objectZt4less1Z7stringxZt12my_allocator1ZP13script_objectRC7stringx");
    map_iterator end() const { map_iterator i = { header }; return i; }
};
asm(".equ find__Ct8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP13script_objectZt10_Select1st1Zt4pair2ZC7stringxZP13script_objectZt4less1Z7stringxZt12my_allocator1ZP13script_objectRC7stringx, 0x0035CE20");
class script_manager { char padding[4]; name_sobj_map script_objects_by_name; public: script_object *find_object(const stringx &name) const; };
script_object* script_manager::find_object(const stringx& name) const
{
  map_iterator i = script_objects_by_name.find(name);
  if (i == script_objects_by_name.end())
    return 0;
  else { KELLY_DECOMP_COMPILER_BARRIER();
    return (*i).second; }
}

// 0x00350F28 find_func_by_address__C13script_objectPCUs
struct vm_executable_layout
{
    char padding[0x2c];
    const unsigned short *start;
    int size;
};

struct executable_vector
{
    vm_executable_layout **begin_value;
    vm_executable_layout **end_value;
    vm_executable_layout **capacity;
};

struct script_object_layout
{
    char padding[0x20];
    executable_vector funcs;
};

extern "C" int find_script_function(
    const script_object_layout *self,
    const unsigned short *pc
) __asm__("find_func_by_address__C13script_objectPCUs");

int find_script_function(
    const script_object_layout *self,
    const unsigned short *pc
)
{
    int i = 0;
    vm_executable_layout **current = self->funcs.begin_value;
    vm_executable_layout **end = self->funcs.end_value;
    for (; current != end; ++current, ++i)
    {
        vm_executable_layout *executable = *current;
        if (pc >= executable->start &&
            pc < executable->start + executable->size)
            return i;
    }
    return -1;
}

// 0x00350AF8 dump_threads__CQ213script_object8instanceP7os_file
#include "KS/SRC/script_object.h"
#include "KS/SRC/vm_thread.h"

extern const char thread_dump_format[];
extern int host_fprintf(
    host_system_file_handle,
    const char *,
    ...) __asm__("host_fprintf__FP7os_filePCce");
__asm__(".equ thread_dump_format, 0x005036F8");
__asm__(".equ host_fprintf__FP7os_filePCce, 0x001E1078");
__asm__(".equ fptodp, 0x003CD278");

void script_object::instance::dump_threads(
    host_system_file_handle outfile
) const
{
    thread_list::const_iterator i = threads.begin();
    thread_list::const_iterator i_end = threads.end();
    for (; i != i_end; ++i)
    {
        vm_thread *t = *i;
        if (!t->is_suspended())
        {
            host_fprintf(
                outfile,
                thread_dump_format,
                name.c_str(),
                t->get_executable()->get_name().c_str(),
                t->prof_runtime,
                t->prof_opcount
            );
        }
    }
}
