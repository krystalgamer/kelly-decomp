# __8polytubeRC9entity_idUi

- Address: `0x0013A938`
- Size: `0x7C` (124 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/polytube.cpp`
- Reference source: `KS/SRC/polytube.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.2903 | 9.6774 | `candidate.cpp` |
| 2 | different | 43.5484 | 19.3548 | `candidate.cpp` |
| 3 | different | 37.0968 | 9.6774 | `candidate.cpp` |
| 4 | different | 26.5152 | 3.0303 | `candidate.cpp` |
| 5 | different | 33.871 | 16.129 | `candidate.cpp` |

## Outcome

Deferred polytube constructor after five source-level attempts; the released base construction, member initialization, vtable, init call, and flavor write reproduced, but the target constructor frame and store scheduling did not.
