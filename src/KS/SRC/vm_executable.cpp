// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00353160)
// 0x00353160 _destroy__13vm_executable
extern "C" void builtin_vec_delete(void *pointer) __asm__("__builtin_vec_delete");
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
class vm_executable { char padding[0x2c]; void *buffer; public: void _destroy(); };
void vm_executable::_destroy() { if (buffer) { builtin_vec_delete(buffer); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif
