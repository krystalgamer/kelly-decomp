# OnButtonPress__4Menui

- Address: `0x0023EC18`
- Size: `0xAC` (172 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.5116 | 25.5814 | `candidate.cpp` |
| 2 | different | 93.0233 | 81.3953 | `candidate.cpp` |
| 3 | different | 46.5116 | 25.5814 | `candidate.cpp` |
| 4 | different | 93.0233 | 81.3953 | `candidate.cpp` |
| 5 | different | 93.0233 | 81.3953 | `candidate.cpp` |

## Outcome

Five released source-faithful variants reproduced the full button behavior; the best differed only in epilogue-load scheduling around direct calls.
