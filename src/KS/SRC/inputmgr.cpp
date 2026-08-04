// input manager definitions extracted by generated one-function shims.


// 0x00343918 __12input_device
#include "KS/SRC/inputmgr.h"

input_device::input_device()
{
    device_id = INVALID_DEVICE_ID;
}

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

// 0x00344860 get_control_trigger__C9input_mgr11device_id_ti
extern "C" float delta(void*,int,int) __asm__("get_control_delta__C9input_mgr11device_id_ti");extern "C" float state(void*,int,int) __asm__("get_control_state__C9input_mgr11device_id_ti");__asm__(".equ get_control_delta__C9input_mgr11device_id_ti,0x003444A0");__asm__(".equ get_control_state__C9input_mgr11device_id_ti,0x003441C8");extern "C" float trigger(void*self,int dev,int control) __asm__("get_control_trigger__C9input_mgr11device_id_ti");float trigger(void*self,int dev,int control){float d=delta(self,dev,control);if(d==state(self,dev,control))return d;__asm__ __volatile__("" : : : "memory");return 0.0f;}

// 0x00343AD8 get_device_from_map__C9input_mgr11device_id_t
struct device_vtable{char pad[24];short adjust;short reserved;int(*get_id)(void*);};struct input_device{char pad[4];device_vtable*vtable;};struct input_mgr{char pad[8];input_device**begin;input_device**end;};extern "C" input_device*get_device(const input_mgr*self,int id)__asm__("get_device_from_map__C9input_mgr11device_id_t");input_device*get_device(const input_mgr*self,int id){input_device**it=self->begin;input_device**it_end=self->end;while(it!=it_end){if((*it)){input_device*arg=*it;device_vtable*t=arg->vtable;if(t->get_id((char*)arg+t->adjust)==id)return(*it);}++it;}return 0;}

// Source implementation boundary.
// 0x0035FF10 is_connected__C12input_device
#include "KS/SRC/inputmgr.h"

bool input_device::is_connected() const {
    return false;
}

// 0x0035FF18 normalize__12input_devicei
#include "KS/SRC/inputmgr.h"

unsigned char input_device::normalize(int raw) {
    return raw;
}

// 0x0035FF20 set_button_d__12input_deviceib
#include "KS/SRC/inputmgr.h"

void input_device::set_button_d(int button, bool state) {
}

// 0x0035FF28 set_button_a__12input_deviceii
#include "KS/SRC/inputmgr.h"

void input_device::set_button_a(int button, int state) {
}

// 0x0035FF30 set_stick__12input_deviceiii
#include "KS/SRC/inputmgr.h"

void input_device::set_stick(int stick, int x, int y) {
}

// 0x0035FF38 clear_state__12input_device
#include "KS/SRC/inputmgr.h"

void input_device::clear_state() {
}

// 0x0035FED0 __tf12input_device
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_0035FED0_type[] __asm__("__ti12input_device");
extern "C" char rtti_0035FED0_name[] __asm__("rtti_0035FED0_type_name");
__asm__(".equ __ti12input_device, 0x00511FB0");
__asm__(".equ rtti_0035FED0_type_name, 0x00505728");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_0035FED0() __asm__("__tf12input_device");
void **rtti_0035FED0()
{
    if (!rtti_0035FED0_type[0])
        __rtti_user(rtti_0035FED0_type, rtti_0035FED0_name);
    return rtti_0035FED0_type;
}
