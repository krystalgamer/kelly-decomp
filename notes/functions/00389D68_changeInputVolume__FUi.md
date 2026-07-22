# changeInputVolume__FUi

- Address: `0x00389D68`
- Size: `0x48` (72 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 55.5556 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released pair of sceSdRemote calls and SDK constants produced the correct call setup, but GCC converted the second call into a sibling call.

### Attempt 2 notes

A normalized empty compiler barrier after the second call prevents the demonstrated sibling-call optimization and matches exactly.

## Outcome

The released MPEG input-volume calls match exactly with shared SDK declarations and a documented final-call barrier.
