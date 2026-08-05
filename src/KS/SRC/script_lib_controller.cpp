// Matching decompilation blocks selected by generated build shims.


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
