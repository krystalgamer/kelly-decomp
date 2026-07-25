# get_radius__C17collision_capsule

- Address: `0x002FF4E0`
- Size: `0x94` (148 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.h`
- Reference source: `KS/SRC/capsule.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.3469 | 0.0 | `candidate.cpp` |
| 2 | different | 36.4865 | 10.8108 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Used the exact released capsule/vector expression with the authentic vector3d constructors and sqrtf address. This preserved the stack temporary, FPU sqrt sequence, and fallback call and matched on attempt 3.

## Outcome

Matched collision capsule radius
