class BalanceMeter { char padding[0x14]; int player_num; public: BalanceMeter(); };
BalanceMeter::BalanceMeter() { player_num = -1; }
