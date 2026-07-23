# InLaunchState__11auto_camera

- Address: `0x0022D008`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.3182 | 59.0909 | `candidate.cpp` |
| 2 | different | 69.3182 | 59.0909 | `candidate.cpp` |
| 3 | different | 63.6364 | 36.3636 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 61.3636 | 27.2727 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released InLaunchState body with controller/board offsets, air timer/total air/lip_jump fields, and 0.98f constant. The compiler omitted two target floating-division latency nops.

### Attempt 2 notes

Used an explicit bool result. Code generation was unchanged.

### Attempt 3 notes

Expanded the short-circuit expression into explicit failure labels. Branch layout changed but the latency nops remained absent.

### Attempt 4 notes

Tried constraining a named ratio value; the old compiler rejected a goto crossing its initialization.

### Attempt 5 notes

Declared the ratio before the labels and constrained it after division. The compiler still emitted an 80-byte no-latency-nop form.

## Outcome

Released auto_camera::InLaunchState remained blocked by two floating-division latency nops after five source-level attempts.
