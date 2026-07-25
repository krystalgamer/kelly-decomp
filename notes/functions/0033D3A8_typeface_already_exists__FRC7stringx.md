# typeface_already_exists__FRC7stringx

- Address: `0x0033D3A8`
- Size: `0xAC` (172 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 18.6047 | 0.0 | `candidate.cpp` |
| 3 | different | 51.1628 | 25.5814 | `candidate.cpp` |
| 4 | different | 41.2791 | 13.9535 | `candidate.cpp` |
| 5 | different | 30.2326 | 4.6512 | `candidate.cpp` |

## Outcome

Five released list-iterator and inline string-comparison variants could not reproduce the original GCC2 register allocation.
