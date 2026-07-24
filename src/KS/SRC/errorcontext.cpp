// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00349910)
// 0x00349910 _$_4ectx
extern "C" void destroy_string(void *, int) __asm__("_$_7stringx");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
__asm__(".equ _$_7stringx,0x0034D6E0");
__asm__(".equ __builtin_delete,0x002AC6B0");
struct stringx { char data[8]; };
struct string_vector { stringx *start; stringx *finish; stringx *end_storage; };
struct error_context { char singleton_data[4]; string_vector context_stack; };
extern error_context *error_context_instance;
__asm__(".equ error_context_instance,0x0046DA18");
struct ectx {};
extern "C" void destroy_ectx(ectx *self, int deleting) __asm__("_$_4ectx");
void destroy_ectx(ectx *self, int deleting)
{
    string_vector *stack = &error_context_instance->context_stack;
    --stack->finish;
    destroy_string(stack->finish, 2);
    if (deleting & 1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
