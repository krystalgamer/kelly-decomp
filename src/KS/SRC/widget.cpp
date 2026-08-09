// widget definitions extracted by generated one-function shims.

// 0x0033E7D0 update_rot__6widget
#include "KS/SRC/widget.h"

extern "C" void fast_sin_cos_approx(
    float angle,
    float *sine,
    float *cosine)
    __asm__("fast_sin_cos_approx__FfPfT1");
__asm__(".equ fast_sin_cos_approx__FfPfT1, 0x001E2EC8");

void widget::update_rot()
{
    if (parent && !ignoring_parent())
        base_angle = parent->get_abs_angle();

    register float inherited_angle __asm__("$f1") =
        base_angle;
    register float local_angle __asm__("$f0") =
        angle;
    abs_angle = local_angle + inherited_angle;

    float cosine;
    float sine;
    fast_sin_cos_approx(abs_angle, &sine, &cosine);

    R[0][0] = cosine;
    R[0][1] = -sine;
    R[1][0] = sine;
    R[1][1] = cosine;

    widget_list_t::iterator child;
    for (child = children.begin();
         child != children.end();
         ++child)
        (*child)->update_rot();
}

// 0x0033E650 update_pos__6widget
#include "KS/SRC/widget.h"

void widget::update_pos()
{
    if (parent && !ignoring_parent())
    {
        base_x = parent->get_abs_x();
        base_y = parent->get_abs_y();
    }

    abs_x = x + base_x;
    abs_y = y + base_y;

    widget_list_t::iterator child;
    for (child = children.begin(); child != children.end(); ++child)
    {
        (*child)->update_pos();
    }
}

// 0x0033E710 update_scale__6widget
#include "KS/SRC/widget.h"

void widget::update_scale()
{
    if (parent && !ignoring_parent())
    {
        base_S[0] = parent->get_abs_scale(0);
        base_S[1] = parent->get_abs_scale(1);
    }

    abs_S[0] = S[0] * base_S[0];
    abs_S[1] = S[1] * base_S[1];

    widget_list_t::iterator child;
    for (child = children.begin(); child != children.end(); ++child)
    {
        (*child)->update_scale();
    }
}

