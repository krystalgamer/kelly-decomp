#ifndef INPUTMGR_H
#define INPUTMGR_H

#include "KS/SRC/singleton.h"
#include "g++-2/stl_map_shared.h"
#include "g++-2/stl_vector_shared.h"

typedef float rational_t;
typedef int control_id_t;
typedef int axis_id_t;

enum device_id_t {
    INVALID_DEVICE_ID = -1,
    JOYSTICK1_DEVICE = 1,
    JOYSTICK2_DEVICE,
    JOYSTICK3_DEVICE,
    JOYSTICK4_DEVICE,
    JOYSTICK5_DEVICE,
    JOYSTICK6_DEVICE,
    JOYSTICK7_DEVICE,
    JOYSTICK8_DEVICE,
    AI_JOYSTICK,
    KEYBOARD1_DEVICE,
    MOUSE1_DEVICE,
    ANY_LOCAL_JOYSTICK,
};

#define JOYSTICK_DEVICE JOYSTICK1_DEVICE

const rational_t AXIS_MAX = 1.0f;
const rational_t AXIS_MID = 0.0f;
const rational_t AXIS_MIN = -1.0f;

class input_mgr;
class input_device;
class game_control;
class rumble_manager;
extern input_mgr* input_manager;

typedef vector<input_device *> device_map_t;
typedef map<control_id_t, game_control> control_map_t;

class input_mgr : public singleton {
    rumble_manager *rumble_ptr;
    device_map_t device_map;
    control_map_t control_map;
    int default_controller;
    unsigned int flags;

public:
    static inline input_mgr* inst() { return input_manager; }
    rational_t get_control_state(device_id_t dev_id, control_id_t control) const;
    inline int GetDefaultController() { return default_controller; }
    inline void SetDefaultController(int controller) {
        default_controller = controller;
    }
};

__asm__(".equ input_manager, 0x0046B7B0");
__asm__(".equ get_control_state__C9input_mgr11device_id_ti, 0x003441C8");

#endif
