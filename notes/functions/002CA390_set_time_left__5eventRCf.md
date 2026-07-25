# set_time_left__5eventRCf

- Address: `0x002CA390`
- Size: `0x94` (148 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/element.cpp`
- Reference source: `KS/SRC/element.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.7632 | 44.7368 | `candidate.cpp` |
| 2 | different | 66.2162 | 45.9459 | `candidate.cpp` |
| 3 | different | 57.8947 | 39.4737 | `candidate.cpp` |
| 4 | different | 67.7632 | 44.7368 | `candidate.cpp` |
| 5 | different | 67.7632 | 44.7368 | `candidate.cpp` |

## Outcome

Five exact event timing variants reproduced all comparisons and assignments, but target-specific branch-likely scheduling retained a four-byte size difference.
