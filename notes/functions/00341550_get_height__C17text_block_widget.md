# get_height__C17text_block_widget

- Address: `0x00341550`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.3103 | 44.8276 | `candidate.cpp` |
| 2 | different | 32.7586 | 17.2414 | `candidate.cpp` |
| 3 | different | 33.6207 | 20.6897 | `candidate.cpp` |
| 4 | different | 43.3333 | 23.3333 | `candidate.cpp` |
| 5 | different | 29.3103 | 17.2414 | `candidate.cpp` |

## Outcome

Deferred text-block height calculation after five source-level attempts; the released line spacing, last-child virtual height, and accumulation reproduced except for a target-only integer-to-float hazard nop.
