# apply_destruction_fx__12conglomerate

- Address: `0x00307218`
- Size: `0x74` (116 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.4138 | 55.1724 | `candidate.cpp` |
| 2 | different | 86.2069 | 79.3103 | `candidate.cpp` |
| 3 | different | 86.2069 | 79.3103 | `candidate.cpp` |
| 4 | different | 72.4138 | 55.1724 | `candidate.cpp` |
| 5 | different | 86.2069 | 79.3103 | `candidate.cpp` |

## Outcome

Deferred conglomerate destruction-effect propagation after five source-level attempts; the released base call, member traversal, bone filtering, and virtual call reproduced, but the target vector-iterator register scheduling did not.
