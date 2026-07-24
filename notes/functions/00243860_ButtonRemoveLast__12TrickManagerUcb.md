# ButtonRemoveLast__12TrickManagerUcb

- Address: `0x00243860`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.129 | 19.3548 | `candidate.cpp` |
| 2 | different | 83.0645 | 67.7419 | `candidate.cpp` |
| 3 | different | 20.4545 | 12.1212 | `candidate.cpp` |
| 4 | different | 79.0323 | 74.1935 | `candidate.cpp` |
| 5 | different | 36.2903 | 25.8065 | `candidate.cpp` |

## Outcome

Deferred TrickManager::ButtonRemoveLast after five source-level attempts; the released ring traversal, wrap logic, button/pressed comparison, and removal reproduced, but the target split field-base and conditional-move register schedule did not.
