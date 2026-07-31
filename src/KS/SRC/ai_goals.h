#ifndef AI_GOALS_H
#define AI_GOALS_H

#pragma interface

#include "KS/SRC/pstring.h"
#include "g++-2/stl_list.h"

typedef float rational_t;
typedef float time_value_t;

class ai_action;
class ai_interface;
class chunk_file;
class entity;
class stringx;

class ai_goal {
protected:
    friend class ai_interface;

    ai_interface *owner;
    rational_t priority;
    rational_t priority_modifier;
    bool in_service;
    list<ai_action *> actions;
    pstring type;

    virtual rational_t frame_advance(time_value_t time);
    virtual ai_goal *make_copy(ai_interface *owner) = 0;
    virtual void dump_actions();
    virtual void dump_action(ai_action *action);
    void read_data(chunk_file &file);
    virtual void handle_chunk(chunk_file &file, stringx &label);

public:
    explicit ai_goal(ai_interface *owner);
    virtual ~ai_goal();
    virtual rational_t calculate_priority(time_value_t time) = 0;
    inline rational_t get_priority() const {
        return priority * priority_modifier;
    }
    virtual void going_into_service();
    virtual void going_out_of_service();
    virtual unsigned int add_action(ai_action *action);
    virtual bool running_action(unsigned int id);
    virtual void dump_action(unsigned int id);
    inline ai_interface *get_ai_interface() const {
        return owner;
    }
    entity *get_my_entity() const;
    inline pstring get_type() const {
        return type;
    }
    virtual bool set_num(
        const pstring &attribute,
        rational_t value);
    virtual bool get_num(
        const pstring &attribute,
        rational_t &value);
    virtual bool set_str(
        const pstring &attribute,
        const stringx &value);
    virtual bool get_str(
        const pstring &attribute,
        stringx &value);

protected:
    static int compare(const void *first, const void *second);
};

#endif
