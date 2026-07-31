#ifndef TRIGGER_H
#define TRIGGER_H

#include "KS/SRC/algebra.h"
#include "KS/SRC/signals.h"
#include "KS/SRC/stringx.h"

class chunk_file;
class entity;
class MenuSystem;
class region;
class trigger : public signaller {
    friend class trigger_manager;

public:
    enum SignalId {
        ENTER,
        LEAVE,
    };

    trigger(const stringx &id);
    virtual inline void read(chunk_file &file) {}
    virtual inline bool triggered(entity *) { return false; }
    void update();
    virtual inline void update_region() {}
    virtual inline bool is_a_trigger() const { return true; }
    virtual const vector3d &get_abs_position() const;
    inline bool is_active() const { return active; }
    void set_active(bool active);

protected:
    entity *whodunnit;
    stringx id;
    trigger *next;
    char in_regions[12];
    bool static_regions;
    bool active;
    bool occupied;
    bool use_any_char;
};

class trigger_manager {
    char singleton_and_regions[0x10];
    trigger *list;

public:
    void update_regions();
};

#endif
