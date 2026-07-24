// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016DDA8)
// 0x0016DDA8 Hide__15IconCountWidgetb
class IconCountWidget { char padding[0x1C]; int fadeDir; public: void Hide(bool fadeOut); };
void IconCountWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016DDC0)
// 0x0016DDC0 Show__15IconCountWidgetb
class IconCountWidget { char padding[0x1C]; int fadeDir; public: void Show(bool fadeIn); };
void IconCountWidget::Show(bool fadeIn) { if (fadeIn) fadeDir = 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016D6B0)
// 0x0016D6B0 SetDisplay__15IconCountWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class IconCountWidget : public IGOWidget { public: void SetDisplay(bool value); };
void IconCountWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016DD28)
// 0x0016DD28 Draw__15IconCountWidget
struct RootVtable{char pad[64];short adjust;short z;void(*draw)(void*,int,float);};struct Root{char pad[404];RootVtable*vtable;};struct TextVtable{char pad[24];short adjust;short z;void(*draw)(void*);};struct Text{char pad[76];TextVtable*vtable;};extern "C" void base_draw(void*)__asm__("Draw__9IGOWidget");__asm__(".equ Draw__9IGOWidget,0x00164668");struct IconCountWidget{int display;char pad[4];Root*objectRoot;Text*firstText;Text*secondText;void Draw()__asm__("Draw__15IconCountWidget");};void IconCountWidget::Draw(){base_draw(this);if(!display)return;RootVtable*rv=objectRoot->vtable;rv->draw((char*)objectRoot+rv->adjust,0,-1.0f);TextVtable*v1=firstText->vtable;v1->draw((char*)firstText+v1->adjust);TextVtable*v2=secondText->vtable;v2->draw((char*)secondText+v2->adjust);}
#endif
