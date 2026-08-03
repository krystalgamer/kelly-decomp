# render__11visual_itemP6camerafUif

- Address: `0x0028B1E8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `visual_render_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `visual_render_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `visual_render_3.cpp` |

## Outcome

All three ordinary forms become an eight-byte sibling call to `entity::render`.
The target uses a normal 28-byte call frame, so the artificial match was removed.
