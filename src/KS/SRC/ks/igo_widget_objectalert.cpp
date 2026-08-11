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

// 0x0016A6D0 Hide__17ObjectAlertWidgetb
#include "KS/SRC/ks/igo_widget_objectalert.h"

void ObjectAlertWidget::Hide(bool fadeOut) { fadeDir = -1; if (!fadeOut) fade = 0.0f; }

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
#include "KS/SRC/ks/IGOFrontEnd.h"
#include "KS/SRC/ks/igo_widget_objectalert.h"

__asm__(".equ Draw__9IGOWidget,0x00164668");
__asm__(".equ IsPhotoShown__C11IGOFrontEnd,0x0017CEB0");
__asm__(".equ frontend_igo,0x003E7728");
void ObjectAlertWidget::Draw()
{
    IGOWidget::Draw();
    if (!display)
        return;
    if (!frontend_igo->IsPhotoShown())
        objectRoot->Draw();
}
#endif