// 0x0033F448 show__11menu_widget
#include "KS/SRC/widget.h"
__asm__(".equ show__6widget, 0x0033DDD0");
void menu_widget::show()
{
    if (!is_shown())
    {
        init();
        widget::show();
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}


// 0x0033F370 get_width__16menu_item_widget
#include "KS/SRC/widget.h"

float menu_item_widget::get_width() { return 100.0f; }

// 0x0033F380 get_height__16menu_item_widget
#include "KS/SRC/widget.h"

float menu_item_widget::get_height() { return 100.0f; }

// 0x0033F848 get_width__11menu_widget
#include "KS/SRC/widget.h"

float menu_widget::get_width() { return 100.0f; }

// 0x0033F858 get_height__11menu_widget
#include "KS/SRC/widget.h"

float menu_widget::get_height() { return 100.0f; }

// 0x0033EAD8 get_first_child__6widget
#include "KS/SRC/widget.h"

widget *widget::get_first_child()
{
    widget_list_t::node_type *sentinel = children._M_node;
    widget_list_t::node_type *first =
        (widget_list_t::node_type *)sentinel->_M_next;
    if (first != sentinel) {
        volatile widget_list_t::iterator retained(first);
        return first->_M_data;
    }
    return 0;
}

// 0x0033EDE8 rotate_to__6widgetf
#include "KS/SRC/widget.h"
void widget::rotate_to(float value) {
    angle = value;
    update_rot();
}

// 0x003419B0 update_pos__11vrep_widget
#include "KS/SRC/widget.h"
__asm__(".equ update_pos__6widget, 0x0033E650");
__asm__(".equ update_mat__11vrep_widget, 0x00341E60");

void vrep_widget::update_pos() {
    widget::update_pos();
    void update_vrep_matrix(vrep_widget *self)
        __asm__("update_mat__11vrep_widget");
    void (*update_matrix)(vrep_widget *) = update_vrep_matrix;
    update_matrix(this);
}

// 0x003419E0 update_scale__11vrep_widget
#include "KS/SRC/widget.h"
__asm__(".equ update_scale__6widget, 0x0033E710");
__asm__(".equ update_mat__11vrep_widget, 0x00341E60");

void vrep_widget::update_scale() {
    widget::update_scale();
    void update_vrep_matrix(vrep_widget *self)
        __asm__("update_mat__11vrep_widget");
    void (*update_matrix)(vrep_widget *) = update_vrep_matrix;
    update_matrix(this);
}

// 0x0033ED18 scale_to__6widgetff
#include "KS/SRC/widget.h"
void widget::scale_to(float horizontal, float vertical) {
    S[0] = horizontal;
    S[1] = vertical;
    update_scale();
}

// 0x0033F298 get_next_rhw_2d_val__6widget
#include "KS/SRC/widget.h"

__asm__(".equ _6widget$rhw_2d_layer, 0x0046B730");
__asm__(".equ _6widget$rhw_2d_val, 0x005A3EB0");

rational_t widget::get_next_rhw_2d_val()
{
    rational_t retval = rhw_2d_val[rhw_2d_layer];
    rhw_2d_val[rhw_2d_layer] += 1.0f;
    return retval;
}

// 0x00340810 set_rhw__11text_widgetf
#include "KS/SRC/widget.h"

__asm__(".equ _6widget$rhw_2d_layer, 0x0046B730");
__asm__(".equ _6widget$rhw_2d_val, 0x005A3EB0");

void text_widget::set_rhw(float value)
{
    rhw = value;
    widget::rhw_2d_val[rhw_2d_layer] -= 1.0f;
}

// 0x00341978 set_rotation__11vrep_widgetfff
#include "KS/SRC/widget.h"

void vrep_widget::set_rotation(float x, float y, float z)
{
    ax = x;
    ay = y;
    az = z;
    update_rot();
}

// 0x00341788 show__11vrep_widget
#include "KS/SRC/widget.h"

__asm__(".equ show__6widget, 0x0033DDD0");
void vrep_widget::show()
{
    widget::show();
    update_rot();
}

// 0x0033D898 do_wevent__13rotate_weventf
#include "KS/SRC/widget.h"

void rotate_wevent::do_wevent(float lerp)
{
    float current = owner->angle;
    owner->rotate_to(current + (angle - current) * lerp);
}

// 0x00342DD0 resize__9fluid_barff
#include "KS/SRC/widget.h"

__asm__(".equ resize__13bitmap_widgetff, 0x0033FBE0");
void fluid_bar::resize(float width, float height)
{
    this->width = width;
    this->height = height;
    if (bar_map) {
        bar_map->resize(this->width, this->height);
        update = true;
    }
}

// 0x0033F2C8 get_pc_z__6widgetf
typedef float rational_t;

const rational_t PROJ_NEAR_PLANE_D = 0.2f;

class widget {
public:
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
        NUM_RHW_LAYERS
    };

    static const rational_t rhw_layer_ranges[NUM_RHW_LAYERS][2];
    static rational_t get_pc_z(rational_t rhw);
};

__asm__(".equ _6widget$rhw_layer_ranges, 0x00501E10");

rational_t widget::get_pc_z(rational_t rhw)
{
    rational_t min_rhw = widget::rhw_layer_ranges[RHW0][0];
    rational_t max_rhw = widget::rhw_layer_ranges[RHW9][1];

    if (rhw > max_rhw)
        rhw = max_rhw;

    rational_t min_z = PROJ_NEAR_PLANE_D * 2;
    rational_t z_range = 0.999f - min_z;

    rational_t z =
        0.999f - (((rhw - min_rhw) / (max_rhw - min_rhw)) * z_range);
    return z;
}

// 0x0033D8D8 do_wevent__12scale_weventf
struct widget_vtable
{
    char padding[0x78];
    short adjustment;
    short reserved;
    void (*scale_to)(void *self, float horizontal, float vertical);
};

struct widget_layout
{
    char padding0[0x118];
    float scale[2];
    char padding1[0x20];
    widget_vtable *vtable;
};

class scale_wevent
{
    int type;
    widget_layout *owner;
    char padding[0x10];
    float sx;
    float sy;

public:
    void do_wevent(float lerp);
};

