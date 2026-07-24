// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00169BB8)
// 0x00169BB8 SetDisplay__12CameraWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class CameraWidget : public IGOWidget { public: void SetDisplay(bool value); };
void CameraWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169EA0)
// 0x00169EA0 Reset__12CameraWidget
class CameraWidget { public: void Hide(); void Reset(); };
__asm__(".equ Hide__12CameraWidget, 0x00169FF0");
void CameraWidget::Reset() { Hide(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169FC8)
// 0x00169FC8 Show__12CameraWidgetf
class CameraWidget { public: char padding[0x7c]; float showTime; float showTimer; void FadeReticle(); void Show(float time); };
__asm__(".equ FadeReticle__12CameraWidget, 0x0016A060");
void CameraWidget::Show(float time) { register CameraWidget *self __asm__("$2") = this; self->showTimer = time; KELLY_DECOMP_COMPILER_BARRIER(); self->showTime = time; self->FadeReticle(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169B90)
// 0x00169B90 _$_12CameraWidget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget, 0x00164628");
        __asm__(".equ derived_vtable, 0x004CB430");
struct WidgetLayout { int field0; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_12CameraWidget");
void DerivedDtor(void *self, int deleting) { ((WidgetLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169FF0)
// 0x00169FF0 Hide__12CameraWidget
struct pq_vtable{char p0[24];short adjustment;short x0;void(*turn_on)(void*,bool);};struct pq{char p0[404];pq_vtable*vtable;};struct camera_widget{char p0[8];pq*reticle[28];float fade,showTimer,showTime;};extern "C" void hide(camera_widget*self) __asm__("Hide__12CameraWidget");void hide(camera_widget*self){for(int i=0;i<28;i++){pq*q=self->reticle[i];pq_vtable*t=q->vtable;t->turn_on((char*)q+t->adjustment,false);}self->showTimer=0;self->showTime=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169F50)
// 0x00169F50 Draw__12CameraWidget
struct pq_vtable{char p0[64];short adjustment;short x0;void(*draw)(void*,int,float);};struct PanelQuad{char p0[404];pq_vtable*vtable;};struct camera_widget{int display;char p0[4];PanelQuad*reticle[28];};extern "C" void base_draw(void*) __asm__("Draw__9IGOWidget");__asm__(".equ Draw__9IGOWidget,0x00164668");extern "C" void draw(camera_widget*self) __asm__("Draw__12CameraWidget");void draw(camera_widget*self){base_draw(self);if(!self->display)return;for(int i=0;i<28;i++){PanelQuad*p=self->reticle[i];pq_vtable*t=p->vtable;t->draw((char*)p+t->adjustment,0,-1.0f);}}
#endif
