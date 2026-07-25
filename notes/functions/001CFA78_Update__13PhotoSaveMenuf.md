# Update__13PhotoSaveMenuf

- Address: `0x001CFA78`
- Size: `0xB4` (180 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 11.1111 | `candidate.cpp` |
| 2 | different | 73.3333 | 60.0 | `candidate.cpp` |
| 3 | different | 68.8889 | 55.5556 | `candidate.cpp` |
| 4 | different | 73.3333 | 60.0 | `candidate.cpp` |
| 5 | different | 73.3333 | 60.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used shared source-faithful PhotoSaveMenu and PhotoWidget declarations, but the reduced FEGraphicalMenu context emitted its Update call out of line instead of expanding the two released base calls.

### Attempt 2 notes

Expanding the released FrontEnd and FEMenu updates reproduced every instruction except the original floating-point hazard nop after materializing zero.

### Attempt 3 notes

Binding the zero value to the target floating-point register moved its materialization ahead of the timer load and did not restore the nop.

### Attempt 4 notes

An empty source-level scheduling boundary around a local timer retained the nop-free sequence.

### Attempt 5 notes

Binding both timer and zero registers still omitted the target hazard nop. Instruction-emitting assembly was not used because the released source contains none.

## Outcome

Deferred photo-save menu updating after five source-level attempts; the released shared context reproduced all logic but not one compiler-inserted floating-point hazard nop.
