class vm_stack { char padding[0x8]; char* stack_ptr; public: float pop_num(); };
float vm_stack::pop_num() { stack_ptr -= 4; return *(float*)stack_ptr; }
