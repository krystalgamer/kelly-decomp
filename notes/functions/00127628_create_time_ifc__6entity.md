# create_time_ifc__6entity

- Address: `0x00127628`
- Size: `0x60` (96 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 66.6667 | `candidate.cpp` |
| 2 | different | 50.0 | 40.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released time_interface inheritance/constructor and ENTITY_INTERFACE macro. Fixing only the vtable register while preserving the allocation result matched on attempt 3.

## Outcome

Matched entity time interface creation
