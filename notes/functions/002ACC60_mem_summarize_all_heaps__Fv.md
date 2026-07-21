# mem_summarize_all_heaps__Fv

- Address: `0x002ACC60`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.2857 | 57.1429 | `candidate.cpp` |
| 2 | different | 64.2857 | 57.1429 | `candidate.cpp` |
| 3 | different | 64.2857 | 57.1429 | `candidate.cpp` |
| 4 | different | 64.2857 | 57.1429 | `candidate.cpp` |
| 5 | different | 30.0 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released six-heap for loop. Every operation matched, but EE GCC omitted the target nop between the `slti` loop comparison and branch, producing 52 bytes.

### Attempt 2 notes

Rewrote the loop as a source-level do-while. The compiler emitted the same 52-byte sequence without the target comparison hazard nop.

### Attempt 3 notes

Materialized the continuation condition as a local boolean before breaking from an infinite loop. Optimization collapsed it to the same non-matching schedule.

### Attempt 4 notes

Used an explicit source-level while loop. EE GCC again produced the same 52-byte result.

### Attempt 5 notes

Changed the loop condition to inequality against six. This changed the control flow and grew the function to 60 bytes without matching the target.

## Outcome

Five source-level loop forms could not reproduce the target comparison-to-branch hazard nop with the available EE GCC.
