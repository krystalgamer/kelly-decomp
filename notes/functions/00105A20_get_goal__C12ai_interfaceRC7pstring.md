# get_goal__C12ai_interfaceRC7pstring

- Address: `0x00105A20`
- Size: `0x78` (120 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 36.6667 | `candidate.cpp` |
| 2 | different | 40.3226 | 19.3548 | `candidate.cpp` |
| 3 | different | 32.5 | 6.6667 | `candidate.cpp` |
| 4 | different | 32.2581 | 6.4516 | `candidate.cpp` |
| 5 | different | 58.3333 | 36.6667 | `candidate.cpp` |

## Outcome

Deferred AI goal lookup after five source-level attempts; the released goal-vector traversal and four-word pstring comparison reproduced, but the target comparison-loop register allocation did not.
