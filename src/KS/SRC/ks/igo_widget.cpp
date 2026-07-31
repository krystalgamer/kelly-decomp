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

// 0x00164628 _$_9IGOWidget
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004DB668");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_9IGOWidget");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
