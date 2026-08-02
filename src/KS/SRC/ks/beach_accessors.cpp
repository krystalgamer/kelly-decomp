// Released beach object-list accessors.

#include "KS/SRC/ks/beach.h"
#include "KS/SRC/ks/floatobj.h"

// 0x001E9C10 add_object__5beachP12beach_object
void beach::add_object(beach_object *object)
{
    object->next = my_objects;
    my_objects = object;
}
