#ifndef GAME_DATA_H
#define GAME_DATA_H

#pragma interface

#include "KS/SRC/singleton.h"

class StoredConfigData : public singleton {
    char data_to_camera[0x30 - sizeof(singleton)];
    char camera[4][20];

public:
    char *getLastCamera(int hero);
    void setLastCamera(int hero, const char *name);
};

#endif


#if defined(KELLY_DECOMP_FUNCTION_002B8B48)
// 0x002B8B48 __tf16StoredConfigData
extern "C" void __rtti_class(
    void **type, const char *name, const void *bases, int count
);
extern "C" void **singleton_rtti() __asm__("__tf9singleton");
extern "C" void *stored_config_type[]
    __asm__("__ti16StoredConfigData");
extern "C" const char stored_config_name[];
extern "C" const char stored_config_bases[];

__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf9singleton, 0x00144398");
__asm__(".equ __ti16StoredConfigData, 0x005A3E00");
__asm__(".equ stored_config_name, 0x004FE530");
__asm__(".equ stored_config_bases, 0x004FE548");

extern "C" void **stored_config_rtti()
    __asm__("__tf16StoredConfigData");

void **stored_config_rtti()
{
    if (!stored_config_type[0])
    {
        singleton_rtti();
        __rtti_class(
            stored_config_type,
            stored_config_name,
            stored_config_bases,
            1
        );
    }
    return stored_config_type;
}
#endif
