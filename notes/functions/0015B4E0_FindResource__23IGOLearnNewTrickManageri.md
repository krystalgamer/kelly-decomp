# FindResource__23IGOLearnNewTrickManageri

- Address: `0x0015B4E0`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Reference source: `KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.125 | 12.5 | `candidate.cpp` |
| 2 | different | 14.0625 | 0.0 | `candidate.cpp` |
| 3 | different | 73.2143 | 35.7143 | `candidate.cpp` |
| 4 | different | 71.4286 | 42.8571 | `candidate.cpp` |
| 5 | different | 71.4286 | 42.8571 | `candidate.cpp` |

### Attempt 1 notes

Direct released indexed loop with the recovered `IconResource` and manager
layouts. GCC retained indexed address calculation and emitted 64 bytes instead
of the target's pointer-induction loop.

### Attempt 2 notes

Changed only the loop to advance a local `IconResource *`. The loop body then
had the target shape, but register allocation added a count copy and an extra
nop, producing 64 bytes.

### Attempt 3 notes

Captured the resource count in a local and used explicit pointer induction.
This reached the target size and control flow, but allocated count/index/pointer
to `a3`/`a2`/`v1` instead of `a2`/`v1`/`a0`.

### Attempt 4 notes

Added a documented empty compiler barrier after capturing the loop bound to
keep its load distinct from later setup. The count moved to target register
`a2`, but pointer/index remained swapped and the pointer load stayed too early.

### Attempt 5 notes

Reordered the pointer and index local declarations around the same legal empty
barrier. The compiler produced the same nonmatching register allocation as
attempt 4. No source-authentic variant reproduced the remaining scheduling.

## Outcome

Five source-authentic loop variants could not reproduce the target register allocation and load schedule.
