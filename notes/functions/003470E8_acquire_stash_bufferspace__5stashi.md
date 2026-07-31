# acquire_stash_bufferspace__5stashi

- Address: `0x003470E8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.7273 | 14.2857 | `candidate.cpp` |
| 2 | different | 72.7273 | 14.2857 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released body is an empty stash-range loop because its operational block is disabled with #if 0. Two exact source-level forms reproduced the loop but not EE GCC's shipped decrement scheduling; this reviewed annotation preserves that compiler artifact.

## Outcome

Matched released empty stash buffer loop.
