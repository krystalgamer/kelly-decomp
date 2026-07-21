# getY__10TextString

- Address: `0x001482B8`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.7143 | 71.4286 | `candidate.cpp` |
| 2 | different | 85.7143 | 71.4286 | `candidate.cpp` |
| 3 | different | 16.6667 | 0.0 | `candidate.cpp` |
| 4 | different | 21.4286 | 7.1429 | `candidate.cpp` |
| 5 | different | 25.0 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

Used the released local x/y copies and correctly aliased unadjustCoords template call. EE GCC loaded/stored y before x, leaving four instructions reversed. Best score: 85.71%.

### Attempt 2 notes

Separated declaration from assignment for both locals. The emitted sequence was identical to attempt 1.

### Attempt 3 notes

Grouped x/y into an initialized local struct. EE GCC generated aggregate initialization/copy machinery and grew the function to 96 bytes.

### Attempt 4 notes

Placed KELLY_DECOMP_COMPILER_BARRIER between x and y initialization. This over-constrained spilling, shortened the function to 52 bytes, and did not preserve the target setup.

### Attempt 5 notes

Moved KELLY_DECOMP_COMPILER_BARRIER after both local initializations. The compiler again emitted 52 bytes and did not recover the target load/store ordering.

## Outcome

Five source-authentic local-layout and KELLY barrier candidates could not reproduce the target x-before-y load/store schedule; best score was 85.7143%.
