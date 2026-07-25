# __Q219animation_interface9anim_infofRC7stringxiffi

- Address: `0x0013CF30`
- Size: `0xA0` (160 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/animation_interface.cpp`
- Reference source: `KS/SRC/animation_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.25 | 80.0 | `candidate.cpp` |
| 2 | different | 96.25 | 95.0 | `candidate.cpp` |
| 3 | different | 96.25 | 95.0 | `candidate.cpp` |
| 4 | different | 86.25 | 82.5 | `candidate.cpp` |
| 5 | different | 86.25 | 82.5 | `candidate.cpp` |

## Outcome

Five released-source and ABI-bound animation-info constructors reproduced the entire function at exact size; the best differed only in two prologue scheduling instructions.
