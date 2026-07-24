# make_instance__C12conglomerateRC9entity_idUi

- Address: `0x00304C28`
- Size: `0x74` (116 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 2 | different | 86.2069 | 86.2069 | `candidate.cpp` |
| 3 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 4 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 5 | different | 82.7586 | 79.3103 | `candidate.cpp` |

## Outcome

Deferred conglomerate instance creation after five source-level attempts; the released allocation, construction, and copy flow reproduced, but the target callee-save and constructor-argument scheduling did not.
