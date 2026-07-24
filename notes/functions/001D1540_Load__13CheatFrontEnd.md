# Load__13CheatFrontEnd

- Address: `0x001D1540`
- Size: `0x74` (116 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.1034 | 37.931 | `candidate.cpp` |
| 2 | different | 96.5517 | 93.1034 | `candidate.cpp` |
| 3 | different | 21.0938 | 6.25 | `candidate.cpp` |
| 4 | different | 84.4828 | 82.7586 | `candidate.cpp` |
| 5 | different | 21.0938 | 6.25 | `candidate.cpp` |

## Outcome

Deferred cheat frontend loading after five source-level attempts; the released base/submenu loads and phone hiding reproduced, but the target callee-save prologue ordering did not.
