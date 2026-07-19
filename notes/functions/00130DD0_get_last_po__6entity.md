# get_last_po__6entity

- Address: `0x00130DD0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.8571 | 28.5714 | `candidate.cpp` |
| 2 | different | 42.8571 | 28.5714 | `candidate.cpp` |
| 3 | different | 42.8571 | 28.5714 | `candidate.cpp` |
| 4 | different | 75.0 | 57.1429 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released accessor returns `*last_po` at `0x16C` when available, otherwise `get_abs_po()` through the pointer at `0x50`. Branch barriers and inverted source condition reproduced the target layout on attempt five.

## Outcome

The released `entity::get_last_po` fallback logic matched on the fifth and final candidate.
