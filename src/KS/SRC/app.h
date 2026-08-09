#ifndef APP_H
#define APP_H

#pragma interface

#include "KS/SRC/signals.h"
#include "KS/SRC/singleton.h"

class game;
class instance_render_info;

class app : public singleton, public signaller {
private:
    static singleton_ptr<app> instance;
    game *the_game;
    instance_render_info *viri;

public:
    app();
    virtual ~app();

    static inline app *inst() { return instance; }
    static inline void delete_inst()
    {
        if (instance) {
            delete instance;
            instance = 0;
        }
    }

    static void cleanup_stl_memory_dregs();
    game *get_game() { return the_game; }
    instance_render_info *get_viri();
    void set_viri(instance_render_info *value);
    virtual const char *get_signal_name(unsigned int index) const;
};

#endif
