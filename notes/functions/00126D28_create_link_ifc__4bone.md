# create_link_ifc__4bone

- Address: `0x00126D28`
- Size: `0x64` (100 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/bone.cpp`
- Reference source: `KS/SRC/bone.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.0 | 64.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released ENTITY_INTERFACE_CPP expansion, generic/bone/link inheritance, constructor fields, allocation size, vtable, and bone member offset. The source-faithful class form matched on attempt 2.

## Outcome

Matched bone link interface creation
