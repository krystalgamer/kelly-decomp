# get_orientation__C2po

- Address: `0x00349148`
- Size: `0xD4` (212 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.6604 | 64.1509 | `candidate.cpp` |
| 2 | different | 93.3962 | 92.4528 | `candidate.cpp` |
| 3 | different | 93.3962 | 92.4528 | `candidate.cpp` |
| 4 | different | 93.3962 | 92.4528 | `candidate.cpp` |
| 5 | different | 93.3962 | 92.4528 | `candidate.cpp` |

### Attempt 1 notes

The exact released nested loops recovered target size and return copy, but used different row/column registers and scheduling.

### Attempt 2 notes

Count-down do loops recovered the target row/column register assignment. Only the prologue save and inner-loop destination increment scheduling differed, reaching 93.3962%.

### Attempt 3 notes

A loop barrier did not move the destination increment into the branch delay slot.

### Attempt 4 notes

Commoning the destination increment across continue/exit paths retained the same four-instruction mismatch.

### Attempt 5 notes

A zero-instruction end constraint retained the same 93.3962% prologue and loop-delay mismatch.

## Outcome

The exact released 3x3 orientation extraction recovered target size, row/column register assignment, and return copy. Five candidates could not reproduce the prologue save and inner-loop delay-slot schedule; best byte score was 93.3962%.
