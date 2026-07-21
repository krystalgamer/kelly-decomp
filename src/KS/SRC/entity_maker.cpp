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

#if defined(KELLY_DECOMP_FUNCTION_0030B0C8)
// 0x0030B0C8 release_entity__12entity_makerP6entity
class entity;
class entity_pool { public: void release(entity *value); };
__asm__(".equ release__11entity_poolP6entity, 0x0030B6C8");
class entity { char padding[0x118]; entity_pool *pool; friend class entity_maker; };
class entity_maker { public: void release_entity(entity *value); };
void entity_maker::release_entity(entity *value) { if (value->pool) { value->pool->release(value); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00308270)
// 0x00308270 __12entity_maker
class entity_pool_set { char storage[16]; public: entity_pool_set(); };
class entity_maker {
    void *owning_widget;
    entity_pool_set entity_cache;
public:
    entity_maker();
    virtual ~entity_maker();
};
asm(".equ __15entity_pool_set, 0x0030B758");
asm(".equ _vt$12entity_maker, 0x004F7F68");
entity_maker::entity_maker()
{
    owning_widget = 0;
}
#endif
