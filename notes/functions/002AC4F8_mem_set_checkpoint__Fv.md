# mem_set_checkpoint__Fv

- Address: `0x002AC4F8`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target returns the current memory marker global through a local absolute equate.

## Outcome

The target `mem_set_checkpoint` global load matched exactly on the first attempt.
