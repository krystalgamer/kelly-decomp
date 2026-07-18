class game { char padding[0x250]; int boardIdx[2]; public: void SetBoardIdx(int hero, int index); };
void game::SetBoardIdx(int hero, int index) { boardIdx[hero] = index; }
