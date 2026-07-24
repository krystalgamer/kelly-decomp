# flip_vert__13bitmap_widget

- Address: `0x0033FCB0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.4783 | 91.3043 | `candidate.cpp` |
| 2 | different | 83.6957 | 78.2609 | `candidate.cpp` |
| 3 | different | 46.7391 | 26.087 | `candidate.cpp` |
| 4 | different | 43.4783 | 21.7391 | `candidate.cpp` |
| 5 | different | 43.4783 | 21.7391 | `candidate.cpp` |

## Outcome

Released vertical UV flip reached 21/23 instructions with exact data movement, but loop pointer increment/nop scheduling resisted five source-level loop candidates.
