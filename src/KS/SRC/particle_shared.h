#ifndef KELLY_DECOMP_PARTICLE_SHARED_H
#define KELLY_DECOMP_PARTICLE_SHARED_H

enum EntityFlags {
    EFLAG_GRAPHICS = 0x00000100,
    EFLAG_GRAPHICS_VISIBLE = 0x00000200,
    EFLAG_MISC_NONSTATIC = 0x08000000,
};

class entity {
    char fields_before_flags[0x78];
    unsigned int flags;
    char remaining_fields[0x198];

public:
    void acquire(unsigned int flags);

protected:
    inline void set_flag(unsigned int flag, bool enabled)
    {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
};

class particle_generator : public entity {
    int start_particle;
    int end_particle;
    char fields_before_next_particle[0x60];
    float time_to_next_particle;
    char fields_before_last_position_valid[0x44];
    bool last_position_valid;

public:
    void acquire(unsigned int flags);
};

#endif
