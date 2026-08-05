# OnUnactivate__18ControllerFrontEndP6FEMenu

- Address: `0x001BD0B0`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-controller-unactivate.cpp` |

## Outcome

The shared controller-menu layout places `selected_controller` at 0x17c.
The released method stores it through `FEMenuSystem::SetDeviceFlags` and
re-enables the shared helpbar without local layout shells.
