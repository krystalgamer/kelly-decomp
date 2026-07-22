# CAREER_StaticInit__Fv

- Address: `0x0025A308`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.9444 | 72.2222 | `candidate.cpp` |
| 2 | different | 73.6111 | 66.6667 | `candidate.cpp` |
| 3 | different | 31.9444 | 16.6667 | `candidate.cpp` |
| 4 | different | 81.9444 | 72.2222 | `candidate.cpp` |
| 5 | different | 59.7222 | 50.0 | `candidate.cpp` |

### Attempt 1 notes

The released NEW Career() expression was reconstructed with the target Career size, debug placement-new overload, source filename, constructor, and global. It produced the correct 72 bytes but GCC swapped the callee-save stores and reordered three allocation arguments.

### Attempt 2 notes

A trailing normalized barrier worsened the schedule without changing behavior.

### Attempt 3 notes

Splitting allocation from placement construction changed register allocation and reduced the function to 64 bytes.

### Attempt 4 notes

Named placement-new argument locals reproduced the first attempt exactly.

### Attempt 5 notes

A leading normalized barrier substantially worsened the setup schedule.

## Outcome

Deferred after five source attempts. The source-faithful expression emits the correct calls, constants, size, and stores, but five setup instructions remain scheduled differently from the target.
