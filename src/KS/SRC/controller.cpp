#include "KS/SRC/controller.h"

// 0x0026E9A8 kill__10controller
void controller::kill()
{
    active = false;
}

// 0x0026E9B0 resurrect__10controller
void controller::resurrect()
{
    active = true;
}

// 0x0026E9C0 set_combat_mode__10controllerb
void controller::set_combat_mode(bool enabled)
{
}

// 0x0026E9C8 get_combat_mode__C10controller
bool controller::get_combat_mode() const
{
    return false;
}

// 0x0026E9D0 is_controller__C10controller
bool controller::is_controller() const
{
    return true;
}

// 0x0026E9D8 is_mouselook_controller__C10controller
bool controller::is_mouselook_controller() const
{
    return false;
}

// 0x0026E9E0 is_character_controller__C10controller
bool controller::is_character_controller() const
{
    return false;
}

// 0x0026E9E8 is_player_controller__C10controller
bool controller::is_player_controller() const
{
    return false;
}

// 0x0026E9F0 is_joystick_usercam_controller__C10controller
bool controller::is_joystick_usercam_controller() const
{
    return false;
}

// 0x002B8868 is_entity_controller__C10controller
bool controller::is_entity_controller() const
{
    return false;
}

// 0x002B8918 is_mouselook_controller__C20mouselook_controller
bool mouselook_controller::is_mouselook_controller() const
{
    return true;
}

// 0x002B89C8 is_joystick_usercam_controller__C25joypad_usercam_controller
bool joypad_usercam_controller::is_joystick_usercam_controller() const
{
    return true;
}

// 0x002B8A48 frame_advance__17entity_controllerf
void entity_controller::frame_advance(time_value_t time_inc)
{
}

// 0x002B8A50 get_state__C17entity_controller
entity_controller::eControllerState entity_controller::get_state() const
{
    return state;
}

// 0x002B8A58 is_entity_controller__C17entity_controller
bool entity_controller::is_entity_controller() const
{
    return true;
}

// 0x002B8A60 set_blocking__17entity_controllerb
void entity_controller::set_blocking(bool blocking)
{
}

// 0x002B8A68 is_blocking__C17entity_controller
bool entity_controller::is_blocking() const
{
    return false;
}

// 0x002B8A70 is_in_cautious_mode__C17entity_controller
bool entity_controller::is_in_cautious_mode() const
{
    return false;
}

// 0x002B8A78 is_in_running_mode__C17entity_controller
bool entity_controller::is_in_running_mode() const
{
    return true;
}

// 0x002B8A80 is_moving__C17entity_controller
bool entity_controller::is_moving() const
{
    return state == WALKING || state == RUNNING || state == CRAWLING;
}
