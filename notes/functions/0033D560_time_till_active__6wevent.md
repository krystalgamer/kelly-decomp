# time_till_active__6wevent

- Address: `0x0033D560`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.5455 | 36.3636 | `candidate.cpp` |
| 2 | different | 29.5455 | 0.0 | `candidate.cpp` |
| 3 | different | 34.0909 | 9.0909 | `candidate.cpp` |
| 4 | different | 34.0909 | 9.0909 | `candidate.cpp` |
| 5 | different | 29.5455 | 9.0909 | `candidate.cpp` |

### Attempt 1 notes

The released `elapsed >= wait_time` branch preserved target load order, but the
isolated compiler reversed the branch layout and omitted the target
compare-to-branch FPU hazard nop. Best byte score: 54.5455%.

### Attempt 2 notes

Reversing the source condition changed the comparison opcode and operand-load
order, moving farther from the released function.

### Attempt 3 notes

An explicit inactive label recovered the target true-branch direction, but EE
GCC loaded `elapsed` before `wait_time` and still omitted the FPU hazard nop.

### Attempt 4 notes

Explicit local copies did not change old GCC's comparison operand evaluation;
the reversed load order and missing compare-to-branch nop remained.

### Attempt 5 notes

The ternary spelling collapsed to 36 bytes and reproduced neither the target
branch layout nor its FPU hazard nop.

## Outcome

Five source forms could not reproduce the target comparison load order, true-branch layout, and compare-to-branch FPU hazard nop; best byte score was 54.5455%.
