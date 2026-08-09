// Legacy guarded controller definitions selected by generated build shims.


// 0x002755B0 __17entity_controllerP6entity
#include "KS/SRC/controller.h"

entity_controller::entity_controller(entity *ent) : controller(), owner(ent), state(NONE) {}

// 0x00275C80 __25joypad_usercam_controllerP20dolly_and_strafe_mcsP17theta_and_psi_mcs
#include "KS/SRC/controller.h"

joypad_usercam_controller::joypad_usercam_controller(dolly_and_strafe_mcs *move, theta_and_psi_mcs *angle) : controller(), move_cs(move), angle_mcs(angle) {}
