# MENUDRAW_SetAllWater__Fb

- Address: `0x0030EF58`
- Size: `0x34` (52 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6154 | 53.8462 | `candidate.cpp` |
| 2 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 3 | different | 84.6154 | 53.8462 | `candidate.cpp` |
| 4 | different | 36.5385 | 54.5455 | `candidate.cpp` |
| 5 | different | 84.6154 | 53.8462 | `candidate.cpp` |

### Attempt 1 notes

Used the released four-element loop with the recovered WaterFlags address. Every operation matched, but EE GCC moved the array-pointer increment before the two loop nops instead of retaining it in the branch delay slot.

### Attempt 2 notes

Invalid attempt. It replaced the released C++ loop with the target instructions and was not a decompilation.

### Attempt 3 notes

Used an explicit source-level flag pointer and comma-expression loop condition. EE GCC still advanced the pointer before the comparison.

### Attempt 4 notes

Used an explicit source-level backedge with `goto`. EE GCC changed the control-flow shape and emitted only 44 bytes.

### Attempt 5 notes

Used a post-incremented index in a while loop. It returned to the same 52-byte non-matching schedule as the released loop.

## Outcome

Deferred after five attempts. No source-level form reproduced the target pointer update in the branch delay slot, so the hand-written assembly match was removed.
