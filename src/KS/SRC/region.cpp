// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E80E8)
// 0x002E80E8 remove_local_thread__6regionP9vm_thread
#include "KS/SRC/region.h"
#include "KS/SRC/vm_thread.h"

extern "C" void SetThreadSuspended(vm_thread *, bool)
    __asm__("set_suspended__9vm_threadb");
__asm__(".equ set_suspended__9vm_threadb, 0x00354658");
__asm__(
    ".equ remove__t4list2ZP9vm_threadZt12my_allocator1ZP9vm_threadRCP9vm_thread, "
    "0x002FB960"
);

void region::remove_local_thread(vm_thread *thread) {
    vm_thread *volatile value = thread;
    local_thread_list.remove((vm_thread *const &)value);
    void (*resume)(vm_thread *, bool) = SetThreadSuspended;
    resume((vm_thread *)value, false);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E7C00)
// 0x002E7C00 remove_cam_coll_ent__6regionP6entity
#include "KS/SRC/region.h"

extern entity **find_entity_pointer(entity **, entity **, entity *const &, int) __asm__("find__H2ZPP6entityZP6entity_X01X01RCX11G26random_access_iterator_tag_X01");
asm(".equ find__H2ZPP6entityZP6entity_X01X01RCX11G26random_access_iterator_tag_X01, 0x002B3010");
void region::remove_cam_coll_ent(entity *e)
{
    entity **end = cam_collision_end;
    entity **found = find_entity_pointer(
        cam_collision_begin,
        end,
        e,
        0);
    if (found != end)
        *found = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E7E68)
// 0x002E7E68 remove__6regionP7trigger
#include "KS/SRC/region.h"

extern trigger **find_trigger_pointer(trigger **, trigger **, trigger *const &, int) __asm__("find__H2ZPP7triggerZP7trigger_X01X01RCX11G26random_access_iterator_tag_X01");
asm(".equ find__H2ZPP7triggerZP7trigger_X01X01RCX11G26random_access_iterator_tag_X01, 0x002FB5B0");
void region::remove(trigger *value)
{
    trigger **end = trigger_end;
    trigger **found = find_trigger_pointer(trigger_begin, end, value, 0);
    if (found != end)
        *found = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E7D20)
// 0x002E7D20 remove__6regionP12light_source
struct properties{char p0[52];unsigned flags;};struct light_source{char p0[512];properties*props;};struct region{char p0[184];light_source**begin,**end;char p1[96];unsigned short terrain_count;};extern "C" light_source**find_light(light_source**,light_source**,light_source*const&,int) __asm__("find__H2ZPP12light_sourceZP12light_source_X01X01RCX11G26random_access_iterator_tag_X01");__asm__(".equ find__H2ZPP12light_sourceZP12light_source_X01X01RCX11G26random_access_iterator_tag_X01,0x002B4440");extern "C" void remove_light(region*self,light_source*e) __asm__("remove__6regionP12light_source");void remove_light(region*self,light_source*e){light_source**end=self->end;light_source**i=find_light(self->begin,end,e,0);if(i!=end){if(e->props->flags&1)--self->terrain_count;*i=0;}}
#endif
