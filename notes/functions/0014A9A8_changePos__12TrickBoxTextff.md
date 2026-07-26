# changePos__12TrickBoxTextff

- Address: `0x0014A9A8`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.25 | 23.0769 | `candidate.cpp` |
| 2 | different | 36.7347 | 26.0 | `candidate.cpp` |
| 3 | different | 63.8298 | 45.8333 | `candidate.cpp` |
| 4 | different | 74.4681 | 60.4167 | `candidate.cpp` |
| 5 | different | 84.5745 | 70.8333 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used indexed multiplication rather than the target
pointer-induction loop.

### Attempt 2 notes

Explicit pointer induction reduced the mismatch but retained count-base and
coordinate reload differences.

### Attempt 3 notes

Binding the loop pointer and count registers recovered the target size while
changing floating-point scheduling.

### Attempt 4 notes

Fixed floating-point registers improved the loop score but left the preheader
and comparison schedule different.

### Attempt 5 notes

Separating the high count base from the pointer loop reached 84.6 percent, but
the released whole-TU scheduling still did not match.

## Outcome

Five source-level variants recovered the released coordinate update and pointer-induction semantics, but the original floating-point loop scheduling did not match.
