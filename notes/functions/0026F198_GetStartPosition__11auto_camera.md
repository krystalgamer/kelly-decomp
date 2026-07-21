# GetStartPosition__11auto_camera

- Address: `0x0026F198`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 2 | different | 27.2727 | 9.0909 | `candidate.cpp` |
| 3 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 4 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 5 | different | 93.3333 | 86.6667 | `candidate.cpp` |

### Attempt 1 notes

The direct source-level virtual ABI dispatch matched all behavior and 13 of 15 instructions; only ra/s0 save order differed.

### Attempt 2 notes

A named vector result introduced an unhelpful temporary copy and expanded to 88 bytes.

### Attempt 3 notes

Explicit adjusted-this and function-pointer locals returned to 93.33% but retained the save-order mismatch.

### Attempt 4 notes

Inlining a source-authentic GetPosDifference wrapper retained the same two-instruction prologue mismatch.

### Attempt 5 notes

An inline static dispatch helper also retained 93.33%; authentic C++ consistently stores s0 before ra instead of the target order.

## Outcome

Five source-authentic virtual return forms reached 93.33%, but isolated old GCC consistently reversed the target ra/s0 save order.
