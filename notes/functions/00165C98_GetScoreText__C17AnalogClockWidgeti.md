# GetScoreText__C17AnalogClockWidgeti

- Address: `0x00165C98`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_analogclock.cpp`
- Reference source: `KS/SRC/ks/igo_widget_analogclock.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.1667 | 88.8889 | `candidate.cpp` |
| 2 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 3 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 4 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 5 | different | 91.6667 | 88.8889 | `candidate.cpp` |

### Attempt 1 notes

Created shared source-faithful igo_widget and igo_widget_analogclock headers, extended the existing shared stringx declaration, consolidated three analog-clock selector declarations, and used the exact released body.

### Attempt 2 notes

Added the reviewed stringx constructor/copy/destructor aliases; only copy-constructor argument scheduling differed.

### Attempt 3 notes

Tested an explicit returned copy while preserving behavior; scheduling was unchanged.

### Attempt 4 notes

Tested a narrow pre-return optimization barrier; scheduling was unchanged.

### Attempt 5 notes

Returned through a const reference to constrain the source operand; GCC retained the same two-instruction ordering difference.

## Outcome

Five source-faithful forms reproduced 66 of 72 bytes but could not match copy-constructor argument scheduling; deferred. Existing analog-clock selectors were rebuilt successfully against the new shared context.
