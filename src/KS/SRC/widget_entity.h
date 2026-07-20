// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FEFD8)
// 0x002FEFD8 get_width__13entity_widget
struct entity_vtable {
    char padding[0xd8];
    short adjustment;
    short padding2;
    float (*get_radius)(void *self);
};

class entity {
    char padding[8];

public:
    entity_vtable *vtable;
};

class entity_widget {
    char padding[0x144];
    entity *ent;

public:
    float get_width();
};

float entity_widget::get_width() {
    entity_vtable *table = ent->vtable;
    return table->get_radius((char *)ent + table->adjustment);
}
#endif
