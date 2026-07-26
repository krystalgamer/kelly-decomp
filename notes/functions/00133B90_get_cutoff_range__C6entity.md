# get_cutoff_range__C6entity

- Address: `0x00133B90`
- Size: `0xC4` (196 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.1837 | 83.6735 | `candidate.cpp` |
| 2 | different | 85.7143 | 83.6735 | `candidate.cpp` |
| 3 | different | 81.6327 | 79.5918 | `candidate.cpp` |
| 4 | different | 85.7143 | 83.6735 | `candidate.cpp` |
| 5 | different | 85.7143 | 83.6735 | `candidate.cpp` |

## Outcome

Five source-faithful attempts reproduced the complete light-range error path, but eight prologue and call-scheduling instructions remained different.
