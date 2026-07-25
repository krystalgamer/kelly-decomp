# SetKSBAnimInfo__8KSReplayP22kellyslater_controllerfbf

- Address: `0x0023BEB8`
- Size: `0x94` (148 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.8649 | 0.0 | `candidate.cpp` |
| 2 | different | 92.5676 | 78.3784 | `candidate.cpp` |
| 3 | different | 48.6486 | 37.8378 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 48.6486 | 37.8378 | `candidate.cpp` |

## Outcome

Five released-source variants reproduced replay guards, controller selection, state indexing, and animation calls, but target-specific return-address restore scheduling did not match.
