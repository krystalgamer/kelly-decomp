# set_max_lights__6entityUi

- Address: `0x00139B70`
- Size: `0x64` (100 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.0 | 61.5385 | `candidate.cpp` |
| 2 | different | 81.0 | 72.0 | `candidate.cpp` |
| 3 | different | 83.0 | 76.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the released min expression, entity/light-manager fields, and get_light_set virtual slot. Preserving the two temporary values as volatile matched on attempt 4.

## Outcome

Matched entity light limit
