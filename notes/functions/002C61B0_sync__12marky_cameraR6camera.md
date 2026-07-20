# sync__12marky_cameraR6camera

- Address: `0x002C61B0`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.9167 | 91.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released wrapper checks externally-controlled bit 20 using a signed shift, returns early with the RA restore in the branch delay slot, and otherwise calls base `game_camera::sync`.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `marky_camera::sync` wrapper matched exactly on attempt two.
