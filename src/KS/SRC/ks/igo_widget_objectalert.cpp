// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/igo_widget_objectalert.h"

#if defined(KELLY_DECOMP_FUNCTION_0016A3E0)
// 0x0016A3E0 __17ObjectAlertWidget
__asm__(".equ __9IGOWidget, 0x00164608");
__asm__(".equ _vt$17ObjectAlertWidget, 0x004DB138");
ObjectAlertWidget::ObjectAlertWidget()
{
    objectRoot = 0;
    fade = 0.0f;
    fadeDir = -1;
    display = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016A6D0)
// 0x0016A6D0 Hide__17ObjectAlertWidgetb
void ObjectAlertWidget::Hide(bool fadeOut) { fadeDir = -1; if (!fadeOut) fade = 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016A428)
// 0x0016A428 _$_17ObjectAlertWidget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget, 0x00164628");
        __asm__(".equ derived_vtable, 0x004CB138");
struct WidgetLayout { int field0; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17ObjectAlertWidget");
void DerivedDtor(void *self, int deleting) { ((WidgetLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016A450)
// 0x0016A450 SetDisplay__17ObjectAlertWidgetb
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");

void ObjectAlertWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    display = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016A660)
// 0x0016A660 Draw__17ObjectAlertWidget
extern "C" void draw_base(void *) __asm__("Draw__9IGOWidget");
extern "C" bool is_photo_shown(void *) __asm__("IsPhotoShown__C11IGOFrontEnd");
__asm__(".equ Draw__9IGOWidget,0x00164668");
__asm__(".equ IsPhotoShown__C11IGOFrontEnd,0x0017CEB0");
extern void *frontendmanager_igo;
__asm__(".equ frontendmanager_igo,0x003E7728");
struct panel_vtable { char padding[64]; short adjustment; short reserved; void (*draw)(void *, int, float); };
struct PanelQuad { char padding[404]; panel_vtable *vtable; };
struct object_alert_layout {
    bool display;
    char padding[4];
    PanelQuad *objectRoot;
};
extern "C" void draw_object_alert(object_alert_layout *self)
    __asm__("Draw__17ObjectAlertWidget");
void draw_object_alert(object_alert_layout *self)
{
    draw_base(self);
    if (!self->display)
        return;
    if (!is_photo_shown(frontendmanager_igo)) {
        panel_vtable *table = self->objectRoot->vtable;
        table->draw(
            (char *)self->objectRoot + table->adjustment, 0, -1.0f
        );
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016A488)
// 0x0016A488 Init__17ObjectAlertWidgetR9PanelFile
struct PanelFile;extern "C" void*get_pointer(PanelFile*,const char*) __asm__("GetPointer__9PanelFilePCc");extern "C" void hide(void*,bool) __asm__("Hide__17ObjectAlertWidgetb");__asm__(".equ GetPointer__9PanelFilePCc,0x00152F88");__asm__(".equ Hide__17ObjectAlertWidgetb,0x0016A6D0");extern const char objectalert[];__asm__(".equ objectalert,0x004C10E0");struct widget_vtable{char p0[16];short display_adjust;short x0;void(*display)(void*,bool);short update_adjust;short x1;void(*update)(void*,float);};struct widget{char p0[4];widget_vtable*vtable;void*objectRoot;};extern "C" void init(widget*self,PanelFile&panel) __asm__("Init__17ObjectAlertWidgetR9PanelFile");void init(widget*self,PanelFile&panel){self->objectRoot=get_pointer(&panel,objectalert);widget_vtable*t=self->vtable;register void(*displayfn)(void*,bool) __asm__("$3")=t->display;displayfn((char*)self+t->display_adjust,true);hide(self,true);t=self->vtable;register void(*updatefn)(void*,float) __asm__("$3")=t->update;updatefn((char*)self+t->update_adjust,0.0f);}
#endif
