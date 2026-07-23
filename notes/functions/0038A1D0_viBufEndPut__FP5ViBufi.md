# viBufEndPut__FP5ViBufi

- Address: `0x0038A1D0`
- Size: `0x54` (84 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.5238 | 47.619 | `candidate.cpp` |
| 2 | different | 85.7143 | 80.9524 | `candidate.cpp` |
| 3 | different | 83.3333 | 76.1905 | `candidate.cpp` |
| 4 | different | 85.7143 | 80.9524 | `candidate.cpp` |
| 5 | different | 76.1905 | 52.381 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released viBufEndPut body and ViBuf readBytes/sema/64-bit totalBytes offsets. The final SignalSema call was tail-called.

### Attempt 2 notes

Added a non-emitting post-SignalSema continuation. Size matched, but the six prologue save/copy operations were scheduled differently (85.71%).

### Attempt 3 notes

Added a non-emitting entry boundary. This moved the return-address save later and regressed slightly.

### Attempt 4 notes

Constrained the ViBuf and size values to the target callee-saved registers. The compiler retained the 85.71% prologue schedule.

### Attempt 5 notes

Restored direct parameter use with void semaphore prototypes. This changed register scheduling without reproducing the target prologue.

## Outcome

Released viBufEndPut remained blocked by an equivalent callee-save prologue schedule after five source-level attempts.
