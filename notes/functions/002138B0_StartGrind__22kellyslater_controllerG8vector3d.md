# StartGrind__22kellyslater_controllerG8vector3d

- Address: `0x002138B0`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released grind implementation is entirely commented out. Restoring `vector3d`'s user-defined copy constructor preserves its caller-side by-value ABI.

## Outcome

The released empty `kellyslater_controller::StartGrind` method matched exactly on the first attempt with the original vector aggregate ABI.
