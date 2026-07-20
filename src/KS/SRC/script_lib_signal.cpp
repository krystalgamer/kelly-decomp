// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00328338)
// 0x00328338 _$_30slf_signaller_enable_signals_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328338(void *self) __asm__("_$_30slf_signaller_enable_signals_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328338(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003283D0)
// 0x003283D0 _$_31slf_signaller_disable_signals_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003283D0(void *self) __asm__("_$_31slf_signaller_disable_signals_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003283D0(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328468)
// 0x00328468 _$_31slf_signaller_clear_callbacks_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328468(void *self) __asm__("_$_31slf_signaller_clear_callbacks_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328468(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328508)
// 0x00328508 _$_30slf_signaller_clear_callback_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328508(void *self) __asm__("_$_30slf_signaller_clear_callback_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328508(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328440)
// 0x00328440 __cl__31slf_signaller_disable_signals_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack_layout { char padding[8]; char *top; };
struct signaller_layout { unsigned int flags; };
extern "C" bool DisableSignalsOp(void *self, vm_stack_layout *stack, int entry) __asm__("__cl__31slf_signaller_disable_signals_tR8vm_stackQ320script_library_class8function7entry_t");
bool DisableSignalsOp(void *self, vm_stack_layout *stack, int entry) { stack->top -= 4; signaller_layout *signaller = *(signaller_layout **)stack->top; signaller->flags |= 1; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003283A8)
// 0x003283A8 __cl__30slf_signaller_enable_signals_tR8vm_stackQ320script_library_class8function7entry_t
class signaller { int flags; public: void enable() { flags &= ~1; } };
class vm_stack { char padding[8]; char *top; public: void *pop(unsigned int size) { top -= size; return top; } };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
#define SLF_PARMS parms_t *parms = (parms_t *)stack.pop(sizeof(parms_t))
#define SLF_DONE return true
class slf_signaller_enable_signals_t : public script_library_class::function { public: struct parms_t { signaller *me; }; bool operator()(vm_stack &stack, entry_t entry); };
bool slf_signaller_enable_signals_t::operator()(vm_stack &stack, entry_t entry) { SLF_PARMS; parms->me->enable(); SLF_DONE; }
#endif
