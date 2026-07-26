# clear__11ai_polypath

- Address: `0x00109F60`
- Size: `0xC4` (196 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath.cpp`
- Reference source: `KS/SRC/ai_polypath.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.9388 | 9.0909 | `candidate.cpp` |
| 2 | different | 21.9388 | 9.0909 | `candidate.cpp` |
| 3 | different | 36.0 | 8.6957 | `candidate.cpp` |
| 4 | different | 30.2885 | 8.3333 | `candidate.cpp` |
| 5 | different | 36.0 | 8.6957 | `candidate.cpp` |

## Outcome

Five attempts reconstructed vector clearing and inline cell teardown, but the original destructor flattening and nop schedule did not reproduce.
