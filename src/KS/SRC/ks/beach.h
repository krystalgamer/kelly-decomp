#ifndef BEACH_H
#define BEACH_H

class beach_object;

class beach {
    char data_before_objects[0x2C4];
    beach_object *my_objects;

public:
    void add_object(beach_object *object);
    beach_object *get_object(int index) const;
};

#endif
