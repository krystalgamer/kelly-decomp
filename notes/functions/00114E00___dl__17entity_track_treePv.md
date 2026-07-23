# __dl__17entity_track_treePv

- Address: `0x00114E00`
- Size: `0x5C` (92 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.5652 | 8.6957 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released stash-aware entity_track_tree delete operator, current stash/substash stride/open/stored offsets, and arch_free helper. An explicit using_stash bool and non-tail free continuation matched on attempt 2.

## Outcome

Matched released entity track tree delete
