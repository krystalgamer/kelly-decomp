# __11orientation

- Address: `0x00348220`
- Size: `0x64` (100 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.0 | 92.0 | `candidate.cpp` |
| 2 | different | 85.0 | 80.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 27.0 | 8.0 | `candidate.cpp` |
| 5 | different | 94.0 | 92.0 | `candidate.cpp` |

## Outcome

Released orientation identity-copy loops reached 23/25 instructions, but inner-loop pointer increment and nop scheduling resisted five source candidates.
