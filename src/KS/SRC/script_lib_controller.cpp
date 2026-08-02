// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00318380)
// 0x00318380 _$_17script_controller
extern "C" void SignallerDtor(void *self, int deleting) __asm__("_$_9signaller");
extern const char signaller_vtable[];
__asm__(".equ _$_9signaller, 0x0034CC90");
__asm__(".equ signaller_vtable, 0x004FC988");
struct signaller_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17script_controller");
void DerivedDtor(void *self, int deleting) { ((signaller_layout *)self)->vtable = signaller_vtable; SignallerDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00318348)
// 0x00318348 __17script_controller
extern "C" void SignallerCtor(void *self)
    __asm__("__9signaller");
__asm__(".equ __9signaller, 0x0034CC70");

extern const char script_controller_vtable[];
__asm__(".equ script_controller_vtable, 0x0050C988");

struct script_controller_layout {
    char padding[8];
    const void *vtable;
};

extern "C" void *ScriptControllerCtor(void *self)
    __asm__("__17script_controller");

void *ScriptControllerCtor(void *self)
{
    SignallerCtor(self);
    ((script_controller_layout *)self)->vtable =
        script_controller_vtable;
    return self;
}
#endif
