class beam_effect { char padding[0xA]; unsigned char mode; public: bool is_inverted() const; };
bool beam_effect::is_inverted() const { return (unsigned char)(mode + 2) < 2; }
