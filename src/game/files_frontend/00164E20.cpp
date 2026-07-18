class MeterChallengeWidget { char padding[0x18]; int fadeDir; public: void Hide(bool fadeOut); };
void MeterChallengeWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
