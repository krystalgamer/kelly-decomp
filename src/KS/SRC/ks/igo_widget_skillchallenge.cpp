// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00166A80)
// 0x00166A80 Hide__20SkillChallengeWidgetb
class SkillChallengeWidget { char padding[0x1C]; int fadeDir; public: void Hide(bool fadeOut); };
void SkillChallengeWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00166A98)
// 0x00166A98 Show__20SkillChallengeWidgetb
class SkillChallengeWidget { char padding[0x1C]; int fadeDir; public: void Show(bool fadeIn); };
void SkillChallengeWidget::Show(bool fadeIn) { if (fadeIn) fadeDir = 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001661C0)
// 0x001661C0 SetDisplay__20SkillChallengeWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class SkillChallengeWidget : public IGOWidget { public: void SetDisplay(bool value); };
void SkillChallengeWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00166A00)
// 0x00166A00 Draw__20SkillChallengeWidget
struct RootVtable{char pad[64];short adjust;short z;void(*draw)(void*,int,float);};struct Root{char pad[404];RootVtable*vtable;};struct TextVtable{char pad[24];short adjust;short z;void(*draw)(void*);};struct Text{char pad[76];TextVtable*vtable;};extern "C" void base_draw(void*)__asm__("Draw__9IGOWidget");__asm__(".equ Draw__9IGOWidget,0x00164668");struct SkillChallengeWidget{int display;char pad[4];Root*objectRoot;Text*firstText;Text*secondText;void Draw()__asm__("Draw__20SkillChallengeWidget");};void SkillChallengeWidget::Draw(){base_draw(this);if(!display)return;RootVtable*rv=objectRoot->vtable;rv->draw((char*)objectRoot+rv->adjust,0,-1.0f);TextVtable*v1=firstText->vtable;v1->draw((char*)firstText+v1->adjust);TextVtable*v2=secondText->vtable;v2->draw((char*)secondText+v2->adjust);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00166138)
// 0x00166138 _$_20SkillChallengeWidget
struct TextVtable{char pad[8];short adjust;short z;void(*destroy)(void*,int);};struct Text{char pad[76];TextVtable*vtable;};struct Widget{char pad[4];void*vptr;char rest[12];};extern char own_vtable[];extern "C" void base_dtor(void*,int)__asm__("_$_9IGOWidget");__asm__(".equ own_vtable,0x004DB1A8");__asm__(".equ _$_9IGOWidget,0x00164628");extern "C" void dtor(Widget*self,int deleting)__asm__("_$_20SkillChallengeWidget");void dtor(Widget*self,int deleting){self->vptr=own_vtable;Text*a=*(Text**)((char*)self+12);if(a){TextVtable*v=a->vtable;v->destroy((char*)a+v->adjust,3);}Text*b=*(Text**)((char*)self+16);if(b){TextVtable*v=b->vtable;v->destroy((char*)b+v->adjust,3);}base_dtor(self,deleting);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001661E0)
// 0x001661E0 Init__20SkillChallengeWidgetR9PanelFileP4FontT2RC7color32T4
#include "KS/SRC/ks/igo_widget_skillchallenge.h"

void SkillChallengeWidget::Init(
    PanelFile &panel,
    Font *numberfont,
    Font *textfont,
    const color32 &textColor1,
    const color32 &textColor2
)
{
    objectRoot = panel.GetPointer(challenge_meter_name);

    skillText->setFont(textfont);
    skillText->color = textColor2;
    pointText->setFont(numberfont);
    pointText->color = textColor1;

    if (state != 0)
        SetDisplay(true);
}
#endif
