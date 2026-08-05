# clear_glyph_info__4Font

- Address: `0x0033A0A8`
- Size: `0x24` (36 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0 | 0.0 | `size36-font-clear-1.cpp` |
| 2 | different | 0 | 0.0 | `size36-font-clear-2.cpp` |
| 3 | different | 0 | 0.0 | `size36-font-clear-3.cpp` |

## Outcome

Three ordinary native definitions failed to reproduce the target 36-byte call
frame; the closest form emits 16 bytes. The matching-only body was removed
and the original target function was deferred.
