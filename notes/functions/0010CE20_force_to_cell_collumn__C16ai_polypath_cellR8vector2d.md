# force_to_cell_collumn__C16ai_polypath_cellR8vector2d

- Address: `0x0010CE20`
- Size: `0xE4` (228 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath_cell.cpp`
- Reference source: `KS/SRC/ai_polypath_cell.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.7414 | 72.4138 | `candidate-round1.cpp` |
| 2 | different | 58.3333 | 45.614 | `candidate-round2.cpp` |
| 3 | different | 84.9138 | 75.8621 | `candidate-round3.cpp` |
| 4 | different | 58.3333 | 45.614 | `candidate-round4.cpp` |
| 5 | different | 58.3333 | 45.614 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The exact released cell-column correction and verified geometry layout match through the final coordinate path, but the target shares a branch-delay Y calculation/store schedule that source-level common-tail variants could not reproduce.
