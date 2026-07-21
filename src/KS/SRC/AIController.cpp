// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00100200)
// 0x00100200 get_axis_count__C18AISurferController
class AISurferController {
public:
    int get_axis_count() const;
};

int AISurferController::get_axis_count() const {
    return 23;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00100330)
// 0x00100330 get_axis_id__C18AISurferControlleri
class AISurferController {
public:
    int get_axis_id(int axis) const;
};

int AISurferController::get_axis_id(int axis) const {
    return axis;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00100568)
// 0x00100568 clearButtons__18AISurferController
class AISurferController {
    char padding[0x9c];
    float X, Y, XRight, YRight;
    bool ButtonX, ButtonO, ButtonSq, ButtonTr;
    bool ButtonL1, ButtonL2, ButtonL3, ButtonR1, ButtonR2, ButtonR3;
    bool ButtonSelect, ButtonStart;
public:
    void clearButtons();
};
void AISurferController::clearButtons()
{
  X = Y = 0;
  ButtonX = ButtonO = ButtonSq = ButtonTr = false;
  ButtonL1 = ButtonL2 = ButtonL3 = false;
  ButtonR1 = ButtonR2 = ButtonR3 = false;
  ButtonStart = ButtonSelect = 0;
}
#endif
