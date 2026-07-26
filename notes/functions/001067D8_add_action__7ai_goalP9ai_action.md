# add_action__7ai_goalP9ai_action

- Address: `0x001067D8`
- Size: `0xD0` (208 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.5577 | 7.6923 | `candidate.cpp` |
| 2 | different | 23.5577 | 7.6923 | `candidate.cpp` |
| 3 | different | 23.5577 | 7.6923 | `candidate.cpp` |
| 4 | different | 23.5577 | 7.6923 | `candidate.cpp` |
| 5 | different | 23.5577 | 7.6923 | `candidate.cpp` |

## Outcome

The released action insertion behavior was recovered, but old-STL node allocation and iterator temporaries remained irreducible after five source-level attempts.
