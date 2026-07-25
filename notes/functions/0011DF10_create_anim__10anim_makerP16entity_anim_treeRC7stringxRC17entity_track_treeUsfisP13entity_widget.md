# create_anim__10anim_makerP16entity_anim_treeRC7stringxRC17entity_track_treeUsfisP13entity_widget

- Address: `0x0011DF10`
- Size: `0x98` (152 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim_maker.cpp`
- Reference source: `KS/SRC/anim_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 74.359 | 66.6667 | `candidate.cpp` |
| 2 | different | 97.3684 | 94.7368 | `candidate.cpp` |
| 3 | different | 97.3684 | 94.7368 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Used the exact released cached-animation rebuild, reverse-time, world/widget ownership paths. Empty output liveness annotations preserve the original per-branch epilogue scheduling without emitting instructions.

## Outcome

Matched cached animation creation
