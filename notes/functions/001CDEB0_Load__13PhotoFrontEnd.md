# Load__13PhotoFrontEnd

- Address: `0x001CDEB0`
- Size: `0x80` (128 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.875 | 93.75 | `candidate.cpp` |
| 2 | different | 96.875 | 93.75 | `candidate.cpp` |
| 3 | different | 96.875 | 93.75 | `candidate.cpp` |
| 4 | different | 87.5 | 87.5 | `candidate.cpp` |
| 5 | different | 85.9375 | 84.375 | `candidate.cpp` |

## Outcome

Deferred the released photo frontend load after five source-level attempts; the body matched exactly, but the standalone compiler consistently reversed the two prologue callee-save stores.
