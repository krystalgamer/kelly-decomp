# mem_print_status__Fi

- Address: `0x002AC258`
- Size: `0xA8` (168 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.0238 | 61.9048 | `candidate.cpp` |
| 2 | different | 86.9048 | 80.9524 | `candidate.cpp` |
| 3 | different | 13.0952 | 2.381 | `candidate.cpp` |
| 4 | different | 13.0952 | 2.381 | `candidate.cpp` |
| 5 | different | 15.9091 | 4.5455 | `candidate.cpp` |

## Outcome

Five released memory-status variants reproduced all queries and prints but not variadic call argument scheduling.
