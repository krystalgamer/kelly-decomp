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

#if defined(KELLY_DECOMP_FUNCTION_00344168)
// 0x00344168 poll_devices__9input_mgr
struct poll_slot {
    char padding[0x50]; short adjustment; short reserved;
    void (*poll)(void *);
};
struct input_device_layout { char padding[4]; poll_slot *vtable; };
class input_mgr {
    char padding[8];
    input_device_layout **begin;
    input_device_layout **end;
public:
    void poll_devices();
};
void input_mgr::poll_devices() {
    input_device_layout **it=begin;
    input_device_layout **finish=end;
    while (it!=finish) {
        input_device_layout *device=*it;
        ++it;
        poll_slot *table=device->vtable;
        table->poll((char *)device+table->adjustment);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00344860)
// 0x00344860 get_control_trigger__C9input_mgr11device_id_ti
extern "C" float delta(void*,int,int) __asm__("get_control_delta__C9input_mgr11device_id_ti");extern "C" float state(void*,int,int) __asm__("get_control_state__C9input_mgr11device_id_ti");__asm__(".equ get_control_delta__C9input_mgr11device_id_ti,0x003444A0");__asm__(".equ get_control_state__C9input_mgr11device_id_ti,0x003441C8");extern "C" float trigger(void*self,int dev,int control) __asm__("get_control_trigger__C9input_mgr11device_id_ti");float trigger(void*self,int dev,int control){float d=delta(self,dev,control);if(d==state(self,dev,control))return d;__asm__ __volatile__("" : : : "memory");return 0.0f;}
#endif
