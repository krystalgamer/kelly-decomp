# add_sky__21world_dynamics_systemR10chunk_fileRC9entity_idUi

- Address: `0x002A7380`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.8684 | 84.2105 | `candidate.cpp` |
| 2 | different | 84.8684 | 76.3158 | `candidate.cpp` |
| 3 | different | 43.5897 | 33.3333 | `candidate.cpp` |
| 4 | different | 39.7436 | 23.0769 | `candidate.cpp` |
| 5 | different | 76.3158 | 73.6842 | `candidate.cpp` |

## Outcome

Five released-source sky factory variants reproduced allocation, construction, flagging, registration, and return, but constructor argument/prologue scheduling did not match.
