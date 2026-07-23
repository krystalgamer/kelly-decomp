# InStallRegion__22kellyslater_controller

- Address: `0x002130D0`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2273 | 13.6364 | `candidate.cpp` |
| 2 | different | 15.9091 | 0.0 | `candidate.cpp` |
| 3 | different | 54.3478 | 34.7826 | `candidate.cpp` |
| 4 | different | 15.9091 | 0.0 | `candidate.cpp` |
| 5 | different | 38.0435 | 17.3913 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the target-observed stall-state predicate from the exact controller state offset, state values 10/4/9, and Z_Within_Tube helper. Direct boolean returns optimized to a shorter 68-byte function.

### Attempt 2 notes

Made a shared result and target-like labels explicit. The compiler still collapsed the result flow to 72 bytes.

### Attempt 3 notes

Constrained the result to s0 at the final return. This added an extra instruction and changed branch layout.

### Attempt 4 notes

Used a normal result plus a non-emitting continuation boundary. The optimizer retained the short form.

### Attempt 5 notes

Constrained s0 before the conditional flow instead of at return. The compiler grew to 92 bytes and did not reproduce the target layout.

## Outcome

InStallRegion remained blocked by equivalent boolean branch/result layout after five source-level attempts.
