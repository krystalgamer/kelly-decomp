# flush_last_context__8material

- Address: `0x003397E0`
- Size: `0xC` (12 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released static method clears the global last-context material pointer through a local absolute equate.

## Outcome

The released `material::flush_last_context` global clear matched exactly on the first attempt.
