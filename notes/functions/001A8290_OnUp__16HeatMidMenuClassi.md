# OnUp__16HeatMidMenuClassi

- Address: `0x001A8290`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.8936 | 6.383 | `candidate.cpp` |
| 2 | different | 85.1064 | 82.9787 | `candidate.cpp` |
| 3 | different | 31.25 | 18.75 | `candidate.cpp` |
| 4 | different | 22.9167 | 6.25 | `candidate.cpp` |
| 5 | different | 92.5532 | 91.4894 | `candidate.cpp` |

### Attempt 1 notes

The generic shared helper used conditional selection and different registers.

### Attempt 2 notes

An explicit saved controller recovered the target size but changed the prologue.

### Attempt 3 notes

Ordering the manager load before the controller constraint introduced an extra
instruction.

### Attempt 4 notes

An input-only controller constraint retained the wrong save schedule.

### Attempt 5 notes

The source-faithful 188-byte branch variant again matched 43 of 47 instructions.

## Outcome

Five source-level variants reproduced the released heat-menu navigation behavior, with the best matching 43 of 47 instructions but not the original prologue schedule.
