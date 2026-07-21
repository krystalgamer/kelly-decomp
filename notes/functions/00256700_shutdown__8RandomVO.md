# shutdown__8RandomVO

- Address: `0x00256700`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/VOEngine.cpp`
- Reference source: `KS/SRC/ks/VOEngine.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.3333 | 22.2222 | `candidate.cpp` |
| 2 | different | 83.3333 | 73.3333 | `candidate.cpp` |
| 3 | different | 90.0 | 86.6667 | `candidate.cpp` |
| 4 | different | 90.0 | 86.6667 | `candidate.cpp` |
| 5 | different | 90.0 | 86.6667 | `candidate.cpp` |

### Attempt 1 notes

The literal released three-array chained assignment used three induction registers and emitted 72 bytes rather than the target common-base loop.

### Attempt 2 notes

A common sources pointer recovered the 60-byte loop shape, but store order and pointer-increment scheduling differed.

### Attempt 3 notes

Reversing the source-level assignment chain recovered the target store order and reached 90%, leaving only pointer increment versus branch-delay scheduling.

### Attempt 4 notes

A reviewed empty barrier after the stores did not alter the remaining two-instruction loop scheduling mismatch.

### Attempt 5 notes

An explicit source pointer and countdown do-while retained the same 90% mismatch; authentic C++ did not place the pointer increment in the target branch delay slot.

## Outcome

Five source-authentic array-loop forms reached 90%, but isolated old GCC would not reproduce the target pointer-increment branch-delay scheduling.
