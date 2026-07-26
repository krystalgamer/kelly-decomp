# insert_new_object__t13instance_bank1Z8vr_pmeshP8vr_pmeshRC7stringx

- Address: `0x002AF158`
- Size: `0xDC` (220 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.0909 | 25.4545 | `candidate-round1.cpp` |
| 2 | different | 40.9091 | 27.2727 | `candidate-round2.cpp` |
| 3 | different | 40.9091 | 27.2727 | `candidate-round3.cpp` |
| 4 | different | 77.2727 | 67.8571 | `candidate-round4.cpp` |
| 5 | different | 77.2727 | 67.8571 | `candidate-round5.cpp` |

### Attempt 1 notes

Reconstructed the released instance-bank insertion with string-backed references, allocation, and both red-black-tree inserts. The body matched the 220-byte size, but trivial tree-result returns used a 128-byte frame and different register scheduling.

### Attempt 2 notes

Made tree insertion results nontrivial so the hidden return buffers were preserved. GCC optimized the unused wrapper results and shortened the function to 188 bytes.

### Attempt 3 notes

Added inline set-style insertion wrappers around each tree insert. The wrappers still collapsed to the 188-byte form and retained an out-of-line instance_ref destructor.

### Attempt 4 notes

Forced each wrapper result through a memory-observable temporary. This recovered the target 160-byte frame, pair copies, and exact 220-byte size, reaching the best score.

### Attempt 5 notes

Bound the allocation description while retaining wrapper temporaries. The target size and 38 instructions remained aligned, but argument registers and the out-of-line reference destructor still differed.

## Outcome

Deferred after five source-level attempts. The exact 220-byte frame, allocation, pair temporaries, and tree insert calls were recovered, but reference destruction and argument/register scheduling remained different.
