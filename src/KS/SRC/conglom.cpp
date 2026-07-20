// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003073D8)
// 0x003073D8 get_light_set__C12conglomerate
class light_manager;
class entity { public: light_manager *get_light_set() const; };
__asm__(".equ get_light_set__C6entity, 0x00130E48");
class conglomerate : public entity { char padding[0x220]; light_manager *lightmgr; public: light_manager *get_light_set() const; };
light_manager *conglomerate::get_light_set() const { if (lightmgr) return lightmgr; light_manager *result = entity::get_light_set(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
