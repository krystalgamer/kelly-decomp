// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003000D8)
// 0x003000D8 is_a_particle_generator__C18particle_generator
class particle_generator {
public:
    bool is_a_particle_generator() const;
};

bool particle_generator::is_a_particle_generator() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003000E0)
// 0x003000E0 get_distance_fade_ok__C18particle_generator
class particle_generator {
public:
    bool get_distance_fade_ok() const;
};

bool particle_generator::get_distance_fade_ok() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00385388)
// 0x00385388 _GLOBAL_$I$TRAIL_StaticInit__Fv
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$TRAIL_StaticInit__Fv");
__asm__(".equ __static_initialization_and_destruction_0, 0x00382368");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003853A8)
// 0x003853A8 _GLOBAL_$D$TRAIL_StaticInit__Fv
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$TRAIL_StaticInit__Fv");
__asm__(".equ __static_initialization_and_destruction_0, 0x00382368");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
