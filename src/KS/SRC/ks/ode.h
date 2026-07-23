// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026EA68)
// 0x0026EA68 SetStepSize__14OdeSolverClassf
class OdeSolverClass {
    char padding[0x4];
    float stepSize;
public:
    void SetStepSize(float value);
};

void OdeSolverClass::SetStepSize(float value) {
    stepSize = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EB48)
// 0x0026EB48 SetStepSize__15RungeKuttaClassf
class RungeKuttaClass { char padding0[4]; float stepSize; char padding1[8]; float step2; float step6; public: void SetStepSize(float step); };
void RungeKuttaClass::SetStepSize(float step) { stepSize = step; step2 = step / 2.0f; step6 = step / 6.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EA38)
// 0x0026EA38 _$_14OdeSolverClass
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004ED560");

struct target_layout {
    char padding[0xc];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_14OdeSolverClass");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026E9F8)
// 0x0026E9F8 __tf14OdeSolverClass
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120C0"); asm(".equ type_name, 0x004E4D30");
extern "C" void *GetTypeInfo() __asm__("__tf14OdeSolverClass");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EAF0)
// 0x0026EAF0 _$_15RungeKuttaClass
extern "C" int Terminate(void *self)
    __asm__("Terminate__15RungeKuttaClass");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
extern const char runge_vtable[];
extern const char ode_vtable[];
__asm__(".equ Terminate__15RungeKuttaClass, 0x002413E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ runge_vtable, 0x004ED528");
__asm__(".equ ode_vtable, 0x004ED560");
struct runge_layout { char padding[0xc]; const void *vtable; };
extern "C" void RungeDtor(void *self, int deleting)
    __asm__("_$_15RungeKuttaClass");
void RungeDtor(void *self, int deleting) {
    runge_layout *solver=(runge_layout *)self;
    solver->vtable=runge_vtable;
    Terminate(self);
    solver->vtable=ode_vtable;
    if (deleting&1) {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
