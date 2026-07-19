// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B8D08)
// 0x002B8D08 read__7triggerR10chunk_file
class chunk_file;

class trigger {
public:
    void read(chunk_file& file);
};

void trigger::read(chunk_file& file) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D10)
// 0x002B8D10 triggered__7triggerP6entity
class entity;

class trigger {
public:
    bool triggered(entity* value);
};

bool trigger::triggered(entity* value) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D18)
// 0x002B8D18 update_region__7trigger
class trigger {
public:
    void update_region();
};

void trigger::update_region() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D20)
// 0x002B8D20 is_a_trigger__C7trigger
class trigger {
public:
    bool is_a_trigger() const;
};

bool trigger::is_a_trigger() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D28)
// 0x002B8D28 get_abs_position__C7trigger
class vector3d {
    float x;
    float y;
    float z;
};

extern const vector3d trigger_zero_vector;
__asm__(".equ trigger_zero_vector, 0x00570198");

class trigger {
public:
    const vector3d& get_abs_position() const;
};

const vector3d& trigger::get_abs_position() const {
    return trigger_zero_vector;
}
#endif
