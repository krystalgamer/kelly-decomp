# mem_malloc_locked__Fv

- Address: `0x002AC4B8`
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

The released accessor returns the word-sized global `malloc_locked` through a local absolute equate.

## Outcome

The released `mem_malloc_locked` global load matched exactly on the first attempt.
