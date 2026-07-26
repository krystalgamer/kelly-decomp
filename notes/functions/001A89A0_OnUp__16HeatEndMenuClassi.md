# OnUp__16HeatEndMenuClassi

- Address: `0x001A89A0`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.8936 | 6.383 | `candidate.cpp` |
| 2 | different | 92.5532 | 91.4894 | `candidate.cpp` |
| 3 | different | 18.617 | 6.383 | `candidate.cpp` |
| 4 | different | 85.1064 | 82.9787 | `candidate.cpp` |
| 5 | different | 28.7234 | 21.2766 | `candidate.cpp` |

### Attempt 1 notes

The initial shared helper used a conditional move and emitted 176 bytes.

### Attempt 2 notes

The direct source-faithful branch variant matched 43 of 47 instructions.

### Attempt 3 notes

A class-based reconstruction returned to the simplified 184-byte prologue.

### Attempt 4 notes

The explicit controller constraint recovered the target size but not scheduling.

### Attempt 5 notes

The final ternary event variant emitted 180 bytes and remained different.

## Outcome

Five source-level variants reproduced the released heat-end navigation behavior, but the old whole-TU prologue and event-selection scheduling did not match.
