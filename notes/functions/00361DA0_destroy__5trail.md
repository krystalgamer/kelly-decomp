# destroy__5trail

- Address: `0x00361DA0`
- Size: `0x14` (20 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target conditionally clears the resource pointer at offset `0x0` when it is non-null.

## Outcome

The target `trail::destroy` conditional pointer clear matched exactly on the first attempt.
