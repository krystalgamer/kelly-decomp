// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00169FF0)
// 0x00169FF0 Hide__12CameraWidget
struct pq_vtable{char p0[24];short adjustment;short x0;void(*turn_on)(void*,bool);};struct pq{char p0[404];pq_vtable*vtable;};struct camera_widget{char p0[8];pq*reticle[28];float fade,showTimer,showTime;};extern "C" void hide(camera_widget*self) __asm__("Hide__12CameraWidget");void hide(camera_widget*self){for(int i=0;i<28;i++){pq*q=self->reticle[i];pq_vtable*t=q->vtable;t->turn_on((char*)q+t->adjustment,false);}self->showTimer=0;self->showTime=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169F50)
// 0x00169F50 Draw__12CameraWidget
struct pq_vtable{char p0[64];short adjustment;short x0;void(*draw)(void*,int,float);};struct PanelQuad{char p0[404];pq_vtable*vtable;};struct camera_widget{int display;char p0[4];PanelQuad*reticle[28];};extern "C" void base_draw(void*) __asm__("Draw__9IGOWidget");__asm__(".equ Draw__9IGOWidget,0x00164668");extern "C" void draw(camera_widget*self) __asm__("Draw__12CameraWidget");void draw(camera_widget*self){base_draw(self);if(!self->display)return;for(int i=0;i<28;i++){PanelQuad*p=self->reticle[i];pq_vtable*t=p->vtable;t->draw((char*)p+t->adjustment,0,-1.0f);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169EC0)
// 0x00169EC0 Update__12CameraWidgetf
class IGOWidget{public:bool display;int vptr;void Update(float)__asm__("Update__9IGOWidgetf");};class CameraWidget:public IGOWidget{public:void*reticlePQs[28];float fade,showTimer,showTime;void FadeReticle()__asm__("FadeReticle__12CameraWidget");void Hide()__asm__("Hide__12CameraWidget");void Update(float)__asm__("Update__12CameraWidgetf");};__asm__(".equ Update__9IGOWidgetf,0x00164660");__asm__(".equ FadeReticle__12CameraWidget,0x0016A060");__asm__(".equ Hide__12CameraWidget,0x00169FF0");void CameraWidget::Update(float dt){IGOWidget::Update(dt);if(showTimer>0.0f){showTimer-=dt;if(showTimer<0.0f)showTimer=0.0f;FadeReticle();if(showTimer==0.0f){Hide();asm volatile("");}}}
#endif
