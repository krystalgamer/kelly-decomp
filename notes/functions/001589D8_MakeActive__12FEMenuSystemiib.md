# MakeActive__12FEMenuSystemiib

- Address: `0x001589D8`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.6667 | 10.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | different | 17.9167 | 3.3333 | `candidate.cpp` |
| 4 | different | 21.25 | 1.6667 | `candidate.cpp` |
| 5 | different | 17.9167 | 3.3333 | `candidate.cpp` |

### Attempt 2 notes

Recovered the target-version notify guards around both activation callbacks while preserving the unconditional active-index update.

## Outcome

Matched the source-faithful target-version menu activation flow, including conditional unactivation and activation callbacks and the unconditional active-index update.
