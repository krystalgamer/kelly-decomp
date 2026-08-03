#ifndef MSGBOARD_H
#define MSGBOARD_H

#include "g++-2/stl_vector.h"

typedef float time_value_t;

class stringx;

class message_board {
public:
    message_board();
    void post(stringx message_text, time_value_t time);
    void frame_advance(time_value_t time_inc);
    void render();

private:
    struct message {
        char text[100];
        time_value_t time;
    };

    vector<message> messages;
};

#endif
