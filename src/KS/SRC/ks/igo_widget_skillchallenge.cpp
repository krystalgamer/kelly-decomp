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
