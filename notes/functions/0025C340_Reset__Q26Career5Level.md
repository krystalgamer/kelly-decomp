# Reset__Q26Career5Level

- Address: `0x0025C340`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6154 | 54.5455 | `candidate.cpp` |
| 2 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 3 | different | 84.6154 | 54.5455 | `candidate.cpp` |
| 4 | different | 84.6154 | 54.5455 | `candidate.cpp` |
| 5 | different | 84.6154 | 54.5455 | `candidate.cpp` |

### Attempt 1 notes

Used the released field clears and five-goal loop. Every operation matched, but EE GCC moved the four-byte goal-pointer decrement before the target's three nops rather than keeping it in the backward branch delay slot.

### Attempt 2 notes

Invalid attempt. It replaced the released C++ loop with the target instructions and was not a decompilation.

### Attempt 3 notes

Used a source-level descending index loop. EE GCC emitted the same operations but still moved the goal-pointer decrement before the branch.

### Attempt 4 notes

Used an explicit descending goal pointer in the loop increment. The generated schedule remained identical to the non-matching released loop.

### Attempt 5 notes

Placed a byte-pointer decrement in the source-level loop condition. EE GCC again scheduled it before the branch rather than in the delay slot.

## Outcome

Deferred after five attempts. No source-level reconstruction reproduced the target delay-slot schedule, so the hand-written assembly match was removed.
