#ifndef INTERFACE_H
#define INTERFACE_H

#include "KS/SRC/widget.h"

class status_widget;

class interface_widget : public widget {
protected:
    bitmap_widget* cur_reticle;
    status_widget* my_status_widget;

public:
    interface_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y);
    virtual ~interface_widget();
    virtual void show();
    virtual void frame_advance(float time_inc);
    virtual void render();
};

__asm__(".equ show__6widget, 0x0033DDD0");
__asm__(".equ render__6widget, 0x0033E128");

#endif
