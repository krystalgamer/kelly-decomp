class Career { public: class Location { char padding[0x4]; bool movie_unlocked; bool movie_shown; bool board_unlocked; public: void Reset(); }; };
void Career::Location::Reset() { movie_unlocked = false; movie_shown = false; board_unlocked = false; }
