# _$_12light_source

- Address: `0x002CD0C8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 69.5652 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released light_source destructor, entity/vtable/properties layout, terrain cleanup, property delete, and base destructor. A base-call continuation barrier matched on attempt 2.

## Outcome

Matched light source destructor
