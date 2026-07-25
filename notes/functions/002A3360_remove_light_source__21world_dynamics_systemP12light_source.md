# remove_light_source__21world_dynamics_systemP12light_source

- Address: `0x002A3360`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.561 | 4.878 | `candidate.cpp` |
| 2 | different | 76.2195 | 65.8537 | `candidate.cpp` |
| 3 | different | 66.4634 | 58.5366 | `candidate.cpp` |
| 4 | different | 87.8049 | 85.3659 | `candidate.cpp` |
| 5 | different | 27.907 | 4.6512 | `candidate.cpp` |

## Outcome

Five released light-removal variants reproduced vector erase and deletion but not iterator register scheduling.
