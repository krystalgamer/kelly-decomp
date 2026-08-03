#ifndef PO_ANIM_H
#define PO_ANIM_H

#include "KS/SRC/anim.h"
#include "KS/SRC/algebra.h"
#include "KS/SRC/po.h"
#include "KS/SRC/rtti.h"

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
    inline bool has_P() const { return P && P->is_valid(); }
    inline bool has_R() const { return R && R->is_valid(); }
    inline bool has_S() const { return S && S->is_valid(); }
    void set_time(float time);
    void get_unadjusted_value(
        const anim_control_t &control,
        vector3d *destination) const;
    void get_unadjusted_value(
        float time,
        vector3d *destination) const;
    void get_unadjusted_value(
        const anim_control_t &control,
        quaternion *destination) const;
    void get_unadjusted_value(
        float time,
        quaternion *destination) const;
    void get_unadjusted_value(
        const anim_control_t &control,
        rational_t *destination) const;
    void get_unadjusted_value(
        float time,
        rational_t *destination) const;

    static bool meminit;
    static bool *allocated;
    static void *membuffer;
    static int current_allocation;
    static void *mem_init_func;
    static void *mem_free_func;
    static void check_mem_init();
    static void mem_cleanup();
    static void *operator new(unsigned int size);
    static void *operator new(
        unsigned int size,
        unsigned int alignment,
        const char *file,
        int line);
};

#endif
