#ifndef KELLY_DECOMP_GAME_CAMERA_SYNC_SHARED_H
#define KELLY_DECOMP_GAME_CAMERA_SYNC_SHARED_H

#include "KS/SRC/po.h"

class camera {
protected:
    char data_before_flags[0x78];
    int flags;

public:
    bool is_externally_controlled() {
        return (flags >> 20) & 1;
    }

    void sync(camera &other);
};

class game_camera : public camera {
    char data_before_last_frame_valid[0x210 - 0x7c];
    bool last_frame_valid;
    char data_before_temporary_lock[0x238 - 0x214];
    bool temporary_lock;
    char data_before_ground_pitch[0x240 - 0x23c];
    po ground_pitch_po;
    char data_before_crawl_mode[0x2c0 - 0x280];
    bool crawl_mode;
    bool crawl_mode_firstperson;

public:
    void sync(camera &other);
};

extern const po po_identity_matrix;

__asm__(".equ sync__6cameraR6camera, 0x002C3910");
__asm__(".equ po_identity_matrix, 0x00588930");

#endif
