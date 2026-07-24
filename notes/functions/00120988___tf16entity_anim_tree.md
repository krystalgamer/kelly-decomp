# __tf16entity_anim_tree

- Address: `0x00120988`
- Size: `0x88` (136 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.h`
- Reference source: `KS/SRC/entity_anim.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.3824 | 2.9412 | `candidate.cpp` |
| 2 | different | 22.7941 | 5.8824 | `candidate.cpp` |
| 3 | different | 14.8649 | 0.0 | `candidate.cpp` |
| 4 | different | 94.1176 | 85.2941 | `candidate.cpp` |
| 5 | different | 26.4706 | 5.8824 | `candidate.cpp` |

## Outcome

Deferred the released entity-animation-tree RTTI helper after five source-level attempts; the complete base and derived RTTI initialization chain was reconstructed, but high-address register materialization remained different.
