# set_time__16entity_anim_treef

- Address: `0x00117450`
- Size: `0xE4` (228 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.1475 | 8.1967 | `candidate.cpp` |
| 2 | different | 72.8448 | 44.8276 | `candidate.cpp` |
| 3 | different | 68.9655 | 31.0345 | `candidate.cpp` |
| 4 | different | 73.7069 | 48.2759 | `candidate.cpp` |
| 5 | different | 73.7069 | 48.2759 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released control updates, validity checks, virtual animation calls, and optional blend traversal are recovered, but the target reuses one saved register and a 64-byte frame that the compiler would not coalesce from the available source.
