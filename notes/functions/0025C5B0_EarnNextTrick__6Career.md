# EarnNextTrick__6Career

- Address: `0x0025C5B0`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.8571 | 85.7143 | `candidate.cpp` |
| 2 | different | 92.8571 | 85.7143 | `candidate.cpp` |
| 3 | different | 36.6667 | 20.0 | `candidate.cpp` |
| 4 | different | 38.3333 | 20.0 | `candidate.cpp` |
| 5 | different | 92.8571 | 85.7143 | `candidate.cpp` |

### Attempt 1 notes

Used the released unlock call and earned-trick increment with the recovered member offset. Every body and epilogue instruction matched, but EE GCC saved `s0` before `ra`.

### Attempt 2 notes

Staged the trick index and post-call counter update in locals. Optimization returned to the same two-instruction prologue mismatch as the released source.

### Attempt 3 notes

Fixed the trick argument in `a1` with an empty matching barrier. This disturbed the target delay-slot expression and grew the function to 60 bytes.

### Attempt 4 notes

Fixed the object pointer in `s0` with an empty matching barrier. The added constraint changed scheduling and produced 60 bytes.

### Attempt 5 notes

Used ABI-named source-level wrappers for both functions. The complete body matched again, but the `s0` and `ra` prologue saves remained reversed.

## Outcome

Five source-level reconstructions reproduced the next-trick behavior, but the available EE GCC consistently reversed the target ra and s0 prologue stores.
