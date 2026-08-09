// Matching decompilation blocks selected by generated build shims.


// 0x00354140 pop_num__8vm_stack
#include "KS/SRC/vm_stack.h"

float vm_stack::pop_num() {
    pop(sizeof(vm_num_t));
    return *(vm_num_t *)SP;
}
