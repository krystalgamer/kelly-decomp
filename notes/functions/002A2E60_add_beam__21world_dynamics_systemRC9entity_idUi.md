# add_beam__21world_dynamics_systemRC9entity_idUi

- Address: `0x002A2E60`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 80.0 | `candidate.cpp` |
| 2 | different | 79.1667 | 76.6667 | `candidate.cpp` |
| 3 | different | 83.3333 | 80.0 | `candidate.cpp` |
| 4 | different | 76.6667 | 73.3333 | `candidate.cpp` |
| 5 | different | 83.3333 | 80.0 | `candidate.cpp` |

## Outcome

Deferred world_dynamics_system::add_beam after five source-level attempts; the released allocation, beam construction, insertion, and return reproduced, but six target call-argument and prologue scheduling instructions did not.
