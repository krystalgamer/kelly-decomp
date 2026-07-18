struct MenuSystem { char padding[0x470]; bool active; };
extern MenuSystem* menus;
__asm__(".equ menus, 0x00424EE8");
bool IsDebugMenuDisplayed() { return menus->active != 0; }
