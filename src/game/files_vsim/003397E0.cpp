extern void* last_context_material;
__asm__(".equ last_context_material, 0x0046B668");
class material { public: static void flush_last_context(); };
void material::flush_last_context() { last_context_material = 0; }
