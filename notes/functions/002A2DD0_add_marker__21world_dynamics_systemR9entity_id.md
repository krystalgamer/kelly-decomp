# add_marker__21world_dynamics_systemR9entity_id

- Address: `0x002A2DD0`
- Size: `0x8C` (140 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.0 | 71.4286 | `candidate.cpp` |
| 2 | different | 97.1429 | 94.2857 | `candidate.cpp` |
| 3 | different | 78.5714 | 74.2857 | `candidate.cpp` |
| 4 | different | 97.1429 | 94.2857 | `candidate.cpp` |
| 5 | different | 97.1429 | 94.2857 | `candidate.cpp` |

## Outcome

Five source-level marker-construction candidates reproduced every body instruction, but the compiler consistently swapped the s0 and return-address prologue saves; the best matched 33/35 instructions (97.14% bytes).
