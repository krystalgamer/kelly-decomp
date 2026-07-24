# _$_12flyby_camera

- Address: `0x00231348`
- Size: `0x70` (112 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.4643 | 71.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released flyby destructor, PanelAnimFile virtual deletion, and camera inheritance. Correcting the base vtable address and preventing a tail call matched on attempt 2.

## Outcome

Matched flyby camera destructor
