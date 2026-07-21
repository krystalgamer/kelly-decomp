// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E81C0)
// 0x002E81C0 optimize__6region
class region {
public:
    void optimize();
};

void region::optimize() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E68D8)
// 0x002E68D8 sort_entities__6region
class region { public: void x_sort_entities_by_bounding_box_info(); void sort_entities(); };
__asm__(".equ x_sort_entities_by_bounding_box_info__6region, 0x002E68F8");
void region::sort_entities() { x_sort_entities_by_bounding_box_info(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E81A0)
// 0x002E81A0 set_region_ambient_sound__6regionR7stringx
class stringx { public: stringx &operator=(const stringx &other); };
__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
class region { char padding[0x124]; stringx region_ambient_sound_name; public: void set_region_ambient_sound(stringx &name); };
void region::set_region_ambient_sound(stringx &name) { region_ambient_sound_name = name; KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E80E8)
// 0x002E80E8 remove_local_thread__6regionP9vm_thread
class vm_thread {
public:
    void set_suspended(bool suspended);
};

__asm__(".equ set_suspended__9vm_threadb, 0x00354658");

extern "C" void RemoveThreadFromList(
    void *list,
    vm_thread *const &thread
) __asm__("remove__t4list2ZP9vm_threadZt12my_allocator1ZP9vm_threadRCP9vm_thread");
__asm__(".equ remove__t4list2ZP9vm_threadZt12my_allocator1ZP9vm_threadRCP9vm_thread, 0x002FB960");

class region {
    char padding[0x24];
    char local_thread_list[1];

public:
    void remove_local_thread(vm_thread *thread);
};

void region::remove_local_thread(vm_thread *thread) {
    vm_thread *volatile value = thread;
    RemoveThreadFromList(
        local_thread_list,
        (vm_thread *const &)value
    );
    ((vm_thread *)value)->set_suspended(false);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E7C00)
// 0x002E7C00 remove_cam_coll_ent__6regionP6entity
class entity;
extern entity **find_entity_pointer(entity **, entity **, entity *const &, int) __asm__("find__H2ZPP6entityZP6entity_X01X01RCX11G26random_access_iterator_tag_X01");
asm(".equ find__H2ZPP6entityZP6entity_X01X01RCX11G26random_access_iterator_tag_X01, 0x002B3010");
class region { char padding[0x88]; entity **cam_begin; entity **cam_end; public: void remove_cam_coll_ent(entity *); };
void region::remove_cam_coll_ent(entity *e)
{
    entity **end = cam_end;
    entity **found = find_entity_pointer(cam_begin, end, e, 0);
    if (found != end)
        *found = 0;
}
#endif
