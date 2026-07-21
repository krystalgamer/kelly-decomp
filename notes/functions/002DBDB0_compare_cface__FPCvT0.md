# compare_cface__FPCvT0

- Address: `0x002DBDB0`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **matched**

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

Added a narrowly scoped empty compiler barrier to the nonzero result path. It prevents return-block merging and exactly restores the released separate zero and nonzero return sites without emitting instructions.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from merging the distinct released return regions described above.

## Outcome

The original cface raw-center comparator matches exactly with the recovered layout and a narrow empty barrier preserving the released distinct return blocks.
