// Matching decompilation blocks selected by generated build shims.

// 0x0032EA98 __cl__23slf_activate_boss_bar_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_library_class.h"

bool slf_activate_boss_bar_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.pop(1); return true; }

// 0x0032EB98 __cl__21slf_give_color_clue_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_library_class.h"

bool slf_give_color_clue_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.pop(8); return true; }

// 0x0032ED10 __cl__15slf_inc_score_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_library_class.h"

bool slf_inc_score_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.pop(4); return true; }


#if defined(KELLY_DECOMP_FUNCTION_0032C410)
// 0x0032C410 __cl__25slf_timer_widget_freeze_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_timer_widget_freeze_t::operator()(
    vm_stack &stack,
    entry_t entry)
{
    SLF_PARMS;
    parms->me->freeze();
    SLF_DONE;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_0032C4A0)
// 0x0032C4A0 __cl__22slf_timer_widget_run_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_timer_widget_run_t::operator()(
    vm_stack &stack,
    entry_t entry)
{
    SLF_PARMS;
    parms->me->run();
    SLF_DONE;
}
#endif

// 0x0032D558 __cl__30slf_bitmap_widget_flip_horiz_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

__asm__(".equ flip_horiz__13bitmap_widget, 0x0033FC50");

bool slf_bitmap_widget_flip_horiz_t::operator()(
    vm_stack &stack,
    entry_t entry
) {
    SLF_PARMS;
    parms->me->flip_horiz();
    SLF_DONE;
}

// 0x0032D5F8 __cl__29slf_bitmap_widget_flip_vert_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

__asm__(".equ flip_vert__13bitmap_widget, 0x0033FCB0");

bool slf_bitmap_widget_flip_vert_t::operator()(
    vm_stack &stack,
    entry_t entry
) {
    SLF_PARMS;
    parms->me->flip_vert();
    SLF_DONE;
}

#if defined(KELLY_DECOMP_FUNCTION_0032C370)
// 0x0032C370 __cl__32slf_timer_widget_set_time_left_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

__asm__(".equ set_time_left__12timer_widgetf, 0x002BBE90");
bool slf_timer_widget_set_time_left_t::operator()(vm_stack &stack, entry_t entry) {
    SLF_PARMS;
    parms->me->set_time_left(parms->value);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C530)
// 0x0032C530 __cl__32slf_timer_widget_inc_time_left_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

__asm__(".equ inc_time_left__12timer_widgetf, 0x002BC128");
bool slf_timer_widget_inc_time_left_t::operator()(vm_stack &stack, entry_t entry) {
    SLF_PARMS;
    parms->me->inc_time_left(parms->value);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032CC68)
// 0x0032CC68 __cl__32slf_text_block_widget_set_text_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

__asm__(".equ set_text__17text_block_widgetRC7stringx, 0x00340D50");
bool slf_text_block_widget_set_text_t::operator()(vm_stack &stack, entry_t entry) {
    SLF_PARMS;
    parms->me->set_text(*parms->text);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E598)
// 0x0032E598 __cl__36slf_fluid_bar_widget_set_fill_rate_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_fluid_bar_widget_set_fill_rate_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->set_fill_rate(parms->value);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E640)
// 0x0032E640 __cl__37slf_fluid_bar_widget_set_empty_rate_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_fluid_bar_widget_set_empty_rate_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->set_empty_rate(parms->value);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B918)
// 0x0032B918 __cl__17slf_widget_show_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_widget_show_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->show();
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B9C8)
// 0x0032B9C8 __cl__17slf_widget_hide_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_widget_hide_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->hide();
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C8B0)
// 0x0032C8B0 __cl__34slf_timer_widget_clear_functions_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

extern const float FLT_MAX_VALUE;
asm(".equ FLT_MAX_VALUE, 0x00500AB4");
asm(".equ remove_script_function__12timer_widgetff, 0x002BC5E8");

bool slf_timer_widget_clear_functions_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->remove_script_function(-1.0f, FLT_MAX_VALUE);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BE78)
// 0x0032BE78 __cl__20slf_widget_fade_to_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_widget_fade_to_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->fade_to(parms->alpha);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BD00)
// 0x0032BD00 __cl__21slf_widget_scale_to_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_widget_scale_to_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    parms->me->scale_to(parms->value, parms->value);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B8C8)
// 0x0032B8C8 __tf17slf_widget_show_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B8C8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032B8C8[]
    __asm__("__ti17slf_widget_show_t");
extern "C" const char rtti_name_0032B8C8[];
extern "C" void *rtti_base_type_0032B8C8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti17slf_widget_show_t, 0x005A4CE0");
__asm__(".equ rtti_name_0032B8C8, 0x0050FB30");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032B8C8() __asm__("__tf17slf_widget_show_t");

void **Rtti_0032B8C8()
{
    if (!rtti_type_0032B8C8[0]) {
        RttiBase_0032B8C8();
        __rtti_si(rtti_type_0032B8C8, rtti_name_0032B8C8, rtti_base_type_0032B8C8);
    }
    return rtti_type_0032B8C8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B978)
// 0x0032B978 __tf17slf_widget_hide_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032B978()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032B978[]
    __asm__("__ti17slf_widget_hide_t");
