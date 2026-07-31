#ifndef MOBJECT_H
#define MOBJECT_H

#pragma interface

class motion_object {
public:
    motion_object() : active(true), locked(false) {}
    virtual ~motion_object();
    virtual bool is_active() const;
    virtual void set_active(bool active);
    void set_locked(bool value) { locked = value; }
    bool is_locked() const { return locked; }

protected:
    bool active;
    bool locked;
};

#endif
