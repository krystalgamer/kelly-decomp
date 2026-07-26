# dump_actions__7ai_goal

- Address: `0x00106628`
- Size: `0xD0` (208 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.9231 | 0.0 | `candidate.cpp` |
| 2 | different | 26.9231 | 0.0 | `candidate.cpp` |
| 3 | different | 26.9231 | 0.0 | `candidate.cpp` |
| 4 | different | 26.9231 | 0.0 | `candidate.cpp` |
| 5 | different | 26.9231 | 0.0 | `candidate.cpp` |

## Outcome

The released action teardown behavior was recovered, but old-STL erase iterators, allocator recycling, and stack temporaries remained irreducible after five source-level attempts.
