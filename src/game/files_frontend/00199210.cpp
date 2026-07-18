struct PauseMenuSystem { char padding[0x90]; bool draw; };
extern PauseMenuSystem* frontend_pause_system;
__asm__(".equ frontend_pause_system, 0x003E772C");
bool IGOIsPaused() { return frontend_pause_system->draw; }
