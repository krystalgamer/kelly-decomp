# push_disable_all__12ai_interfaceb

- Address: `0x00105590`
- Size: `0x74` (116 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.8621 | 6.8966 | `candidate.cpp` |
| 2 | different | 15.2778 | 1.8519 | `candidate.cpp` |
| 3 | different | 34.2857 | 22.8571 | `candidate.cpp` |
| 4 | different | 27.5 | 10.0 | `candidate.cpp` |
| 5 | different | 44.8276 | 17.2414 | `candidate.cpp` |

## Outcome

Deferred AI disable-all push after five source-level attempts; the released interface-list traversal and cosmetic filtering reproduced, but the target STL iterator stack layout did not.
