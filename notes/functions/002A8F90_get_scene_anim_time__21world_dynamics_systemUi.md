# get_scene_anim_time__21world_dynamics_systemUi

- Address: `0x002A8F90`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.0 | 28.0 | `candidate.cpp` |
| 2 | different | 79.0 | 76.0 | `candidate.cpp` |
| 3 | different | 55.0 | 32.0 | `candidate.cpp` |
| 4 | different | 97.0 | 96.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the exact scene animation vector/entry layouts, handle/entity tests, animation tree call/type, and time offset. Separating the initial start load from the retained list pointer matched on attempt 5.

## Outcome

Matched scene animation time lookup
