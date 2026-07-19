// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00354140)
// 0x00354140 pop_num__8vm_stack
class vm_stack { char padding[0x8]; char* stack_ptr; public: float pop_num(); };
float vm_stack::pop_num() { stack_ptr -= 4; return *(float*)stack_ptr; }
#endif
