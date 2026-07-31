#ifndef FOGMGR_H
#define FOGMGR_H

#include "KS/SRC/color.h"
#include "KS/SRC/singleton.h"

typedef float rational_t;

class fog_manager : public singleton {
public:
    static fog_manager *instance;
    static inline fog_manager *inst() {
        return instance;
    }

    fog_manager();
    ~fog_manager();
    color get_fog_color() const {
        return fog_color;
    }
    void set_fog_color(const color &value);
    rational_t get_fog_start_distance() const {
        return specified_fog_start_distance;
    }
    rational_t get_fog_end_distance() const {
        return specified_fog_end_distance;
    }
    void set_fog_distance(
        rational_t start_distance,
        rational_t end_distance);
    void set_fog_table_gamma(rational_t gamma);
    void set_fog_of_war(
        rational_t target,
        rational_t time_inc);
    rational_t get_fog_of_war() const {
        return fog_of_war;
    }
    void update_fog(bool forced = false);

protected:
    color fog_color;
    rational_t specified_fog_start_distance;
    rational_t specified_fog_end_distance;
    rational_t specified_fog_table_gamma;
    rational_t computed_fog_start_distance;
    rational_t computed_fog_end_distance;
    rational_t fog_of_war;
};

#endif
