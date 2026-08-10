#ifndef SCRIPT_LIB_CORE_H
#define SCRIPT_LIB_CORE_H

#pragma interface

#include "KS/SRC/script_library_class.h"
#include "KS/SRC/algebra.h"

class slf_play_movie_t : public script_library_class::function {
public:
    struct parms_t {
        vm_str_t movie_name;
        vm_num_t continue_level;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_area_damage_t : public script_library_class::function {
public:
    struct parms_t {
        char storage[20];
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_delay_t : public script_library_class::function {
public:
    struct sdata_t {
        float clock;
    };
    struct parms_t {
        vm_num_t duration;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_enable_marky_cam_t :
    public script_library_class::function {
public:
    struct parms_t {
        vm_num_t sync;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_disable_marky_cam_t :
    public script_library_class::function {
public:
    struct parms_t {
        vm_num_t sync;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_vo_delay_t : public script_library_class::function {
public:
    struct sdata_t {
        float clock;
        vm_num_t duration;
    };
    struct parms_t {
        vm_num_t duration_eng;
        vm_num_t duration_fre;
        vm_num_t duration_ger;
        vm_num_t duration_spa;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_localize_thread_t :
    public script_library_class::function {
public:
    struct parms_t {
        vector3d location;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif
