# __10GridWidget

- Address: `0x0016E5D8`
- Size: `0x80` (128 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_grid.cpp`
- Reference source: `KS/SRC/ks/igo_widget_grid.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.6176 | 20.0 | `candidate.cpp` |
| 2 | different | 74.2188 | 39.2857 | `candidate.cpp` |
| 3 | different | 14.2857 | 3.2258 | `candidate.cpp` |
| 4 | different | 15.0 | 3.2258 | `candidate.cpp` |
| 5 | different | 31.6176 | 20.0 | `candidate.cpp` |

## Outcome

Deferred the released grid-widget constructor after five source-level attempts; the exact array zeroing remained blocked by loop-induction scheduling and premature second-array address materialization.
