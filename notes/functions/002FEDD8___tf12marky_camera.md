# __tf12marky_camera

- Address: `0x002FEDD8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc2`
- Debug source: `camera.h`
- Reference source: `KS/SRC/camera.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.2222 | 2.2222 | `candidate.cpp` |
| 2 | different | 68.8889 | 53.3333 | `candidate.cpp` |
| 3 | different | 68.8889 | 53.3333 | `candidate.cpp` |
| 4 | different | 68.8889 | 53.3333 | `candidate.cpp` |
| 5 | different | 52.1739 | 34.7826 | `candidate.cpp` |

### Attempt 1 notes

The exact released marky_camera -> game_camera -> camera -> entity inheritance and nested shared RTTI helpers reproduced every initialization call, but emitted the reduced three-register materialization and eight fewer bytes.

### Attempt 2 notes

Constraining the marky-camera typeinfo pointer restored target size while materializing the full pointer early and rotating the camera hierarchy registers.

### Attempt 3 notes

Using the generated camera and game-camera helper symbol names did not change inlining or register allocation.

### Attempt 4 notes

The released camera-header line context retained the same constrained-pointer schedule.

### Attempt 5 notes

Expressing all target hierarchy registers directly added one instruction and continued to rematerialize typeinfo addresses. Exact inheritance was inspected and no local class recreation was retained.

## Outcome

Deferred marky-camera RTTI after five source-level attempts; exact released inheritance and nested shared RTTI calls did not reproduce original typeinfo register materialization.
