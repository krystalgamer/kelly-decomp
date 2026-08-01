# _$_25joypad_usercam_controller

- Address: `0x002B8920`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `controller.h`
- Reference source: `KS/SRC/controller.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `joypad-dtor-1.cpp` |
| 2 | different | 6.25 | 0.0 | `joypad-dtor-2.cpp` |
| 3 | different | 6.25 | 0.0 | `joypad-dtor-3.cpp` |

## Outcome

Three native joypad user-camera destructor forms did not reproduce the legacy deleting-destructor sequence; the manual vtable wrapper was removed.
