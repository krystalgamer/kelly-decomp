#include "KS/SRC/ks/player.h"

// 0x00259840 TakePhoto__FfPPv
bool TakePhoto(float dt, void **data)
{
    return false;
}

// 0x002597B0 AddAccomplishment__11player_infoP6entity
void player_info::AddAccomplishment(entity *ent)
{
    if (numAccomplishments < MAX_ACC)
        accomplishments[numAccomplishments++] = ent;
}

// 0x002597D8 HasAccomplishment__C11player_infoPC6entity
bool player_info::HasAccomplishment(const entity *ent) const
{
    int i;

    for (i = 0; i < numAccomplishments; i++) {
        if (accomplishments[i] == ent)
            return true;
    }
    return false;
}
