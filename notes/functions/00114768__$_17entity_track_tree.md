# _$_17entity_track_tree

- Address: `0x00114768`
- Size: `0x84` (132 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.5152 | 25.8065 | `candidate.cpp` |
| 2 | different | 35.1351 | 32.4324 | `candidate.cpp` |
| 3 | different | 62.1212 | 27.2727 | `candidate.cpp` |
| 4 | different | 39.3939 | 58.0645 | `candidate.cpp` |
| 5 | different | 62.1212 | 27.2727 | `candidate.cpp` |

## Outcome

Deferred the released entity-track-tree destructor after five source-level attempts; reverse node destruction was reconstructed, but target register allocation and two preserved post-call nops could not be reproduced.
