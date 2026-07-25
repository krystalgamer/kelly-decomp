# rotate_to__13entity_widgetfffG8vector3d

- Address: `0x002FEF28`
- Size: `0xB0` (176 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.h`
- Reference source: `KS/SRC/widget_entity.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.4773 | 2.2727 | `candidate.cpp` |
| 2 | different | 36.9318 | 13.6364 | `candidate.cpp` |
| 3 | different | 36.9318 | 13.6364 | `candidate.cpp` |
| 4 | different | 44.3182 | 29.5455 | `candidate.cpp` |
| 5 | different | 51.1364 | 31.8182 | `candidate.cpp` |

## Outcome

Five released entity-widget rotation variants could not reproduce the original inlined event-constructor register and store scheduling.
