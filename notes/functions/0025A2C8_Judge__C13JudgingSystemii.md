# Judge__C13JudgingSystemii

- Address: `0x0025A2C8`
- Size: `0x40` (64 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/judge.cpp`
- Reference source: `KS/SRC/ks/judge.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.875 | 6.25 | `candidate.cpp` |
| 2 | different | 7.8125 | 0.0 | `candidate.cpp` |
| 3 | different | 46.875 | 37.5 | `candidate.cpp` |
| 4 | different | 85.9375 | 81.25 | `candidate.cpp` |
| 5 | different | 65.625 | 62.5 | `candidate.cpp` |

### Attempt 1 notes

The literal released conditional inverted the branch layout and produced a 60-byte function.

### Attempt 2 notes

A result local retained the inverted branch and merged the return path.

### Attempt 3 notes

An explicit positive-score path reproduced all semantic instructions but omitted the target FP conversion hazard nop.

### Attempt 4 notes

A barrier at the positive path moved the region offset from the branch delay slot without producing the hazard nop.

### Attempt 5 notes

An explicit divisor plus normalized barrier still could not reproduce the target FP conversion scheduling.

## Outcome

Five source-authentic judging calculations could not reproduce the target floating-point conversion hazard scheduling.
