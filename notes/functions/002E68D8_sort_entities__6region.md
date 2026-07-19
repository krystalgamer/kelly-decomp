# sort_entities__6region

- Address: `0x002E68D8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released public sorter delegates to the bounding-box implementation; a barrier preserves the wrapper.

## Outcome

The released `region::sort_entities` wrapper matched exactly on the first attempt.
