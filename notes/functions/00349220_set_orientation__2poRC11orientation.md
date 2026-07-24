# set_orientation__2poRC11orientation

- Address: `0x00349220`
- Size: `0x5C` (92 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.6087 | 21.7391 | `candidate.cpp` |
| 2 | different | 36.9565 | 26.087 | `candidate.cpp` |
| 3 | different | 36.9565 | 26.087 | `candidate.cpp` |
| 4 | different | 93.4783 | 91.3043 | `candidate.cpp` |
| 5 | different | 83.6957 | 78.2609 | `candidate.cpp` |

## Outcome

Released po orientation copy reached 21/23 matching instructions with exact matrix layout, but inner-loop pointer increment/nop scheduling resisted five source-level matrix/loop candidates.
