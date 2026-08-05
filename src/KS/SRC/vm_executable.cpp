// Matching decompilation blocks selected by generated build shims.


// 0x00353160 _destroy__13vm_executable
#include "KS/SRC/vm_executable.h"

void delete_buffer(void *pointer)
    __asm__("__builtin_vec_delete");
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");

void vm_executable::_destroy()
{
    if (buffer) {
        void (*destroy)(void *) = delete_buffer;
        destroy(buffer);
    }
}

#if defined(KELLY_DECOMP_FUNCTION_00352FD8)
// 0x00352FD8 __13vm_executableP13script_object
struct script_object;class stringx{unsigned a,b;public:stringx();};__asm__(".equ __7stringx,0x0034D3E0");struct ptr_vector{void*start,*finish,*end;ptr_vector():start(0),finish(0),end(0){}};class vm_executable{script_object*owner;stringx name,fullname;ptr_vector parameters;int parms_stacksize;bool static_func,linked;unsigned short*buffer;int buffer_len;ptr_vector strings;public:vm_executable(script_object*);};vm_executable::vm_executable(script_object*o):owner(o),name(),fullname(),parameters(),parms_stacksize(0),static_func(false),linked(false),buffer(0),buffer_len(0),strings(){volatile char scratch[32];}
#endif
