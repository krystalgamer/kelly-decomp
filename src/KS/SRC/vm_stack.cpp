// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00354140)
// 0x00354140 pop_num__8vm_stack
class vm_stack { char padding[0x8]; char* stack_ptr; public: float pop_num(); };
float vm_stack::pop_num() { stack_ptr -= 4; return *(float*)stack_ptr; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003540F0)
// 0x003540F0 _$_8vm_stack
#include "decomp_annotations.h"

extern "C" void BuiltinVecDelete(void *memory)
    __asm__("__builtin_vec_delete");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");

__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ __builtin_delete, 0x002AC6B0");

struct vm_stack_layout {
    int salloc;
    char *buffer;
    char *SP;
    void *my_thread;
};

extern "C" void VmStackDtor(void *self, int deleting)
    __asm__("_$_8vm_stack");

void VmStackDtor(void *self, int deleting)
{
    vm_stack_layout *stack = (vm_stack_layout *)self;
    if (stack->buffer)
        BuiltinVecDelete(stack->buffer);
    if (deleting & 1) {
        BuiltinDelete(stack);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif
