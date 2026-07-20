// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E9C10)
// 0x001E9C10 add_object__5beachP12beach_object
class beach_object { public: beach_object* next; };
class beach { char padding[0x2C4]; beach_object* objects; public: void add_object(beach_object* object); };
void beach::add_object(beach_object* object) { object->next = objects; objects = object; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001EAD68)
// 0x001EAD68 find_object__C5beachP6entity
class entity;

struct beach_object {
    beach_object *next;
    char padding[0x24];
    entity *object_entity;

    entity *get_entity() const { return object_entity; }
};

class beach {
    char padding[0x2C4];
    beach_object *my_objects;

public:
    beach_object *find_object(entity *target) const;
};

beach_object *beach::find_object(entity *target) const
{
    beach_object *object = my_objects;
    while (object) {
        if (object->get_entity() == target)
            return object;
        object = object->next;
        __asm__ volatile("nop");
    }
    return 0;
}
#endif
