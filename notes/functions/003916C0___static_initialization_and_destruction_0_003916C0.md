# __static_initialization_and_destruction_0

- Address: `0x003916C0`
- Size: `0x38` (56 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the generated static initialization guard and the released nslSystem constructor effects: firstInit true, on false, and initialized false at their recovered offsets.

## Outcome

The generated NSL static initializer matches exactly with the released nslSystem constructor state and guard.
