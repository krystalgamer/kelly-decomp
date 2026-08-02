#include "KS/SRC/material.h"

// 0x003397B0 send_context__8materiali5map_eUiG7color32
void material::send_context(
    int frame,
    map_e map,
    unsigned int flags,
    color32 color)
{
}

// 0x003397F0 get_flags__C8material
unsigned int material::get_flags() const
{
    return mat_flags;
}

// 0x003397F8 set_flags__8materialUi
void material::set_flags(unsigned int value)
{
    mat_flags = value;
}
