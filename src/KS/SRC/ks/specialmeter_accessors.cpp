#include "KS/SRC/ks/specialmeter.h"

// 0x00250CA0 Initialize__12SpecialMeteri
void SpecialMeter::Initialize(int player_index)
{
    playerIdx = player_index;
}

// 0x00250EA8 SetUpSpecialTimer__12SpecialMeter
void SpecialMeter::SetUpSpecialTimer()
{
    current_special_time = 0.0f;
}

// 0x002510F0 CanRegionLink__C12SpecialMeter
bool SpecialMeter::CanRegionLink() const
{
    return isEnabled;
}
