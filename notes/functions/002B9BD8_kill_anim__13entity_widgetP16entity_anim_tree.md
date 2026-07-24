# kill_anim__13entity_widgetP16entity_anim_tree

- Address: `0x002B9BD8`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.cpp`
- Reference source: `KS/SRC/widget_entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.5833 | 83.3333 | `candidate.cpp` |
| 2 | different | 71.875 | 66.6667 | `candidate.cpp` |
| 3 | different | 22.0 | 4.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released entity_widget animation-vector find/clear/null flow and layouts. A const vector alias preserved target codegen and matched on attempt 4.

## Outcome

Matched entity widget animation kill
