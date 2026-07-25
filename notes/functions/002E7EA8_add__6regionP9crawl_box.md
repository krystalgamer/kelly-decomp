# add__6regionP9crawl_box

- Address: `0x002E7EA8`
- Size: `0x94` (148 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.5135 | 18.9189 | `candidate.cpp` |
| 2 | different | 56.7568 | 24.3243 | `candidate.cpp` |
| 3 | different | 63.5135 | 18.9189 | `candidate.cpp` |
| 4 | different | 56.7568 | 24.3243 | `candidate.cpp` |
| 5 | different | 63.5135 | 18.9189 | `candidate.cpp` |

## Outcome

Five source-level crawl-list insertion variants reproduced allocation and node links, but GCC2 STL temporary/register scheduling did not match.
