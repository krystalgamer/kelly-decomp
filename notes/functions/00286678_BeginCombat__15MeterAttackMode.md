# BeginCombat__15MeterAttackMode

- Address: `0x00286678`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `candidate.cpp` |
| 2 | different | 50.0 | 27.2727 | `candidate.cpp` |
| 3 | different | 50.0 | 27.2727 | `candidate.cpp` |

### Attempt 2 notes

The released indexed loop reaches the target size but emits a normal branch
instead of the shipped branch-likely software pipeline.

### Attempt 3 notes

A pointer loop retains the same scheduling mismatch.

## Outcome

The prior match used hand-written assembly. It was removed and the generated
loop was deferred.
