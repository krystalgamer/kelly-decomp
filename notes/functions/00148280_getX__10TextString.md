# getX__10TextString

- Address: `0x00148280`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.3571 | 71.4286 | `candidate.cpp` |
| 2 | different | 85.7143 | 71.4286 | `candidate.cpp` |
| 3 | different | 85.7143 | 71.4286 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 19.6429 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

Used the released local x/y copies and unadjustCoords call, but declared the helper as a normal function. The emitted relocation targeted the wrong mangled symbol, and EE GCC loaded/stored y before x.

### Attempt 2 notes

Bound the helper to the released template symbol. Call bytes matched, but the four x/y load/store instructions remained reversed. Best score: 85.71%.

### Attempt 3 notes

Represented the two locals as a float array. EE GCC emitted the same instruction order as attempt 2.

### Attempt 4 notes

Added KELLY_DECOMP_COMPILER_BARRIER between x and y initialization, but accidentally placed the required annotation include after the function. The isolated candidate did not compile because the macro was undefined at use.

### Attempt 5 notes

Moved decomp_annotations.h before the function and retained the narrow barrier. This over-constrained local spilling, shortened the function to 52 bytes, and did not preserve the target call setup.

## Outcome

Five source-authentic local-layout and matching-barrier candidates could not reproduce the target x-before-y load/store schedule; best score was 85.7143%.
