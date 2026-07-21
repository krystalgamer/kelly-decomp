# despawn__11beach_event

- Address: `0x001FB2C0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 2 | different | 40.2778 | 16.6667 | `candidate.cpp` |
| 3 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 4 | different | 90.0 | 73.3333 | `candidate.cpp` |
| 5 | different | 93.3333 | 86.6667 | `candidate.cpp` |

### Attempt 1 notes

The released callback, data reset, and spawned clear produced the exact body and size. EE GCC saved s0 before ra, while the target saves ra before s0.

### Attempt 2 notes

Bound the object explicitly to s0 and accessed all fields through it. This overconstrained allocation and expanded the function to 72 bytes, so it did not recover the prologue ordering.

### Attempt 3 notes

Materialized the callback in a local before invoking it. Optimization returned to the exact body but retained the same s0-before-ra prologue save order.

### Attempt 4 notes

Reordered the two equivalent post-callback resets in source. The compiler preserved that order instead of the target schedule and still retained the prologue mismatch.

### Attempt 5 notes

Materialized the callback-data address and cleared through it after the call. Optimization again reproduced the exact body but not the target ra-before-s0 prologue; five source-only candidates were exhausted.

## Outcome

The released beach-event callback and state resets were reconstructed exactly, but five source-only forms could not reproduce the target ra-before-s0 prologue save order.
