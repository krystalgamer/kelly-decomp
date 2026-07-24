# _$_6camera

- Address: `0x002C38A8`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released camera destructor, entity inheritance, microphone offset/vtable, camera vtable, and virtual delete path. It matched on attempt 1.

## Outcome

Matched camera destructor
