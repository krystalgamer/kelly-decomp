class SkillChallengeWidget { char padding[0x1C]; int fadeDir; public: void Hide(bool fadeOut); };
void SkillChallengeWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
