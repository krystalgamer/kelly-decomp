// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00343918)
// 0x00343918 __12input_device
enum device_id_t { INVALID_DEVICE_ID = -1 };
class input_device { device_id_t device_id; public: input_device(); virtual ~input_device(); };
__asm__(".equ _vt$12input_device, 0x00504FC8");
input_device::input_device() { device_id = INVALID_DEVICE_ID; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00343938)
// 0x00343938 _$_12input_device
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char input_device_vtable[];
__asm__(".equ input_device_vtable, 0x00504FC8");

struct input_device_layout {
    int device_id;
    const void *vtable;
};

extern "C" void InputDeviceDtor(void *self, int deleting)
    __asm__("_$_12input_device");

void InputDeviceDtor(void *self, int deleting) {
    ((input_device_layout *)self)->vtable = input_device_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
