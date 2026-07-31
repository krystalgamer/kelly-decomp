// Matching decompilation blocks selected by generated build shims.


// 0x0026F7A0 ResetPierEntities__22kellyslater_controller
class entity;
struct controller_pier_layout {
    char padding[0x1b00];
    entity *pier_entities[3];
    int num_pier_entities;
};
extern "C" void reset_pier_entities(controller_pier_layout *self)
    __asm__("ResetPierEntities__22kellyslater_controller");
void reset_pier_entities(controller_pier_layout *self) {
    int index = 2;
    entity **entry = &self->pier_entities[2];
loop:
    *entry = 0;
    --index;
    KELLY_DECOMP_COMPILER_BARRIER();
    KELLY_DECOMP_COMPILER_BARRIER();
    if (index >= 0) {
        --entry;
        goto loop;
    }
    --entry;
    self->num_pier_entities = 0;
}

// 0x0026F750 OnNewWave__22kellyslater_controller
class SurfBoardObjectClass {
public:
    void OnNewWave();
};

__asm__(".equ OnNewWave__20SurfBoardObjectClass, 0x001EE648");

struct controller_new_wave_layout {
    char padding[0x37c];
    SurfBoardObjectClass my_board_controller;
};

extern "C" void reset_controller(void *)
    __asm__("Reset__22kellyslater_controller");
extern "C" void controller_on_new_wave(controller_new_wave_layout *self)
    __asm__("OnNewWave__22kellyslater_controller");
__asm__(".equ Reset__22kellyslater_controller, 0x00211538");

void controller_on_new_wave(controller_new_wave_layout *self) {
    self->my_board_controller.OnNewWave();
    reset_controller(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
