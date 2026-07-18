# nslPreInitProviewModePS2__Fb

- Address: `0x00390B30`
- Size: `0x18` (24 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released pre-init setter reaches a large-offset NSL ProView field from the global state base.

## Outcome

The released `nslPreInitProviewModePS2` large-offset store matched exactly on the first attempt.