void scale_wevent::do_wevent(float lerp)
{
    widget_vtable *table = owner->vtable;
    table->scale_to(
        (char *)owner + table->adjustment,
        owner->scale[0] + (sx - owner->scale[0]) * lerp,
        owner->scale[1] + (sy - owner->scale[1]) * lerp
    );
}

// 0x0033FBE0 resize__13bitmap_widgetff
struct widget_vtable
{
    char padding[0x78];
    short adjustment;
    short reserved;
    void (*scale_to)(void *self, float horizontal, float vertical);
};

class bitmap_widget
{
    char padding0[0x14];
    unsigned int flags;
    char padding1[0x128];
    widget_vtable *vtable;
    float width;
    float height;

public:
    bool is_open() const { return flags & 2; }
    void resize(float new_width, float new_height);
};

void bitmap_widget::resize(float new_width, float new_height)
{
    if (!is_open())
        return;
    widget_vtable *table = vtable;
    table->scale_to(
        (char *)this + table->adjustment,
        new_width / width,
        new_height / height
    );
}

// 0x00341730 _$_11vrep_widget
extern "C" void nglReleaseMeshFile(const void *name)
    __asm__("nglReleaseMeshFile__FRC14nglFixedString");
extern "C" void WidgetDtor(void *self, int deleting)
    __asm__("_$_6widget");
extern const char vrep_widget_vtable[];

__asm__(".equ nglReleaseMeshFile__FRC14nglFixedString, 0x003A1968");
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ vrep_widget_vtable, 0x00504678");

struct vrep_widget_layout
{
    char padding[0x140];
    const void *vtable;
    void *mesh;
};

extern "C" void VrepWidgetDtor(void *self, int deleting)
    __asm__("_$_11vrep_widget");

