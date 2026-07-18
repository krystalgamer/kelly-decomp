extern const char signaller_signal_name[];
__asm__(".equ signaller_signal_name, 0x00500D28");
class signaller { public: const char* get_signal_name(unsigned short index) const; };
const char* signaller::get_signal_name(unsigned short index) const { return signaller_signal_name; }
