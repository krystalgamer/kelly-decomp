# normalize__12input_devicei

- Address: `0x0035FF18`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `inputmgr.h`
- Reference source: `KS/SRC/inputmgr.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released keyboard normalization returns the raw value narrowed to `unsigned char`.

## Outcome

The released `input_device::normalize` narrowing matched exactly on the first attempt.
