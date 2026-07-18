# nslGetSpeakerMode__Fv

- Address: `0x00390C28`
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

The released accessor reaches the large-offset NSL speaker-mode field from the global state base.

## Outcome

The released `nslGetSpeakerMode` large-offset load matched exactly on the first attempt.
