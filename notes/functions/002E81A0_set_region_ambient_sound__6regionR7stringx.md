# set_region_ambient_sound__6regionR7stringx

- Address: `0x002E81A0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 0.0 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 0.0 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

With the released inline `stringx::length`, all three forms reduce to an
eight-byte tail call to `stringx::operator=` with the member adjustment in the
delay slot. The target retains a 28-byte frame, so the wrapper was deferred.
