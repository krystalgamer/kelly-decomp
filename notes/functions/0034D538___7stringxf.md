# __7stringxf

- Address: `0x0034D538`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.9706 | 88.2353 | `candidate.cpp` |
| 2 | different | 27.2059 | 11.7647 | `candidate.cpp` |
| 3 | different | 91.1765 | 88.2353 | `candidate.cpp` |
| 4 | different | 53.6765 | 47.0588 | `candidate.cpp` |
| 5 | different | 27.2059 | 11.7647 | `candidate.cpp` |

## Outcome

Deferred the released float string constructor after five source-level attempts; initialization, float-to-double conversion, formatting, buffer acquisition, and member assignment were reconstructed, but call-argument scheduling remained different.
