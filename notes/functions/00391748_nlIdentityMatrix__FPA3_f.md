# nlIdentityMatrix__FPA3_f

- Address: `0x00391748`
- Size: `0x1C` (28 bytes)
- Object: `nsl/nl_ps2`
- Debug source: `C:/NSL/PS2/nl_ps2.cpp`
- Reference source: `NSL/PS2/nl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-platform-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-platform-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-platform-probes-3.cpp` |

## Outcome

All three direct forms tail-call `nslSceVu0UnitMatrix` in eight bytes. The target retains a 28-byte frame, so the wrapper was deferred.
