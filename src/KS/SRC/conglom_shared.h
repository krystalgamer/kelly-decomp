#ifndef KELLY_DECOMP_CONGLOM_SHARED_H
#define KELLY_DECOMP_CONGLOM_SHARED_H

class entity {
public:
    int get_hero_id();
    void frame_advance(float time_increment);
};

class conglomerate : public entity {
public:
    void updatelighting(float time_increment, int player_id);
    void frame_advance(float time_increment);
};

#endif
