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
