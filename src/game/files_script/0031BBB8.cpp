class CurrentSoundEvent { int event; int sound; char padding[0x10]; int extra; public: CurrentSoundEvent(); };
CurrentSoundEvent::CurrentSoundEvent() { extra = 0; event = 105; sound = 0; }
