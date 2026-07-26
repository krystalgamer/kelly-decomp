# nslSetSpeakerMode__F19_nslSpeakerModeEnum

- Address: `0x00390B68`
- Size: `0xBC` (188 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released body emitted the wrong symbol length because the initial shared
enum omitted the original `_nslSpeakerModeEnum` tag.

### Attempt 2 notes

Restoring the released enum tag and source-faithful NSL system tail matched
all instructions and bytes.

## Outcome

Matched the released NSL speaker-mode update and GAS stereo RPC dispatch.
