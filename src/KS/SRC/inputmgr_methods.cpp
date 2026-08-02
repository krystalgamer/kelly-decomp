// input device definitions extracted by generated one-function shims.


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
