class ObjectAlertWidget { char padding[0x10]; float fade; int fadeDir; public: void Hide(bool fadeOut); };
void ObjectAlertWidget::Hide(bool fadeOut) { fadeDir = -1; if (!fadeOut) fade = 0.0f; }
