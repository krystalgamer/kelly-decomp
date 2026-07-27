# load_new_visual_rep__FRC7stringxUi

- Address: `0x002D7288`
- Size: `0x100` (256 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/visrep.cpp`
- Reference source: `KS/SRC/visrep.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released definition from `kelly-slaters-pro-surfer/KS/SRC/visrep.cpp:120-140` with the released include block at lines 9-16 as the compile-only prefix. The single required test returned `compile_failed` (score 0.0) because those released headers were not found on the function-test include paths; no further attempt was made.

## Outcome

The exact released visual-representation loader failed the isolated compile because its released headers were unavailable; the sole attempt scored 0%.
