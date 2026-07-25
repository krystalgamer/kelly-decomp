# stl_prealloc__15anim_id_manager

- Address: `0x00127910`
- Size: `0xB0` (176 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.7174 | 15.2174 | `candidate.cpp` |
| 2 | different | 33.6957 | 23.913 | `candidate.cpp` |
| 3 | different | 22.8261 | 10.8696 | `candidate.cpp` |
| 4 | different | 29.8913 | 19.5652 | `candidate.cpp` |
| 5 | different | 82.3864 | 77.2727 | `candidate.cpp` |

## Outcome

Five released singleton-preallocation variants could not reproduce the original whole-translation-unit argument and saved-register scheduling.
