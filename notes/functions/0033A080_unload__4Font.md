# unload__4Font

- Address: `0x0033A080`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-final1-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-final1-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-final1-probes-3.cpp` |

## Outcome

All three direct-call forms tail-call `clear_glyph_info` in eight bytes. The
target retains a 28-byte frame, so the barrier-dependent wrapper was deferred.
