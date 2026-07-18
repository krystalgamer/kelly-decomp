class beach_object { public: beach_object* next; };
class beach { char padding[0x2C4]; beach_object* objects; public: void add_object(beach_object* object); };
void beach::add_object(beach_object* object) { object->next = objects; objects = object; }
