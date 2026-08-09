#ifndef WIDGET_H
#define WIDGET_H

#pragma interface

#include "KS/SRC/color.h"
#include "KS/SRC/rect.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_list.h"

typedef float rational_t;
typedef float time_value_t;

class widget;
class wevent;

typedef list<widget *> widget_list_t;
typedef list<wevent *> wevent_list_t;

class widget {
public:
    enum widget_type_e {
        WTYPE_Bitmap,
        WTYPE_Text,
        WTYPE_TextBlock,
        WTYPE_Vrep,
        WTYPE_Entity,
        WTYPE_Menu,
        WTYPE_HelpLine,
        WTYPE_HelpGroup,
        WTYPE_PDAPage,
        WTYPE_Other
    };

    enum widget_dir_e {
        WDIR_Left,
        WDIR_Right,
        WDIR_Up,
        WDIR_Down
    };

    enum widget_state_e {
        WSTATE_None,
        WSTATE_Show,
        WSTATE_Hide
    };

    enum rhw_layer_e {
        RHW0,
        RHW1,
        RHW2,
        RHW3,
        RHW4,
        RHW5,
        RHW6,
        RHW7,
        RHW8,
        RHW9,
        RHW_OVER_PFE1,
        RHW_OVER_PFE2,
        NUM_RHW_LAYERS
    };

    inline widget() {}
    widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y);
    virtual ~widget();
    inline void set_flag(unsigned int flag, bool enabled) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
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
    virtual void set_layer(rhw_layer_e layer);
    virtual void update_pos();
    virtual void update_scale();
    virtual void update_rot();
    virtual void update_col();
    widget *get_first_child();
    static rational_t get_next_rhw_2d_val();
    static rhw_layer_e rhw_2d_layer;
    static rational_t rhw_2d_val[NUM_RHW_LAYERS];

    inline bool is_shown() const { return flags & 1; }
    inline bool ignoring_parent() const { return flags & 4; }
    inline short get_abs_x() const { return abs_x; }
    inline short get_abs_y() const { return abs_y; }
    inline rational_t get_abs_angle() const { return abs_angle; }
    inline rational_t get_abs_scale(int index) const {
        return abs_S[index];
    }

protected:
    stringx widget_name;
    widget_type_e type;
    widget *parent;
    widget_list_t children;
    unsigned int flags;
    wevent_list_t wevent_run_list;
    bool linear_animation;
    bool use_proj_matrix;
    widget_state_e next_state;
    time_value_t state_wait_time;
    short x;
    short y;
    short abs_x;
    short abs_y;
    short base_x;
    short base_y;
    short orig_x;
    short orig_y;
    rational_t angle;
    rational_t abs_angle;
    rational_t base_angle;
    rational_t R[2][2];
    color col[4];
    color abs_col[4];
    color base_col[4];
    rational_t S[2];
    rational_t abs_S[2];
    rational_t base_S[2];
    rectf subrect;
};

class bar_widget : public widget {
protected:
    widget_dir_e dir;
    signed char x_fac;
    signed char y_fac;
    rational_t val;
    rational_t full_val;

public:
    bar_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y,
        widget_dir_e direction);
    virtual ~bar_widget();
};

class menu_item_widget;

class menu_widget : public widget {
    int num_items;
    menu_item_widget *sel_item;
    int default_sel_index;
    unsigned int to_prev;
    unsigned int to_next;
    bool change_made;

public:
    menu_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y,
        unsigned int to_prev,
        unsigned int to_next);
    virtual ~menu_widget();
    virtual void init();
    virtual void add_child(widget *child);
    virtual void show();
    virtual void message_handler(
        unsigned int message,
        unsigned int overflow = 0,
        rational_t parm0 = 0,
        rational_t parm1 = 0);
    virtual menu_item_widget *get_sel_item() const;
    virtual int get_num_items() const;
    virtual rational_t get_width();
    virtual rational_t get_height();
};

class menu_item_widget : public widget {
    int index;
    stringx item_desc;
    bool selected;
    bool skip;
    unsigned char subtype;

public:
    virtual void deselect(bool initial);
    virtual void set_skip(bool value);
    virtual rational_t get_width();
    virtual rational_t get_height();
};

class text_widget : public widget {
public:
    virtual ~text_widget();
    virtual void show();
    virtual void hide();
    virtual void frame_advance(time_value_t time_inc);
    virtual void flush();
};

class bitmap_widget : public widget {
    rational_t width;
    rational_t height;

public:
    virtual void scale_to(
        time_value_t wait,
        time_value_t duration,
        rational_t horizontal,
        rational_t vertical);
    virtual void scale_to(
        time_value_t wait,
        time_value_t duration,
        rational_t scale);
    void flip_horiz();
    void flip_vert();
    virtual rational_t get_width();
    virtual rational_t get_height();
};

class box_widget : public widget {
    bitmap_widget *corner[4];
    bitmap_widget *side[4];
    rational_t width;
    rational_t height;
    rational_t width_thickness;
    rational_t height_thickness;

public:
    box_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y,
        rational_t width,
        rational_t height,
        const stringx &corner_name,
        const stringx &side_name,
        rational_t width_thickness,
        rational_t height_thickness);
    virtual ~box_widget();
    virtual void resize(
        rational_t width,
        rational_t height,
        rational_t width_thickness = 2.0f,
        rational_t height_thickness = 2.0f);
    virtual rational_t get_width();
    virtual rational_t get_height();
};

class background_widget : public widget {
public:
    background_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y,
        const stringx &file_prefix);
    virtual ~background_widget();
};

class layout_widget : public widget {
public:
    layout_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y);
    virtual ~layout_widget();
    virtual void frame_advance(time_value_t time_inc);

protected:
    void update_text();
    void update_position(short x, short y);
    void update_rotation(short x, short y, short z);
    bitmap_widget *bg;
    text_widget *name;
    text_widget *pos;
    text_widget *abs_pos;
    text_widget *x_angle;
    text_widget *y_angle;
    text_widget *z_angle;
    widget *cur_widget;
};

class fluid_bar : public bar_widget {
    bitmap_widget *bar_map;
    stringx name;
    rational_t width;
    rational_t height;

public:
    fluid_bar(
        const char *widget_name,
        widget *parent,
        short x,
        short y,
        widget_dir_e direction,
        rational_t width,
        rational_t height,
        const stringx &name);
    virtual ~fluid_bar();
    virtual rational_t get_width();
    virtual rational_t get_height();
};

class vrep_widget : public widget {
    void *vrep;
    rational_t screen_radius;

public:
    virtual ~vrep_widget();
    virtual rational_t get_width();
    virtual rational_t get_height();
    virtual void update_pos();
    virtual void update_scale();

protected:
    void update_mat();
};

enum wevent_type_e {
    WEVENT_None,
    WEVENT_Color,
    WEVENT_Move,
    WEVENT_Rotate,
    WEVENT_Scale
};

__asm__(".equ __6widgetPCcP6widgetss, 0x0033D990");
__asm__(".equ _vt$10bar_widget, 0x005042E0");

class wevent {
public:
    time_value_t active_time_elapsed();
    time_value_t total_time_left();

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
