#ifndef FRAME_INFO_H
#define FRAME_INFO_H

typedef float time_value_t;

class frame_info {
    time_value_t age;
    int ifl_frame_boost;
    int ifl_frame_locked;
    static float ifl_frame_rate;

public:
    frame_info();
    time_value_t get_age() const;
    inline void set_age(time_value_t value) { age = value; }
    int get_ifl_frame_boost() const;
    inline void set_ifl_frame_boost(int boost) {
        ifl_frame_boost = boost;
    }
    int get_ifl_frame_locked() const;
    void set_ifl_frame_locked(int frame);
    void operator=(const frame_info &source);
    void compute_boost_for_play(int period);
    int time_to_frame_locked(int period = 0) const;
    int time_to_frame(int period = 0) const;
};

__asm__(".equ _10frame_info$ifl_frame_rate, 0x0046B5A8");

#endif
