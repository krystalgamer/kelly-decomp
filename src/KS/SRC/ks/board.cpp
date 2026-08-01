// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/entity.h"
#include "KS/SRC/ks/board.h"

extern float air_gravity;

// 0x001EFC10 DoingFaceTurn__20SurfBoardObjectClass
bool SurfBoardObjectClass::DoingFaceTurn()
{
    return turn_type == 7 || turn_type == 13 || turn_type == 9 ||
        turn_type == 10 || turn_type == 11 || turn_type == 12 ||
        turn_type == 8;
}

// 0x001EE8D8 Terminate__20SurfBoardObjectClass
int SurfBoardObjectClass::Terminate()
{
    return 1;
}

// 0x001F1ED0 ResetTimers__20SurfBoardObjectClass
void SurfBoardObjectClass::ResetTimers()
{
    standing_time = 0;
    backwards_time = 0;
}

// 0x001F99D0 GetLeanPercentage__20SurfBoardObjectClass
float SurfBoardObjectClass::GetLeanPercentage()
{
    return curLeanAngle / (maxLeanAngle * 0.017453292f);
}

// 0x001F99F0 CalculatePathPeakTime__20SurfBoardObjectClass
float SurfBoardObjectClass::CalculatePathPeakTime()
{
    float velocity = rb->linMom.y / rb->mass;
    float gravity = -air_gravity * 0.72f / rb->mass;
    if (gravity == 0.0f)
        goto no_gravity;
    return -velocity / gravity;

no_gravity:
    return 0.0f;
}

// 0x001F9B38 CollideWithLip__20SurfBoardObjectClass
bool SurfBoardObjectClass::CollideWithLip()
{
    vector3d difference = my_board->get_abs_position() - float_pos;
    if (float_jump)
        difference.y = 0.0f;
    return dot(difference, difference) < 0.4f;
}

// 0x001EE8E0 Load__20SurfBoardObjectClassPc
int SurfBoardObjectClass::Load(char *name)
{
    float min_x = 100000.0f;
    float min_y = 100000.0f;
    float min_z = 100000.0f;
    float max_x = -100000.0f;
    float max_y = -100000.0f;
    float max_z = -100000.0f;

    x_extent = __builtin_fabsf(max_x - min_x);
    y_extent = __builtin_fabsf(max_y - min_y);
    z_extent = __builtin_fabsf(max_z - min_z);
    return 1;
}
