// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00112D08)
// 0x00112D08 vibrate__18AISurferControllerf
class AISurferController {
public:
    void vibrate(float intensity);
};

void AISurferController::vibrate(float intensity) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112D10)
// 0x00112D10 vibrate__18AISurferControlleriiii
class AISurferController {
public:
    void vibrate(int flag, int power, int frequency, int increment);
};

void AISurferController::vibrate(
    int flag,
    int power,
    int frequency,
    int increment
) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112D18)
// 0x00112D18 stop_vibration__18AISurferController
class AISurferController {
public:
    void stop_vibration();
};

void AISurferController::stop_vibration() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112D20)
// 0x00112D20 is_vibrator_present__C18AISurferController
class AISurferController {
public:
    bool is_vibrator_present() const;
};

bool AISurferController::is_vibrator_present() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112D28)
// 0x00112D28 is_connected__C18AISurferController
class AISurferController {
public:
    bool is_connected() const;
};

bool AISurferController::is_connected() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112DA0)
// 0x00112DA0 get_id__C18AISurferController
class AISurferController {
    int device_id;

public:
    int get_id() const;
};

int AISurferController::get_id() const {
    return device_id;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112CE0)
// 0x00112CE0 _$_18AISurferController
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_12input_device");
extern const char derived_vtable[];
__asm__(".equ _$_12input_device, 0x00343938");
__asm__(".equ derived_vtable, 0x004B8508");
struct AISurferLayout { int device_id; const void *vtable; };
extern "C" void AISurferDtor(void *self, int deleting) __asm__("_$_18AISurferController");
void AISurferDtor(void *self, int deleting) { ((AISurferLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
