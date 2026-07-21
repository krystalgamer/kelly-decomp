# OnLeft__11OptionsMenui

- Address: `0x00182AB8`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.3125 | 87.5 | `candidate.cpp` |
| 2 | different | 18.75 | 6.25 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A common barrier kept the restore out of the target branch delay slot.

### Attempt 2 notes

The exact source tail-called both handlers.

### Attempt 3 notes

Narrow branch-local barriers prevent the demonstrated tail calls and match exactly.

## Outcome

The released options-left dispatch matches with narrow branch-local barriers preventing demonstrated tail calls.
