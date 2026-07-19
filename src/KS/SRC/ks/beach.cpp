// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E9C10)
// 0x001E9C10 add_object__5beachP12beach_object
class beach_object { public: beach_object* next; };
class beach { char padding[0x2C4]; beach_object* objects; public: void add_object(beach_object* object); };
void beach::add_object(beach_object* object) { object->next = objects; objects = object; }
#endif
