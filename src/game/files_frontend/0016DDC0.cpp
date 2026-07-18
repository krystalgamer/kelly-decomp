class IconCountWidget { char padding[0x1C]; int fadeDir; public: void Show(bool fadeIn); };
void IconCountWidget::Show(bool fadeIn) { if (fadeIn) fadeDir = 1; }
