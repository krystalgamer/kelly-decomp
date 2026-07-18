void mem_free(void* pointer);
__asm__(".equ mem_free__FPv, 0x002AC768");
class ett_manager { public: void ett_free(void* pointer); };
void ett_manager::ett_free(void* pointer) { mem_free(pointer); __asm__ volatile(""); }
