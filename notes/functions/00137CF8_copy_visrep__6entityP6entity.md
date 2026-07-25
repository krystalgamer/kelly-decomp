# copy_visrep__6entityP6entity

- Address: `0x00137CF8`
- Size: `0x98` (152 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.75 | 42.5 | `candidate.cpp` |
| 2 | different | 67.7632 | 39.4737 | `candidate.cpp` |
| 3 | different | 73.0263 | 65.7895 | `candidate.cpp` |
| 4 | different | 94.0789 | 76.3158 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the released NGL mesh-copy path and exact getter vtable slots. Restoring set_flag and binding the vtable register reproduced all calls and graphics-flag branches on attempt 5.

## Outcome

Matched entity visual representation copy
