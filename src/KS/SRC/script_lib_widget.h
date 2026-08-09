#ifndef SCRIPT_LIB_WIDGET_H
#define SCRIPT_LIB_WIDGET_H

#pragma interface

#include "KS/SRC/script_library_class.h"
#include "KS/SRC/widget_script.h"

class slf_timer_widget_freeze_t :
    public script_library_class::function {
public:
    struct parms_t {
        timer_widget *me;
    };

    slf_timer_widget_freeze_t(
        script_library_class *owner,
        const char *name);
    virtual ~slf_timer_widget_freeze_t();
    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_timer_widget_run_t :
    public script_library_class::function {
public:
    struct parms_t {
        timer_widget *me;
    };

    slf_timer_widget_run_t(
        script_library_class *owner,
        const char *name);
    virtual ~slf_timer_widget_run_t();
    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_timer_widget_set_time_left_t :
    public script_library_class::function {
public:
    struct parms_t {
        timer_widget *me;
        vm_num_t value;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_timer_widget_inc_time_left_t :
    public script_library_class::function {
public:
    struct parms_t {
        timer_widget *me;
        vm_num_t value;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_timer_widget_clear_functions_t :
    public script_library_class::function {
public:
    struct parms_t {
        timer_widget *me;
        vm_num_t start;
        vm_num_t end;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_widget_show_t :
    public script_library_class::function {
public:
    struct parms_t {
        widget *me;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_widget_hide_t :
    public script_library_class::function {
public:
    struct parms_t {
        widget *me;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_text_block_widget_set_text_t :
    public script_library_class::function {
public:
    struct parms_t {
        text_block_widget *me;
        vm_str_t text;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_fluid_bar_widget_set_fill_rate_t :
    public script_library_class::function {
public:
    struct parms_t {
        fluid_bar *me;
        vm_num_t value;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_fluid_bar_widget_set_empty_rate_t :
    public script_library_class::function {
public:
    struct parms_t {
        fluid_bar *me;
        vm_num_t value;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_bitmap_widget_flip_horiz_t :
    public script_library_class::function {
public:
    struct parms_t {
        bitmap_widget *me;
    };

    slf_bitmap_widget_flip_horiz_t(
        script_library_class *owner,
        const char *name);
    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_bitmap_widget_flip_vert_t :
    public script_library_class::function {
public:
    struct parms_t {
        bitmap_widget *me;
    };

    slf_bitmap_widget_flip_vert_t(
        script_library_class *owner,
        const char *name);
    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif

// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0032B628)
// 0x0032B628 __tf12slc_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B628()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_0032B628[]
    __asm__("__ti12slc_widget_t");
extern "C" const char rtti_name_0032B628[];
extern "C" void *rtti_base_type_0032B628[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti12slc_widget_t, 0x005A4C80");
__asm__(".equ rtti_name_0032B628, 0x0050FA98");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_0032B628() __asm__("__tf12slc_widget_t");

void **Rtti_0032B628()
{
    if (!rtti_type_0032B628[0]) {
        RttiBase_0032B628();
        __rtti_si(rtti_type_0032B628, rtti_name_0032B628, rtti_base_type_0032B628);
    }
    return rtti_type_0032B628;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B698)
// 0x0032B698 __tf18slc_timer_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B698()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_0032B698[]
    __asm__("__ti18slc_timer_widget_t");
extern "C" const char rtti_name_0032B698[];
extern "C" void *rtti_base_type_0032B698[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti18slc_timer_widget_t, 0x005A4C90");
__asm__(".equ rtti_name_0032B698, 0x0050FAA8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_0032B698() __asm__("__tf18slc_timer_widget_t");

void **Rtti_0032B698()
{
    if (!rtti_type_0032B698[0]) {
        RttiBase_0032B698();
        __rtti_si(rtti_type_0032B698, rtti_name_0032B698, rtti_base_type_0032B698);
    }
    return rtti_type_0032B698;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B708)
// 0x0032B708 __tf23slc_text_block_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B708()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_0032B708[]
    __asm__("__ti23slc_text_block_widget_t");
extern "C" const char rtti_name_0032B708[];
extern "C" void *rtti_base_type_0032B708[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti23slc_text_block_widget_t, 0x005A4CA0");
__asm__(".equ rtti_name_0032B708, 0x0050FAC0");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_0032B708() __asm__("__tf23slc_text_block_widget_t");

void **Rtti_0032B708()
{
    if (!rtti_type_0032B708[0]) {
        RttiBase_0032B708();
        __rtti_si(rtti_type_0032B708, rtti_name_0032B708, rtti_base_type_0032B708);
    }
    return rtti_type_0032B708;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B778)
// 0x0032B778 __tf20slc_bitmap6_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B778()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_0032B778[]
    __asm__("__ti20slc_bitmap6_widget_t");
extern "C" const char rtti_name_0032B778[];
extern "C" void *rtti_base_type_0032B778[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti20slc_bitmap6_widget_t, 0x005A4CB0");
__asm__(".equ rtti_name_0032B778, 0x0050FAE0");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_0032B778() __asm__("__tf20slc_bitmap6_widget_t");

void **Rtti_0032B778()
{
    if (!rtti_type_0032B778[0]) {
        RttiBase_0032B778();
        __rtti_si(rtti_type_0032B778, rtti_name_0032B778, rtti_base_type_0032B778);
    }
    return rtti_type_0032B778;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B7E8)
// 0x0032B7E8 __tf19slc_bitmap_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B7E8()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_0032B7E8[]
    __asm__("__ti19slc_bitmap_widget_t");
extern "C" const char rtti_name_0032B7E8[];
extern "C" void *rtti_base_type_0032B7E8[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti19slc_bitmap_widget_t, 0x005A4CC0");
__asm__(".equ rtti_name_0032B7E8, 0x0050FAF8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_0032B7E8() __asm__("__tf19slc_bitmap_widget_t");

void **Rtti_0032B7E8()
{
    if (!rtti_type_0032B7E8[0]) {
        RttiBase_0032B7E8();
        __rtti_si(rtti_type_0032B7E8, rtti_name_0032B7E8, rtti_base_type_0032B7E8);
    }
    return rtti_type_0032B7E8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B858)
// 0x0032B858 __tf22slc_fluid_bar_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B858()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_0032B858[]
    __asm__("__ti22slc_fluid_bar_widget_t");
extern "C" const char rtti_name_0032B858[];
extern "C" void *rtti_base_type_0032B858[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti22slc_fluid_bar_widget_t, 0x005A4CD0");
__asm__(".equ rtti_name_0032B858, 0x0050FB10");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_0032B858() __asm__("__tf22slc_fluid_bar_widget_t");

void **Rtti_0032B858()
{
    if (!rtti_type_0032B858[0]) {
        RttiBase_0032B858();
        __rtti_si(rtti_type_0032B858, rtti_name_0032B858, rtti_base_type_0032B858);
    }
    return rtti_type_0032B858;
}
#endif
