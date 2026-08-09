#ifndef OSTIMER_H
#define OSTIMER_H

typedef float time_value_t;
typedef unsigned int uint32;
typedef unsigned long long uint64;

class game_clock_t;

class game_clock {
    friend class game_clock_t;

    static time_value_t delta;
    static uint64 ticks;
    static uint32 frames;

public:
    static void frame_advance(time_value_t delta);
    static inline time_value_t get_delta_t() {
        return delta;
    }
    static inline uint32 get_total_frames() {
        return frames;
    }
};

#endif
