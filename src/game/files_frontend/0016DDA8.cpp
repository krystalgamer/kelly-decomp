class IconCountWidget { char padding[0x1C]; int fadeDir; public: void Hide(bool fadeOut); };
void IconCountWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
