# apply_destruction_fx__6entity

- Address: `0x00137990`
- Size: `0x5C` (92 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.875 | 37.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released destroy-info branch, direct helper calls, entity field offset, and virtual set_active slot. A non-tail continuation barrier matched on attempt 2.

## Outcome

Matched entity destruction effect dispatch
