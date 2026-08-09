# compare_cface__FPCvT0

- Address: `0x002DBDB0`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.5 | 50.0 | `candidate.cpp` |
| 2 | different | 69.6429 | 57.1429 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released comparator directly compares the x components of two cface raw centers. The recovered raw-center offset and original two-branch source match exactly.

### Attempt 2 notes

Kept the same comparisons but collected the two nonzero outcomes in a local result with an explicit zero early return. This reproduces the released shared nonzero return block.

### Attempt 3 notes

An empty compiler barrier on the nonzero result path prevents return-block
merging and reproduces the target, but it is a matching-only control.

## Outcome

The compiler barrier and local face layout were removed. Native source merges
the return blocks, so the comparator was deferred.
