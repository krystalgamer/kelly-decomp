struct kellyslater_controller { char padding_to_meter[0x1648]; char special_meter; char padding_to_player[0x2B]; int player_num; };
class ScoringManager { char padding[0x8]; kellyslater_controller* ksctrl; int playerIdx; void* specialMeter; public: void SetKsctrl(kellyslater_controller* value); };
void ScoringManager::SetKsctrl(kellyslater_controller* value) { ksctrl = value; playerIdx = value->player_num; specialMeter = &value->special_meter; }
