// Matching decompilation blocks selected by generated build shims.

// 0x00125070 update_unused_velocity__18physical_interfacef
#include "KS/SRC/physical_interface.h"
#include "KS/SRC/entity.h"

extern const vector3d ZEROVEC;
__asm__(".equ ZEROVEC, 0x00513840");
__asm__(".equ using_velocity__C18physical_interface, 0x00122CC8");

void physical_interface::update_unused_velocity(float increment)
{
    if (!using_velocity())
    {
        if (
            my_entity->get_movement_info()
            && my_entity->get_movement_info()->frame_delta_valid
        )
        {
            velocity =
                my_entity->get_movement_info()->frame_delta.get_position()
                / increment;
        }
        else
        {
            velocity = ZEROVEC;
        }
    }
}

// 0x00145E70 __tf18physical_interface
#include "KS/SRC/physical_interface.h"

extern "C" void **physical_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *physical_base_type[] __asm__("__ti16entity_interface");
extern "C" void *physical_type[] __asm__("__ti18physical_interface");
extern "C" const char physical_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti18physical_interface, 0x005A2888");
__asm__(".equ physical_name, 0x004CEBE0");

extern "C" void **physical_rtti() __asm__("__tf18physical_interface");
void **physical_rtti()
{
    if (!physical_type[0]) {
        physical_base_rtti();
        __rtti_si(physical_type, physical_name, physical_base_type);
    }
    return physical_type;
}


// 0x00125228 set_last_collision_normal__18physical_interfaceRC8vector3d
#include "KS/SRC/physical_interface.h"

void physical_interface::set_last_collision_normal(const vector3d &value) { last_collision_normal = value; }

// 0x00122CC8 using_velocity__C18physical_interface
#include "KS/SRC/entity.h"
#include "KS/SRC/physical_interface.h"

bool physical_interface::using_velocity() const {
    return !my_entity->is_stationary();
}


// 0x00125B18 destroy_guidance_sys__18physical_interface
#include "KS/SRC/physical_interface.h"
#include "KS/SRC/guidance_sys.h"

void physical_interface::destroy_guidance_sys()
{
    delete guide_sys;
    guide_sys = 0;
}

// 0x00125130 apply_force_increment__18physical_interfaceRC8vector3dQ218physical_interface10force_typeT1i
#include "KS/SRC/physical_interface.h"



void physical_interface::apply_force_increment( const vector3d& f,
                                             force_type ft,
                                             const vector3d& loc, int mods )
{
  if(get_mass() != 0.0f){
  vector3d a = f/get_mass();
  acceleration_factor += a;

  if (ft==CONTINUOUS)
    set_acceleration_correction_factor(get_acceleration_correction_factor() + 0.5f*a);
  }

  effectively_standing = false;
}
