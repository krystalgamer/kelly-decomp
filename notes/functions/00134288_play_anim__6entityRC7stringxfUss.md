# play_anim__6entityRC7stringxfUss

- Address: `0x00134288`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.4167 | 58.3333 | `candidate.cpp` |
| 2 | different | 60.4167 | 58.3333 | `candidate.cpp` |
| 3 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 4 | different | 58.3333 | 50.0 | `candidate.cpp` |
| 5 | different | 27.0833 | 16.6667 | `candidate.cpp` |

### Attempt 1 notes

The released overload forwarding body emitted all target operations, but the
isolated compiler scheduled loop sign-extension and argument moves around the
stack frame differently. Best byte score for this faithful shape: 60.4167%.

### Attempt 2 notes

A symbol-preserving explicit ABI bridge emitted the same instruction schedule,
confirming the mismatch was not caused by C++ overload mangling.

### Attempt 3 notes

A leading non-emitting barrier moved the stack adjustment earlier and improved
the byte score to 66.6667%, but still placed the filename move after the RA
save instead of before the loop sign-extension/save interleave.

### Attempt 4 notes

Constraining a normalized flag local introduced a redundant second `andi` and
did not recover the target argument schedule.

### Attempt 5 notes

Constraining only the filename pointer shortened the function to 44 bytes and
lost additional target frame/setup instructions.

## Outcome

Five faithful forwarding shapes could not reproduce the target prologue and argument-normalization interleave; best byte score was 66.6667%.
