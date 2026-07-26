#ifndef KELLY_DECOMP_PO_ANIM_SHARED_H
#define KELLY_DECOMP_PO_ANIM_SHARED_H

#include "KS/SRC/anim_shared.h"
#include "KS/SRC/po_shared.h"
#include "KS/SRC/rtti_shared.h"

struct quaternion {
    float value[4];
};

class po_anim : public anim<po> {
    anim<vector3d> *P;
    anim<quaternion> *R;
    anim<float> *S;
    vector3d P_start;
    quaternion R_start;
    float S_start;
    vector3d R_start_mat[3];

public:
    virtual ~po_anim();

    static bool meminit;
    static bool *allocated;
    static void *membuffer;
    static int current_allocation;
    static void *mem_init_func;
    static void *mem_free_func;
    static void check_mem_init();
    static void mem_cleanup();
};

#endif
