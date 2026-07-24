# _nslSoundForEach__FPFP8nslSoundPv_iPv

- Address: `0x00390D20`
- Size: `0x88` (136 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.1176 | 2.9412 | `candidate.cpp` |
| 2 | different | 40.7143 | 20.0 | `candidate.cpp` |
| 3 | different | 99.2647 | 97.0588 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released NSL sound iteration matched after separating the callback slot alias from the used-flag pointer derived from the NSL system base.

## Outcome

The released NSL sound iteration matched exactly on the fourth attempt.
