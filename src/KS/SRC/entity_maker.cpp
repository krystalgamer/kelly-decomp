// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0030B0A8)
// 0x0030B0A8 acquire_beam__12entity_makerUi
class entity;
class entity_pool_set { public: entity *acquire_beam(unsigned int flags); };
__asm__(".equ acquire_beam__15entity_pool_setUi, 0x0030B8E0");
class entity_maker { char padding[4]; entity_pool_set entity_cache; public: entity *acquire_beam(unsigned int flags); };
entity *entity_maker::acquire_beam(unsigned int flags) { entity *result = entity_cache.acquire_beam(flags); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030B0F0)
// 0x0030B0F0 purge_entity_cache__12entity_maker
class entity_pool_set { public: void purge(); };
__asm__(".equ purge__15entity_pool_set, 0x0030BAB8");
class entity_maker { char padding[4]; entity_pool_set entity_cache; public: void purge_entity_cache(); };
void entity_maker::purge_entity_cache() { entity_cache.purge(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
