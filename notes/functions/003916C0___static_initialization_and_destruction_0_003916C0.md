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

The generated static initialization guard uses the shared `nslSystem` fields
for `firstInit`, `on`, and `initialized`.

## Outcome

The local static-initialization layout was removed.
