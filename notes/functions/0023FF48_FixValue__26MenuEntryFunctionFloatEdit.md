# FixValue__26MenuEntryFunctionFloatEdit

- Address: `0x0023FF48`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.6667 | 23.3333 | `candidate.cpp` |
| 2 | different | 53.3333 | 40.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released virtual GetValue/SetValue clamp matched after keeping the SetValue vtable slot live across the ternary evaluation.

## Outcome

The released function-float menu value clamp matched exactly on the third attempt.
