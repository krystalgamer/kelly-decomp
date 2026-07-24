# __Q214ScoringManager6Series

- Address: `0x00249698`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.7742 | 3.2258 | `candidate.cpp` |
| 2 | different | 26.5625 | 0.0 | `candidate.cpp` |
| 3 | different | 41.129 | 9.6774 | `candidate.cpp` |
| 4 | different | 29.0323 | 9.6774 | `candidate.cpp` |
| 5 | different | 26.6129 | 0.0 | `candidate.cpp` |

## Outcome

Deferred ScoringManager::Series constructor after five source-level attempts; the released list sentinel allocation, self-linking, and field defaults reproduced, but the target inline allocator constructor and callee-save schedule did not.
