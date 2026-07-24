# __8polytubeR10chunk_fileRC9entity_id15entity_flavor_tUi

- Address: `0x0013A9B8`
- Size: `0x74` (116 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/polytube.cpp`
- Reference source: `KS/SRC/polytube.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.931 | 10.3448 | `candidate.cpp` |
| 2 | different | 47.4138 | 20.6897 | `candidate.cpp` |
| 3 | different | 51.7241 | 17.2414 | `candidate.cpp` |
| 4 | different | 51.7241 | 17.2414 | `candidate.cpp` |
| 5 | different | 34.4828 | 10.3448 | `candidate.cpp` |

## Outcome

Deferred the file-based polytube constructor after five source-level attempts; the released entity base call, spline initialization, vtable, and init call reproduced, but the target nontrivial-member frame and store scheduling did not.
