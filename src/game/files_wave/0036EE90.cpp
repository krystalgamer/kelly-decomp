void WATER_Normal(
    float x,
    float z,
    float& nx,
    float& ny,
    float& nz
) asm("WATER_Normal__FffRfN22");

void WATER_Normal(
    float x,
    float z,
    float& nx,
    float& ny,
    float& nz
) {
    nx = 0.0f;
    ny = 1.0f;
    nz = 0.0f;
}
