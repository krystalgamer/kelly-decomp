# render__13entity_widgetP6camera

- Address: `0x002BA530`
- Size: `0x7C` (124 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.cpp`
- Reference source: `KS/SRC/widget_entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.8235 | 41.1765 | `candidate.cpp` |
| 2 | different | 41.9355 | 29.0323 | `candidate.cpp` |
| 3 | different | 70.1613 | 64.5161 | `candidate.cpp` |
| 4 | different | 70.1613 | 64.5161 | `candidate.cpp` |
| 5 | different | 70.1613 | 64.5161 | `candidate.cpp` |

## Outcome

Deferred the released entity-widget renderer after five source-level attempts; the reconstructed layout and calls matched semantically, but the target-only floating-point hazard nop could not be reproduced without instruction-emitting assembly.
