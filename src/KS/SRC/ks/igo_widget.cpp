// IGOWidget definitions extracted by generated one-function shims.

#include "KS/SRC/ks/igo_widget.h"

// 0x00164658 SetDisplay__9IGOWidgetb
void IGOWidget::SetDisplay(const bool d) {
    display = d;
}

// 0x00164660 Update__9IGOWidgetf
void IGOWidget::Update(const float dt) {
}

// 0x00164668 Draw__9IGOWidget
void IGOWidget::Draw(void) {
}

// 0x00164670 GetDisplay__C9IGOWidget
bool IGOWidget::GetDisplay(void) const {
    return display;
}

// 0x00164608 __9IGOWidget
__asm__(".equ _vt$9IGOWidget, 0x004DB668");

IGOWidget::IGOWidget() {
    display = true;
}
