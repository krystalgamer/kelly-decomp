// script_library_class definitions extracted by generated one-function shims.


// 0x0034F078 __Q220script_library_class8functioni
struct ScriptFunctionLayout { const void *name_data; const void *vtable; };
extern const char empty_script_name[];
extern const char script_function_vtable[];
__asm__(".equ empty_script_name, 0x00500D28");
__asm__(".equ script_function_vtable, 0x005052B0");
extern "C" void *ScriptFunctionCtor(void *self, int dummy) __asm__("__Q220script_library_class8functioni");
void *ScriptFunctionCtor(void *self, int dummy) { ScriptFunctionLayout *layout = (ScriptFunctionLayout *)self; layout->vtable = script_function_vtable; layout->name_data = empty_script_name; return self; }

// 0x00350070 read_value__9slc_num_tR10chunk_filePc
class chunk_file;
void serial_in(chunk_file &file, float *value);
__asm__(".equ serial_in__FR10chunk_filePf, 0x00336998");
class slc_num_t { public: void read_value(chunk_file &file, char *buffer); };
void slc_num_t::read_value(chunk_file &file, char *buffer) { serial_in(file, (float *)buffer); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x00350038 __9slc_num_tPCciT1
extern "C" void ScriptLibraryClassCtor(
    void *self,
    const char *name,
    int size,
    const char *parent
) __asm__("__20script_library_classPCciT1");

__asm__(".equ __20script_library_classPCciT1, 0x0034ECD0");

extern const char slc_num_vtable[];
__asm__(".equ slc_num_vtable, 0x00505208");

struct slc_num_layout {
    char padding[0x20];
    const void *vtable;
};

extern "C" void *SlcNumCtor(
    void *self,
    const char *name,
    int size,
    const char *parent
) __asm__("__9slc_num_tPCciT1");

void *SlcNumCtor(
    void *self,
    const char *name,
    int size,
    const char *parent
) {
    ScriptLibraryClassCtor(self, name, size, parent);
    ((slc_num_layout *)self)->vtable = slc_num_vtable;
    return self;
}

// 0x0034F178 _$_Q220script_library_class8function
extern "C" void vector_delete(void *)
    __asm__("__builtin_vec_delete");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char function_vtable[];
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ function_vtable, 0x005052B0");
struct function_layout {
    char *name;
    const void *vtable;
};
extern "C" void destroy_function(
    function_layout *self,int flags
) __asm__("_$_Q220script_library_class8function");
void destroy_function(function_layout *self,int flags) {
    self->vtable=function_vtable;
    if (self->name) vector_delete(self->name);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x003500D8 _$_9slc_str_t
struct layout{char data[32];void*vtable;void**start;void**finish;void**end;};extern char target_vtable;extern void*free_list[];extern "C" void purge(layout*) __asm__("purge__9slc_str_t");extern "C" void arch_free(void*) __asm__("arch_free__FPv");extern "C" void base_dtor(layout*,int) __asm__("_$_20script_library_class");asm(".equ target_vtable,0x005051D8");asm(".equ free_list,0x003E5628");asm(".equ purge__9slc_str_t,0x00350220");asm(".equ arch_free__FPv,0x002AC768");asm(".equ _$_20script_library_class,0x0034EE68");extern "C" void dtor(layout*,int)__asm__("_$_9slc_str_t");void dtor(layout*self,int deleting){self->vtable=&target_vtable;purge(self);void**p=self->start;unsigned n=self->end-p;if(n){unsigned bytes=n*4;if(bytes>128)arch_free(p);else{unsigned index=(bytes+7)/8-1;*p=free_list[index];free_list[index]=p;}}base_dtor(self,deleting);asm volatile("");}

// 0x0034EDB0 __20script_library_class
#include "KS/SRC/script_library_class.h"

script_library_class::script_library_class()
  : name(),
    size(0),
    parent_name(0),
    parent(0),
    funcs()
{
    // Preserve the released old allocator's pool/result register roles.
    // Normalize the linked pool/result scheduling in the EE compiler shim.
    volatile char frame_padding[16];
}
