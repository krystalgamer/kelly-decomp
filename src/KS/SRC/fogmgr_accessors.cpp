#include "KS/SRC/fogmgr.h"

// 0x00338518 set_fog_distance__11fog_managerff
void fog_manager::set_fog_distance(
    float start_distance,
    float end_distance)
{
    specified_fog_start_distance = start_distance;
    specified_fog_end_distance = end_distance;
}

// 0x00338630 set_fog_table_gamma__11fog_managerf
void fog_manager::set_fog_table_gamma(float value)
{
    specified_fog_table_gamma = value;
}
