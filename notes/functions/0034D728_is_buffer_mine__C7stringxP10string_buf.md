# is_buffer_mine__C7stringxP10string_buf

- Address: `0x0034D728`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.8462 | 23.0769 | `candidate.cpp` |
| 2 | different | 46.1538 | 7.6923 | `candidate.cpp` |
| 3 | different | 30.7692 | 23.0769 | `candidate.cpp` |
| 4 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 5 | different | 53.8462 | 23.0769 | `candidate.cpp` |

### Attempt 1 notes

Used a direct conjunction of the lower/upper bounds. EE GCC collapsed the boolean logic into a 40-byte branchless/short-branch form rather than the target's two staged checks.

### Attempt 2 notes

Restored the released explicit if/else spelling. The optimizer still collapsed the range test to 40 bytes and changed more of the target control flow.

### Attempt 3 notes

Expressed the range as two ordered early-return guards. EE GCC again reduced the function to 40 bytes instead of preserving the target staged true/false assignments.

### Attempt 4 notes

Invalid attempt. It replaced the released C++ bounds checks with the target instructions.

### Attempt 5 notes

Used an explicit local result with staged lower- and upper-bound assignments. EE GCC still collapsed the function to the same 40-byte optimized range test.

## Outcome

Deferred after five attempts. No source-level reconstruction preserved the target staged boolean assignments, so the hand-written assembly match was removed.
