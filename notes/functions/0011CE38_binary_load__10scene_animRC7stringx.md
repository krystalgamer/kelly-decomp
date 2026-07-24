# binary_load__10scene_animRC7stringx

- Address: `0x0011CE38`
- Size: `0x6C` (108 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/scene_anim.cpp`
- Reference source: `KS/SRC/scene_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.7407 | 11.1111 | `candidate.cpp` |
| 2 | different | 62.037 | 51.8519 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact inline stash selection globals, substash stride and offsets, plus both binary loaders. Preserving the inline using_stash boolean matched on attempt 3.

## Outcome

Matched scene animation binary load
