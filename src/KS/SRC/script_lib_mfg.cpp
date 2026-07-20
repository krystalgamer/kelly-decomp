// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031A078)
// 0x0031A078 get_signal_name__C10script_mfgUs
extern const char script_signal_name[];
__asm__(".equ script_signal_name, 0x00508DE8");
class script_mfg { public: const char* get_signal_name(unsigned short index) const; };
const char* script_mfg::get_signal_name(unsigned short index) const { return script_signal_name; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EFE8)
// 0x0032EFE8 _$_22slf_mfg_raise_signal_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032EFE8(void *self) __asm__("_$_22slf_mfg_raise_signal_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032EFE8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00319940)
// 0x00319940 _$_10script_mfg
extern "C" void SignallerDtor(void *self, int deleting) __asm__("_$_9signaller");
extern const char signaller_vtable[];
__asm__(".equ _$_9signaller, 0x0034CC90");
__asm__(".equ signaller_vtable, 0x004FE680");
struct signaller_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_10script_mfg");
void DerivedDtor(void *self, int deleting) { ((signaller_layout *)self)->vtable = signaller_vtable; SignallerDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00319908)
// 0x00319908 __10script_mfg
extern "C" void SignallerCtor(void *self)
    __asm__("__9signaller");
__asm__(".equ __9signaller, 0x0034CC70");

extern const char script_mfg_vtable[];
__asm__(".equ script_mfg_vtable, 0x0050E680");

struct script_mfg_layout {
    char padding[8];
    const void *vtable;
};

extern "C" void *ScriptMfgCtor(void *self)
    __asm__("__10script_mfg");

void *ScriptMfgCtor(void *self)
{
    SignallerCtor(self);
    ((script_mfg_layout *)self)->vtable = script_mfg_vtable;
    return self;
}
#endif
