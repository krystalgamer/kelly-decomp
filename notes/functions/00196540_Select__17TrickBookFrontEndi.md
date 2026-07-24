# Select__17TrickBookFrontEndi

- Address: `0x00196540`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.6667 | 0.0 | `candidate.cpp` |
| 2 | different | 51.6667 | 36.6667 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the released OKtoDrawBio and trick-animation guards, trick/State2 array offsets, highlighted entry, and PlaySurferTrick call. Preserving the released boolean xori branch matched on attempt 3.

## Outcome

Matched trick book selection
