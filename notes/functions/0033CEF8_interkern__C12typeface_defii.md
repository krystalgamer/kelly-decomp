# interkern__C12typeface_defii

- Address: `0x0033CEF8`
- Size: `0x70` (112 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8571 | 3.5714 | `candidate.cpp` |
| 2 | different | 23.2759 | 10.3448 | `candidate.cpp` |
| 3 | different | 17.8571 | 3.5714 | `candidate.cpp` |
| 4 | different | 26.7241 | 13.7931 | `candidate.cpp` |
| 5 | different | 17.8571 | 3.5714 | `candidate.cpp` |

## Outcome

Deferred typeface interkern lookup after five source-level attempts; the released pair comparison and vector traversal reproduced, but the target STL iterator and temporary scheduling did not.
