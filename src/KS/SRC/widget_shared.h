#ifndef KELLY_DECOMP_WIDGET_SHARED_H
#define KELLY_DECOMP_WIDGET_SHARED_H

typedef float rational_t;
typedef float time_value_t;

class color;

class widget {
    char widget_state_to_flags[0x14];

protected:
    unsigned int flags;

private:
    char widget_state_after_flags[0x128];

public:
    virtual ~widget();
    virtual void show();
    virtual void hide();
    virtual void ignore_parent();
    virtual void obey_parent();
    virtual void ignore_parent_showing();
    virtual void obey_parent_showing();
    virtual void frame_advance(time_value_t time_inc);
    virtual void render();
    virtual void message_handler(
        unsigned int message,
        unsigned int overflow = 0,
        rational_t parm0 = 0,
        rational_t parm1 = 0);
    virtual void add_child(widget *child);
    virtual void flush();
    virtual void move_to(short x, short y);
    virtual void move_to(
        time_value_t wait,
        time_value_t duration,
        short x,
        short y);
    virtual void scale_to(rational_t horizontal, rational_t vertical);
    virtual void scale_to(
        time_value_t wait,
        time_value_t duration,
        rational_t horizontal,
        rational_t vertical);
    virtual void scale_to(rational_t scale);
    virtual void scale_to(
        time_value_t wait,
        time_value_t duration,
        rational_t scale);
    virtual void rotate_to(rational_t angle);
    virtual void rotate_to(
        time_value_t wait,
        time_value_t duration,
        rational_t angle);
    virtual void set_color(color value);
    virtual void set_color(color value[4]);
    virtual void set_color(
        time_value_t wait,
        time_value_t duration,
        color value);
    virtual void set_color(
        rational_t red,
        rational_t green,
        rational_t blue);
    virtual void fade_to(rational_t alpha);
    virtual void fade_to(
        time_value_t wait,
        time_value_t duration,
        rational_t alpha);
    virtual void set_subrect(int x0, int y0, int x1, int y1);
    virtual void set_origin(short x, short y);
    virtual void transform(rational_t value[2], color &result, int index);
    virtual rational_t get_width();
    virtual rational_t get_height();
    virtual void set_layer(int layer);
    virtual void update_pos();
    virtual void update_scale();
    virtual void update_rot();
    virtual void update_col();

    inline bool is_shown() const { return flags & 1; }
};

class menu_widget : public widget {
public:
    virtual void init();
    virtual void add_child(widget *child);
    virtual void show();
    virtual void message_handler(
        unsigned int message,
        unsigned int overflow = 0,
        rational_t parm0 = 0,
        rational_t parm1 = 0);
};

enum wevent_type_e {
    WEVENT_None,
    WEVENT_Color,
    WEVENT_Move,
    WEVENT_Rotate,
    WEVENT_Scale
};

class wevent {
public:
    time_value_t active_time_elapsed();

protected:
    wevent_type_e type;
    widget *owner;
    time_value_t wait_time;
    time_value_t duration;
    time_value_t elapsed;

public:
    virtual void do_wevent(rational_t lerp) = 0;
};

#endif
