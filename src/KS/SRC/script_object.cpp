// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00352A68)
// 0x00352A68 run__14script_managerfb
class script_manager {
public:
    void run(float time, bool ignore_suspended);
};

void script_manager::run(float time, bool ignore_suspended) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00352598)
// 0x00352598 clear__14script_manager
class script_manager { public: void _destroy(); void clear(); };
__asm__(".equ _destroy__14script_manager, 0x00352B40");
void script_manager::clear() { _destroy(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
