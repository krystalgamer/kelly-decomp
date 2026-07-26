#ifndef KELLY_DECOMP_TRAIL_CREATE_SHARED_H
#define KELLY_DECOMP_TRAIL_CREATE_SHARED_H

class kellyslater_controller;

class trail {
    bool valid;

public:
    inline bool is_valid() const {
        return valid;
    }
    void initialize(
        float sample_rate,
        float life,
        bool extra,
        kellyslater_controller *owner);
};

extern trail *trail_p1;
extern trail *trail_p2;
extern trail *trail_m1;
extern trail *trail_m2;
extern const char no_player_trail_text[];
extern const char no_object_trail_text[];
extern "C" void nglPrintf(const char *format, ...)
    __asm__("nglPrintf__FPCce");

__asm__(".equ trail_p1, 0x0047ED54");
__asm__(".equ trail_p2, 0x0047ED58");
__asm__(".equ trail_m1, 0x0047ED5C");
__asm__(".equ trail_m2, 0x0047ED60");
__asm__(".equ no_player_trail_text, 0x00507B08");
__asm__(".equ no_object_trail_text, 0x00507B28");
__asm__(
    ".equ initialize__5trailffbP22kellyslater_controller, "
    "0x00361C08");
__asm__(".equ nglPrintf__FPCce, 0x003AC050");

#endif
