// Released blur state accessors.

extern bool BLUR_Active;

// 0x00308260 BLUR_TurnOff__Fv
void BLUR_TurnOff() {
    BLUR_Active = false;
}
