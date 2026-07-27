# changeText__15MultiLineStringG7stringx

- Address: `0x00148AD0`
- Size: `0xEC` (236 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.5 | 38.3333 | `candidate.cpp` |
| 2 | different | 30.9322 | 11.8644 | `candidate.cpp` |
| 3 | different | 57.5 | 38.3333 | `candidate.cpp` |
| 4 | different | 26.6949 | 6.7797 | `candidate.cpp` |
| 5 | different | 26.6949 | 6.7797 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact multiline text replacement, indexing, newline count, calls, offsets, and parameter destruction are recovered, but isolated GCC splits the text pointer across an extra saved register or over-coalesces the closest form.
