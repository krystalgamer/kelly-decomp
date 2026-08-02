#ifndef SCRIPT_OBJECT_H
#define SCRIPT_OBJECT_H

#include "KS/SRC/osfile.h"
#include "KS/SRC/so_data_block.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_list.h"

class script_callback;
class vm_executable;
class vm_thread;

class script_manager {
public:
    void run(float time_inc, bool ignore_suspended);
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
