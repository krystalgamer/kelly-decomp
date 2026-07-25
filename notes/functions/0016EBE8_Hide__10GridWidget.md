# Hide__10GridWidget

- Address: `0x0016EBE8`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_grid.cpp`
- Reference source: `KS/SRC/ks/igo_widget_grid.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 92.5 | `candidate.cpp` |
| 2 | different | 79.375 | 57.5 | `candidate.cpp` |
| 3 | different | 93.75 | 92.5 | `candidate.cpp` |
| 4 | different | 93.125 | 80.0 | `candidate.cpp` |
| 5 | different | 93.75 | 92.5 | `candidate.cpp` |

## Outcome

Five released-source and exact-layout grid variants reproduced both line loops at exact size; the best differed only in three saved-pointer scheduling instructions.
