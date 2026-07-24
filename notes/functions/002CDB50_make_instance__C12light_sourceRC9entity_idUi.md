# make_instance__C12light_sourceRC9entity_idUi

- Address: `0x002CDB50`
- Size: `0x74` (116 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
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

Deferred light-source instance creation after five source-level attempts; the released allocation, construction, and copy flow reproduced, but the target callee-save and constructor-argument scheduling did not.
