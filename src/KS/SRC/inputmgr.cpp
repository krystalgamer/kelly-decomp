// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00343918)
// 0x00343918 __12input_device
enum device_id_t { INVALID_DEVICE_ID = -1 };
class input_device { device_id_t device_id; public: input_device(); virtual ~input_device(); };
__asm__(".equ _vt$12input_device, 0x00504FC8");
input_device::input_device() { device_id = INVALID_DEVICE_ID; }
#endif
