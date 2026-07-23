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

#if defined(KELLY_DECOMP_FUNCTION_0032F008)
// 0x0032F008 __tf22slf_mfg_raise_signal_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_0032F008()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032F008[]
    __asm__("__ti22slf_mfg_raise_signal_t");
extern "C" const char rtti_name_0032F008[];
extern "C" void *rtti_base_type_0032F008[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_mfg_raise_signal_t, 0x005A5060");
__asm__(".equ rtti_name_0032F008, 0x005002A8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032F008() __asm__("__tf22slf_mfg_raise_signal_t");

void **Rtti_0032F008()
{
    if (!rtti_type_0032F008[0]) {
        RttiBase_0032F008();
        __rtti_si(rtti_type_0032F008, rtti_name_0032F008, rtti_base_type_0032F008);
    }
    return rtti_type_0032F008;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032F058)
// 0x0032F058 __cl__22slf_mfg_raise_signal_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_library_class_shared.h"

struct signal_vtable
{
    char padding[0x20];
    short adjustment;
    short reserved;
    void (*raise_signal)(void *self, int signal);
};

struct script_mfg
{
    char padding[8];
    signal_vtable *vtable;
};

class slf_mfg_raise_signal_t
{
public:
    struct parms_t { script_mfg *me; vm_num_t sig; };
    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry
    );
};

bool slf_mfg_raise_signal_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry
)
{
    SLF_PARMS;
    int sig = (int)parms->sig;
    if (sig >= 0 && sig < 32)
    {
        signal_vtable *table = parms->me->vtable;
        table->raise_signal(
            (char *)parms->me + table->adjustment, sig
        );
    }
    SLF_DONE;
}
#endif
