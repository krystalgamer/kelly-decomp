# text_width__C8font_defRC7stringx

- Address: `0x0033C200`
- Size: `0xC0` (192 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.0625 | 81.25 | `candidate.cpp` |
| 2 | different | 89.0625 | 81.25 | `candidate.cpp` |
| 3 | different | 61.9792 | 47.9167 | `candidate.cpp` |
| 4 | different | 91.6667 | 87.5 | `candidate.cpp` |
| 5 | different | 89.5833 | 81.25 | `candidate.cpp` |

## Outcome

Five source-level attempts reproduced the released width loop closely, but expression evaluation and register scheduling remained different.
