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
