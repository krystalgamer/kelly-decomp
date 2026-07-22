#ifndef KELLY_DECOMP_INTERFACE_SHARED_H
#define KELLY_DECOMP_INTERFACE_SHARED_H

class widget {
    char widget_data[0x140];

public:
    virtual ~widget();
    virtual void show();
    virtual void hide();
    virtual void ignore_parent();
    virtual void obey_parent();
    virtual void ignore_parent_showing();
    virtual void obey_parent_showing();
    virtual void frame_advance(float time_inc);
    virtual void render();
};

class bitmap_widget : public widget {
};

class status_widget;

class interface_widget : public widget {
protected:
    bitmap_widget* cur_reticle;
    status_widget* my_status_widget;

public:
    virtual ~interface_widget();
    virtual void show();
    virtual void frame_advance(float time_inc);
    virtual void render();
};

__asm__(".equ show__6widget, 0x0033DDD0");
__asm__(".equ render__6widget, 0x0033E128");

#endif
