// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0035F9A8)
// 0x0035F9A8 is_code_callback__15signal_callback
class signal_callback {
public:
    bool is_code_callback();
};

bool signal_callback::is_code_callback() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F9B0)
// 0x0035F9B0 is_script_callback__15signal_callback
class signal_callback {
public:
    bool is_script_callback();
};

bool signal_callback::is_script_callback() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FA30)
// 0x0035FA30 is_script_callback__15script_callback
class script_callback {
public:
    bool is_script_callback();
};

bool script_callback::is_script_callback() {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FAB0)
// 0x0035FAB0 is_code_callback__13code_callback
class code_callback {
public:
    bool is_code_callback();
};

bool code_callback::is_code_callback() {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FBF0)
// 0x0035FBF0 is_an_entity__C9signaller
class signaller {
public:
    bool is_an_entity() const;
};

bool signaller::is_an_entity() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FBF8)
// 0x0035FBF8 is_a_trigger__C9signaller
class signaller {
public:
    bool is_a_trigger() const;
};

bool signaller::is_a_trigger() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FD08)
// 0x0035FD08 get_signal_name__C9signallerUs
extern const char signaller_signal_name[];
__asm__(".equ signaller_signal_name, 0x00500D28");
class signaller { public: const char* get_signal_name(unsigned short index) const; };
const char* signaller::get_signal_name(unsigned short index) const { return signaller_signal_name; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FB08)
// 0x0035FB08 _$_12gated_signal
extern "C" void SignalDtor(void *self) __asm__("_$_6signal");
extern "C" void GatedSignalDtor(void *self) __asm__("_$_12gated_signal");
__asm__(".equ _$_6signal, 0x0034C048");
void GatedSignalDtor(void *self) { SignalDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F978)
// 0x0035F978 _$_15signal_callback
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char signal_callback_vtable[];
__asm__(".equ signal_callback_vtable, 0x005051A8");

struct signal_callback_layout {
    char padding[0x10];
    const void *vtable;
};

extern "C" void SignalCallbackDtor(void *self, int deleting)
    __asm__("_$_15signal_callback");

void SignalCallbackDtor(void *self, int deleting) {
    ((signal_callback_layout *)self)->vtable = signal_callback_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F938)
// 0x0035F938 __tf15signal_callback
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_0035F938_type[] __asm__("__ti15signal_callback");
extern "C" char rtti_0035F938_name[] __asm__("rtti_0035F938_type_name");
__asm__(".equ __ti15signal_callback, 0x005121D0");
__asm__(".equ rtti_0035F938_type_name, 0x00505690");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_0035F938() __asm__("__tf15signal_callback");
void **rtti_0035F938()
{
    if (!rtti_0035F938_type[0])
        __rtti_user(rtti_0035F938_type, rtti_0035F938_name);
    return rtti_0035F938_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FAB8)
// 0x0035FAB8 __tf6signal
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_0035FAB8_type[] __asm__("__ti6signal");
extern "C" char rtti_0035FAB8_name[] __asm__("rtti_0035FAB8_type_name");
__asm__(".equ __ti6signal, 0x005121D8");
__asm__(".equ rtti_0035FAB8_type_name, 0x005056D0");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_0035FAB8() __asm__("__tf6signal");
void **rtti_0035FAB8()
{
    if (!rtti_0035FAB8_type[0])
        __rtti_user(rtti_0035FAB8_type, rtti_0035FAB8_name);
    return rtti_0035FAB8_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FBA8)
// 0x0035FBA8 __tf9signaller
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_0035FBA8_type[] __asm__("__ti9signaller");
extern "C" char rtti_0035FBA8_name[] __asm__("rtti_0035FBA8_type_name");
__asm__(".equ __ti9signaller, 0x00512028");
__asm__(".equ rtti_0035FBA8_type_name, 0x005056E8");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_0035FBA8() __asm__("__tf9signaller");
void **rtti_0035FBA8()
{
    if (!rtti_0035FBA8_type[0])
        __rtti_user(rtti_0035FBA8_type, rtti_0035FBA8_name);
    return rtti_0035FBA8_type;
}
#endif
