# SetReset__15duckdive_camera

- Address: `0x002351B0`
- Size: `0x24` (36 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size36-duck-reset-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size36-duck-reset-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size36-duck-reset-3.cpp` |

### Attempt 1 notes

The exact released body compiles as a 16-byte sibling call instead of the target retained frame.

### Attempt 2 notes

Explicit `this` access and bool construction emit the same sibling call.

### Attempt 3 notes

Accessing the canonical camera through a local pointer also emits the same sibling call.

## Outcome

The barrier-dependent wrapper was removed and the original target function was deferred.
