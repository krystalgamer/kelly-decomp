// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E3138)
// 0x002E3138 __21motion_control_system
class motion_object { protected: bool active; bool locked; public: motion_object() { active = true; locked = false; } virtual ~motion_object(); };
class motion_control_system : public motion_object { public: motion_control_system(); virtual ~motion_control_system(); };
__asm__(".equ _vt$21motion_control_system, 0x004F1618");
motion_control_system::motion_control_system() : motion_object() {}
#endif
