# add_anim__21world_dynamics_systemP16entity_anim_tree

- Address: `0x002A3688`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.6765 | 61.7647 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 4 | different | 51.4706 | 38.2353 | `candidate.cpp` |
| 5 | different | 67.1429 | 48.5714 | `candidate.cpp` |

## Outcome

Deferred the released world animation insertion after five source-level attempts; null-slot search, in-capacity append, reallocation insertion, and slot replacement were reconstructed, but vector end-register and call scheduling remained different.
