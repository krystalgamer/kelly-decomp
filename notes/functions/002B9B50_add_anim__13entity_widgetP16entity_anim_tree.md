# add_anim__13entity_widgetP16entity_anim_tree

- Address: `0x002B9B50`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.cpp`
- Reference source: `KS/SRC/widget_entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 2 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 3 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 4 | different | 85.2941 | 76.4706 | `candidate.cpp` |
| 5 | different | 49.2857 | 34.2857 | `candidate.cpp` |

## Outcome

Deferred the released entity-widget animation insertion after five source-level attempts; null-slot search, vector append/reallocation, and replacement were reconstructed, but vector end-register and call scheduling remained different.
