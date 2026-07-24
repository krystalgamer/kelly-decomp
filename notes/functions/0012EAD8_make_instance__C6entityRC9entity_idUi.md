# make_instance__C6entityRC9entity_idUi

- Address: `0x0012EAD8`
- Size: `0x74` (116 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 2 | different | 87.931 | 86.2069 | `candidate.cpp` |
| 3 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 4 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 5 | different | 87.931 | 86.2069 | `candidate.cpp` |

## Outcome

Deferred entity instance creation after five source-level attempts; the released allocation, construction, and copy flow reproduced, but the target callee-save and argument scheduling did not.
