#ifndef SCRIPT_OBJECT_H
#define SCRIPT_OBJECT_H

#include "KS/SRC/osfile.h"
#include "KS/SRC/so_data_block.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_list.h"

class script_callback;
class vm_executable;
class vm_thread;

struct tree_iterator {
    char *node;
};

struct set_iterator {
    char *node;

    set_iterator(const tree_iterator &other) : node(other.node) {}
    stringx &operator*() const {
        return *(stringx *)(node + 16);
    }
};

struct tree_result {
    tree_iterator first;
    bool second;

    tree_result() {}
    tree_result(const tree_result &other)
      : first(other.first),
        second(other.second)
    {
    }
};

struct set_result {
    set_iterator first;
    bool second;

    set_result(const tree_iterator &iterator, bool inserted)
      : first(iterator),
        second(inserted)
    {
    }
    set_result(const set_result &other)
      : first(other.first),
        second(other.second)
    {
    }
};

class string_tree {
public:
    tree_result insert_unique(const stringx &value);
};

class string_set {
    string_tree tree;

public:
    set_result insert(const stringx &value) {
        tree_result result = tree.insert_unique(value);
        return set_result(result.first, result.second);
    }
};

class script_manager {
    char manager_data_before_strings[0x10];
    string_set strings;

public:
    void run(float time_inc, bool ignore_suspended);
    const stringx *add_string(const stringx &value);
};

class script_object {
public:
    class instance {
        typedef list<vm_thread *> thread_list;

    protected:
        stringx name;
        so_data_block data;
        thread_list threads;
        bool suspended;

    public:
        instance(const stringx &name, int size);
        ~instance();
        inline const stringx &get_name() const {
            return name;
        }
        inline const thread_list &get_threads() const {
            return threads;
        }
        void dump_threads(
            host_system_file_handle output) const;
    };
};

#endif
