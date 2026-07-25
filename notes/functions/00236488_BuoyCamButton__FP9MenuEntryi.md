# BuoyCamButton__FP9MenuEntryi

- Address: `0x00236488`
- Size: `0x94` (148 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.8649 | 86.4865 | `candidate.cpp` |
| 2 | different | 89.8649 | 86.4865 | `candidate.cpp` |
| 3 | different | 89.8649 | 86.4865 | `candidate.cpp` |
| 4 | different | 89.8649 | 86.4865 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five released-source variants reproduced replay guards, controller selection, state indexing, and animation calls, but target-specific return-address restore scheduling did not match.
