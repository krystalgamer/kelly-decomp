# MENUDRAW_SetAll__Fb

- Address: `0x0030F348`
- Size: `0x34` (52 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 82.6923 | 53.8462 | `candidate.cpp` |
| 3 | different | 82.6923 | 53.8462 | `candidate.cpp` |
| 4 | different | 82.6923 | 53.8462 | `candidate.cpp` |
| 5 | different | 82.6923 | 53.8462 | `candidate.cpp` |

### Attempt 1 notes

Invalid attempt. It used hand-written target assembly without first testing the released C++ loop.

### Attempt 2 notes

Used the released unsigned indexed loop. EE GCC emitted the same operations but moved the array-pointer increment before the comparison.

### Attempt 3 notes

Used an explicit flag pointer and comma-expression loop condition. The generated instruction schedule was unchanged.

### Attempt 4 notes

Used an indexed do-while loop. EE GCC again emitted the same non-matching pointer-update schedule.

### Attempt 5 notes

Used a post-incremented index in a while loop. The compiler produced the same 52-byte non-matching result.

## Outcome

Deferred after five attempts. No source-level form reproduced the target pointer update in the branch delay slot, so the hand-written assembly match was removed.
