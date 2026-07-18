class SkillChallengeWidget { char padding[0x1C]; int fadeDir; public: void Show(bool fadeIn); };
void SkillChallengeWidget::Show(bool fadeIn) { if (fadeIn) fadeDir = 1; }
