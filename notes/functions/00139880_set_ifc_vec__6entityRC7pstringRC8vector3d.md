# set_ifc_vec__6entityRC7pstringRC8vector3d

- Address: `0x00139880`
- Size: `0xBC` (188 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released AI, physical, and soft-attribute interface dispatch chain matches
exactly with the shared interface vtable declaration.

## Outcome

Released vector attribute dispatch across AI, physical, and soft interfaces reproduces the target exactly.
