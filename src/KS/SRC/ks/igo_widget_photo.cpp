// Matching decompilation blocks selected by generated build shims.


// 0x0016AB70 Reset__11PhotoWidget
struct photo_reset_layout {
    char padding0[0x18];
    void *photoTexture;
    char padding1[0xc8];
    float darkFade;
    float fadeOutAlpha;
    float shownTimer;
    int timed;
    int photoNum;
    void *pointText;
    int score;
    int *scorePtr;
};
extern "C" void reset_photo_widget(photo_reset_layout *self)
    __asm__("Reset__11PhotoWidget");
void reset_photo_widget(photo_reset_layout *self) {
    self->photoTexture = 0;
    self->scorePtr = 0;
    self->score = 0;
    self->photoNum = 0;
    self->shownTimer = 0.0f;
    self->darkFade = 1.0f;
    self->fadeOutAlpha = 1.0f;
    self->timed = 0;
}

// 0x0016AA10 _$_11PhotoWidget
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget,0x00164628");
__asm__(".equ derived_vtable,0x004DB3F0");
struct widget_layout { char padding[4]; const void *vtable; char padding2[240]; TextString *text; };
extern "C" void destroy_widget(widget_layout *self, int deleting) __asm__("_$_11PhotoWidget");
void destroy_widget(widget_layout *self, int deleting)
{
    self->vtable = derived_vtable;
    TextString *text = self->text;
    if (text) {
        text_vtable *table = text->vtable;
        table->destroy((char *)text + table->adjustment, 3);
    }
    destroy_base(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}

// 0x0016AF50 Show__11PhotoWidgetP10nglTexturePiif
struct nglTexture{};struct nglQuad{char data[200];};extern "C" void set_flags(nglQuad*,unsigned)__asm__("nglSetQuadMapFlags__FP7nglQuadUi");extern "C" void set_tex(nglQuad*,nglTexture*)__asm__("nglSetQuadTex__FP7nglQuadP10nglTexture");asm(".equ nglSetQuadMapFlags__FP7nglQuadUi,0x003A69A8");asm(".equ nglSetQuadTex__FP7nglQuadP10nglTexture,0x003A69A0");struct widget_vtable{char pad[48];short adjustment;short zero;void(*set_point_text)(void*);};struct PhotoWidgetLayout{int display;widget_vtable*vtable;char pad0[16];nglTexture*photoTexture;nglQuad photoQuad;float darkFade;float fadeOutAlpha;float shownTimer;int timed;int photoNum;char pad1[4];int score;int*scorePtr;};inline void set_text(PhotoWidgetLayout*w,widget_vtable*v){v->set_point_text((char*)w+v->adjustment);}extern "C" void show_photo_widget(PhotoWidgetLayout*self,nglTexture*tex,int*sc,int num,float fade)__asm__("Show__11PhotoWidgetP10nglTexturePiif");void show_photo_widget(PhotoWidgetLayout*self,nglTexture*tex,int*sc,int num,float fade){self->photoTexture=tex;set_flags(&self->photoQuad,50);set_tex(&self->photoQuad,self->photoTexture);self->darkFade=fade;self->timed=false;self->fadeOutAlpha=1.0f;self->scorePtr=sc;if(self->scorePtr)self->score=*self->scorePtr;else self->score=0;self->photoNum=num;set_text(self,self->vtable);}

// 0x0016AE98 Show__11PhotoWidgetP10nglTexturePii
#include "KS/SRC/ks/igo_widget_photo.h"

__asm__(".equ nglSetQuadMapFlags__FP7nglQuadUi, 0x003A69A8");
__asm__(".equ nglSetQuadTex__FP7nglQuadP10nglTexture, 0x003A69A0");

void PhotoWidget::Show(nglTexture * tex, int * sc, const int num)
{
	photoTexture = tex;
	nglSetQuadMapFlags(&photoQuad, NGLMAP_CLAMP_U | NGLMAP_CLAMP_V | NGLMAP_BILINEAR_FILTER);
	nglSetQuadTex(&photoQuad, photoTexture);
	darkFade = 1.0f;

	timed = true;
	shownTimer = 5.0f;
	fadeOutAlpha = 1.0f;

	scorePtr = sc;
	if (scorePtr) score = *scorePtr;
	else score = 0;
	photoNum = num;
	SetPointText();
}
