#ifndef KELLY_DECOMP_AI_GOALS_SHARED_H
#define KELLY_DECOMP_AI_GOALS_SHARED_H

#include "g++-2/stl_list_shared.h"

class ai_goal;

class ai_action {
    ai_goal *owner;
    int flags;
    unsigned int id;

public:
    unsigned int get_id() const
    {
        return id;
    }
};

class ai_goal {
    char padding[0x10];
    list<ai_action *> actions;

public:
    bool running_action(unsigned int id);
};

#endif
