# GetElementState__10MenuSystemi

- Address: `0x00241150`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.25 | 50.0 | `size40-camera-menu-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-menu-system-2.cpp` |
| 3 | matched | 100.0 | 100.0 | `size40-menu-system-3.cpp` |

## Outcome

The shared `MenuSystem` method uses a null-initialized result and canonical `Menu::GetElementFlags` call.
