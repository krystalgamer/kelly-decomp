# WAVE_AddToSchedule__FcRC7stringxN21ff

- Address: `0x00377840`
- Size: `0xBC` (188 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 81.9149 | 78.7234 | `candidate.cpp` |
| 3 | different | 86.7021 | 76.5957 | `candidate.cpp` |
| 4 | different | 65.4255 | 59.5745 | `candidate.cpp` |
| 5 | different | 90.4255 | 87.234 | `candidate.cpp` |

### Attempt 1 notes

The exact released body emitted the compiler's equivalent repeated-parameter
mangling (`T1T1`) rather than the target's `N21` spelling.

### Attempt 5 notes

Binding the target symbol and fixing the initial index register reached the
best score, but six prologue and first-call scheduling instructions remained
in a different order.

## Outcome

The released schedule insertion logic remained compiler-schedule divergent after five source-level forms; the best target-bound candidate matched 41 of 47 instructions.
