# nglSetMeshPath__FPCc

- Address: `0x00395DA8`
- Size: `0x38` (56 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter copies at most 256 bytes into the global mesh path and force-terminates the final byte. The original expression and recovered buffer address match exactly.

## Outcome

The original bounded NGL mesh-path copy and forced terminator match exactly.
