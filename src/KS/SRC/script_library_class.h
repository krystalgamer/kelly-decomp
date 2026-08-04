#ifndef SCRIPT_LIBRARY_CLASS_H
#define SCRIPT_LIBRARY_CLASS_H

#pragma interface

#include "KS/SRC/stringx.h"
#include "KS/SRC/vm_stack.h"
#include "g++-2/stl_set.h"

class chunk_file;
class script_object;

extern "C" int strcmp(const char *left, const char *right);

class script_library_class {
public:
    class function {
    public:
        enum entry_t {
            FIRST_ENTRY,
            RECALL_ENTRY
        };

    protected:
        char *name;

    public:
        function(script_library_class *owner, const char *name);
        explicit function(const char *name);

    protected:
        // Some reconstructed derived declarations still omit their source ctor.
        inline function() {}
        explicit function(int dummy);
        explicit function(const stringx &name);
        virtual ~function();

    public:
        inline const char *get_name() const { return name; }
        virtual bool operator()(vm_stack &stack, entry_t entry);

        friend class script_library_class;
    };

    struct function_cptr_less {
        char state;
        inline function_cptr_less() : state(0) {}
        inline bool operator()(
            const function *left,
            const function *right) const
        {
            return strcmp(
                left->get_name(),
                right->get_name()) < 0;
        }
    };

    typedef set<const function *, function_cptr_less>
        function_list;

protected:
    stringx name;
    int size;
    const char *parent_name;
    const script_library_class *parent;
    function_list funcs;

public:
    script_library_class(
        const char *name,
        int size,
        const char *parent = 0);
    virtual ~script_library_class();

protected:
    script_library_class();

public:
    inline const stringx &get_name() const { return name; }
    inline int get_size() const { return size; }
    inline const script_library_class *get_parent() const {
        return parent;
    }
    void add(const function *value);
    const function *find(const char *name) const;
    inline const function *find(const stringx &name) const {
        return find(name.c_str());
    }
    virtual unsigned int find_instance(
        const stringx &name) const;
    virtual void read_value(chunk_file &file, char *buffer);
    virtual void purge();
};

class slf_allow_suspend_thread_t {
public:
    struct parms_t {
        vm_num_t t;
    };

    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry);
};

class slf_suspend_all_ai_t : public script_library_class::function {
public:
    slf_suspend_all_ai_t(const char *name);
    virtual ~slf_suspend_all_ai_t();
    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_unsuspend_all_ai_t : public script_library_class::function {
public:
    slf_unsuspend_all_ai_t(const char *name);
    virtual ~slf_unsuspend_all_ai_t();
    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slc_num_t : public script_library_class {
public:
    slc_num_t(const char *name, int size, const char *parent);
    virtual void read_value(chunk_file &file, char *buffer);
};

#define DECLARE_SCRIPT_LIBRARY_STUB(name) \
    class name { \
    public: \
        bool operator()( \
            vm_stack &stack, \
            script_library_class::function::entry_t entry); \
    }

DECLARE_SCRIPT_LIBRARY_STUB(slf_localize_thread_to_character_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_post_message2_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_post_message_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_add_debug_sphere_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_clear_debug_spheres_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_letterbox_cout_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_freeze_universe_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_activate_boss_bar_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_give_color_clue_t);
DECLARE_SCRIPT_LIBRARY_STUB(slf_inc_score_t);

#undef DECLARE_SCRIPT_LIBRARY_STUB

#define SLF_PARMS \
    stack.pop(sizeof(parms_t)); \
    parms_t *parms = (parms_t *)stack.get_SP()
#define SLF_DONE return true

#endif
