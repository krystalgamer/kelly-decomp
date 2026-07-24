// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001E99C8)
extern "C" void cleanup(void *self) __asm__("cleanup__5beach");
extern "C" void judging_system_dtor(void *self, int deleting)
    __asm__("_$_13JudgingSystem");
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ cleanup__5beach, 0x001E9A18");
__asm__(".equ _$_13JudgingSystem, 0x00259870");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern "C" void beach_dtor(void *self, int deleting) __asm__("_$_5beach");
void beach_dtor(void *self, int deleting)
{
    cleanup(self);
    judging_system_dtor(self, 2);
    if (deleting & 1) {
        builtin_delete(self);
        __asm__ volatile("");
    }
}
#endif


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

#if defined(KELLY_DECOMP_FUNCTION_001E9968)
// 0x001E9968 __5beach
class JudgingSystem {
    char data[696];
public:
    JudgingSystem();
};
struct vector3d {
    float x,y,z;
    vector3d &operator=(const vector3d &value) {
        x=value.x; y=value.y; z=value.z; return *this;
    }
};
extern const vector3d ZEROVEC;
__asm__(".equ __13JudgingSystem, 0x00259848");
__asm__(".equ ZEROVEC, 0x00554478");
class beach {
    JudgingSystem judges;
    vector3d travel_distance;
    void *my_objects;
    int current_breakmap;
    int num_breakmap;
    void *smashedEntity;
    void *challenge_icon;
    void *challenge_photo;
public:
    beach();
};
beach::beach() {
    my_objects=0;
    travel_distance=ZEROVEC;
    smashedEntity=0;
    challenge_icon=0;
    challenge_photo=0;
}
#endif
