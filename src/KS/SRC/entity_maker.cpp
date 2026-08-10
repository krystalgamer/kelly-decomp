// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0030B0A8)
// 0x0030B0A8 acquire_beam__12entity_makerUi
#include "KS/SRC/entity_maker.h"

__asm__(".equ acquire_beam__15entity_pool_setUi, 0x0030B8E0");
entity *entity_maker::acquire_beam(unsigned int flags)
{
    return entity_cache.acquire_beam(flags);
}
#endif

// 0x0030B0C8 release_entity__12entity_makerP6entity
#include "KS/SRC/entity.h"
#include "KS/SRC/entity_maker.h"

void release_to_pool(entity_pool *pool, entity *value)
    __asm__("release__11entity_poolP6entity");
__asm__(".equ release__11entity_poolP6entity, 0x0030B6C8");

void entity_maker::release_entity(entity *value)
{
    entity_pool *pool = value->get_entity_pool();
    if (pool) {
        void (*release)(entity_pool *, entity *) = release_to_pool;
        release(pool, value);
    }
}

#if defined(KELLY_DECOMP_FUNCTION_00308270)
// 0x00308270 __12entity_maker
#include "KS/SRC/entity_maker.h"

asm(".equ __15entity_pool_set, 0x0030B758");
asm(".equ _vt$12entity_maker, 0x004F7F68");
entity_maker::entity_maker()
{
    owning_widget = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030B040)
// 0x0030B040 destroy_entity__12entity_makerP6entity
#include "KS/SRC/entity.h"
#include "KS/SRC/entity_maker.h"
#include "KS/SRC/wds.h"

extern "C" void destroy_world_entity(
    world_dynamics_system *,entity *
) __asm__("destroy_entity__21world_dynamics_systemP6entity");
__asm__(".equ g_world_ptr, 0x00431A8C");
__asm__(".equ destroy_entity__21world_dynamics_systemP6entity, 0x002A4430");
void entity_maker::destroy_entity(entity *value) {
    if (g_world_ptr && !value->get_owning_widget()) {
        void (*destroy)(world_dynamics_system *,entity *)=
            destroy_world_entity;
        destroy(g_world_ptr,value);
    } else if (value) {
        delete value;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030B828)
// 0x0030B828 _$_15entity_pool_set
struct list_node{list_node*next;};struct map_node{int color;map_node*parent;map_node*left;map_node*right;};struct entity_pool_set{map_node*header;int count;int pad;list_node*aux;};struct allocator_state{int pad0;void*list_free;int pad1;void*map_free;};extern allocator_state alloc_state;asm(".equ alloc_state,0x003E5628");extern "C" void purge(entity_pool_set*)__asm__("purge__15entity_pool_set");extern "C" void clear_list(void*)__asm__("clear__t10_List_base2ZP11entity_poolZt12my_allocator1ZP11entity_pool");extern "C" void erase_map(entity_pool_set*,map_node*)__asm__("_M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP11entity_poolZt10_Select1st1Zt4pair2ZC7stringxZP11entity_poolZt4less1Z7stringxZt12my_allocator1ZP11entity_poolPt13_Rb_tree_node1Zt4pair2ZC7stringxZP11entity_pool");extern "C" void builtin_delete(void*)__asm__("__builtin_delete");asm(".equ purge__15entity_pool_set,0x0030BAB8");asm(".equ clear__t10_List_base2ZP11entity_poolZt12my_allocator1ZP11entity_pool,0x003115C0");asm(".equ _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP11entity_poolZt10_Select1st1Zt4pair2ZC7stringxZP11entity_poolZt4less1Z7stringxZt12my_allocator1ZP11entity_poolPt13_Rb_tree_node1Zt4pair2ZC7stringxZP11entity_pool,0x00311540");asm(".equ __builtin_delete,0x002AC6B0");extern "C" void destroy(entity_pool_set*self,int deleting)__asm__("_$_15entity_pool_set");void destroy(entity_pool_set*self,int deleting){purge(self);clear_list((char*)self+12);list_node*n=self->aux;n->next=(list_node*)alloc_state.list_free;alloc_state.list_free=n;if(self->count){erase_map(self,self->header->parent);self->header->left=self->header;self->header->parent=0;self->header->right=self->header;self->count=0;}map_node*h=self->header;h->color=(int)alloc_state.map_free;alloc_state.map_free=h;if(deleting&1){builtin_delete(self);asm volatile("");}}
#endif
