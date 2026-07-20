# GetNumTrickLandings__C14ScoringManager

- Address: `0x00248720`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.4615 | 53.8462 | `candidate.cpp` |
| 2 | policy-invalid | 51.7857 | 41.6667 | `candidate.cpp` |
| 3 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 4 | different | 63.4615 | 30.7692 | `candidate.cpp` |
| 5 | different | 88.4615 | 53.8462 | `candidate.cpp` |

### Attempt 1 notes

Used the released 95-entry sum loop. All operations matched, but EE GCC performed the addition before the two loop nops and emitted a nop in the branch delay slot instead of the target addition there.

### Attempt 2 notes

Invalid attempt. It added instruction-emitting inline assembly that was absent from the released source.

### Attempt 3 notes

Invalid attempt. It replaced the released C++ loop with the target instructions and was not a decompilation.

### Attempt 4 notes

Used an explicit pointer and post-decrement do-while loop. It retained the target size but required an extra copy of the old counter value and changed the register allocation.

### Attempt 5 notes

Moved the accumulated addition into a source-level comma-expression loop condition. EE GCC still scheduled the addition before the branch instead of in its delay slot.

## Outcome

Deferred after five attempts. No source-level form reproduced the target load-latency and branch-delay schedule, so the hand-written assembly match was removed.
