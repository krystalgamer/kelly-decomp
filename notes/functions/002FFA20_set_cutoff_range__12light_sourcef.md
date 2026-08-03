# set_cutoff_range__12light_sourcef

- Address: `0x002FFA20`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.h`
- Reference source: `KS/SRC/light.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.5714 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 3.5714 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 3.5714 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

All three shared-layout forms tail-call `light_properties::set_cutoff_range`
with the property load in the delay slot. The target retains a 28-byte frame,
so the artificial wrapper was removed.
