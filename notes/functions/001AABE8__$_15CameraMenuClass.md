# _$_15CameraMenuClass

- Address: `0x001AABE8`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `camera_menu_dtor_1.cpp` |
| 2 | different | 80.0 | 80.0 | `camera_menu_dtor_2.cpp` |
| 3 | different | 0.0 | 0.0 | `camera_menu_dtor_3.cpp` |
| 4 | different | 62.5 | 40.0 | `camera_menu_dtor_4.cpp` |
| 5 | different | 70.0 | 70.0 | `camera_menu_dtor_5.cpp` |

### Attempt 1 notes

The source-shaped wrapper emitted the correct operations, but EE GCC placed
the `this` copy and vtable low-half materialization before the RA save.

Re-evaluating this identical first candidate after the generalized EE destructor fixup now produces an exact match; this infrastructure recheck does not consume a sixth source attempt.

### Attempt 2 notes

A leading scheduling barrier moved the RA save earlier but also moved the
`this` copy ahead of both the save and vtable materialization.

### Attempt 3 notes

The native C++ destructor shape with an external vtable tail-called the base
`FEMenu` destructor, reducing the function to five instructions.

### Attempt 4 notes

Adding a volatile local prevented no useful scheduling and expanded the
frame from 16 to 32 bytes.

### Attempt 5 notes

Separating the object and vtable locals returned to the first equivalent
schedule. The target `lui`, RA-save, `this`-copy order remains unreproduced.

## Outcome

The original source-shaped destructor matched after the EE object fixup restored the released prologue schedule.
