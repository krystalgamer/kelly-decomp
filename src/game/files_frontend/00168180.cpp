class WaveIndicatorWidget { char padding[0x98]; int fadeDir; int state; public: void Hide(bool fadeOut); };
void WaveIndicatorWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; else state = 0; }
