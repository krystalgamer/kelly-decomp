# Stop__8KSReplay

- Address: `0x0023C9A8`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.5385 | 0.0 | `candidate.cpp` |
| 2 | different | 84.6154 | 84.6154 | `candidate.cpp` |
| 3 | different | 88.4615 | 84.6154 | `candidate.cpp` |
| 4 | different | 88.4615 | 84.6154 | `candidate.cpp` |
| 5 | different | 67.3077 | 46.1538 | `candidate.cpp` |

### Attempt 1 notes

Used the released controller state reset followed by Pause(true). EE GCC converted Pause into a sibling tail jump, eliminating the target stack frame and producing 32 bytes.

### Attempt 2 notes

Added a trailing empty barrier to preserve the Pause call and frame. The body matched, but the prologue emitted the global-address `lui` before stack allocation; the target allocates the stack first and saves `ra` after the `lui`.

### Attempt 3 notes

Added an entry scheduling barrier. This moved stack allocation first, but placed the `ra` save before the global-address `lui`; the target order is stack, `lui`, then `ra` save. Best score: 88.46%.

### Attempt 4 notes

Qualified the global world pointer as volatile while retaining both barriers. The emitted sequence was identical to attempt 3 and kept the same two prologue instructions reversed.

### Attempt 5 notes

Reconstructed the world address through a fixed `v0` inline-assembly result to direct prologue scheduling. Register allocation changed the body ordering and reduced the match to 67.31% without reproducing the target prologue.

## Outcome

Five source and scheduling-directed candidates reproduced the replay-stop body but could not match the target stack/lui/ra-save prologue order.
