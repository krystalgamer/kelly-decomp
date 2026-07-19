// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016A6D0)
// 0x0016A6D0 Hide__17ObjectAlertWidgetb
class ObjectAlertWidget { char padding[0x10]; float fade; int fadeDir; public: void Hide(bool fadeOut); };
void ObjectAlertWidget::Hide(bool fadeOut) { fadeDir = -1; if (!fadeOut) fade = 0.0f; }
#endif
