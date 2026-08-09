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

The released setter uses the shared 256-byte mesh-path buffer, performs the
bounded copy, and force-terminates the final byte.

## Outcome

The local path declaration was removed.
