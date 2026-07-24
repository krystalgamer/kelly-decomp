# GetCompStrSurfer__C11IGOFrontEndi

- Address: `0x0017D990`
- Size: `0x74` (116 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.3103 | 72.4138 | `candidate.cpp` |
| 2 | different | 83.6207 | 79.3103 | `candidate.cpp` |
| 3 | different | 86.2069 | 86.2069 | `candidate.cpp` |
| 4 | different | 79.3103 | 72.4138 | `candidate.cpp` |
| 5 | different | 79.3103 | 72.4138 | `candidate.cpp` |

## Outcome

Deferred competition surfer-name formatting after five source-level attempts; the released string construction, surfer lookup, uppercase conversion, copy, and destruction reproduced, but the target callee-save prologue scheduling did not.
