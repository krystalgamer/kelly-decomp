#ifndef ENTITY_MAKER_H
#define ENTITY_MAKER_H

#include "KS/SRC/stringx.h"
#include "g++-2/stl_list.h"
#include "g++-2/stl_map.h"

class entity;
class entity_widget;

class entity_pool {
    list<entity *> entities;
    unsigned int avail;

public:
    entity_pool();
    ~entity_pool();
    int size() const;
    void add(entity *value);
    entity *acquire(unsigned int flags);
    void release(entity *value);
};

class entity_pool_set {
    map<stringx, entity_pool *> entity_pools;
    list<entity_pool *> aux_entity_pools;

public:
    entity_pool_set();
    ~entity_pool_set();
    entity *acquire(
        const stringx &name,
        unsigned int flags);
    entity *acquire_beam(unsigned int flags);
    void purge();
};

class entity_maker {
    entity_widget *owning_widget;
    entity_pool_set entity_cache;

public:
    entity_maker();
    virtual ~entity_maker();
    entity *create_entity(entity *value);
    entity *acquire_beam(unsigned int flags);
    void destroy_entity(entity *value);
    void release_entity(entity *value);
    void purge_entity_cache();
};

#endif

// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003131D0)
// 0x003131D0 __tf12entity_maker
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *entity_maker_type[] __asm__("__ti12entity_maker");
extern "C" char entity_maker_name[] __asm__("__tn12entity_maker");
__asm__(".equ __ti12entity_maker, 0x005121A0");
__asm__(".equ __tn12entity_maker, 0x00508888");
__asm__(".equ __rtti_user, 0x003CE2F8");

extern "C" void **entity_maker_rtti() __asm__("__tf12entity_maker");
void **entity_maker_rtti()
{
    if (!entity_maker_type[0])
        __rtti_user(entity_maker_type, entity_maker_name);
    return entity_maker_type;
}
#endif
