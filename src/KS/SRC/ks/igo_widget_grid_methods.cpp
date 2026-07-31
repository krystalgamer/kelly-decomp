// Matching decompilation blocks selected by generated build shims.


// 0x001DC2E0 _$_10GridWidget
extern "C" void IGOWidgetDtor(void *self) __asm__("_$_9IGOWidget");
extern "C" void GridWidgetDtor(void *self) __asm__("_$_10GridWidget");
__asm__(".equ _$_9IGOWidget, 0x00164628");
void GridWidgetDtor(void *self) { IGOWidgetDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