void VrepWidgetDtor(void *self, int deleting)
{
    vrep_widget_layout *widget = (vrep_widget_layout *)self;
    widget->vtable = vrep_widget_vtable;
    if (widget->mesh)
        nglReleaseMeshFile((char *)widget->mesh + 0x10);
    WidgetDtor(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}

// 0x0033F318 select__16menu_item_widgetb
struct item_vtable {
    char padding[0x130]; short adjustment; short reserved;
    void (*deselect)(void *self, bool initial);
};
struct menu_item {
    char padding[0x140]; item_vtable *vtable;
    char padding2[0xc]; int selected;
};
struct menu_parent {
    char padding[8]; int type;
    char padding2[0x13c]; menu_item *selected_item;
};
struct menu_item_layout {
    char padding0[0xc]; menu_parent *parent;
    char padding1[0x140]; int selected;
};
class menu_item_widget {
public:
    void select(bool initial);
};
void menu_item_widget::select(bool initial) {
    menu_item_layout *item=(menu_item_layout *)this;
    item->selected=true;
    menu_parent *parent=item->parent;
    if (parent->type==5) {
        menu_item *old=parent->selected_item;
        parent->selected_item=(menu_item *)this;
        if (old && old!=(menu_item *)this) {
            item_vtable *table=old->vtable;
            table->deselect((char *)old+table->adjustment,initial);
        }
    }
}

// 0x0033EEA8 set_color__6widgetG5color
struct color { float r,g,b,a; };
struct update_vtable { char padding[288]; short adjustment; short reserved; void (*update)(void *); };
struct widget_layout { char padding[88]; color col[4]; char padding2[168]; update_vtable *vtable; };
extern "C" void set_widget_color(widget_layout *self, const color *value) __asm__("set_color__6widgetG5color");
void set_widget_color(widget_layout *self, const color *value)
{
    color *destination = self->col;
    for (int i=0;i<4;++i,++destination) {
        destination->r=value->r;
        destination->g=value->g;
        destination->b=value->b;
        destination->a=value->a;
    }
    update_vtable *table=self->vtable;
    table->update((char *)self + table->adjustment);
}

// 0x00340570 init__11text_widgetR7stringx
struct stringx;
struct typeface_def;
extern "C" void unload_typeface(typeface_def *) __asm__("unload__12typeface_def");
extern "C" void close_typeface(typeface_def *) __asm__("typeface_close__FP12typeface_def");
extern "C" typeface_def *open_typeface(stringx *) __asm__("typeface_open__FRC7stringx");
extern "C" void load_typeface(typeface_def *) __asm__("load__12typeface_def");
__asm__(".equ unload__12typeface_def,0x0033CAF0");
__asm__(".equ typeface_close__FP12typeface_def,0x0033D458");
__asm__(".equ typeface_open__FRC7stringx,0x0033D298");
__asm__(".equ load__12typeface_def,0x0033C6E8");
class text_widget { char padding[8]; int type; char padding2[312]; typeface_def *text_font; public: void init(stringx &typeface); };
void text_widget::init(stringx &typeface)
{
    if (text_font) {
        unload_typeface(text_font);
        close_typeface(text_font);
        text_font = 0;
    }
    type = 1;
    text_font = open_typeface(&typeface);
    load_typeface(text_font);
    __asm__ __volatile__("" : : : "memory");
}

// 0x0033EF10 set_color__6widgetP5color
struct color{float r,g,b,a;inline color&operator=(const color&o){r=o.r;g=o.g;b=o.b;a=o.a;return *this;}};struct widget_vtable{char padding[288];short adjustment;short reserved;void(*update_col)(void*);};struct widget_layout{char padding[88];color col[4];char p2[168];widget_vtable*vtable;};extern "C" void set_colors(widget_layout*self,color*c) __asm__("set_color__6widgetP5color");void set_colors(widget_layout*self,color*c){for(int i=0;i<4;++i)self->col[i]=c[i];widget_vtable*t=self->vtable;t->update_col((char*)self+t->adjustment);}

// 0x003405D8 _$_11text_widget
extern "C" void unload(void*)__asm__("unload__12typeface_def");extern "C" void close_typeface(void*)__asm__("typeface_close__FP12typeface_def");extern "C" void string_dtor(void*,int)__asm__("_$_7stringx");extern "C" void widget_dtor(void*,int)__asm__("_$_6widget");extern const char text_vtable[];__asm__(".equ unload__12typeface_def,0x0033CAF0");__asm__(".equ typeface_close__FP12typeface_def,0x0033D458");__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ _$_6widget,0x0033DC68");__asm__(".equ text_vtable,0x00504900");struct text_widget_layout{char pad[320];const void*vtable;void*text_font;char prelocalized[8];char tout[8];};extern "C" void destroy(text_widget_layout*self,int deleting)__asm__("_$_11text_widget");void destroy(text_widget_layout*self,int deleting){self->vtable=text_vtable;if(self->text_font){unload(self->text_font);close_typeface(self->text_font);self->text_font=0;}string_dtor(self->tout,2);string_dtor(self->prelocalized,2);widget_dtor(self,deleting);KELLY_DECOMP_COMPILER_BARRIER();}

// 0x003414D0 get_width__C17text_block_widget
class widget;struct Node{Node*next;Node*prev;widget*value;};struct WidthVtable{char pad[296];short adjust;short zero;float(*get_width)(void*);};class widget{public:char pad0[16];Node*children;unsigned flags;char pad1[296];WidthVtable*vtable;};class text_block_widget:public widget{public:float get_width()const __asm__("get_width__C17text_block_widget");};float text_block_widget::get_width()const{register float widest asm("$f20")=0.0f;register Node*header asm("$2")=children;register Node*it asm("$16")=header->next;register Node*end asm("$17")=header;for(;it!=end;it=it->next){widget*w=it->value;WidthVtable*v=w->vtable;float width=v->get_width((char*)w+v->adjust);if(width>widest)widest=width;}return widest;}

// 0x00340B48 _$_17text_block_widget
extern "C" void unload(void*)__asm__("unload__12typeface_def");extern "C" void close_typeface(void*)__asm__("typeface_close__FP12typeface_def");extern "C" void string_dtor(void*,int)__asm__("_$_7stringx");extern "C" void widget_dtor(void*,int)__asm__("_$_6widget");extern const char block_vtable[];__asm__(".equ unload__12typeface_def,0x0033CAF0");__asm__(".equ typeface_close__FP12typeface_def,0x0033D458");__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ _$_6widget,0x0033DC68");__asm__(".equ block_vtable,0x005047B0");struct text_block_layout{char pad0[320];const void*vtable;char pad1[8];char typeface[8];char pad2[8];char break_substring[8];char text[8];char pad3[24];void*text_font;};extern "C" void destroy(text_block_layout*self,int deleting)__asm__("_$_17text_block_widget");void destroy(text_block_layout*self,int deleting){self->vtable=block_vtable;if(self->text_font){unload(self->text_font);close_typeface(self->text_font);self->text_font=0;}string_dtor(self->text,2);string_dtor(self->break_substring,2);string_dtor(self->typeface,2);widget_dtor(self,deleting);asm volatile("");}

// 0x003417C0 frame_advance__11vrep_widgetf
extern "C" float fmodf(float,float);struct Vtable{char pad[280];short adjust;short z;void(*update_rot)(void*);};struct vrep_widget{char pad0[60];float angle;char pad1[256];Vtable*vtable;char pad2[32];float rps;void frame_advance(float)__asm__("frame_advance__11vrep_widgetf");};extern "C" void base_advance(vrep_widget*,float)__asm__("frame_advance__6widgetf");__asm__(".equ fmodf,0x003C68C8");__asm__(".equ frame_advance__6widgetf,0x0033DF70");void vrep_widget::frame_advance(float dt){if(rps){angle+=rps*dt;angle=fmodf(angle,6.2831855f);Vtable*v=vtable;v->update_rot((char*)this+v->adjust);}base_advance(this,dt);asm volatile("");}

// 0x0033EE18 rotate_to__6widgetfff
struct widget{};struct Event{int type;void*owner;float wait,duration;int field16;void*vtable;float angle;};extern "C" void*opnew(unsigned,unsigned,const char*,int)__asm__("__nw__FUiUiPCci");extern void*vtable;extern const char file[];extern "C" void add(widget*,Event*)__asm__("add_wevent__6widgetP6wevent");__asm__(".equ __nw__FUiUiPCci,0x002AC578");__asm__(".equ vtable,0x00504F68");__asm__(".equ file,0x00501EE8");__asm__(".equ add_wevent__6widgetP6wevent,0x0033E310");extern "C" void rotate(widget*,float,float,float)__asm__("rotate_to__6widgetfff");void rotate(widget*self,float wait,float duration,float angle){Event*e=(Event*)opnew(28,0,file,0);register int type asm("$3")=3;register void*vt asm("$6")=&vtable;register widget*out asm("$4")=self;asm volatile("" : "+r"(out));e->wait=wait;register Event*arg asm("$5")=e;asm volatile("" : "+r"(arg));e->duration=duration;e->angle=angle;e->owner=self;e->type=type;e->vtable=vt;e->field16=0;add(out,arg);asm volatile("");}

// 0x0033ED48 scale_to__6widgetffff
struct widget{};struct Event{int type;void*owner;float wait,duration;int field16;void*vtable;float hs,vs;};extern "C" void*opnew(unsigned,unsigned,const char*,int)__asm__("__nw__FUiUiPCci");extern void*vtable;extern const char file[];extern "C" void add(widget*,Event*)__asm__("add_wevent__6widgetP6wevent");asm(".equ __nw__FUiUiPCci,0x002AC578");asm(".equ vtable,0x00504F50");asm(".equ file,0x00501EB0");asm(".equ add_wevent__6widgetP6wevent,0x0033E310");extern "C" void scale(widget*,float,float,float,float)__asm__("scale_to__6widgetffff");void scale(widget*self,float wait,float duration,float hs,float vs){Event*e=(Event*)opnew(32,0,file,0);register int type asm("$3")=4;register void*vt asm("$6")=&vtable;register widget*out asm("$4")=self;asm volatile("" : "+r"(out));e->wait=wait;register Event*arg asm("$5")=e;asm volatile("" : "+r"(arg));e->duration=duration;e->hs=hs;e->vs=vs;e->owner=self;e->type=type;e->vtable=vt;e->field16=0;add(out,arg);asm volatile("");}

// 0x0033E1A8 message_handler__6widgetUiUiff
#include "KS/SRC/widget.h"

// Preserve the released GNU 2 list iterator copy ABI.
// Normalize the shipped iterator stack-slot and loop scheduling in the EE shim.
void widget::message_handler(
    unsigned int message,
    unsigned int overflow,
    rational_t parm0,
    rational_t parm1)
{
    widget_list_t::iterator child = children.begin();
    if (child != children.end())
        do {
            if ((*child)->is_shown())
                (*child)->message_handler(
                    message, overflow, parm0, parm1);
            ++child;
        } while (child != children.end());
}

// 0x003428E8 __10bar_widgetPCcP6widgetssQ26widget12widget_dir_e
#include "KS/SRC/widget.h"

// Use the released bar-widget and base-widget declarations.
bar_widget::bar_widget(
    const char *widget_name,
    widget *parent,
    short x,
    short y,
    widget_dir_e direction)
  : widget(widget_name, parent, x, y),
    dir(direction),
    val(-1.0f),
    full_val(1.0f)
{
    x_fac = y_fac = 0;

    if (dir == WDIR_Left)
        x_fac = -1;
    else if (dir == WDIR_Right)
        x_fac = 1;
    else if (dir == WDIR_Up)
        y_fac = 1;
    else if (dir == WDIR_Down)
        y_fac = -1;
}

// 0x0033D7A0 do_wevent__12color_weventf
#pragma interface

typedef float rational_t;
typedef float time_value_t;
typedef unsigned int message_id_t;

class color
{
public:
  rational_t r, g, b, a;

  color() {}
  color( const color& c ) : r(c.r), g(c.g), b(c.b), a(c.a) {}
  color& operator=( const color& c )
  {
    r = c.r;
    g = c.g;
    b = c.b;
    a = c.a;
    return *this;
  }
};

class widget
{
  char padding0[0x58];

public:
  color col[4];

private:
  char padding1[0xA8];

public:
  virtual ~widget();
  virtual void show();
  virtual void hide();
  virtual void ignore_parent();
  virtual void obey_parent();
  virtual void ignore_parent_showing();
  virtual void obey_parent_showing();
  virtual void frame_advance( time_value_t time_inc );
  virtual void render();
  virtual void message_handler(
    message_id_t message,
    message_id_t overflow = 0,
    rational_t parm0 = 0,
    rational_t parm1 = 0
  );
  virtual void add_child( widget *child );
  virtual void flush();
  virtual void move_to( short x, short y );
  virtual void move_to( time_value_t wt, time_value_t d, short x, short y );
  virtual void scale_to( rational_t hs, rational_t vs );
  virtual void scale_to(
    time_value_t wt,
    time_value_t d,
    rational_t hs,
    rational_t vs
  );
  virtual void scale_to( rational_t s );
  virtual void scale_to( time_value_t wt, time_value_t d, rational_t s );
  virtual void rotate_to( rational_t a );
  virtual void rotate_to( time_value_t wt, time_value_t d, rational_t a );
  virtual void set_color( color c );
};

class wevent
{
protected:
  int type;
  widget *owner;
  time_value_t wait_time;
  time_value_t duration;
  time_value_t elapsed;

public:
  virtual void do_wevent( rational_t ) = 0;
};

class color_wevent: public wevent
{
public:
  virtual void do_wevent( rational_t );

protected:
  color mycolor;
};

void color_wevent::do_wevent( rational_t lerp )
{
  // blend the color toward the destination color based on the elapsed time
  for ( int i = 0; i < 4; ++i )
  {
    color newcol;
    newcol.r = owner->col[i].r + (mycolor.r - owner->col[i].r) * lerp;
    newcol.g = owner->col[i].g + (mycolor.g - owner->col[i].g) * lerp;
    newcol.b = owner->col[i].b + (mycolor.b - owner->col[i].b) * lerp;
    newcol.a = owner->col[i].a + (mycolor.a - owner->col[i].a) * lerp;
    owner->set_color( newcol );
  }
}

// Source implementation boundary.
// 0x00360300 ignore_parent__6widget
#include "KS/SRC/widget.h"

void widget::ignore_parent() { set_flag(4, true); }

// 0x00360310 obey_parent__6widget
#include "KS/SRC/widget.h"

void widget::obey_parent() { set_flag(4, false); }

// 0x00360328 ignore_parent_showing__6widget
#include "KS/SRC/widget.h"

void widget::ignore_parent_showing() { set_flag(8, true); }

// 0x00360338 obey_parent_showing__6widget
#include "KS/SRC/widget.h"

void widget::obey_parent_showing() { set_flag(8, false); }

// 0x00360438 set_origin__6widgetss
#include "KS/SRC/widget.h"

void widget::set_origin(short x, short y) {
    orig_x = x;
    orig_y = y;
}

// 0x00360450 get_width__6widget
#include "KS/SRC/widget.h"

float widget::get_width() { return 1.0f; }

// 0x00360460 get_height__6widget
#include "KS/SRC/widget.h"

float widget::get_height() { return 1.0f; }

// 0x00360470 set_layer__6widgetQ26widget11rhw_layer_e
#include "KS/SRC/widget.h"

void widget::set_layer(rhw_layer_e layer) {
}

// 0x00360558 deselect__16menu_item_widgetb
#include "KS/SRC/widget.h"

void menu_item_widget::deselect(bool initial) {
    selected = false;
}

// 0x00360560 set_skip__16menu_item_widgetb
#include "KS/SRC/widget.h"

void menu_item_widget::set_skip(bool value) {
    skip = value;
}

// 0x00360638 get_sel_item__C11menu_widget
#include "KS/SRC/widget.h"

menu_item_widget* menu_widget::get_sel_item() const {
    return sel_item;
}

// 0x00360640 get_num_items__C11menu_widget
#include "KS/SRC/widget.h"

int menu_widget::get_num_items() const {
    return num_items;
}

// 0x003607B0 get_width__13bitmap_widget
#include "KS/SRC/widget.h"

float bitmap_widget::get_width() {
    return width;
}

// 0x003607B8 get_height__13bitmap_widget
#include "KS/SRC/widget.h"

float bitmap_widget::get_height() {
    return height;
}

// 0x00360A18 get_width__11vrep_widget
#include "KS/SRC/widget.h"

float vrep_widget::get_width() {
    return screen_radius;
}

// 0x00360A20 get_height__11vrep_widget
#include "KS/SRC/widget.h"

float vrep_widget::get_height() {
    return screen_radius;
}

// 0x00360B68 get_width__10box_widget
#include "KS/SRC/widget.h"

float box_widget::get_width() {
    return width;
}

// 0x00360B70 get_height__10box_widget
#include "KS/SRC/widget.h"

float box_widget::get_height() {
    return height;
}

// 0x00360D40 get_width__9fluid_bar
#include "KS/SRC/widget.h"

float fluid_bar::get_width() {
    return width;
}

// 0x00360D48 get_height__9fluid_bar
#include "KS/SRC/widget.h"

float fluid_bar::get_height() {
    return height;
}


// 0x00360368 scale_to__6widgetf
#include "KS/SRC/widget.h"

void widget::scale_to(float scale) {
    scale_to(scale, scale);
}

// 0x00360398 scale_to__6widgetfff
#include "KS/SRC/widget.h"

void widget::scale_to(float wait, float duration, float scale) {
    scale_to(wait, duration, scale, scale);
}

// 0x003606E0 scale_to__13bitmap_widgetf
#include "KS/SRC/widget.h"

void bitmap_widget::scale_to(float scale) {
    scale_to(scale, scale);
}

// 0x00360608 add_child__11menu_widgetP6widget
#include "KS/SRC/widget.h"

__asm__(".equ add_child__6widgetP6widget, 0x0033E270");

void menu_widget::add_child(widget *child)
{
    widget::add_child(child);
    ++num_items;
}

// 0x003602B8 __tf6widget
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_003602B8_type[] __asm__("__ti6widget");
extern "C" char rtti_003602B8_name[] __asm__("rtti_003602B8_type_name");
__asm__(".equ __ti6widget, 0x00512148");
__asm__(".equ rtti_003602B8_type_name, 0x00505788");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_003602B8() __asm__("__tf6widget");
void **rtti_003602B8()
{
    if (!rtti_003602B8_type[0])
        __rtti_user(rtti_003602B8_type, rtti_003602B8_name);
    return rtti_003602B8_type;
}

// 0x003617C8 __tf6wevent
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *wevent_type[] __asm__("__ti6wevent");
extern "C" char wevent_name[];
__asm__(".equ __ti6wevent, 0x00512200");
__asm__(".equ wevent_name, 0x005070A8");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **wevent_rtti() __asm__("__tf6wevent");
void **wevent_rtti()
{
    if (!wevent_type[0])
        __rtti_user(wevent_type, wevent_name);
    return wevent_type;
}

// 0x00360168 __tf11move_wevent
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00360168()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_00360168[]
    __asm__("__ti11move_wevent");
extern "C" const char rtti_name_00360168[];
extern "C" void *rtti_base_type_00360168[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti11move_wevent, 0x007821F8");
__asm__(".equ rtti_name_00360168, 0x00505748");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_00360168() __asm__("__tf11move_wevent");

void **Rtti_00360168()
{
    if (!rtti_type_00360168[0]) {
        RttiBase_00360168();
        __rtti_si(rtti_type_00360168, rtti_name_00360168, rtti_base_type_00360168);
    }
    return rtti_type_00360168;
}

// 0x003601C0 __tf12color_wevent
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_003601C0()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_003601C0[]
    __asm__("__ti12color_wevent");
extern "C" const char rtti_name_003601C0[];
extern "C" void *rtti_base_type_003601C0[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti12color_wevent, 0x00782208");
__asm__(".equ rtti_name_003601C0, 0x00505758");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_003601C0() __asm__("__tf12color_wevent");

void **Rtti_003601C0()
{
    if (!rtti_type_003601C0[0]) {
        RttiBase_003601C0();
        __rtti_si(rtti_type_003601C0, rtti_name_003601C0, rtti_base_type_003601C0);
    }
    return rtti_type_003601C0;
}

// 0x00360210 __tf13rotate_wevent
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00360210()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_00360210[]
    __asm__("__ti13rotate_wevent");
extern "C" const char rtti_name_00360210[];
extern "C" void *rtti_base_type_00360210[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti13rotate_wevent, 0x00782218");
__asm__(".equ rtti_name_00360210, 0x00505768");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_00360210() __asm__("__tf13rotate_wevent");

void **Rtti_00360210()
{
    if (!rtti_type_00360210[0]) {
        RttiBase_00360210();
        __rtti_si(rtti_type_00360210, rtti_name_00360210, rtti_base_type_00360210);
    }
    return rtti_type_00360210;
}

// 0x00360260 __tf12scale_wevent
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_00360260()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_00360260[]
    __asm__("__ti12scale_wevent");
extern "C" const char rtti_name_00360260[];
extern "C" void *rtti_base_type_00360260[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti12scale_wevent, 0x00782228");
__asm__(".equ rtti_name_00360260, 0x00505778");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_00360260() __asm__("__tf12scale_wevent");

void **Rtti_00360260()
{
    if (!rtti_type_00360260[0]) {
        RttiBase_00360260();
        __rtti_si(rtti_type_00360260, rtti_name_00360260, rtti_base_type_00360260);
    }
    return rtti_type_00360260;
}

// 0x00360CC0 _$_9fluid_bar
extern "C" void destroy_string(void *,int)
    __asm__("_$_7stringx");
extern "C" void destroy_widget(void *,int)
    __asm__("_$_6widget");
extern const char fluid_vtable[];
extern const char widget_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ fluid_vtable, 0x005041B0");
__asm__(".equ widget_vtable, 0x005042E0");
struct fluid_layout {
    char padding[0x140];
    const void *vtable;
    char padding2[0x14];
    char name[8];
};
extern "C" void destroy_fluid(
    fluid_layout *self,int flags
) __asm__("_$_9fluid_bar");
void destroy_fluid(fluid_layout *self,int flags) {
    self->vtable=fluid_vtable;
    destroy_string(self->name,2);
    self->vtable=widget_vtable;
    destroy_widget(self,flags);
    __asm__ __volatile__("" : : : "memory");
}
