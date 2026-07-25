# _nslReleaseAllSources__Fv

- Address: `0x0038C3A8`
- Size: `0xB8` (184 bytes)
- Object: `nsl/nsl_ps2_source`
- Debug source: `C:/NSL/PS2/nsl_ps2_source.cpp`
- Reference source: `NSL/PS2/nsl_ps2_source.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.3478 | 19.5652 | `candidate.cpp` |
| 2 | different | 30.4348 | 21.7391 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released function matches exactly when the header's initialization check
is expanded at its macro call site.

## Outcome

Released NSL shutdown checks, emitter clearing, and source RPC loop reproduce the target exactly.
