// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0035FF10)
// 0x0035FF10 is_connected__C12input_device
class input_device {
public:
    bool is_connected() const;
};

bool input_device::is_connected() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FF18)
// 0x0035FF18 normalize__12input_devicei
class input_device {
public:
    unsigned char normalize(int raw);
};

unsigned char input_device::normalize(int raw) {
    return raw;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FF20)
// 0x0035FF20 set_button_d__12input_deviceib
class input_device {
public:
    void set_button_d(int button, bool state);
};

void input_device::set_button_d(int button, bool state) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FF28)
// 0x0035FF28 set_button_a__12input_deviceii
class input_device {
public:
    void set_button_a(int button, int state);
};

void input_device::set_button_a(int button, int state) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FF30)
// 0x0035FF30 set_stick__12input_deviceiii
class input_device {
public:
    void set_stick(int stick, int x, int y);
};

void input_device::set_stick(int stick, int x, int y) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FF38)
// 0x0035FF38 clear_state__12input_device
class input_device {
public:
    void clear_state();
};

void input_device::clear_state() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FED0)
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
#endif
