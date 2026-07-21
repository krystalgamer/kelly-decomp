# Update__13NameEntryMenuf

- Address: `0x001CCCC0`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/HighScoreFrontEnd.cpp`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.9375 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The initial base layout placed the embedded FrontEnd one byte late and optimized the final base update into a tail call.

### Attempt 2 notes

Restoring the released base size and a narrow post-call barrier prevents the demonstrated tail-call optimization and matches exactly.

## Outcome

The released FrontEnd and FEMenu updates match with a narrow barrier preventing a demonstrated tail-call optimization.
