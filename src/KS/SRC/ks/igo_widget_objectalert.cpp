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
