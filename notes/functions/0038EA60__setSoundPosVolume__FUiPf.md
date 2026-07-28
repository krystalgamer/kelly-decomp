# _setSoundPosVolume__FUiPf

- Address: `0x0038EA60`
- Size: `0x190` (400 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.8932 | 13.5922 | `candidate.cpp` |

### Attempt 1 notes

The exact released `_setSoundPosVolume` source and minimal faithful declarations compiled to 412 bytes on attempt one versus the 400-byte target. The isolated comparison was different at 36.8932% (13.5922% instructions); no source variants or diff investigation were performed.

## Outcome

The exact released sound position-volume helper differed at 36.8932% byte score; no source variant was attempted.
