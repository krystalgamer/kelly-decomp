# init__13so_data_blocki

- Address: `0x00352EF8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/so_data_block.cpp`
- Reference source: `KS/SRC/so_data_block.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 26.5625 | 6.25 | `candidate.cpp` |
| 4 | different | 48.3333 | 40.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released calls plus a final barrier matched all instructions except saved-register scheduling.

### Attempt 2 notes

A malformed scratch edit did not compile and was corrected without touching merged source.

### Attempt 3 notes

An entry barrier over-constrained the prologue and emitted 64 bytes.

### Attempt 4 notes

The exact released source tail-called _init and emitted 56 bytes.

### Attempt 5 notes

Narrow barriers between the calls and after _init prevent demonstrated scheduling and tail-call optimizations; the source matches exactly.

## Outcome

The released destroy/init sequence matches with narrow barriers preventing demonstrated call scheduling and tail-call optimizations.
