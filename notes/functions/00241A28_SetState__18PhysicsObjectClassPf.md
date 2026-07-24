# SetState__18PhysicsObjectClassPf

- Address: `0x00241A28`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/physics.cpp`
- Reference source: `KS/SRC/ks/physics.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 33.5938 | 12.5 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released state unpack and velocity recomputation matched after correcting linMom to offset 0x70 and giving vector3d its scalar assignment operator.

## Outcome

The released physics state setter matched exactly on the third attempt.