extern "C" const char rtti_name_0032B978[];
extern "C" void *rtti_base_type_0032B978[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti17slf_widget_hide_t, 0x005A4CF0");
__asm__(".equ rtti_name_0032B978, 0x0050FB48");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032B978() __asm__("__tf17slf_widget_hide_t");

void **Rtti_0032B978()
{
    if (!rtti_type_0032B978[0]) {
        RttiBase_0032B978();
        __rtti_si(rtti_type_0032B978, rtti_name_0032B978, rtti_base_type_0032B978);
    }
    return rtti_type_0032B978;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BA28)
// 0x0032BA28 __tf20slf_widget_move_to_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BA28()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BA28[]
    __asm__("__ti20slf_widget_move_to_t");
extern "C" const char rtti_name_0032BA28[];
extern "C" void *rtti_base_type_0032BA28[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti20slf_widget_move_to_t, 0x005A4D00");
__asm__(".equ rtti_name_0032BA28, 0x0050FB60");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BA28() __asm__("__tf20slf_widget_move_to_t");

void **Rtti_0032BA28()
{
    if (!rtti_type_0032BA28[0]) {
        RttiBase_0032BA28();
        __rtti_si(rtti_type_0032BA28, rtti_name_0032BA28, rtti_base_type_0032BA28);
    }
    return rtti_type_0032BA28;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BB00)
// 0x0032BB00 __tf21slf_widget_move_to2_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BB00()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BB00[]
    __asm__("__ti21slf_widget_move_to2_t");
extern "C" const char rtti_name_0032BB00[];
extern "C" void *rtti_base_type_0032BB00[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti21slf_widget_move_to2_t, 0x005A4D10");
__asm__(".equ rtti_name_0032BB00, 0x0050FB78");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BB00() __asm__("__tf21slf_widget_move_to2_t");

void **Rtti_0032BB00()
{
    if (!rtti_type_0032BB00[0]) {
        RttiBase_0032BB00();
        __rtti_si(rtti_type_0032BB00, rtti_name_0032BB00, rtti_base_type_0032BB00);
    }
    return rtti_type_0032BB00;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BBE0)
// 0x0032BBE0 __tf22slf_widget_set_layer_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BBE0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BBE0[]
    __asm__("__ti22slf_widget_set_layer_t");
extern "C" const char rtti_name_0032BBE0[];
extern "C" void *rtti_base_type_0032BBE0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_widget_set_layer_t, 0x005A4D20");
__asm__(".equ rtti_name_0032BBE0, 0x0050FB90");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BBE0() __asm__("__tf22slf_widget_set_layer_t");

void **Rtti_0032BBE0()
{
    if (!rtti_type_0032BBE0[0]) {
        RttiBase_0032BBE0();
        __rtti_si(rtti_type_0032BBE0, rtti_name_0032BBE0, rtti_base_type_0032BBE0);
    }
    return rtti_type_0032BBE0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BCB0)
// 0x0032BCB0 __tf21slf_widget_scale_to_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BCB0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BCB0[]
    __asm__("__ti21slf_widget_scale_to_t");
extern "C" const char rtti_name_0032BCB0[];
extern "C" void *rtti_base_type_0032BCB0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti21slf_widget_scale_to_t, 0x005A4D30");
__asm__(".equ rtti_name_0032BCB0, 0x0050FBB0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BCB0() __asm__("__tf21slf_widget_scale_to_t");

void **Rtti_0032BCB0()
{
    if (!rtti_type_0032BCB0[0]) {
        RttiBase_0032BCB0();
        __rtti_si(rtti_type_0032BCB0, rtti_name_0032BCB0, rtti_base_type_0032BCB0);
    }
    return rtti_type_0032BCB0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BD68)
// 0x0032BD68 __tf22slf_widget_scale_to2_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BD68()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BD68[]
    __asm__("__ti22slf_widget_scale_to2_t");
extern "C" const char rtti_name_0032BD68[];
extern "C" void *rtti_base_type_0032BD68[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_widget_scale_to2_t, 0x005A4D40");
__asm__(".equ rtti_name_0032BD68, 0x0050FBC8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BD68() __asm__("__tf22slf_widget_scale_to2_t");

void **Rtti_0032BD68()
{
    if (!rtti_type_0032BD68[0]) {
        RttiBase_0032BD68();
        __rtti_si(rtti_type_0032BD68, rtti_name_0032BD68, rtti_base_type_0032BD68);
    }
    return rtti_type_0032BD68;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BE28)
// 0x0032BE28 __tf20slf_widget_fade_to_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BE28()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BE28[]
    __asm__("__ti20slf_widget_fade_to_t");
extern "C" const char rtti_name_0032BE28[];
extern "C" void *rtti_base_type_0032BE28[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti20slf_widget_fade_to_t, 0x005A4D50");
__asm__(".equ rtti_name_0032BE28, 0x0050FBE8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BE28() __asm__("__tf20slf_widget_fade_to_t");

void **Rtti_0032BE28()
{
    if (!rtti_type_0032BE28[0]) {
        RttiBase_0032BE28();
        __rtti_si(rtti_type_0032BE28, rtti_name_0032BE28, rtti_base_type_0032BE28);
    }
    return rtti_type_0032BE28;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BED8)
// 0x0032BED8 __tf21slf_widget_fade_to2_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BED8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BED8[]
    __asm__("__ti21slf_widget_fade_to2_t");
extern "C" const char rtti_name_0032BED8[];
extern "C" void *rtti_base_type_0032BED8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti21slf_widget_fade_to2_t, 0x005A4D60");
__asm__(".equ rtti_name_0032BED8, 0x0050FC00");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BED8() __asm__("__tf21slf_widget_fade_to2_t");

void **Rtti_0032BED8()
{
    if (!rtti_type_0032BED8[0]) {
        RttiBase_0032BED8();
        __rtti_si(rtti_type_0032BED8, rtti_name_0032BED8, rtti_base_type_0032BED8);
    }
    return rtti_type_0032BED8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BF90)
// 0x0032BF90 __tf25slf_create_timer_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032BF90()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032BF90[]
    __asm__("__ti25slf_create_timer_widget_t");
extern "C" const char rtti_name_0032BF90[];
extern "C" void *rtti_base_type_0032BF90[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti25slf_create_timer_widget_t, 0x005A4D70");
__asm__(".equ rtti_name_0032BF90, 0x0050FC18");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032BF90() __asm__("__tf25slf_create_timer_widget_t");

void **Rtti_0032BF90()
{
    if (!rtti_type_0032BF90[0]) {
        RttiBase_0032BF90();
        __rtti_si(rtti_type_0032BF90, rtti_name_0032BF90, rtti_base_type_0032BF90);
    }
    return rtti_type_0032BF90;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C158)
// 0x0032C158 __tf32slf_timer_widget_get_time_left_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C158()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C158[]
    __asm__("__ti32slf_timer_widget_get_time_left_t");
extern "C" const char rtti_name_0032C158[];
extern "C" void *rtti_base_type_0032C158[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti32slf_timer_widget_get_time_left_t, 0x005A4D80");
__asm__(".equ rtti_name_0032C158, 0x0050FC38");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C158() __asm__("__tf32slf_timer_widget_get_time_left_t");

void **Rtti_0032C158()
{
    if (!rtti_type_0032C158[0]) {
        RttiBase_0032C158();
        __rtti_si(rtti_type_0032C158, rtti_name_0032C158, rtti_base_type_0032C158);
    }
    return rtti_type_0032C158;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C320)
// 0x0032C320 __tf32slf_timer_widget_set_time_left_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C320()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C320[]
    __asm__("__ti32slf_timer_widget_set_time_left_t");
extern "C" const char rtti_name_0032C320[];
extern "C" void *rtti_base_type_0032C320[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti32slf_timer_widget_set_time_left_t, 0x005A4D90");
__asm__(".equ rtti_name_0032C320, 0x0050FC60");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C320() __asm__("__tf32slf_timer_widget_set_time_left_t");

void **Rtti_0032C320()
{
    if (!rtti_type_0032C320[0]) {
        RttiBase_0032C320();
        __rtti_si(rtti_type_0032C320, rtti_name_0032C320, rtti_base_type_0032C320);
    }
    return rtti_type_0032C320;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C3C0)
// 0x0032C3C0 __tf25slf_timer_widget_freeze_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C3C0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C3C0[]
    __asm__("__ti25slf_timer_widget_freeze_t");
extern "C" const char rtti_name_0032C3C0[];
extern "C" void *rtti_base_type_0032C3C0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti25slf_timer_widget_freeze_t, 0x005A4DA0");
__asm__(".equ rtti_name_0032C3C0, 0x0050FC88");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C3C0() __asm__("__tf25slf_timer_widget_freeze_t");

void **Rtti_0032C3C0()
{
    if (!rtti_type_0032C3C0[0]) {
        RttiBase_0032C3C0();
        __rtti_si(rtti_type_0032C3C0, rtti_name_0032C3C0, rtti_base_type_0032C3C0);
    }
    return rtti_type_0032C3C0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C450)
// 0x0032C450 __tf22slf_timer_widget_run_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C450()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C450[]
    __asm__("__ti22slf_timer_widget_run_t");
extern "C" const char rtti_name_0032C450[];
extern "C" void *rtti_base_type_0032C450[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_timer_widget_run_t, 0x005A4DB0");
__asm__(".equ rtti_name_0032C450, 0x0050FCA8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C450() __asm__("__tf22slf_timer_widget_run_t");

void **Rtti_0032C450()
{
    if (!rtti_type_0032C450[0]) {
        RttiBase_0032C450();
        __rtti_si(rtti_type_0032C450, rtti_name_0032C450, rtti_base_type_0032C450);
    }
    return rtti_type_0032C450;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C4E0)
// 0x0032C4E0 __tf32slf_timer_widget_inc_time_left_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C4E0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C4E0[]
    __asm__("__ti32slf_timer_widget_inc_time_left_t");
extern "C" const char rtti_name_0032C4E0[];
extern "C" void *rtti_base_type_0032C4E0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti32slf_timer_widget_inc_time_left_t, 0x005A4DC0");
__asm__(".equ rtti_name_0032C4E0, 0x0050FCC8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C4E0() __asm__("__tf32slf_timer_widget_inc_time_left_t");

void **Rtti_0032C4E0()
{
    if (!rtti_type_0032C4E0[0]) {
        RttiBase_0032C4E0();
        __rtti_si(rtti_type_0032C4E0, rtti_name_0032C4E0, rtti_base_type_0032C4E0);
    }
    return rtti_type_0032C4E0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C580)
// 0x0032C580 __tf34slf_timer_widget_set_digit_color_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C580()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C580[]
    __asm__("__ti34slf_timer_widget_set_digit_color_t");
extern "C" const char rtti_name_0032C580[];
extern "C" void *rtti_base_type_0032C580[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti34slf_timer_widget_set_digit_color_t, 0x005A4DD0");
__asm__(".equ rtti_name_0032C580, 0x0050FCF0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C580() __asm__("__tf34slf_timer_widget_set_digit_color_t");

void **Rtti_0032C580()
{
    if (!rtti_type_0032C580[0]) {
        RttiBase_0032C580();
        __rtti_si(rtti_type_0032C580, rtti_name_0032C580, rtti_base_type_0032C580);
    }
    return rtti_type_0032C580;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C648)
// 0x0032C648 __tf31slf_timer_widget_set_bg_color_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C648()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C648[]
    __asm__("__ti31slf_timer_widget_set_bg_color_t");
extern "C" const char rtti_name_0032C648[];
extern "C" void *rtti_base_type_0032C648[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti31slf_timer_widget_set_bg_color_t, 0x005A4DE0");
__asm__(".equ rtti_name_0032C648, 0x0050FD18");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C648() __asm__("__tf31slf_timer_widget_set_bg_color_t");

void **Rtti_0032C648()
{
    if (!rtti_type_0032C648[0]) {
        RttiBase_0032C648();
        __rtti_si(rtti_type_0032C648, rtti_name_0032C648, rtti_base_type_0032C648);
    }
    return rtti_type_0032C648;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C710)
// 0x0032C710 __tf31slf_timer_widget_add_function_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C710()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C710[]
    __asm__("__ti31slf_timer_widget_add_function_t");
extern "C" const char rtti_name_0032C710[];
extern "C" void *rtti_base_type_0032C710[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti31slf_timer_widget_add_function_t, 0x005A4DF0");
__asm__(".equ rtti_name_0032C710, 0x0050FD40");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C710() __asm__("__tf31slf_timer_widget_add_function_t");

void **Rtti_0032C710()
{
    if (!rtti_type_0032C710[0]) {
        RttiBase_0032C710();
        __rtti_si(rtti_type_0032C710, rtti_name_0032C710, rtti_base_type_0032C710);
    }
    return rtti_type_0032C710;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C7B8)
// 0x0032C7B8 __tf34slf_timer_widget_remove_function_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C7B8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C7B8[]
    __asm__("__ti34slf_timer_widget_remove_function_t");
extern "C" const char rtti_name_0032C7B8[];
extern "C" void *rtti_base_type_0032C7B8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti34slf_timer_widget_remove_function_t, 0x005A4E00");
__asm__(".equ rtti_name_0032C7B8, 0x0050FD68");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C7B8() __asm__("__tf34slf_timer_widget_remove_function_t");

void **Rtti_0032C7B8()
{
    if (!rtti_type_0032C7B8[0]) {
        RttiBase_0032C7B8();
        __rtti_si(rtti_type_0032C7B8, rtti_name_0032C7B8, rtti_base_type_0032C7B8);
    }
    return rtti_type_0032C7B8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C860)
// 0x0032C860 __tf34slf_timer_widget_clear_functions_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C860()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C860[]
    __asm__("__ti34slf_timer_widget_clear_functions_t");
extern "C" const char rtti_name_0032C860[];
extern "C" void *rtti_base_type_0032C860[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti34slf_timer_widget_clear_functions_t, 0x005A4E10");
__asm__(".equ rtti_name_0032C860, 0x0050FD90");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C860() __asm__("__tf34slf_timer_widget_clear_functions_t");

void **Rtti_0032C860()
{
    if (!rtti_type_0032C860[0]) {
        RttiBase_0032C860();
        __rtti_si(rtti_type_0032C860, rtti_name_0032C860, rtti_base_type_0032C860);
    }
    return rtti_type_0032C860;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C910)
// 0x0032C910 __tf30slf_create_text_block_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032C910()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032C910[]
    __asm__("__ti30slf_create_text_block_widget_t");
extern "C" const char rtti_name_0032C910[];
extern "C" void *rtti_base_type_0032C910[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti30slf_create_text_block_widget_t, 0x005A4E20");
__asm__(".equ rtti_name_0032C910, 0x0050FDB8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032C910() __asm__("__tf30slf_create_text_block_widget_t");

void **Rtti_0032C910()
{
    if (!rtti_type_0032C910[0]) {
        RttiBase_0032C910();
        __rtti_si(rtti_type_0032C910, rtti_name_0032C910, rtti_base_type_0032C910);
    }
    return rtti_type_0032C910;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032CC18)
// 0x0032CC18 __tf32slf_text_block_widget_set_text_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032CC18()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032CC18[]
    __asm__("__ti32slf_text_block_widget_set_text_t");
extern "C" const char rtti_name_0032CC18[];
extern "C" void *rtti_base_type_0032CC18[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti32slf_text_block_widget_set_text_t, 0x005A4E30");
__asm__(".equ rtti_name_0032CC18, 0x0050FDE0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032CC18() __asm__("__tf32slf_text_block_widget_set_text_t");

void **Rtti_0032CC18()
{
    if (!rtti_type_0032CC18[0]) {
        RttiBase_0032CC18();
        __rtti_si(rtti_type_0032CC18, rtti_name_0032CC18, rtti_base_type_0032CC18);
    }
    return rtti_type_0032CC18;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032CCB8)
// 0x0032CCB8 __tf33slf_text_block_widget_set_scale_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032CCB8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032CCB8[]
    __asm__("__ti33slf_text_block_widget_set_scale_t");
extern "C" const char rtti_name_0032CCB8[];
extern "C" void *rtti_base_type_0032CCB8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti33slf_text_block_widget_set_scale_t, 0x005A4E40");
__asm__(".equ rtti_name_0032CCB8, 0x0050FE08");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032CCB8() __asm__("__tf33slf_text_block_widget_set_scale_t");

void **Rtti_0032CCB8()
{
    if (!rtti_type_0032CCB8[0]) {
        RttiBase_0032CCB8();
        __rtti_si(rtti_type_0032CCB8, rtti_name_0032CCB8, rtti_base_type_0032CCB8);
    }
    return rtti_type_0032CCB8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032CD68)
// 0x0032CD68 __tf37slf_text_block_widget_set_max_lines_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032CD68()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032CD68[]
    __asm__("__ti37slf_text_block_widget_set_max_lines_t");
extern "C" const char rtti_name_0032CD68[];
extern "C" void *rtti_base_type_0032CD68[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti37slf_text_block_widget_set_max_lines_t, 0x005A4E50");
__asm__(".equ rtti_name_0032CD68, 0x0050FE30");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032CD68() __asm__("__tf37slf_text_block_widget_set_max_lines_t");

void **Rtti_0032CD68()
{
    if (!rtti_type_0032CD68[0]) {
        RttiBase_0032CD68();
        __rtti_si(rtti_type_0032CD68, rtti_name_0032CD68, rtti_base_type_0032CD68);
    }
    return rtti_type_0032CD68;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032CEF8)
// 0x0032CEF8 __tf40slf_text_block_widget_set_line_spacing_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032CEF8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032CEF8[]
    __asm__("__ti40slf_text_block_widget_set_line_spacing_t");
extern "C" const char rtti_name_0032CEF8[];
extern "C" void *rtti_base_type_0032CEF8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti40slf_text_block_widget_set_line_spacing_t, 0x005A4E60");
__asm__(".equ rtti_name_0032CEF8, 0x0050FE58");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032CEF8() __asm__("__tf40slf_text_block_widget_set_line_spacing_t");

void **Rtti_0032CEF8()
{
    if (!rtti_type_0032CEF8[0]) {
        RttiBase_0032CEF8();
        __rtti_si(rtti_type_0032CEF8, rtti_name_0032CEF8, rtti_base_type_0032CEF8);
    }
    return rtti_type_0032CEF8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032CFA8)
// 0x0032CFA8 __tf37slf_text_block_widget_set_max_width_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032CFA8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032CFA8[]
    __asm__("__ti37slf_text_block_widget_set_max_width_t");
extern "C" const char rtti_name_0032CFA8[];
extern "C" void *rtti_base_type_0032CFA8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti37slf_text_block_widget_set_max_width_t, 0x005A4E70");
__asm__(".equ rtti_name_0032CFA8, 0x0050FE88");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032CFA8() __asm__("__tf37slf_text_block_widget_set_max_width_t");

void **Rtti_0032CFA8()
{
    if (!rtti_type_0032CFA8[0]) {
        RttiBase_0032CFA8();
        __rtti_si(rtti_type_0032CFA8, rtti_name_0032CFA8, rtti_base_type_0032CFA8);
    }
    return rtti_type_0032CFA8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D138)
// 0x0032D138 __tf33slf_text_block_widget_set_color_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D138()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D138[]
    __asm__("__ti33slf_text_block_widget_set_color_t");
extern "C" const char rtti_name_0032D138[];
extern "C" void *rtti_base_type_0032D138[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti33slf_text_block_widget_set_color_t, 0x005A4E80");
__asm__(".equ rtti_name_0032D138, 0x0050FEB0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D138() __asm__("__tf33slf_text_block_widget_set_color_t");

void **Rtti_0032D138()
{
    if (!rtti_type_0032D138[0]) {
        RttiBase_0032D138();
        __rtti_si(rtti_type_0032D138, rtti_name_0032D138, rtti_base_type_0032D138);
    }
    return rtti_type_0032D138;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D210)
// 0x0032D210 __tf26slf_create_bitmap_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D210()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D210[]
    __asm__("__ti26slf_create_bitmap_widget_t");
extern "C" const char rtti_name_0032D210[];
extern "C" void *rtti_base_type_0032D210[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti26slf_create_bitmap_widget_t, 0x005A4E90");
__asm__(".equ rtti_name_0032D210, 0x0050FED8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D210() __asm__("__tf26slf_create_bitmap_widget_t");

void **Rtti_0032D210()
{
    if (!rtti_type_0032D210[0]) {
        RttiBase_0032D210();
        __rtti_si(rtti_type_0032D210, rtti_name_0032D210, rtti_base_type_0032D210);
    }
    return rtti_type_0032D210;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D450)
// 0x0032D450 __tf29slf_bitmap_widget_set_color_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D450()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D450[]
    __asm__("__ti29slf_bitmap_widget_set_color_t");
extern "C" const char rtti_name_0032D450[];
extern "C" void *rtti_base_type_0032D450[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti29slf_bitmap_widget_set_color_t, 0x005A4EA0");
__asm__(".equ rtti_name_0032D450, 0x0050FEF8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D450() __asm__("__tf29slf_bitmap_widget_set_color_t");

void **Rtti_0032D450()
{
    if (!rtti_type_0032D450[0]) {
        RttiBase_0032D450();
        __rtti_si(rtti_type_0032D450, rtti_name_0032D450, rtti_base_type_0032D450);
    }
    return rtti_type_0032D450;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D508)
// 0x0032D508 __tf30slf_bitmap_widget_flip_horiz_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D508()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D508[]
    __asm__("__ti30slf_bitmap_widget_flip_horiz_t");
extern "C" const char rtti_name_0032D508[];
extern "C" void *rtti_base_type_0032D508[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti30slf_bitmap_widget_flip_horiz_t, 0x005A4EB0");
__asm__(".equ rtti_name_0032D508, 0x0050FF18");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D508() __asm__("__tf30slf_bitmap_widget_flip_horiz_t");

void **Rtti_0032D508()
{
    if (!rtti_type_0032D508[0]) {
        RttiBase_0032D508();
        __rtti_si(rtti_type_0032D508, rtti_name_0032D508, rtti_base_type_0032D508);
    }
    return rtti_type_0032D508;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D5A8)
// 0x0032D5A8 __tf29slf_bitmap_widget_flip_vert_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D5A8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D5A8[]
    __asm__("__ti29slf_bitmap_widget_flip_vert_t");
extern "C" const char rtti_name_0032D5A8[];
extern "C" void *rtti_base_type_0032D5A8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti29slf_bitmap_widget_flip_vert_t, 0x005A4EC0");
__asm__(".equ rtti_name_0032D5A8, 0x0050FF40");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D5A8() __asm__("__tf29slf_bitmap_widget_flip_vert_t");

void **Rtti_0032D5A8()
{
    if (!rtti_type_0032D5A8[0]) {
        RttiBase_0032D5A8();
        __rtti_si(rtti_type_0032D5A8, rtti_name_0032D5A8, rtti_base_type_0032D5A8);
    }
    return rtti_type_0032D5A8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D648)
// 0x0032D648 __tf26slf_bitmap_widget_resize_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D648()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D648[]
    __asm__("__ti26slf_bitmap_widget_resize_t");
extern "C" const char rtti_name_0032D648[];
extern "C" void *rtti_base_type_0032D648[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti26slf_bitmap_widget_resize_t, 0x005A4ED0");
__asm__(".equ rtti_name_0032D648, 0x0050FF60");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D648() __asm__("__tf26slf_bitmap_widget_resize_t");

void **Rtti_0032D648()
{
    if (!rtti_type_0032D648[0]) {
        RttiBase_0032D648();
        __rtti_si(rtti_type_0032D648, rtti_name_0032D648, rtti_base_type_0032D648);
    }
    return rtti_type_0032D648;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D6F0)
// 0x0032D6F0 __tf31slf_bitmap_widget_set_subrect_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D6F0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D6F0[]
    __asm__("__ti31slf_bitmap_widget_set_subrect_t");
extern "C" const char rtti_name_0032D6F0[];
extern "C" void *rtti_base_type_0032D6F0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti31slf_bitmap_widget_set_subrect_t, 0x005A4EE0");
__asm__(".equ rtti_name_0032D6F0, 0x0050FF80");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D6F0() __asm__("__tf31slf_bitmap_widget_set_subrect_t");

void **Rtti_0032D6F0()
{
    if (!rtti_type_0032D6F0[0]) {
        RttiBase_0032D6F0();
        __rtti_si(rtti_type_0032D6F0, rtti_name_0032D6F0, rtti_base_type_0032D6F0);
    }
    return rtti_type_0032D6F0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D7D0)
// 0x0032D7D0 __tf29slf_bitmap_widget_get_width_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D7D0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D7D0[]
    __asm__("__ti29slf_bitmap_widget_get_width_t");
extern "C" const char rtti_name_0032D7D0[];
extern "C" void *rtti_base_type_0032D7D0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti29slf_bitmap_widget_get_width_t, 0x005A4EF0");
__asm__(".equ rtti_name_0032D7D0, 0x0050FFA8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D7D0() __asm__("__tf29slf_bitmap_widget_get_width_t");

void **Rtti_0032D7D0()
{
    if (!rtti_type_0032D7D0[0]) {
        RttiBase_0032D7D0();
        __rtti_si(rtti_type_0032D7D0, rtti_name_0032D7D0, rtti_base_type_0032D7D0);
    }
    return rtti_type_0032D7D0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D9A8)
// 0x0032D9A8 __tf30slf_bitmap_widget_get_height_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032D9A8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032D9A8[]
    __asm__("__ti30slf_bitmap_widget_get_height_t");
extern "C" const char rtti_name_0032D9A8[];
extern "C" void *rtti_base_type_0032D9A8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti30slf_bitmap_widget_get_height_t, 0x005A4F00");
__asm__(".equ rtti_name_0032D9A8, 0x0050FFC8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032D9A8() __asm__("__tf30slf_bitmap_widget_get_height_t");

void **Rtti_0032D9A8()
{
    if (!rtti_type_0032D9A8[0]) {
        RttiBase_0032D9A8();
        __rtti_si(rtti_type_0032D9A8, rtti_name_0032D9A8, rtti_base_type_0032D9A8);
    }
    return rtti_type_0032D9A8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032DB80)
// 0x0032DB80 __tf27slf_create_bitmap6_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032DB80()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032DB80[]
    __asm__("__ti27slf_create_bitmap6_widget_t");
extern "C" const char rtti_name_0032DB80[];
extern "C" void *rtti_base_type_0032DB80[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti27slf_create_bitmap6_widget_t, 0x005A4F10");
__asm__(".equ rtti_name_0032DB80, 0x0050FFF0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032DB80() __asm__("__tf27slf_create_bitmap6_widget_t");

void **Rtti_0032DB80()
{
    if (!rtti_type_0032DB80[0]) {
        RttiBase_0032DB80();
        __rtti_si(rtti_type_0032DB80, rtti_name_0032DB80, rtti_base_type_0032DB80);
    }
    return rtti_type_0032DB80;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032DDB0)
// 0x0032DDB0 __tf29slf_create_fluid_bar_widget_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032DDB0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032DDB0[]
    __asm__("__ti29slf_create_fluid_bar_widget_t");
extern "C" const char rtti_name_0032DDB0[];
extern "C" void *rtti_base_type_0032DDB0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti29slf_create_fluid_bar_widget_t, 0x005A4F20");
__asm__(".equ rtti_name_0032DDB0, 0x00500010");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032DDB0() __asm__("__tf29slf_create_fluid_bar_widget_t");

void **Rtti_0032DDB0()
{
    if (!rtti_type_0032DDB0[0]) {
        RttiBase_0032DDB0();
        __rtti_si(rtti_type_0032DDB0, rtti_name_0032DDB0, rtti_base_type_0032DDB0);
    }
    return rtti_type_0032DDB0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E108)
// 0x0032E108 __tf32slf_fluid_bar_widget_set_color_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E108()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E108[]
    __asm__("__ti32slf_fluid_bar_widget_set_color_t");
extern "C" const char rtti_name_0032E108[];
extern "C" void *rtti_base_type_0032E108[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti32slf_fluid_bar_widget_set_color_t, 0x005A4F30");
__asm__(".equ rtti_name_0032E108, 0x00500030");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E108() __asm__("__tf32slf_fluid_bar_widget_set_color_t");

void **Rtti_0032E108()
{
    if (!rtti_type_0032E108[0]) {
        RttiBase_0032E108();
        __rtti_si(rtti_type_0032E108, rtti_name_0032E108, rtti_base_type_0032E108);
    }
    return rtti_type_0032E108;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E1C0)
// 0x0032E1C0 __tf29slf_fluid_bar_widget_resize_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E1C0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E1C0[]
    __asm__("__ti29slf_fluid_bar_widget_resize_t");
extern "C" const char rtti_name_0032E1C0[];
extern "C" void *rtti_base_type_0032E1C0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti29slf_fluid_bar_widget_resize_t, 0x005A4F40");
__asm__(".equ rtti_name_0032E1C0, 0x00500058");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E1C0() __asm__("__tf29slf_fluid_bar_widget_resize_t");

void **Rtti_0032E1C0()
{
    if (!rtti_type_0032E1C0[0]) {
        RttiBase_0032E1C0();
        __rtti_si(rtti_type_0032E1C0, rtti_name_0032E1C0, rtti_base_type_0032E1C0);
    }
    return rtti_type_0032E1C0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E268)
// 0x0032E268 __tf35slf_fluid_bar_widget_set_full_val_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E268()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E268[]
    __asm__("__ti35slf_fluid_bar_widget_set_full_val_t");
extern "C" const char rtti_name_0032E268[];
extern "C" void *rtti_base_type_0032E268[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti35slf_fluid_bar_widget_set_full_val_t, 0x005A4F50");
__asm__(".equ rtti_name_0032E268, 0x00500078");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E268() __asm__("__tf35slf_fluid_bar_widget_set_full_val_t");

void **Rtti_0032E268()
{
    if (!rtti_type_0032E268[0]) {
        RttiBase_0032E268();
        __rtti_si(rtti_type_0032E268, rtti_name_0032E268, rtti_base_type_0032E268);
    }
    return rtti_type_0032E268;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E340)
// 0x0032E340 __tf30slf_fluid_bar_widget_set_val_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E340()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E340[]
    __asm__("__ti30slf_fluid_bar_widget_set_val_t");
extern "C" const char rtti_name_0032E340[];
extern "C" void *rtti_base_type_0032E340[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti30slf_fluid_bar_widget_set_val_t, 0x005A4F60");
__asm__(".equ rtti_name_0032E340, 0x005000A0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E340() __asm__("__tf30slf_fluid_bar_widget_set_val_t");

void **Rtti_0032E340()
{
    if (!rtti_type_0032E340[0]) {
        RttiBase_0032E340();
        __rtti_si(rtti_type_0032E340, rtti_name_0032E340, rtti_base_type_0032E340);
    }
    return rtti_type_0032E340;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E418)
// 0x0032E418 __tf34slf_fluid_bar_widget_set_abs_val_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E418()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E418[]
    __asm__("__ti34slf_fluid_bar_widget_set_abs_val_t");
extern "C" const char rtti_name_0032E418[];
extern "C" void *rtti_base_type_0032E418[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti34slf_fluid_bar_widget_set_abs_val_t, 0x005A4F70");
__asm__(".equ rtti_name_0032E418, 0x005000C8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E418() __asm__("__tf34slf_fluid_bar_widget_set_abs_val_t");

void **Rtti_0032E418()
{
    if (!rtti_type_0032E418[0]) {
        RttiBase_0032E418();
        __rtti_si(rtti_type_0032E418, rtti_name_0032E418, rtti_base_type_0032E418);
    }
    return rtti_type_0032E418;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E548)
// 0x0032E548 __tf36slf_fluid_bar_widget_set_fill_rate_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E548()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E548[]
    __asm__("__ti36slf_fluid_bar_widget_set_fill_rate_t");
extern "C" const char rtti_name_0032E548[];
extern "C" void *rtti_base_type_0032E548[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti36slf_fluid_bar_widget_set_fill_rate_t, 0x005A4F80");
__asm__(".equ rtti_name_0032E548, 0x005000F0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E548() __asm__("__tf36slf_fluid_bar_widget_set_fill_rate_t");

void **Rtti_0032E548()
{
    if (!rtti_type_0032E548[0]) {
        RttiBase_0032E548();
        __rtti_si(rtti_type_0032E548, rtti_name_0032E548, rtti_base_type_0032E548);
    }
    return rtti_type_0032E548;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E5F0)
// 0x0032E5F0 __tf37slf_fluid_bar_widget_set_empty_rate_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E5F0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E5F0[]
    __asm__("__ti37slf_fluid_bar_widget_set_empty_rate_t");
extern "C" const char rtti_name_0032E5F0[];
extern "C" void *rtti_base_type_0032E5F0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti37slf_fluid_bar_widget_set_empty_rate_t, 0x005A4F90");
__asm__(".equ rtti_name_0032E5F0, 0x00500118");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E5F0() __asm__("__tf37slf_fluid_bar_widget_set_empty_rate_t");

void **Rtti_0032E5F0()
{
    if (!rtti_type_0032E5F0[0]) {
        RttiBase_0032E5F0();
        __rtti_si(rtti_type_0032E5F0, rtti_name_0032E5F0, rtti_base_type_0032E5F0);
    }
    return rtti_type_0032E5F0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E698)
// 0x0032E698 __tf32slf_fluid_bar_widget_get_width_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E698()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E698[]
    __asm__("__ti32slf_fluid_bar_widget_get_width_t");
extern "C" const char rtti_name_0032E698[];
extern "C" void *rtti_base_type_0032E698[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti32slf_fluid_bar_widget_get_width_t, 0x005A4FA0");
__asm__(".equ rtti_name_0032E698, 0x00500140");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E698() __asm__("__tf32slf_fluid_bar_widget_get_width_t");

void **Rtti_0032E698()
{
    if (!rtti_type_0032E698[0]) {
        RttiBase_0032E698();
        __rtti_si(rtti_type_0032E698, rtti_name_0032E698, rtti_base_type_0032E698);
    }
    return rtti_type_0032E698;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032E870)
// 0x0032E870 __tf33slf_fluid_bar_widget_get_height_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032E870()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032E870[]
    __asm__("__ti33slf_fluid_bar_widget_get_height_t");
extern "C" const char rtti_name_0032E870[];
extern "C" void *rtti_base_type_0032E870[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti33slf_fluid_bar_widget_get_height_t, 0x005A4FB0");
__asm__(".equ rtti_name_0032E870, 0x00500168");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032E870() __asm__("__tf33slf_fluid_bar_widget_get_height_t");

void **Rtti_0032E870()
{
    if (!rtti_type_0032E870[0]) {
        RttiBase_0032E870();
        __rtti_si(rtti_type_0032E870, rtti_name_0032E870, rtti_base_type_0032E870);
    }
    return rtti_type_0032E870;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EA48)
// 0x0032EA48 __tf23slf_activate_boss_bar_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032EA48()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032EA48[]
    __asm__("__ti23slf_activate_boss_bar_t");
extern "C" const char rtti_name_0032EA48[];
extern "C" void *rtti_base_type_0032EA48[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti23slf_activate_boss_bar_t, 0x005A4FC0");
__asm__(".equ rtti_name_0032EA48, 0x00500190");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032EA48() __asm__("__tf23slf_activate_boss_bar_t");

void **Rtti_0032EA48()
{
    if (!rtti_type_0032EA48[0]) {
        RttiBase_0032EA48();
        __rtti_si(rtti_type_0032EA48, rtti_name_0032EA48, rtti_base_type_0032EA48);
    }
    return rtti_type_0032EA48;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EAD0)
// 0x0032EAD0 __tf19slf_hide_boss_bar_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032EAD0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032EAD0[]
    __asm__("__ti19slf_hide_boss_bar_t");
extern "C" const char rtti_name_0032EAD0[];
extern "C" void *rtti_base_type_0032EAD0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti19slf_hide_boss_bar_t, 0x005A4FD0");
__asm__(".equ rtti_name_0032EAD0, 0x005001B0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032EAD0() __asm__("__tf19slf_hide_boss_bar_t");

void **Rtti_0032EAD0()
{
    if (!rtti_type_0032EAD0[0]) {
        RttiBase_0032EAD0();
        __rtti_si(rtti_type_0032EAD0, rtti_name_0032EAD0, rtti_base_type_0032EAD0);
    }
    return rtti_type_0032EAD0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EB48)
// 0x0032EB48 __tf21slf_give_color_clue_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032EB48()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032EB48[]
    __asm__("__ti21slf_give_color_clue_t");
extern "C" const char rtti_name_0032EB48[];
extern "C" void *rtti_base_type_0032EB48[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti21slf_give_color_clue_t, 0x005A4FE0");
__asm__(".equ rtti_name_0032EB48, 0x005001C8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032EB48() __asm__("__tf21slf_give_color_clue_t");

void **Rtti_0032EB48()
{
    if (!rtti_type_0032EB48[0]) {
        RttiBase_0032EB48();
        __rtti_si(rtti_type_0032EB48, rtti_name_0032EB48, rtti_base_type_0032EB48);
    }
    return rtti_type_0032EB48;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EBD0)
// 0x0032EBD0 __tf23slf_clear_color_clues_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032EBD0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032EBD0[]
    __asm__("__ti23slf_clear_color_clues_t");
extern "C" const char rtti_name_0032EBD0[];
extern "C" void *rtti_base_type_0032EBD0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti23slf_clear_color_clues_t, 0x005A4FF0");
__asm__(".equ rtti_name_0032EBD0, 0x005001E0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032EBD0() __asm__("__tf23slf_clear_color_clues_t");

void **Rtti_0032EBD0()
{
    if (!rtti_type_0032EBD0[0]) {
        RttiBase_0032EBD0();
        __rtti_si(rtti_type_0032EBD0, rtti_name_0032EBD0, rtti_base_type_0032EBD0);
    }
    return rtti_type_0032EBD0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EC48)
// 0x0032EC48 __tf34slf_show_clues_while_letterboxed_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032EC48()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032EC48[]
    __asm__("__ti34slf_show_clues_while_letterboxed_t");
extern "C" const char rtti_name_0032EC48[];
extern "C" void *rtti_base_type_0032EC48[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti34slf_show_clues_while_letterboxed_t, 0x005A5000");
__asm__(".equ rtti_name_0032EC48, 0x00500200");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032EC48() __asm__("__tf34slf_show_clues_while_letterboxed_t");

void **Rtti_0032EC48()
{
    if (!rtti_type_0032EC48[0]) {
        RttiBase_0032EC48();
        __rtti_si(rtti_type_0032EC48, rtti_name_0032EC48, rtti_base_type_0032EC48);
    }
    return rtti_type_0032EC48;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032ECC0)
// 0x0032ECC0 __tf15slf_inc_score_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032ECC0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032ECC0[]
    __asm__("__ti15slf_inc_score_t");
extern "C" const char rtti_name_0032ECC0[];
extern "C" void *rtti_base_type_0032ECC0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti15slf_inc_score_t, 0x005A5010");
__asm__(".equ rtti_name_0032ECC0, 0x00500228");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032ECC0() __asm__("__tf15slf_inc_score_t");

void **Rtti_0032ECC0()
{
    if (!rtti_type_0032ECC0[0]) {
        RttiBase_0032ECC0();
        __rtti_si(rtti_type_0032ECC0, rtti_name_0032ECC0, rtti_base_type_0032ECC0);
    }
    return rtti_type_0032ECC0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032ED48)
// 0x0032ED48 __tf17slf_clear_score_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032ED48()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032ED48[]
    __asm__("__ti17slf_clear_score_t");
extern "C" const char rtti_name_0032ED48[];
extern "C" void *rtti_base_type_0032ED48[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti17slf_clear_score_t, 0x005A5020");
__asm__(".equ rtti_name_0032ED48, 0x00500240");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032ED48() __asm__("__tf17slf_clear_score_t");

void **Rtti_0032ED48()
{
    if (!rtti_type_0032ED48[0]) {
        RttiBase_0032ED48();
        __rtti_si(rtti_type_0032ED48, rtti_name_0032ED48, rtti_base_type_0032ED48);
    }
    return rtti_type_0032ED48;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EDC0)
// 0x0032EDC0 __tf22slf_hide_all_widgets_t
#include "KS/SRC/rtti.h"

extern "C" void **RttiBase_0032EDC0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032EDC0[]
    __asm__("__ti22slf_hide_all_widgets_t");
extern "C" const char rtti_name_0032EDC0[];
extern "C" void *rtti_base_type_0032EDC0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_hide_all_widgets_t, 0x005A5030");
__asm__(".equ rtti_name_0032EDC0, 0x00500258");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032EDC0() __asm__("__tf22slf_hide_all_widgets_t");

void **Rtti_0032EDC0()
{
    if (!rtti_type_0032EDC0[0]) {
        RttiBase_0032EDC0();
        __rtti_si(rtti_type_0032EDC0, rtti_name_0032EDC0, rtti_base_type_0032EDC0);
    }
    return rtti_type_0032EDC0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C5D0)
// 0x0032C5D0 __cl__34slf_timer_widget_set_digit_color_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_timer_widget_set_digit_color_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry
)
{
    SLF_PARMS;
    parms->me->set_digit_color(
        color(parms->r, parms->g, parms->b, parms->a)
    );
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032C698)
// 0x0032C698 __cl__31slf_timer_widget_set_bg_color_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_timer_widget_set_bg_color_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry
)
{
    SLF_PARMS;
    parms->me->set_bg_color(
        color(parms->r, parms->g, parms->b, parms->a)
    );
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BC30)
// 0x0032BC30 __cl__22slf_widget_set_layer_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_widget_set_layer_t::operator()(vm_stack &stack, entry_t entry)
{
    SLF_PARMS;
    int layer = (int)parms->layer;
    if (layer < widget::RHW0)
        layer = widget::RHW0;
    if (layer >= widget::NUM_RHW_LAYERS)
        layer = widget::NUM_RHW_LAYERS - 1;
    parms->me->set_layer((widget::rhw_layer_e)layer);
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BA78)
// 0x0032BA78 __cl__20slf_widget_move_to_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_widget_move_to_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    SLF_PARMS;
    parms->me->move_to(
        (short)(int)parms->x,
        (short)(int)parms->y);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D188)
// 0x0032D188 __cl__33slf_text_block_widget_set_color_tR8vm_stackQ320script_library_class8function7entry_t
#include "KS/SRC/script_lib_widget.h"

bool slf_text_block_widget_set_color_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    SLF_PARMS;
    color value(parms->r, parms->g, parms->b, parms->a);
    text_block_widget *object = parms->me;
    object->set_color(value);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032BB50)
// 0x0032BB50 __cl__21slf_widget_move_to2_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack{char p0[8];char*top;};struct parms{void*me;float wt,dur,x,y;};struct widget_vtable{char p0[112];short adjustment;short x0;void(*move)(void*,short,short,float,float);};struct widget{char p0[320];widget_vtable*vtable;};extern "C" bool call_move(void*,vm_stack&stack,int entry) __asm__("__cl__21slf_widget_move_to2_tR8vm_stackQ320script_library_class8function7entry_t");bool call_move(void*,vm_stack&stack,int entry){stack.top-=20;parms*p=(parms*)stack.top;widget*w=(widget*)p->me;widget_vtable*t=w->vtable;t->move((char*)w+t->adjustment,(short)(int)p->x,(short)(int)p->y,p->wt,p->dur);return true;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032D740)
// 0x0032D740 __cl__31slf_bitmap_widget_set_subrect_tR8vm_stackQ320script_library_class8function7entry_t
struct vm_stack{char p0[8];char*top;};struct parms{void*me;float l,t,r,b;};struct widget_vtable{char p0[216];short adjustment;short x0;void(*subrect)(void*,int,int,int,int);};struct widget{char p0[320];widget_vtable*vtable;};extern "C" bool call_subrect(void*,vm_stack&stack,int entry) __asm__("__cl__31slf_bitmap_widget_set_subrect_tR8vm_stackQ320script_library_class8function7entry_t");bool call_subrect(void*,vm_stack&stack,int entry){stack.top-=20;parms*p=(parms*)stack.top;widget*w=(widget*)p->me;widget_vtable*t=w->vtable;t->subrect((char*)w+t->adjustment,(int)p->l,(int)p->t,(int)p->r,(int)p->b);return true;}
#endif
