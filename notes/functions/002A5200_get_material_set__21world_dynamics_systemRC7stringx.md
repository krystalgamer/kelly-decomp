# get_material_set__21world_dynamics_systemRC7stringx

- Address: `0x002A5200`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.0244 | 4.878 | `candidate.cpp` |
| 2 | different | 39.6341 | 4.878 | `candidate.cpp` |
| 3 | different | 18.75 | 0.0 | `candidate.cpp` |
| 4 | different | 21.9512 | 0.0 | `candidate.cpp` |
| 5 | different | 36.5854 | 14.6341 | `candidate.cpp` |

## Outcome

Five released material-set lookup variants reproduced string comparison but not iterator register scheduling.
