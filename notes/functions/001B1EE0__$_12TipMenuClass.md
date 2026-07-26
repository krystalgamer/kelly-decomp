# _$_12TipMenuClass

- Address: `0x001B1EE0`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.2553 | 42.5532 | `candidate.cpp` |
| 2 | different | 51.5957 | 42.5532 | `candidate.cpp` |
| 3 | different | 57.4468 | 51.0638 | `candidate.cpp` |
| 4 | different | 71.8085 | 63.8298 | `candidate.cpp` |
| 5 | different | 71.8085 | 63.8298 | `candidate.cpp` |

### Attempt 1 notes

The exact released destructor reproduced tip deletion but tail-called the base
destructor and simplified string-array cleanup.

### Attempt 2 notes

An explicit source-level destructor prevented the base tail call but retained
the simplified array loop.

### Attempt 3 notes

Binding the array begin/test registers improved the loop while remaining twelve
bytes short.

### Attempt 4 notes

Constrained delete flags and allocation pointers recovered 30 of 47 target
instructions; one load-delay nop remained absent.

### Attempt 5 notes

Making the loop test volatile did not restore the target load-delay schedule.

## Outcome

Five source-level variants reproduced tip ownership cleanup, but the original string-array load-delay scheduling and base-destructor flow did not match.
