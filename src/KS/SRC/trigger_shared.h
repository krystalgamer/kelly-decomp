#ifndef KELLY_DECOMP_TRIGGER_SHARED_H
#define KELLY_DECOMP_TRIGGER_SHARED_H

class chunk_file;
class entity;
class MenuSystem;
class region;
class signal;

class stringx {
    char *characters;
    void *buffer;
};

class vector3d {
    float x;
    float y;
    float z;
};

class signaller {
    unsigned int flags;
    void *signals;

public:
    signaller();
    virtual ~signaller();
    virtual bool is_an_entity() const { return false; }
    virtual bool is_a_trigger() const { return false; }
    virtual void raise_signal(unsigned int signal_id) const;

private:
    virtual void *construct_signal_list();

protected:
    virtual const char *get_signal_name(unsigned short signal_id) const;
};

class trigger : public signaller {
    friend class trigger_manager;

public:
    trigger(const stringx &id);
    virtual void read(chunk_file &file) {}
    virtual bool triggered(entity *) { return false; }
    void update();
    virtual void update_region() {}
    virtual bool is_a_trigger() const { return true; }
    virtual const vector3d &get_abs_position() const;
    bool is_active() const { return active; }
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
