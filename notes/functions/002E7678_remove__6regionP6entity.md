# remove__6regionP6entity

- Address: `0x002E7678`
- Size: `0x174` (372 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released source for remove__6regionP6entity. Result `compile_failed`, score 0.0000; no retry or variant was made.

## Outcome

The exact released region entity removal failed the isolated compile because vector and algorithm headers were unavailable; the sole attempt scored 0%.
