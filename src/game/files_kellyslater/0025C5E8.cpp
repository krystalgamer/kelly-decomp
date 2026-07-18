class Career { char padding[0x94]; bool boards[16]; public: bool IsBoardUnlocked(int index) const; };
bool Career::IsBoardUnlocked(int index) const { return boards[index]; }
