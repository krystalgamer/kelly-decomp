# isPlaying__8RandomVO

- Address: `0x002566D8`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/VOEngine.cpp`
- Reference source: `KS/SRC/ks/VOEngine.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate queries the sound id at offset four and normalizes the nonzero status to bool.

## Outcome

The released `RandomVO::isPlaying` wrapper matched exactly.
