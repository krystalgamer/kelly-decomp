#ifndef KELLY_DECOMP_TRICKDATA_H
#define KELLY_DECOMP_TRICKDATA_H

#include "KS/SRC/stringx.h"

typedef unsigned char uint8;

enum TRICKTYPE {
    TRICKTYPE_AERIAL,
    TRICKTYPE_FLOATER,
    TRICKTYPE_FOAM,
    TRICKTYPE_TUBE_RIDE,
    TRICKTYPE_TUBE,
    TRICKTYPE_TUBE_AND_OUT,
    TRICKTYPE_EXIT,
    TRICKTYPE_SLIDE,
    TRICKTYPE_FACE,
    TRICKTYPE_GRAB,
    TRICKTYPE_CARVE,
    TRICKTYPE_TAKEOFF,
    TRICKTYPE_OTHER,
    TRICKTYPE_NONE
};

struct SurferTrick {
    int trick_id;
    int anim_id;
    int board_anim_id;
    int flags;
    int IK_flags;
    int trickbook_type;
    int trick_type;
    uint8 button1;
    uint8 button2;
    uint8 button3;
    char button1_string[16];
    char button2_string[16];
    char button3_string[16];
    int Time;
    int Points;
};

extern SurferTrick GTrickList[];

#endif
