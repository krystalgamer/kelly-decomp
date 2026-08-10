// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EDD98)
// 0x002EDD98 ChangePOButton__26ChangeCamMenuEntryFunctioni
#include "KS/SRC/ks/camera_tool_decl.h"
#include "KS/SRC/ks/menu.h"

asm(".equ menus, 0x00424EE8");

bool ChangeCamMenuEntryFunction::ChangePOButton(int buttonid)
{
    if (buttonid == 7)
        menus->CloseMenu();
    return true;
}
#endif
