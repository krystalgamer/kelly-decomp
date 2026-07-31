#ifndef KELLY_DECOMP_KELLYSLATER_LIP_SHARED_H
#define KELLY_DECOMP_KELLYSLATER_LIP_SHARED_H

#include "KS/SRC/game.h"
#include "KS/SRC/algebra.h"

enum WaveMarkerEnum {
    WAVE_MarkerLipMark6 = 17
};

class board_controller {
    vector3d float_position;

public:
    inline vector3d GetFloatPos() const {
        return float_position;
    }
};

class surf_board {
    char data_before_absolute_po[0x50];
    void *absolute_po;

public:
    inline const vector3d &get_abs_position() const {
        return *(const vector3d *)((const char *)absolute_po + 0x30);
    }
};

class kellyslater_controller {
    char data_before_board_controller[0xE20];
    board_controller my_board_controller;
    char data_before_board[0x1C];
    surf_board *my_board;

public:
    float Lip_Distance();
};

const vector3d *WAVE_GetMarker(WaveMarkerEnum marker);
extern float mav_fudge;

__asm__(".equ WAVE_GetMarker__F14WaveMarkerEnum, 0x0037D7E8");
__asm__(".equ mav_fudge, 0x00424BC0");

#endif
