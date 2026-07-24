# set_mesh_distance__6entityR9nglVectorff

- Address: `0x00139BD8`
- Size: `0x64` (100 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.1613 | 3.2258 | `candidate.cpp` |
| 2 | different | 87.0 | 48.0 | `candidate.cpp` |
| 3 | different | 52.0 | 24.0 | `candidate.cpp` |
| 4 | different | 91.0 | 64.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the exact mesh pointer fields, nglVector 128-bit representation, sphere center/radius offsets, and conditional assignments. Fixed source-level registers matched on attempt 5.

## Outcome

Matched entity mesh distance setup
