#ifndef INPUTMGR_H
#define INPUTMGR_H

#pragma interface

#include "KS/SRC/singleton.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_map.h"
#include "g++-2/stl_vector.h"

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
class game_control;
class rumble_manager;

class input_device {
protected:
    friend class input_mgr;
    device_id_t device_id;

public:
    input_device();

    virtual stringx get_name() const = 0;
    virtual stringx get_name(int axis) const = 0;
    virtual device_id_t get_id() const = 0;
    virtual int get_axis_count() const = 0;
    virtual axis_id_t get_axis_id(int axis) const = 0;
    virtual rational_t get_axis_state(
        axis_id_t axis,
        int control_axis) const = 0;
    virtual rational_t get_axis_old_state(
        axis_id_t axis,
        int control_axis) const = 0;
    virtual rational_t get_axis_delta(
        axis_id_t axis,
        int control_axis) const = 0;
    virtual bool is_connected() const;
    virtual void poll() = 0;
    virtual unsigned char normalize(int raw);
    virtual ~input_device();
    virtual void vibrate(float intensity) = 0;
    virtual void vibrate(
        int vibrator_flag,
        int vibrator_power,
        int vibrator_frequency,
        int vibrator_increment) = 0;
    virtual void stop_vibration() = 0;
    virtual bool is_vibrator_present() const = 0;
    virtual void set_button_d(int button, bool state);
    virtual void set_button_a(int button, int state);
    virtual void set_stick(int stick, int x, int y);
    virtual void clear_state();
};
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
    void poll_devices();
    rational_t get_control_state(device_id_t dev_id, control_id_t control) const;
    inline int GetDefaultController() { return default_controller; }
    inline void SetDefaultController(int controller) {
        default_controller = controller;
    }
};

__asm__(".equ input_manager, 0x0046B7B0");
__asm__(".equ get_control_state__C9input_mgr11device_id_ti, 0x003441C8");

#endif
