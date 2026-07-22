# init__15shoulder_camera

- Address: `0x0022A180`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.0 | 5.0 | `candidate.cpp` |
| 2 | different | 46.25 | 15.0 | `candidate.cpp` |
| 3 | different | 46.25 | 15.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled the shoulder camera's two three-float vectors as struct assignments. The legacy compiler emitted 64-bit ldl/ldr copies and a 76-byte function instead of the target scalar lwc1/stores.

### Attempt 2 notes

Changed both vector fields to explicit float arrays, reproducing scalar loads/stores and field offsets but not the target register scheduling or final flag placement; candidate remained 72 bytes.

### Attempt 3 notes

Added the trailing ready flag at offset 748 per target layout. Scalar body remained 72 bytes and differed in scheduling from the immutable target. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 modeled the immutable shoulder_camera initialization and field layout, but supported source-level vector forms could not reproduce the target's exact register scheduling and scalar copy sequence. No fourth attempt was run.
