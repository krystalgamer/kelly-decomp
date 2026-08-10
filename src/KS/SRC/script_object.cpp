// Matching decompilation blocks selected by generated build shims.


// 0x00352A68 run__14script_managerfb
#include "KS/SRC/script_object.h"

void script_manager::run(float time, bool ignore_suspended) {
}

// 0x00352B08 add_string__14script_managerRC7stringx
#include "KS/SRC/script_object.h"

__asm__(".equ insert_unique__11string_treeRC7stringx, 0x0035C8F8");

const stringx *script_manager::add_string(const stringx &s)
{
    return &(*(strings.insert(s).first));
}

// 0x00350F28 find_func_by_address__C13script_objectPCUs
#include "KS/SRC/script_object.h"

int script_object::find_func_by_address(
    const unsigned short *pc) const
{
    int i = 0;
    vector<vm_executable *>::const_iterator current = funcs.begin();
    vector<vm_executable *>::const_iterator end = funcs.end();
    for (; current != end; ++current, ++i)
    {
        vm_executable *executable = *current;
        if (pc >= executable->get_start() &&
            pc < executable->get_start() + executable->get_size())
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
