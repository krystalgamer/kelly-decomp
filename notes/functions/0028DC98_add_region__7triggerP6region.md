# add_region__7triggerP6region

- Address: `0x0028DC98`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.0 | 12.0 | `candidate.cpp` |
| 2 | different | 87.0 | 76.0 | `candidate.cpp` |
| 3 | different | 95.0 | 80.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact region tree offset, insert_unique pair ABI, temporary/result stack slots, region add call, and boolean return. Fixed pair registers matched on attempt 4.

## Outcome

Matched trigger region insertion
